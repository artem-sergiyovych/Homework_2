#pragma once

class Time {
private:
    int seconds;

public:
    // Constructors
    Time();
    Time(int s);
    // Setters
    void setSeconds(int s);
    // Getters
    int getSeconds() const;
    // Operator overloading
    Time operator+(const Time& other)const;

    Time operator-(const Time& other)const;

    Time operator*(int scalar)const;

    operator int() const;


    friend std::istream& operator>>(std::istream& is, Time& t);
    friend std::ostream& operator<<(std::ostream& os, const Time& t);
};
