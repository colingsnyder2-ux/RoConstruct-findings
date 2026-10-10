// from server: 36% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Plugin {
    void* field0;
    void* field4;
    void* field8;
    void init(void* a, void* b, int c);
};

void Plugin::init(void* a, void* b, int c)
{
    field0 = 0;
    field4 = 0;
    field8 = 0;

    void* local[2];
    local[0] = a;
    local[1] = b;

    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }

    extern void sub_497ff0(Plugin*);
    sub_497ff0(this);

    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void** vtbl = *(void***)b;
            ((void (__thiscall*)(void*))vtbl[1])(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                void** vtbl2 = *(void***)b;
                ((void (__thiscall*)(void*))vtbl2[2])(b);
            }
        }
    }
}
