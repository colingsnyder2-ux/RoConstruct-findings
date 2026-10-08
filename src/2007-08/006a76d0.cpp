// from server: 100% by colin
// roc 2007-08 006a76d0  unit: CXTPRibbonBar  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a76d0
//
// 006a76d0  8b442404             mov eax, dword ptr [esp + 4]
// 006a76d4  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 006a76da  b801000000           mov eax, 1
// 006a76df  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 006a76e5  740f                 je 0x6a76f6
// 006a76e7  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 006a76ed  89442404             mov dword ptr [esp + 4], eax
// 006a76f1  e99a2ff9ff           jmp 0x63a690
// 006a76f6  c20400               ret 4

struct CXTPRibbonBar
{
    void setSomething(int value);
};

void CXTPRibbonBar::setSomething(int value)
{
    *(int*)((char*)this + 0x16c) = value;
    int one = 1;
    if (*(int*)((char*)this + 0xa0) != one)
    {
        *(int*)((char*)this + 0xa0) = one;
        extern void __stdcall sub_0063a690(int);
        sub_0063a690(one);
    }
}
