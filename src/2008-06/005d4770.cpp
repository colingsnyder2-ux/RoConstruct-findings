// from server: 74% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace std {
    template<class T> struct char_traits;
    template<class T> class allocator;

    template<class T, class Traits, class Allocator>
    class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    void assign(const Reference&);
};

struct Pointer {
    void* object;
    Reference reference;

    Pointer();
    Pointer& operator=(const Pointer&);
    ~Pointer();
};

Pointer __cdecl makePointer(void*);

__forceinline Pointer::Pointer()
{
    object = 0;
    reference.control = 0;
}

__forceinline Pointer& Pointer::operator=(const Pointer& other)
{
    object = other.object;
    reference.assign(other.reference);
    return *this;
}

__forceinline Pointer::~Pointer()
{
    Control* p = reference.control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Lookup {
    void* find(const String&);
};

struct S {
    unsigned char padding[0x104];
    Lookup* lookup;
    void* f();
};

void* S::f()
{
    Pointer result;
    if (lookup) {
        String name("Right Leg");
        void* found = lookup->find(name);
        result = makePointer(found ? static_cast<unsigned char*>(found) + 0xe4 : 0);
    }
    return result.object;
}
