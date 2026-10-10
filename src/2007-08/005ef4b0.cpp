// from server: 47% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct S_func_005ec880 {
    char pad[0x100];
    void construct();
};

struct S_005ef4b0 {
    char pad[0x104];
    void* ptr104;
    void destroy();
};

void S_005ef4b0::destroy()
{
    void* p = this->ptr104;
    if (p) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void (__thiscall**)(void*))(*((int*)p) + 4))(p);
            if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
                (*(void (__thiscall**)(void*))(*((int*)p) + 8))(p);
            }
        }
    }
    ((S_func_005ec880*)this)->construct();
}
