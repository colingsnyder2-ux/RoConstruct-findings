// from server: 90% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    long use_count;
    long weak_count;
};

struct Instance;

struct Shared {
    Instance* pointer;
    Control* control;

    Shared(const Shared& other)
        : pointer(other.pointer), control(other.control) {
        if (control) {
            volatile long* count = &control->use_count;
            _InterlockedExchangeAdd(count, 1);
        }
    }

    Instance* operator->() const {
        return pointer;
    }

    ~Shared() {
        if (control) {
            Control* p = control;
            if (_InterlockedExchangeAdd(&p->use_count, -1) == 1) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak_count, -1) == 1)
                    p->destroy();
            }
        }
    }
};

struct Output {
    void* pointer;
    Output(void* value) : pointer(value) {}
    ~Output();
};

struct Guard {
    unsigned char storage[12];
    Guard(Shared value);
    ~Guard();
};

struct Instance {
    void apply(void* value);
};

struct S {
    unsigned char padding[36];
    Shared member;

    void* create();
    Shared get();
    Output f();
};

Output S::f() {
    Output result(create());
    Guard guard(member);
    get()->apply(result.pointer);
    return result;
}
