// from server: 99% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" void __cdecl _ReadWriteBarrier();
#pragma intrinsic(_ReadWriteBarrier)

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
}

struct Reference {
    long unused;
    volatile long count;
};

struct Arguments {
    void* first;
    Reference* firstReference;
    void* second;
    Reference* secondReference;

    Arguments(const Arguments& other);
    void release();
};

inline Arguments::Arguments(const Arguments& other)
{
    first = other.first;
    firstReference = other.firstReference;
    Arguments* volatile constructed = reinterpret_cast<Arguments*>(&first);

    if (other.firstReference) {
        volatile long* count = &other.firstReference->count;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }

    second = other.second;
    secondReference = other.secondReference;

    if (other.secondReference) {
        volatile long* count = &other.secondReference->count;
        _ReadWriteBarrier();
        _InterlockedExchangeAdd(count, 1);
    }
}

struct Listener {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void dispatch(void*, Arguments);

    char padding[28];
    char* owner;

    void invoke(void* value, Arguments arguments);
};

void Listener::invoke(void* value, Arguments arguments)
{
    void* criticalSection = owner + 44;
    EnterCriticalSection(criticalSection);
    dispatch(value, arguments);
    LeaveCriticalSection(criticalSection);
    arguments.release();
}
