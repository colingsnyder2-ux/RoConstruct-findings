// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Creator {
    void construct(int a, int b, int c);
};

void Creator::construct(int a, int b, int c) {
    int* p = (int*)this;
    int* q = (int*)a;
    int* r = (int*)b;
    if (r) {
        _InterlockedExchangeAdd((volatile long*)((char*)r + 4), 1);
    }
    ((void(__thiscall*)(int*, int, int, int))0x41b1e0)(p, a, b, c);
    if (r) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)r + 4), -1) == 1) {
            (*(void(__thiscall**)(int*))(*(int*)r + 4))(r);
            if (_InterlockedExchangeAdd((volatile long*)((char*)r + 8), -1) == 1) {
                (*(void(__thiscall**)(int*))(*(int*)r + 8))(r);
            }
        }
    }
}
