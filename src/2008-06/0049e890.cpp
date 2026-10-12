// from server: 83% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Mutex {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

extern Mutex globalMutex;
extern void* globalInstance;

struct Guard {
    Mutex* mutex;
    bool locked;
    explicit Guard(Mutex*);
    ~Guard();
};

inline Guard::Guard(Mutex* p) : mutex(p)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object {
    void initialize(Object*);
};

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
    Object* get() const;
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
                p->destroy();
        }
    }
}

inline Object* Shared::get() const
{
    return object;
}

Shared __cdecl makeFirst();
Shared __cdecl makeSecond();

void* __cdecl getInstance()
{
    Guard guard(&globalMutex);
    if (!globalInstance) {
        Shared first = makeFirst();
        first.object->initialize(makeSecond().get());
    }
    return globalInstance;
}
