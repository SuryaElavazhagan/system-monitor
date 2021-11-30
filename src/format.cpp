#include <string>

#include "format.h"

using std::string;

// TODO: Complete this helper function
// INPUT: Long int measuring seconds
// OUTPUT: HH:MM:SS
// REMOVE: [[maybe_unused]] once you define the function
string Format::ElapsedTime(long seconds) {
    long hours = seconds / (60 * 60);
    long minutes = (seconds / 60) % 60;
    long secs = seconds % 60;
    
    string str_hours = hours < 10 ? ('0' + std::to_string(hours)) : std::to_string(hours);
    string str_minutes = minutes < 10 ? ('0' + std::to_string(minutes)) : std::to_string(minutes);
    string str_secs = secs < 10 ? ('0' + std::to_string(secs)) : std::to_string(secs);


    return str_hours + ":" + str_minutes + ":" + str_secs;
}