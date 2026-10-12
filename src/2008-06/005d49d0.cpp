// from server: 75% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

struct Reference {
    Control* control;
    Reference();
    ~Reference();
    void assign(const Reference&);
};

struct Shared {
    void* pointer;
    Reference reference;
    Shared();
    ~Shared();
    Shared& operator=(const Shared&);
};

struct Node {
    Node* find(const String&);
};

Shared __cdecl acquire(void*);

struct S {
    char padding[0x104];
    Node* node;
    void* f();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

__forceinline Reference::Reference() : control(0) {}

__forceinline Reference::~Reference()
{
    if (control)
        control->release();
}

__forceinline Shared::Shared() : pointer(0) {}

__forceinline Shared::~Shared() {}

__forceinline Shared& Shared::operator=(const Shared& other)
{
    pointer = other.pointer;
    reference.assign(other.reference);
    return *this;
}

void* S::f()
{
    Shared result;
    if (node) {
        String name("Right Arm");
        Node* found = node->find(name);
        result = acquire(found ? reinterpret_cast<char*>(found) + 0xe4 : 0);
    }
    return result.pointer;
}
