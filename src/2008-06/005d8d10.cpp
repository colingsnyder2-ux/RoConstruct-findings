// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String;
extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    Reference& operator=(const Reference&);
};

struct Pair {
    void* object;
    Reference reference;
    __forceinline Pair& operator=(const Pair&);
    __forceinline ~Pair();
};

__forceinline Pair& Pair::operator=(const Pair& other)
{
    object = other.object;
    reference = other.reference;
    return *this;
}

__forceinline Pair::~Pair()
{
    Control* p = reference.control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
}

extern Pair __cdecl obtain(char*);

struct Parent {
    char* find(const String&);
};

struct S {
    unsigned char padding0[0x104];
    Parent* parent;
    unsigned char padding1[0xfc];
    Pair cached;
    void* get();
};

void* S::get()
{
    if (!cached.object && parent) {
        String name("Right Leg");
        char* found = parent->find(name);
        cached = obtain(found ? found + 0xe4 : 0);
    }
    return cached.object;
}
