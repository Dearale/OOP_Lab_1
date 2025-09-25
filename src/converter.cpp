#include "../include/converter.h"

std::string convert(int hours, int minutes, std::string period) {
    if (period == "pm") {
        if (hours == 12)
            hours = 0;
        else if (hours != 12)
            hours += 12;
    }

    return (hours < 10 ? "0" : "") + std::to_string(hours) +
            (minutes < 10 ? "0" : "") + std::to_string(minutes);
}