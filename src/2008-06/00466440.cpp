// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void* __cdecl func_006a0920(unsigned int size);
extern void func_004213a0();
extern void func_00422c60();
extern void func_00432950();
extern void* __cdecl func_00466260(void*, void*, void*);

struct S {
    char pad0[4];
    void* field4;
    char pad8[0x18];
    void* field20;
    void method(void* a, void* b, void* c, void* d, void* e);
};

void S::method(void* a, void* b, void* c, void* d, void* e)
{
    void* obj = func_006a0920(0x20);
    void* result;
    if (obj != 0) {
        void* local[4];
        local[0] = a;
        local[1] = b;
        if (b != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
        }
        local[2] = c;
        local[3] = d;
        if (d != 0) {
            _InterlockedExchangeAdd((volatile long*)((char*)d + 4), 1);
        }
        result = func_00466260(obj, this, e);
    } else {
        result = 0;
    }
    void* tmp = result;
    func_004213a0();
    func_00432950();
    func_00422c60();
}
