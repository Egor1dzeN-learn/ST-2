// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"
#include <cmath>

TEST(CircleTest, Initialization1) {
  Circle c(5);
  EXPECT_FLOAT_EQ(c.getRadius(), 5.0);
}
TEST(CircleTest, Initialization2) {
  Circle c(5);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 5.0);
}
TEST(CircleTest, Initialization3) {
  Circle c(5);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 25);
}
TEST(CircleTest, Initialization4) {
  Circle c(6);
  EXPECT_FLOAT_EQ(c.getRadius(), 6);
}
TEST(CircleTest, Initialization5) {
  Circle c(10);
  EXPECT_FLOAT_EQ(c.getRadius(), 10);
}
TEST(CircleTest, Initialization6) {
  Circle c(100);
  EXPECT_FLOAT_EQ(c.getRadius(), 100);
}
TEST(CircleTest, SetRadius1) {
  Circle c(5);
  c.setRadius(10);
  EXPECT_FLOAT_EQ(c.getRadius(), 10);
}
TEST(CircleTest, SetRadius2) {
  Circle c(5);
  c.setRadius(10);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 10);
}
TEST(CircleTest, SetRadius3) {
  Circle c(5);
  c.setRadius(10);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 100);
}
TEST(CircleTest, SetRadius4) {
  Circle c(5);
  c.setRadius(100);
  EXPECT_NEAR(c.getRadius(), 100, 1e-6);
}
TEST(CircleTest, SetRadius5) {
  Circle c(5);
  c.setRadius(200);
  EXPECT_FLOAT_EQ(c.getRadius(), 200);
}
TEST(CircleTest, SetRadius6) {
  Circle c(5);
  c.setRadius(1000);
  EXPECT_FLOAT_EQ(c.getRadius(), 1000);
}
TEST(CircleTest, SetFerence1) {
  Circle c(5);
  c.setFerence(2 * M_PI * 15);
  EXPECT_FLOAT_EQ(c.getRadius(), 15);
}
TEST(CircleTest, SetFerence2) {
  Circle c(5);
  c.setFerence(2 * M_PI * 15);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 15);
}
TEST(CircleTest, SetFerence3) {
  Circle c(5);
  c.setFerence(2 * M_PI * 15);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 225);
}
TEST(CircleTest, SetFerence4) {
  Circle c(5);
  c.setFerence(2 * M_PI * 40);
  EXPECT_FLOAT_EQ(c.getRadius(), 40);
}
TEST(CircleTest, SetArea1) {
  Circle c(5);
  c.setArea(M_PI * 400);
  EXPECT_NEAR(c.getRadius(), 20, 1e-6);
}
TEST(CircleTest, SetArea2) {
  Circle c(5);
  c.setArea(M_PI * 400);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 20);
}
TEST(CircleTest, SetArea3) {
  Circle c(5);
  c.setArea(M_PI * 400);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 400);
}
TEST(EarthRopeTest, CalculateGap) {
  double gap = taskEarthAndRope();
  EXPECT_FLOAT_EQ(gap, 0.159);
}
TEST(PoolTest, CalculatePoolCost) {
  double cost = taskPool();
  double expectedCost = (M_PI * (16 - 9) * 1000 + 2 * M_PI * 4 * 2000);
  EXPECT_FLOAT_EQ(cost, expectedCost);
}


