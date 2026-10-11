// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl operator_new(unsigned int size);

struct RefCounted {
    char pad0[4];
    volatile long refcount;
};

struct Ctor421240 {
    void ctor(int e, void* self2);
};

struct Func4213a0 {
    void func(void** arg);
};

struct Func432950 {
    void func(void* arg);
};

struct Func422c60 {
    void func();
};

struct Listener {
    char pad0[4];
    char pad4[0x1c];
    void* field20;
    void func(int a, int b, int c, int d, int e);
};

void Listener::func(int a, int b, int c, int d, int e)
{
    void* mem = operator_new(0x20);
    if (mem != 0) {
        RefCounted* r1 = (RefCounted*)b;
        if (r1 != 0) {
            _InterlockedExchangeAdd(&r1->refcount, 1);
        }
        RefCounted* r2 = (RefCounted*)d;
        if (r2 != 0) {
            _InterlockedExchangeAdd(&r2->refcount, 1);
        }
        ((Ctor421240*)mem)->ctor(e, this);
        void* result = mem;
        void* tmp = result;
        ((Func4213a0*)((char*)this + 4))->func(&tmp);
        ((Func432950*)this->field20)->func(result);
        ((Func422c60*)&tmp)->func();
    } else {
        void* result = 0;
        void* tmp = result;
        ((Func4213a0*)((char*)this + 4))->func(&tmp);
        ((Func432950*)this->field20)->func(result);
        ((Func422c60*)&tmp)->func();
    }
}
