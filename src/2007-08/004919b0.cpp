// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Listener {
    void destroy();
};

void Listener::destroy() {
    int* p = *(int**)((char*)this + 0x28);
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void (__thiscall**)(int*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void (__thiscall**)(int*))(*(int*)p + 8))(p);
            }
        }
    }
    p = *(int**)((char*)this + 0x20);
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void (__thiscall**)(int*))(*(int*)p + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void (__thiscall**)(int*))(*(int*)p + 8))(p);
            }
        }
    }
}
