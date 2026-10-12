// from server: 44% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
};

struct Bound {
    void (__cdecl *function)();
    int adjustment;
    Shared object;
    void (__cdecl *callback)();
};

struct FunctionTable {
    void (__cdecl *manager)(void*, void*, int);
};

struct Function {
    FunctionTable* table;
    unsigned int reserved;
    unsigned int storage[6];
    void assign(const Bound&);
};

struct Queue {
    void append(Function);
};

struct S {
    void f();
};

extern Queue* queue;
extern void __cdecl bound_function();
extern void __cdecl callback();
extern Shared __cdecl acquire(S*);
extern Bound __cdecl bind_function(void (__cdecl *)(), int, Shared,
                                  void (__cdecl *)());

inline Function make_function(S* p)
{
    Bound b = bind_function(bound_function, 0, acquire(p), callback);
    Function result;
    result.table = 0;
    result.assign(b);
    Control* control = b.object.control;
    if (control) {
        if (_InterlockedExchangeAdd(&control->strong, -1) == 0) {
            control->dispose();
            if (_InterlockedExchangeAdd(&control->weak, -1) == 0)
                control->destroy();
        }
    }
    return result;
}

void S::f()
{
    queue->append(make_function(this));
}
