// from server: 95% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern char instance_type;
extern char flag_type;
extern char model_type;

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x104];
    void* parent;
    int test1();
    int test2();
    void detach(int);
};

extern int __cdecl excluded(Object*);

struct Parent {
    Object* object;
    Control* control;
    ~Parent();
};

extern Parent __cdecl acquire(void*);

struct Shared {
    Object* object;
    Control* control;

    Shared(const Parent&);
    Shared(const Shared& other)
        : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedExchangeAdd(&control->strong, 1);
    }

    ~Shared()
    {
        Control* p = control;
        if (p) {
            if (_InterlockedDecrement(&p->strong) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weak) == 0)
                    p->destroy();
            }
        }
    }
};

void __cdecl process(Shared value, Object* stop)
{
    if (value.object != stop) {
        Object* p = static_cast<Object*>(
            __RTDynamicCast(value.object, 0, &instance_type, &flag_type, 0));

        if (p && !excluded(p) && !p->test1() && !p->test2()) {
            Parent parent = acquire(p->parent);
            p->detach(0);
            process(parent, stop);
        }

        p = static_cast<Object*>(
            __RTDynamicCast(value.object, 0, &instance_type, &model_type, 0));

        if (p && !p->test1()) {
            Parent parent = acquire(p->parent);
            p->detach(0);
            process(reinterpret_cast<const Shared&>(parent), stop);
        }
    }
}
