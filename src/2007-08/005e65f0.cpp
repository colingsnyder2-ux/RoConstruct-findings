// from server: 49% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Flag {
    void constructFrom(const Flag& other);
};

void Flag::constructFrom(const Flag& other)
{
    int* src = (int*)&other;
    int* dst = (int*)this;
    int ref = 0;
    if (src) {
        _InterlockedExchangeAdd((volatile long*)(src + 1), 1);
        _InterlockedExchangeAdd((volatile long*)(src + 1), 1);
        if (_InterlockedExchangeAdd((volatile long*)(src + 1), -1) == 1) {
            void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 4);
            fn(src);
            if (_InterlockedExchangeAdd((volatile long*)(src + 2), -1) == 1) {
                void (__thiscall *fn2)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 8);
                fn2(src);
            }
        }
    }
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
    dst[4] = src[4];
    dst[5] = (int)src;
    if (src) {
        _InterlockedExchangeAdd((volatile long*)(src + 1), 1);
    }
    if (src) {
        if (_InterlockedExchangeAdd((volatile long*)(src + 1), -1) == 1) {
            void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 4);
            fn(src);
            if (_InterlockedExchangeAdd((volatile long*)(src + 2), -1) == 1) {
                void (__thiscall *fn2)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 8);
                fn2(src);
            }
        }
    }
    if (src) {
        if (_InterlockedExchangeAdd((volatile long*)(src + 1), -1) == 1) {
            void (__thiscall *fn)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 4);
            fn(src);
            if (_InterlockedExchangeAdd((volatile long*)(src + 2), -1) == 1) {
                void (__thiscall *fn2)(void*) = *(void (__thiscall **)(void*))(*(int*)src + 8);
                fn2(src);
            }
        }
    }
}
