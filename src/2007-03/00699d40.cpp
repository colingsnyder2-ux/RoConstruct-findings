// roc 2007-03 00699d40  unit: seg_00690000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699d40
//
// 00699d40  8b8164020000         mov eax, dword ptr [ecx + 0x264]
// 00699d46  85c0                 test eax, eax
// 00699d48  7501                 jne 0x699d4b
// 00699d4a  c3                   ret 
// 00699d4b  8b807c010000         mov eax, dword ptr [eax + 0x17c]
// 00699d51  c3                   ret 
// copied from an identical function in another client (function ?getValue@CXTPRibbonBar@ns_ROCX000034@@QAEHXZ)

namespace ns_ROCX000034 {
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
}
