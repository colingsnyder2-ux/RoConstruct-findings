// from server: 26% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct FuncDesc {
    char pad[0x178];
    void* field178;
    void* field17c;
    void assign(void*);
};

extern "C" void __cdecl sub_5e49e0(void*, void*);
extern "C" void __cdecl sub_402a60(void*, void*);
extern "C" void __cdecl sub_444710(void*, void*);

void FuncDesc::assign(void* p)
{
    if (field178 == p)
        return;

    void* tmp;
    sub_5e49e0(&tmp, p);
    field178 = *(void**)tmp;
    void* q = (char*)tmp + 4;
    sub_402a60(&field17c, q);

    if (tmp) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 4), -1) == 1) {
            void** vt = *(void***)tmp;
            ((void (__thiscall*)(void*))vt[1])(tmp);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)tmp + 8), -1) == 1) {
            void** vt = *(void***)tmp;
            ((void (__thiscall*)(void*))vt[2])(tmp);
        }
    }

    sub_444710(this, (void*)0x8c57e8);
}
