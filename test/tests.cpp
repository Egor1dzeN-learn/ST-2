// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include <cmath>
#include "circle.h"
#include "tasks.h"

TEST(CircleTest, Constructor1) {
  Circle c(1);
  EXPECT_FLOAT_EQ(c.getRadius(), 1.0);
}
TEST(CircleTest, Constructor2) {
  Circle c(10);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 10.0);
}
TEST(CircleTest, Constructor3) {
  Circle c(11);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 121);
}
TEST(CircleTest, Constructor4) {
  Circle c(20);
  EXPECT_FLOAT_EQ(c.getRadius(), 20);
}
TEST(CircleTest, Constructor5) {
  Circle c(10);
  EXPECT_FLOAT_EQ(c.getRadius(), 10);
}
TEST(CircleTest, Constructor6) {
  Circle c(1000);
  EXPECT_FLOAT_EQ(c.getRadius(), 1000);
}
TEST(CircleTest, SetRadius1) {
  Circle c(5);
  c.setRadius(10212);
  EXPECT_FLOAT_EQ(c.getRadius(), 10212);
}
TEST(CircleTest, SetRadius2) {
  Circle c(5);
  c.setRadius(100);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 100);
}
TEST(CircleTest, SetRadius3) {
  Circle c(5);
  c.setRadius(100);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 10000);
}
TEST(CircleTest, SetRadius4) {
  Circle c(0);
  c.setRadius(10);
  EXPECT_FLOAT_EQ(c.getRadius(), 10);
}
TEST(CircleTest, SetRadius5) {
  Circle c(100);
  c.setRadius(200);
  EXPECT_FLOAT_EQ(c.getRadius(), 200);
}
TEST(CircleTest, SetRadius6) {
  Circle c(5);
  c.setRadius(1000);
  EXPECT_FLOAT_EQ(c.getRadius(), 1000);
}
TEST(CircleTest, SetFerence1) {
  Circle c(2);
  c.setFerence(2 * M_PI * 151);
  EXPECT_FLOAT_EQ(c.getRadius(), 151);
}
TEST(CircleTest, SetFerence2) {
  Circle c(1);
  c.setFerence(2 * M_PI * 2);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 2);
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
  Circle c(1);
  c.setArea(M_PI * 36);
  EXPECT_NEAR(c.getRadius(), 6, 1e-6);
}
TEST(CircleTest, SetArea2) {
  Circle c(5);
  c.setArea(M_PI * 40000);
  EXPECT_FLOAT_EQ(c.getFerence(), 2 * M_PI * 200);
}
TEST(CircleTest, SetArea3) {
  Circle c(5);
  c.setArea(M_PI * 400);
  EXPECT_FLOAT_EQ(c.getArea(), M_PI * 400);
}
TEST(EarthRopeTest, CalculateGap) {
  double gap = taskEarthAndRope();
  EXPECT_FLOAT_EQ(gap, 0.15915494);
}
TEST(PoolTest, CalculatePoolCost) {
  double cost = taskPool();
  EXPECT_FLOAT_EQ(cost, M_PI * (16 - 9) * 1000
    + 2 * M_PI * 4 * 2000);
}


