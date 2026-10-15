// from server: 75% by colin
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std {
    template<class T> struct char_traits {};
    template<class T> class allocator {};

    template<class T, class Traits, class Alloc>
    class basic_string {
        char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* pointer;
    Reference();
    ~Reference();
    Reference& operator=(const Reference&);
};

inline Reference::Reference() : pointer(0) {}

inline Reference::~Reference()
{
    Control* p = pointer;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Pair {
    void* pointer;
    Reference reference;
    Pair();
    Pair& operator=(const Pair&);
};

inline Pair::Pair() : pointer(0) {}

inline Pair& Pair::operator=(const Pair& other)
{
    pointer = other.pointer;
    reference = other.reference;
    return *this;
}

extern Pair __cdecl acquire(void*);

struct Child {
    char padding[0xe4];
    char value;
};

struct Container {
    Child* find(const String&);
};

struct S {
    char padding[0x104];
    Container* container;
    void* f();
};

void* S::f()
{
    Pair result;
    if (container) {
        String name("Left Arm");
        Child* child = container->find(name);
        result = acquire(child ? &child->value : 0);
    }
    return result.pointer;
}
