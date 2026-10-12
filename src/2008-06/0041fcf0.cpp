// from server: 98% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Object {
    void assign(Object*);
};

struct Shared {
    Object* ptr;
    RefCount* count;
    ~Shared();
};

inline Shared::~Shared()
{
    if (count)
        count->release();
}

struct Mutex {
    void* handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Mutex* mutex;
    bool locked;
    Guard(Mutex&);
    ~Guard();
};

inline Guard::Guard(Mutex& m) : mutex(&m)
{
    mutex->lock();
    locked = true;
}

inline Guard::~Guard()
{
    if (locked)
        mutex->unlock();
}

extern Mutex globalMutex;
extern Object* globalObject;

Shared __cdecl createObject();
Shared __cdecl getObject();

Object* __cdecl getGlobalObject()
{
    Guard guard(globalMutex);
    if (!globalObject) {
        Shared object = createObject();
        object.ptr->assign(getObject().ptr);
    }
    return globalObject;
}
