// from server: 100% by colin
// roc 2007-08 006a6bd0  unit: CXTPMenuBar  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6bd0
//
// 006a6bd0  56                   push esi
// 006a6bd1  8bf1                 mov esi, ecx
// 006a6bd3  e828f5ffff           call 0x6a6100
// 006a6bd8  8b06                 mov eax, dword ptr [esi]
// 006a6bda  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 006a6be0  8bce                 mov ecx, esi
// 006a6be2  ffd2                 call edx
// 006a6be4  85c0                 test eax, eax
// 006a6be6  7408                 je 0x6a6bf0
// 006a6be8  8bce                 mov ecx, esi
// 006a6bea  5e                   pop esi
// 006a6beb  e9b0fbffff           jmp 0x6a67a0
// 006a6bf0  5e                   pop esi
// 006a6bf1  c3                   ret 

struct CXTPMenuBar {
    void sub_6A6100();
    virtual int vfunc_160();
    void sub_6A67A0();
    void func_6A6BD0();
};

void CXTPMenuBar::func_6A6BD0()
{
    sub_6A6100();
    if (((int (__thiscall*)(CXTPMenuBar*))((*(void***)this)[0x160 / 4]))(this))
        sub_6A67A0();
}
