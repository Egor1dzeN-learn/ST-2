// Copyright 2022 UNN-CS
#include <cstdint>
#include <cmath>
#include <cstdio>
#include <stdexcept>
#include "circle.h"

Circle::Circle(double radius) { this->setRadius(radius); }

double Circle::getRadius() { return this->radius; }
double Circle::getFerence() { return this->ference; }
double Circle::getArea() { return this->area; }

void Circle::setRadius(double radius) {
    if (radius < 0) {
        throw std::invalid_argument("Radius is less than zero");
    }
    this->radius = radius;
    this->ference = 2 * M_PI * radius;
    this->area = M_PI * radius * radius;
}
void Circle::setFerence(double ference) {
    this->setRadius(ference / (2 * M_PI));
    this->ference = ference;
}
void Circle::setArea(double area) {
    if (area < 0) {
        throw std::invalid_argument("Area is less than zero");
    }
    this->setRadius(std::sqrt(area / M_PI));
    this->area = area;
}

