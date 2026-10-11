// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_6a17c6(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_49ac80(void*);
extern "C" void __cdecl sub_5fc810(void*, void*);
extern "C" void __cdecl sub_5fc940(void*, void*);
extern "C" void __cdecl sub_5fd0b0(void*, void*);

struct S_func_005fd220 {
    char pad0[0x168];
    void f(void* a, void* b);
};

void S_func_005fd220::f(void* a, void* b)
{
    void* p = sub_6a17c6(a, 0, (void*)0x92907c, (void*)0x937460, 0);
    if (p != 0) {
        void* q = sub_49ac80((char*)this - 0x168);
        if (p == q) {
            sub_5fc810((char*)this - 0x168, p);
        }
    } else {
        void* r = sub_6a17c6(a, 0, (void*)0x92907c, (void*)0x9353ec, 0);
        if (r != 0) {
            sub_5fc940((char*)this - 0x168, r);
        } else {
            void* s = sub_6a17c6(a, 0, (void*)0x92907c, (void*)0x951950, 0);
            if (s != 0) {
                sub_5fd0b0((char*)this - 0x168, s);
            }
        }
    }

    if (b != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void** vt = *(void***)b;
            void (*fn)(void*) = (void (*)(void*))vt[1];
            fn(b);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
            void** vt = *(void***)b;
            void (*fn)(void*) = (void (*)(void*))vt[2];
            fn(b);
        }
    }
}
