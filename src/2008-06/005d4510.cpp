// from server: 71% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std {
    template<class T> struct char_traits {};
    template<class T> struct allocator {};

    template<class T, class Traits, class Allocator>
    class basic_string {
        Allocator alloc;
        union {
            T buffer[16];
            T* pointer;
        } storage;
        unsigned length;
        unsigned capacity;
    public:
        basic_string(const T*);
        ~basic_string();
    };

    typedef basic_string<char, char_traits<char>, allocator<char> > string;
}

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Count {
    Control* control;

    Count() : control(0) {}
    ~Count() {
        Control* p = control;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }

    Count& operator=(const Count&);
};

struct Pair {
    void* pointer;
    Count count;

    Pair() : pointer(0) {}
};

Pair __cdecl getPair(void*);

struct Node {
    char padding[0xe4];
    Node* find(const std::string&);
};

struct S {
    char padding[0x104];
    Node* node;

    void* f();
};

void* S::f() {
    Pair result;
    if (node) {
        std::string name("Torso");
        Node* found = node->find(name);
        result = getPair(found ? reinterpret_cast<char*>(found) + 0xe4 : 0);
    }
    return result.pointer;
}
