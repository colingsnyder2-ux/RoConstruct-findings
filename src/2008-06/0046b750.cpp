// from server: 80% by king_originala
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
    if (control) {
        volatile long* count = &control->count;
        _InterlockedExchangeAdd(count, 1);
    }
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
};

struct Callback {
    void (__cdecl* function)(void*);
};

RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
void __cdecl callback(void*);
Iterator* __cdecl transform(Iterator*, Iterator, Iterator, Callback, void*);

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

    Range* endRange =
        *reinterpret_cast<Range**>(
            reinterpret_cast<char*>(provider) + 0x154);
    unsigned last = endRange->last;
    void* destination = result.value;

    if (endRange->first > last)
        _invalid_parameter_noinfo();

    Iterator end;
    end.owner = endRange->owner;
    end.index = last;

    Range* beginRange =
        *reinterpret_cast<Range**>(
            reinterpret_cast<char*>(provider) + 0x154);
    unsigned first = beginRange->first;

    if (first > beginRange->last)
        _invalid_parameter_noinfo();

    Iterator begin;
    begin.owner = beginRange->owner;
    begin.index = first;

    Callback action;
    action.function = callback;
    Iterator ignored;
    transform(&ignored, begin, end, action, destination);

    return result;
}
