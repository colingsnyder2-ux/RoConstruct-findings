// from server: 45% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void sub_5713d0();
};

struct Obj {
    void* vptr;
    Inner* inner;
    void destroy();
};

void Obj::destroy() {
    inner->sub_5713d0();
    Inner* p = inner;
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            void** vt = *(void***)p;
            ((void (__thiscall*)(Inner*))vt[1])(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                void** vt2 = *(void***)p;
                ((void (__thiscall*)(Inner*))vt2[2])(p);
            }
        }
    }
}
