#include <iostream>
#include <cmath>
#include "doctest.h"
using namespace std;

#include "sources/Character.hpp"
#include "sources/Cowboy.hpp"
#include "sources/Ninja.hpp"
#include "sources/OldNinja.hpp"
#include "sources/TrainedNinja.hpp"
#include "sources/TrainedNinja.hpp"
#include "sources/Point.hpp"
#include "sources/SmartTeam.hpp"
#include "sources/Team.hpp"
#include "sources/Team2.hpp"
using namespace ariel;

TEST_CASE("Testing the `Point` Class (all methods and logic)")
{
    Point p1{};
    Point p2(1,0);
    Point p3(0,1);

    CHECK_EQ(p1.distance(p2), p1.distance(p3));
    CHECK_EQ(p1.distance(p2), p1.distance(p3));
    CHECK_EQ(p1.distance(p2), 1);
    CHECK_EQ(p1.distance(p3), 1);
    CHECK_EQ(p2.distance(p3), sqrt(2));

    CHECK_EQ(p1.getX(), 0);
    CHECK_EQ(p2.getX(), 1);
    CHECK_EQ(p3.getX(), 0);

    CHECK_EQ(p1.getY(), 0);
    CHECK_EQ(p2.getY(), 0);
    CHECK_EQ(p3.getY(), 1);
}

TEST_CASE("Testing `Character` Class (As base class)")
{
    Character ch{};
    Character ch1("Lior", Point(1, 1));

    CHECK(ch.isAlive());
    CHECK(ch1.isAlive());

    CHECK_EQ(ch.distance(&ch1), ch.getLocation().distance(ch1.getLocation()));
    CHECK_EQ(ch1.distance(&ch), ch1.getLocation().distance(ch.getLocation()));

    ch.hit(110);
    CHECK_FALSE(ch.isAlive());

    ch1.hit(30);
    CHECK(ch1.isAlive());

    CHECK_EQ(ch.getName(), "player");
    CHECK_EQ(ch1.getName(), "Lior");

    CHECK_EQ(ch.print(), "Name: player, HP: -10, Location: (" + to_string((double)0)+ "," + to_string((double)0) + ")");
    CHECK_EQ(ch1.print(), "Name: Lior, HP: 70, Location: (" + to_string((double)1)+ "," + to_string((double)1) + ")");
}


TEST_CASE("Checks for classes `YounNinja`, `TrainedNinja` and `OldNinja`")
{
    YoungNinja yn("Lior1" , Point(1, 1));
    TrainedNinja tn("Lior2" , Point(2, 2));
    OldNinja on("Lior3" , Point(3, 3));

    CHECK(yn.isAlive());
    CHECK(yn.distance(&tn) == sqrt(2));
    CHECK(yn.getLocation().distance(tn.getLocation()) == sqrt(2));
    yn.hit(101);
    CHECK_FALSE(yn.isAlive());

    CHECK(tn.isAlive());
    CHECK(tn.distance(&on) == sqrt(2));
    CHECK(tn.getLocation().distance(on.getLocation()) == sqrt(2));
    tn.hit(101);
    CHECK_FALSE(tn.isAlive());

    CHECK(on.isAlive());
    CHECK(on.distance(&yn) == 2 * sqrt(2));
    CHECK(on.getLocation().distance(yn.getLocation()) == 2 * sqrt(2));
    on.hit(101);
    CHECK_FALSE(on.isAlive());
}

TEST_CASE("Checking the `Cowboy` Class - all methods and logic")
{
    Cowboy c("Lior", Point(1, 1));
    CHECK(c.isAlive());
    CHECK(c.getLocation().distance(Point{}) == sqrt(2));
    CHECK(c.hasboolets());
    CHECK((c.getName() == "Lior"));
}

TEST_CASE("Checks for `Team` & `Team2` Classes (cowboys vs ninjas)")
{
    // team of cowboys
    Cowboy c1("Lior" , Point(1,1));
    Cowboy c2("Lior2" , Point(2,2));

    // team of ninjas
    YoungNinja n1("Lior3", Point(3,3));
    YoungNinja n2("Lior4", Point(4,4));

    // creating first team
    Team t1(&c1); // leader
    CHECK_EQ(t1.stillAlive(), 1);
    t1.add(&c2);
    CHECK_EQ(t1.stillAlive(), 2);

    Team2 t2(&n1);
    CHECK_EQ(t2.stillAlive(), 1);
    t2.add(&n2);
    CHECK_EQ(t2.stillAlive(), 2);
}

TEST_CASE("Checks for attacking two teams")
{
    // initialization if cowboys and ninjas
    Cowboy c1("Lior", Point(1, 1));
    Cowboy c2("Lior2", Point(2, 2));

    YoungNinja n1("Lior3", Point(3, 3));
    YoungNinja n2("Lior4", Point(4, 4));
    YoungNinja n3("Lior5", Point(5, 5));

    // creating a first team
    Team t1(&c1);
    t1.add(&n1);
    t1.add(&n2);
    t1.add(&n3);
    t1.add(&c2);

    CHECK_EQ(t1.stillAlive(), 5);

    // creating players for second team
    YoungNinja yn1("Lior6", Point(6, 6));
    YoungNinja yn2("Lior7", Point(7, 7));
    TrainedNinja tn("Lior8", Point(8, 8));
    OldNinja on("Lior9", Point(9, 9));

    Cowboy c3("Lior10", Point(10, 10));
    Cowboy c4("Lior11", Point(11, 11));
    Cowboy c5("Lior12", Point(12, 12));

    // creating second team
    Team t2(&yn1);
    t2.add(&tn);
    t2.add(&on);
    t2.add(&yn2);
    t2.add(&c3);
    t2.add(&c4);
    t2.add(&c5);

    CHECK_EQ(t2.stillAlive(), 7);

    // attacking both teams
    t1.attack(&t2);
    t2.attack(&t1);

    // attacks results
    CHECK(!yn1.isAlive());
    CHECK(!yn2.isAlive());
    CHECK(!tn.isAlive());
    CHECK(!on.isAlive());
}