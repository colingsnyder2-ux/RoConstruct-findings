// from server: 40% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void addRef();
    void release();
};

struct Creator {
    void* field0;
    void* field4;
    void construct(void* a, void* b);
    Creator(void* a, void* b);
};

void Creator::construct(void* a, void* b) {
    field0 = a;
    if (a) {
        RefCounted* p = (RefCounted*)((char*)a + 0xa4);
        if (p) {
            *(void**)p = a;
            void* old = field4;
            if (old) {
                _InterlockedExchangeAdd((volatile long*)((char*)old + 8), 1);
            }
            void* cur = *(void**)((char*)p + 4);
            if (cur) {
                if (_InterlockedExchangeAdd((volatile long*)((char*)cur + 8), -1) == 1) {
                    (*(void(__thiscall**)(void*))(*((void**)cur)))(cur);
                }
            }
            *(void**)((char*)p + 4) = old;
        }
    }
}

Creator::Creator(void* a, void* b) {
    construct(a, b);
}
