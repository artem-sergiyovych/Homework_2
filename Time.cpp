#include <iostream>
#include <sstream>
#include <iomanip>
#include "Time.hpp"    ///Always put class input afrer all additional libraries

    // Constructors
    Time::Time() : seconds(0) {}
    Time::Time(int s) : seconds(s) {}

    // Getters
    int Time::getSeconds() const {
    return seconds;
}
    // Setters
    void Time::setSeconds(int s) {
    seconds = s;
}

    // Operator overloading
    Time Time::operator+(const Time& other) const {
        return Time(seconds + other.seconds);
    }

    Time Time::operator-(const Time& other) const {
        return Time(seconds - other.seconds);
    }

    Time Time::operator*(int scalar) const {
        return Time(seconds * scalar);
    }

    Time::operator int() const {
        return seconds;
    }

std::istream& operator>>(std::istream& is, Time& t) {
    std::string input;
    is >> input;

    int h = 0, m = 0, s = 0;
    std::istringstream iss(input);
    char delimiter;
    iss >> h >> delimiter >> m >> delimiter >> s;

    t.setSeconds(h * 3600 + m * 60 + s);
    return is;
}
    std::ostream& operator<<(std::ostream& os, const Time& t) {
        int hours = t.seconds / 3600;
        int minutes = (t.seconds % 3600) / 60;
        int seconds = t.seconds % 60;
        os << std::setfill('0')
           << std::setw(2) << hours << "h:"
           << std::setw(2) << minutes << "m:"
           << std::setw(2) << seconds << "s";
        return os;
    }




