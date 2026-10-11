// from server: 36% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_5E1CC0(void*);
extern "C" void __cdecl sub_5E1A60(void*, int, void*, void*);
extern "C" void* __cdecl sub_6B9180(void*, int, int);

struct T4_00635740 {
    void f_00635740();
};

void T4_00635740::f_00635740()
{
    void* p;
    void* q;
    sub_5E1CC0(&p);
    void* esi = *(void**)&p;
    void* r = sub_6B9180(*(void**)((char*)&p + 0x20), -1, 0);
    sub_5E1A60(esi, 3, (void*)0x8DB480, r);
    void* s = *(void**)((char*)&p + 0x28);
    if (s != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)s + 4), -1) == 1) {
            void** vt = *(void***)s;
            ((void (__thiscall*)(void*))vt[1])(s);
            if (_InterlockedExchangeAdd((volatile long*)((char*)s + 8), -1) == 1) {
                void** vt2 = *(void***)s;
                ((void (__thiscall*)(void*))vt2[2])(s);
            }
        }
    }
    *(int*)0 = *(int*)4;
}
