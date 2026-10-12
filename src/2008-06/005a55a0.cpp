// from server: 67% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;
    template<class T, class Traits, class Allocator> class basic_string {
        unsigned char storage[28];
    public:
        basic_string(const T*);
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>, std::allocator<char> > String;

struct Owner;

struct Object {
    virtual void slot0() = 0;
    virtual void setName(const String&) = 0;
    void attach(Owner*);
};

struct Control {
    virtual void slot0() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Object* object;
    Control* control;
    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() {}

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) - 1 == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) - 1 == 0)
            p->destroy();
    }
}

struct Function {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    void* reserved;
    unsigned char data[24];
    Function(const Function&);
    ~Function();
};

inline Function::Function(const Function& other) : manager(0) {
    if (other.manager) {
        manager = other.manager;
        (*other.manager)(const_cast<unsigned char*>(other.data), data, 0);
    }
}

inline Function::~Function() {
    if (manager) {
        Manager f = *manager;
        if (f)
            f(data, data, 1);
    }
}

Shared* __cdecl createObject(const Shared&, Function);

struct Owner {
    Object* create(const char*, Function);
};

Object* Owner::create(const char* name, Function function) {
    Shared object(*createObject(Shared(), function));
    object.object->setName(String(name));
    object.object->attach(this);
    return object.object;
}
