// from server: 79% by king_originala
struct LocalTime {
    unsigned short year, month, dayOfWeek, day;
    unsigned short hour, minute, second, milliseconds;
};

extern void (__stdcall *GetLocalTime)(LocalTime *) throw();
extern int (__cdecl *sprintf)(char *, const char *, ...);

struct S;
extern void (__thiscall *constructString)(S *);
extern void (__thiscall *destroyString)(S *);
extern S &(__thiscall *appendString)(S *, const S &);

struct S {
    unsigned char storage[4];

    S();
    ~S();
    S &operator+=(const S &);
};

inline S::S() {
    constructString(this);
}

inline S::~S() {
    destroyString(this);
}

inline S &S::operator+=(const S &other) {
    return appendString(this, other);
}

extern S __cdecl operator+(const S &, const char *);

S __cdecl f(bool includeDate) {
    LocalTime time;
    char buffer[256];

    GetLocalTime(&time);
    S result;

    if (includeDate) {
        sprintf(buffer, "%02u.%02u.%u",
                (unsigned int)time.day,
                (unsigned int)time.month,
                (unsigned int)time.year);
        result += result + buffer;
    }

    sprintf(buffer, "%02u_%02u_%03u",
            (unsigned int)time.hour,
            (unsigned int)time.minute,
            (unsigned int)time.milliseconds);
    result += result + buffer;

    return result;
}
