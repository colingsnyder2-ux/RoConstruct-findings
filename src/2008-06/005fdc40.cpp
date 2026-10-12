// from server: 91% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCount {
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    RefCount* count;
    ~Shared();
};

__forceinline Shared::~Shared() {
    RefCount* p = count;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

struct Tool {
    char pad[0x1a4];
    void* field_1a4;

    void f(Shared value);
    void method_5d4650(int, int);
    void method_5d2200();
};

extern "C" int __cdecl sub_486830(Tool*);

void Tool::f(Shared value) {
    if (sub_486830(this) && value.object != this) {
        if (value.object == field_1a4)
            method_5d4650(4, sub_486830(this));
        method_5d2200();
    }
}
