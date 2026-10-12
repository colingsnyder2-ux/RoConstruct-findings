// from server: 90% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Target {
    int invoke(int, int);
};

struct Service {
    char padding[0x130];
    Target* target;
    int invoke(int, int);
};

struct Result {
    int get();
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;
};

struct Shared {
    Service* object;
    Control* control;

    ~Shared();
};

struct Input {
    char padding[0x1c];
    int value;
};

Shared __cdecl acquire();

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedExchangeAdd(&p->strong, -1) == 1) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 1)
                p->destroy();
        }
    }
}

int __cdecl function(Input* input)
{
    Shared shared = acquire();
    Result* result = reinterpret_cast<Result*>(
        shared.object->invoke(input->value, 1));
    return result ? result->get() : 0;
}
