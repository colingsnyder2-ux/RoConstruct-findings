// from server: 47% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Inner {
    void sub_5e1b80(void*);
    char pad[8];
};

struct Outer {
    void* field0;
    Inner field4;
    void assign(void*);
};

void Outer::assign(void* p) {
    field0 = p;
    field4.sub_5e1b80(p);
    if (p) {
        *(void**)p = p;
        void* ebx = *(void**)&field4;
        if (ebx != *(void**)((char*)p + 4)) {
            if (ebx) {
                _InterlockedExchangeAdd((volatile long*)((char*)ebx + 8), 1);
            }
            void* ecx = *(void**)((char*)p + 4);
            if (ecx) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)ecx + 8), -1) == 1) {
                    void** vt = *(void***)ecx;
                    ((void (__stdcall*)(void*))vt[2])(ecx);
                }
            }
            *(void**)((char*)p + 4) = ebx;
        }
    }
}
