// from server: 95% by king_originala
__declspec(noreturn) void __cdecl day_error(unsigned short, unsigned short, int);
__declspec(noreturn) void __cdecl month_error(unsigned short, unsigned short, int);
__declspec(noreturn) void __cdecl year_error(unsigned short, unsigned short, int);

struct Day {
    unsigned short value;
    Day(unsigned short);
    Day(const Day&);
};

struct Month {
    unsigned short value;
    Month(unsigned short);
    Month(const Month&);
};

struct Year {
    unsigned short value;
    Year(unsigned short);
    Year(const Year&);
};

inline Day::Day(unsigned short v)
{
    if (int(v) + 1 < 2)
        day_error(value, v, 0);
    if (v > 31)
        day_error(value, v, 1);
    value = v;
}

inline Day::Day(const Day& v) : value(v.value) {}

inline Month::Month(unsigned short v)
{
    if (int(v) + 1 < 2)
        month_error(value, v, 0);
    if (v > 12)
        month_error(value, v, 1);
    value = v;
}

inline Month::Month(const Month& v) : value(v.value) {}

inline Year::Year(unsigned short v)
{
    if (int(v) + 1 < 1401)
        year_error(value, v, 0);
    if (v > 10000)
        year_error(value, v, 1);
    value = v;
}

inline Year::Year(const Year& v) : value(v.value) {}

struct Date {
    unsigned long value;
    Date(Year, Month, Day);
    Date(const Date&);
};

inline Date::Date(const Date& v) : value(v.value) {}

struct Duration {
    __int64 value;
    explicit Duration(__int64);
};

inline Duration::Duration(__int64 v) : value(v) {}

struct Time {
    __int64 value;
    Time(const Date&, const Duration&);
};

struct Input {
    int second;
    int minute;
    int hour;
    int day;
    int month;
    int year;
};

__int64 __cdecl make_duration(int, int, int, int, int);

Time __cdecl convert_time(const Input& input)
{
    Date date(
        Year(static_cast<unsigned short>(input.year + 1900)),
        Month(static_cast<unsigned short>(input.month + 1)),
        Day(static_cast<unsigned short>(input.day))
    );
    return Time(Date(date), Duration(make_duration(
        input.hour, input.minute, input.second, 0, 0)));
}
