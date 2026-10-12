// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void (__cdecl* const _invalid_parameter_noinfo)();

namespace RBX {
class Instance {
public:
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

class ServiceProvider : public Instance {
public:
    ServiceProvider* finish();
};
}

struct RefCount {
    void* vtable;
    volatile long count;
};

struct Object {
    char pad[0x204];
    RBX::Instance* parent;
};

struct Shared {
    Object* object;
    RefCount* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->count, 1);
}

struct Guard {
    unsigned char data[12];
    Guard(Shared);
    ~Guard();
};

struct Result {
    void* value;
    explicit Result(void*);
    ~Result();
};

inline Result::Result(void* p) : value(p) {}

struct Iterator {
    void* owner;
    unsigned index;
};

struct Range {
    void* owner;
    unsigned char pad[8];
    unsigned first;
    unsigned last;
    Iterator begin();
    Iterator end();
};

inline Iterator Range::begin() {
    unsigned index = first;
    if (index > last)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.index = index;
    return result;
}

inline Iterator Range::end() {
    unsigned index = last;
    if (first > index)
        _invalid_parameter_noinfo();
    Iterator result;
    result.owner = owner;
    result.index = index;
    return result;
}

struct Callback {
    void (__cdecl* function)(void*);
    void* destination;
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
void __cdecl callback(void*);
Callback __cdecl transform(Iterator, Iterator, Callback);

struct S {
    unsigned char pad[0x24];
    Shared object;
    void* create();
    Result f();
};

Result S::f() {
    Result result(create());
    Guard guard(object);

    Object* p = object.object;
    RBX::ServiceProvider* provider =
        func_00421cb0(p ? p->parent : 0);

    Callback action;
    action.function = callback;
    action.destination = result.value;

    transform(
        (*reinterpret_cast<Range**>(
            reinterpret_cast<char*>(provider) + 0x154))->begin(),
        (*reinterpret_cast<Range**>(
            reinterpret_cast<char*>(provider) + 0x154))->end(),
        action);

    return result;
}
