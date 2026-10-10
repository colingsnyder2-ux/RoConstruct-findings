// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BoundFuncDesc {
    void* field0;
    void* field4;
    void* field8;
    void construct(void* a, void* b);
};

void BoundFuncDesc::construct(void* a, void* b)
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

    ((void (__thiscall*)(BoundFuncDesc*, void*))0x52f800)(this, local);

    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            void** vt = *(void***)b;
            ((void (__thiscall*)(void*))vt[1])(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                void** vt2 = *(void***)b;
                ((void (__thiscall*)(void*))vt2[2])(b);
            }
        }
    }
}
