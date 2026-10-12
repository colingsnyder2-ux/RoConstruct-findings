// from server: 67% by king_originala
typedef __int64 TimeValue;

struct Time {
    TimeValue value;

    Time();
    Time(const Time &);
};

inline Time::Time() {}
inline Time::Time(const Time &other) : value(other.value) {}

extern "C" {
    extern long (__stdcall *InterlockedExchange)(volatile long *, long);
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
    extern TimeValue (__cdecl *_time64)(TimeValue *);
    extern void *(__cdecl *_localtime64)(const TimeValue *);
}

extern volatile long sharedCounter;
extern double __cdecl currentTime();
extern void __cdecl convertTime(Time *, const void *);
extern Time *__cdecl addTime(Time *, const Time *, Time);
extern void __cdecl updateState(void *, int, int);

struct Owner {
    void refresh();
};

struct Callback {
    void invoke(int, int);
};

#pragma pack(push, 4)
struct S {
    unsigned char padding0[4];
    void *state;
    unsigned char padding1[0x44];
    Time nextUpdate;
    unsigned char padding2[0x20];
    Callback *callback;
    unsigned char padding3[0x0c];
    double interval;
    double deadline;
    volatile long counter;

    void run(int, int, int);
};
#pragma pack(pop)

void S::run(int unused, int first, int second)
{
    if (interval > 0.0)
        deadline = currentTime() + interval;

    if (InterlockedExchange(&counter, 0) == 1)
        InterlockedDecrement(&sharedCounter);

    Time now;
    TimeValue raw;
    Time result;

    TimeValue (__cdecl *getTime)(TimeValue *) = _time64;
    getTime(&raw);
    convertTime(&now, _localtime64(&raw));

    if (now.value >= nextUpdate.value) {
        reinterpret_cast<Owner *>(reinterpret_cast<char *>(this) - 0x134)->refresh();
        Time delay;
        delay.value = 1000000;
        getTime(&raw);
        convertTime(&now, _localtime64(&raw));
        nextUpdate = *addTime(&result, &now, delay);
    }

    if (callback)
        callback->invoke(first, second);

    if (state)
        updateState(state, 5, 1);
}
