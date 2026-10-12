// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* p;
    Count();
    Count& operator=(const Count&);
    ~Count();
};

inline Count::Count() : p(0) {}

inline Count::~Count() {
    Control* q = p;
    if (q) {
        if (_InterlockedExchangeAdd(&q->strong, -1) == 0) {
            q->dispose();
            if (_InterlockedExchangeAdd(&q->weak, -1) == 0)
                q->destroy();
        }
    }
}

struct Shared {
    void* object;
    Count count;
    Shared();
};

inline Shared::Shared() : object(0) {}

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

struct Node {
    unsigned char padding[0xe4];
    unsigned char value;
};

struct Parent {
    Node* find(const String&);
};

Shared __cdecl obtain(void*);

struct S {
    unsigned char padding[0x104];
    Parent* parent;
    void* f();
};

void* S::f() {
    Shared result;
    if (parent) {
        String name("Left Leg");
        Node* node = parent->find(name);
        result = obtain(node ? &node->value : 0);
    }
    return result.object;
}
