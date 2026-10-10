// from server: 38% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void* __cdecl sub_413C00();
extern "C" void __cdecl sub_414170(void*);

struct Explosion {
    void* field0;
    void* field4;
    void* field8;
    void method(int, void*, float);
};

void Explosion::method(int a, void* b, float c)
{
    if (field0 == 0) {
        void* p = sub_413C00();
        sub_414170(p);
    }
    void* p = b;
    if (p) {
        _InterlockedExchangeAdd((volatile long*)((char*)p + 4), 1);
    }
    void* fn = field8;
    void* self = field4;
    typedef void (__thiscall *Fn)(void*, int);
    ((Fn)fn)(self, a);
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            typedef void (__thiscall *Dtor)(void*);
            ((Dtor)vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((Dtor)vt2[2])(p);
            }
        }
    }
}
