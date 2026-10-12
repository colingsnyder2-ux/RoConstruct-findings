// from server: 84% by king_originala
struct Time {
    unsigned int seconds[2];
    int nanoseconds;
};

extern int __cdecl getTime(Time*, int);
extern const double nanosecondsPerSecond;

inline const double& maximum(const double& a, const double& b)
{
    return a < b ? b : a;
}

struct Mutex {
    void* handle;
    char kind;
    void lock();
    void unlock();
};

struct Lock {
    Mutex& mutex;
    bool locked;

    Lock(Mutex&);
    ~Lock();
};

inline Lock::Lock(Mutex& m) : mutex(m)
{
    mutex.lock();
    locked = true;
}

inline Lock::~Lock()
{
    mutex.unlock();
}

struct Condition {
    void wait(Lock&, const Time&);
};

struct S {
    char padding[0x240];
    Mutex mutex;
    char padding2[0x1c];
    Condition condition;

    void f(double duration);
};

void S::f(double duration)
{
    double zero = 0.0;
    duration = maximum(duration, zero);

    Time deadline;
    getTime(&deadline, 1);
    deadline.nanoseconds += (int)(duration * nanosecondsPerSecond);

    Lock lock(mutex);
    condition.wait(lock, deadline);
}
