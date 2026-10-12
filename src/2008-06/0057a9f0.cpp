// from server: 87% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Handle {
    Control* control;
    Handle& operator=(const Handle&);
};

struct Pair {
    void* object;
    Handle handle;

    ~Pair() {
        Control* p = handle.control;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }

    Pair& operator=(const Pair& other) {
        object = other.object;
        handle = other.handle;
        return *this;
    }
};

extern Pair __cdecl acquire(void*);

struct Signal {
    void connect(void*);
};

struct Listener {
    void remove(void*);
    void start();
    void enable();
};

struct S {
    char padding[0x1c8];
    char connection[0x30];
    unsigned long token;
    Pair first;
    Listener* firstListener;
    unsigned long unused;
    Pair third;
    Pair second;
    Listener* secondListener;
    unsigned long unused2;
    Listener* thirdListener;

    void* getFirst();
    void* getSecond();
    void* getThird();
    void prepare();
    void finishFirst();
    void finishSecond();
    void f(bool);
};

void S::f(bool enabled)
{
    firstListener->remove(this);
    secondListener->remove(this);
    thirdListener->remove(this);

    first = acquire(getFirst());
    second = acquire(getSecond());
    third = acquire(getThird());

    prepare();
    firstListener->start();

    Signal* signal = reinterpret_cast<Signal*>(
        reinterpret_cast<char*>(firstListener) + 0x2ec);
    signal->connect(connection);

    if (enabled)
        static_cast<Listener*>(third.object)->enable();

    void* object = third.object;
    unsigned long* destination = &token;
    if (object)
        reinterpret_cast<Signal*>(
            static_cast<char*>(object) + 0x170
        )->connect(destination);

    finishFirst();
    finishSecond();
}
