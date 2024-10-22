// lecture 7 slide 50
#pragma once
#include <iostream>

namespace university{
    using ushort = unsigned short; // alias - useful
// will need documentation for class,methods,etc (usually for only public methods)
class Date{
    public: // symbol in slide 50 chart is +
    Date(){ // Constructor
        day_ = 15;
        month_ = 2;
        year_ = 2025;
    } 
    Date(ushort day, ushort month, ushort year){ // Regular parameterized constructor
        if (!is_valid_date(day,month,year)){
            std::cout << "The arguments passed aren't valid." << '\n';
            return; // exit
        }
        day_ = day;
        month_ = month;
        year_ = year;
    }
    // Date(ushort day, ushort month, ushort year) : day_{day}, month_{month}, year_{year}{} // member initializer list - more efficient than regular
    
    // these two are methods
    // Date(ushort day, ushort month, ushort year);
    void print_date() const;
    void get_attribute_offsets() const;

    // Accessors
    ushort get_day() const {return day_;}
    ushort get_month() const {return month_;}
    ushort get_year() const {return year_;}

    // Mutators
    void set_day(ushort day){day_ = day; }

    private: // symbol is -
    // these 3 are attributes
    ushort day_;
    ushort month_;
    ushort year_=2024; //initializing to this value instead of garbage

    // these are also methods
    bool is_valid_date(ushort day, ushort month, ushort year) const;
    ushort get_days_in_month(ushort month, ushort year) const;
    static bool is_leap_year(ushort year);

    // symbol for static is with __
}; // class Date
} // namespace university