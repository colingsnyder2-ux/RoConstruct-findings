// from server: 88% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Tool;

struct Pointer {
    Tool* object;
    Control* control;
    ~Pointer();
};

inline Pointer::~Pointer() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Tool {
    void method_5d2200();
    void f(Pointer);
};

void Tool::f(Pointer p) {
    if (p.object != this)
        method_5d2200();
}
