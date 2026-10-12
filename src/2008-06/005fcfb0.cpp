// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace RBX {
    class Instance;
    class ServiceProvider;
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    __forceinline void release();
};

struct Handle {
    Control* control;
    void assign(const Handle&);
};

struct Listener {
    unsigned char storage[4];
};

struct FirstListener : Listener {};
struct SecondListener : Listener {};

struct Event {
    void connect(Listener*);
};

struct Object {
    unsigned char storage[0x64];
};

struct Pair {
    Object* object;
    Handle handle;

    __forceinline Pair& operator=(const Pair&);
    __forceinline ~Pair();
};

struct Padding {
    unsigned char storage[0x168];
};

struct S : Padding, FirstListener, SecondListener {
    unsigned char padding[0x10];
    Pair value;

    void reset();
    void update(int, int);
};

RBX::ServiceProvider* __cdecl func_005fcc80(RBX::Instance*);
Pair __cdecl func_00618a40(RBX::ServiceProvider*);

__forceinline void Control::release()
{
    if (_InterlockedExchangeAdd(&strong, -1) == 1) {
        dispose();
        if (_InterlockedExchangeAdd(&weak, -1) == 1)
            destroy();
    }
}

__forceinline Pair& Pair::operator=(const Pair& p)
{
    object = p.object;
    handle.assign(p.handle);
    return *this;
}

__forceinline Pair::~Pair()
{
    Control* p = handle.control;
    if (p)
        p->release();
}

void S::update(int a, int b)
{
    if (a)
        reset();

    if (b) {
        value = func_00618a40(
            func_005fcc80(reinterpret_cast<RBX::Instance*>(this)));

        Listener* p = static_cast<FirstListener*>(this);
        if (value.object)
            reinterpret_cast<Event*>(
                reinterpret_cast<unsigned char*>(value.object) + 0x24)->connect(p);

        p = static_cast<SecondListener*>(this);
        if (value.object)
            reinterpret_cast<Event*>(
                reinterpret_cast<unsigned char*>(value.object) + 0x44)->connect(p);
    }
}
