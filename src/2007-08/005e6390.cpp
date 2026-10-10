// from server: 34% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl func_007285a0();
extern "C" void __cdecl func_005e6160();

struct S {
    void func_005e6390();
};

void S::func_005e6390()
{
    int* p168 = *(int**)((char*)this + 0x168);
    *(int*)((char*)this + 0) = 0x7bd4bc;
    *(int*)((char*)this + 4) = 0x7bd4b0;
    *(int*)((char*)this + 0x10) = 0x7bd4a8;
    *(int*)((char*)this + 0x14) = 0x7bd498;
    *(int*)((char*)this + 0x2c) = 0x7bd488;
    *(int*)((char*)this + 0x44) = 0x7bd478;
    *(int*)((char*)this + 0x5c) = 0x7bd468;
    *(int*)((char*)this + 0x74) = 0x7bd458;
    *(int*)((char*)this + 0x8c) = 0x7bd448;
    *(int*)((char*)this + 0xe8) = 0x7bd440;
    *(int*)((char*)this + 0x158) = 0x7bd428;
    int* ecx = *(int**)((char*)p168 + 4);
    *(int*)((char*)ecx + (int)this + 0x168) = 0x7bd420;
    int* edx = *(int**)((char*)this + 0x168);
    int* eax = *(int**)((char*)edx + 4);
    int* ecx2 = (int*)((char*)eax - 0xe0);
    *(int*)((char*)eax + (int)this + 0x164) = (int)ecx2;
    func_007285a0();
    int* edi = *(int**)((char*)this + 0x220);
    if (edi != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)edi + 4), -1) == 1) {
            int* edx2 = *(int**)edi;
            int* eax2 = *(int**)((char*)edx2 + 4);
            ((void (__thiscall*)(void*))eax2)(edi);
            if (_InterlockedExchangeAdd((volatile long*)((char*)edi + 8), -1) == 1) {
                int* eax3 = *(int**)edi;
                int* edx3 = *(int**)((char*)eax3 + 8);
                ((void (__thiscall*)(void*))edx3)(edi);
            }
        }
    }
    func_005e6160();
}
