// from server: 35% by colin
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern void __stdcall func_00441ff0(int);
extern void __stdcall func_004423d0();

struct VCMDIFrameWnd {
    void dtor();
};

void VCMDIFrameWnd::dtor()
{
    *(int*)this = 0x78af6c;
    *(int*)((char*)this + 0x17c) = 0x78af60;
    *(int*)((char*)this + 0x1d0) = 0x78af54;
    func_00441ff0(0);
    int* p = *(int**)((char*)this + 0x1d8);
    if (p != 0) {
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 4), -1) == 1) {
            (*(void(__thiscall**)(int*))(*(int*)p + 4))(p);
        }
        if (_InterlockedExchangeAdd((volatile long*)((char*)p + 8), -1) == 1) {
            (*(void(__thiscall**)(int*))(*(int*)p + 8))(p);
        }
    }
    *(int*)((char*)this + 0x1d0) = 0x788338;
    func_004423d0();
}
