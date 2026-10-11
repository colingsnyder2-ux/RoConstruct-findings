// from server: 31% by atomic.potato
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct RefCounted {
    void* vptr;
    volatile long ref1;
    volatile long ref2;
};

struct VPartInstance {
    void FilteredSelection(int, int, int, int, RefCounted*);
};

void VPartInstance::FilteredSelection(int a, int b, int c, int d, RefCounted* p) {
    RefCounted* local = p;
    if (local) {
        _InterlockedExchangeAdd(&local->ref1, 1);
    }
    ((void (__thiscall*)(VPartInstance*, int, int, int, int, RefCounted*))0x683730)(this, a, b, c, d, local);
    if (local) {
        if (_InterlockedExchangeAdd(&local->ref1, -1) == 1) {
            ((void (__thiscall*)(RefCounted*))local->vptr)(local);
            if (_InterlockedExchangeAdd(&local->ref2, -1) == 1) {
                ((void (__thiscall*)(RefCounted*))((void**)(*(void***)local))[2])(local);
            }
        }
    }
}
