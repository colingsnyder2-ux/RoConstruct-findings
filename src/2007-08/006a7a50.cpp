// from server: 100% by colin
// roc 2007-08 006a7a50  unit: CXTPRibbonBar  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7a50
//
// 006a7a50  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 006a7a56  85c0                 test eax, eax
// 006a7a58  7501                 jne 0x6a7a5b
// 006a7a5a  c3                   ret 
// 006a7a5b  8b807c010000         mov eax, dword ptr [eax + 0x17c]
// 006a7a61  c3                   ret 

struct CXTPRibbonBar
{
    int getValue();
};

int CXTPRibbonBar::getValue()
{
    int* p = *(int**)((char*)this + 0x264);
    if (p == 0)
        return 0;
    return *(int*)((char*)p + 0x17c);
}
