// from server: 41% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __stdcall sub_77E6AC();

struct Inner {
    void* vptr;
    long refcount;
    long refcount2;
};

struct Outer {
    void* field0;
    Inner* field4;
    void* field8;
    void destroy();
};

void Outer::destroy()
{
    sub_77E6AC();
    Inner* p = field4;
    if (p != 0) {
        if (_InterlockedExchangeAdd(&p->refcount, -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(Inner*))vt[1])(p);
            if (_InterlockedExchangeAdd(&p->refcount2, -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(Inner*))vt2[2])(p);
            }
        }
    }
}
