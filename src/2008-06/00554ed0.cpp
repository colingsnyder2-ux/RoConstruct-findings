// from server: 83% by king_originala
extern double __cdecl clockNow();

struct Time {
    __int64 ticks;
    int kind;
};

extern void __cdecl getTime(Time*, int);

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* const mutex;
    bool locked;

    Guard(Mutex&);
    ~Guard();
};

inline Guard::Guard(Mutex& m) : mutex(&m) {
    mutex->lock();
    locked = true;
}

inline Guard::~Guard() {
    mutex->unlock();
}

struct Condition {
    bool wait(Guard*, const Time*);
};

struct S {
    char pad0[0x1d0];
    double elapsed;
    char pad1[0x240 - 0x1d8];
    Mutex mutex;
    char pad2[0x24c - 0x248];
    Condition condition;
    char pad3[0x2a8 - 0x24d];
    int enabled;

    bool f();
};

bool S::f() {
    double start = clockNow();
    Time deadline;
    getTime(&deadline, 1);
    ++deadline.ticks;
    Guard guard(mutex);
    bool result = !enabled || condition.wait(&guard, &deadline);
    elapsed = clockNow() - start;
    return result;
}
