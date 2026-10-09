// roc 2007-03 006999d0  unit: seg_00690000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006999d0
//
// 006999d0  8b442404             mov eax, dword ptr [esp + 4]
// 006999d4  89816c010000         mov dword ptr [ecx + 0x16c], eax
// 006999da  b801000000           mov eax, 1
// 006999df  3981a0000000         cmp dword ptr [ecx + 0xa0], eax
// 006999e5  740f                 je 0x6999f6
// 006999e7  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 006999ed  89442404             mov dword ptr [esp + 4], eax
// 006999f1  e9ba61f9ff           jmp 0x62fbb0
// 006999f6  c20400               ret 4
// copied from an identical function in another client (function ?setSomething@CXTPRibbonBar@ns_ROCX00002e@@QAEXH@Z)

namespace ns_ROCX00002e {
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
}
