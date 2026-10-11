// from server: 53% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BoundPropGetSet {
    void* desc;
    void* member;
    float changed;
    BoundPropGetSet(void* a, void* b, float c);
};

BoundPropGetSet::BoundPropGetSet(void* a, void* b, float c)
{
    desc = a;
    member = b;
    if (b) {
        _InterlockedExchangeAdd((volatile long*)((char*)b + 4), 1);
    }
    changed = c;
    if (b) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)b + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))*(void**)b)(b);
            if (_InterlockedExchangeAdd((volatile long*)((char*)b + 8), -1) == 1) {
                (*(void (__thiscall**)(void*))((*(void***)b)[2]))(b);
            }
        }
    }
}
