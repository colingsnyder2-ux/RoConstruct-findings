// roc 2007-03 0069d460  unit: seg_00690000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069d460
//
// 0069d460  33c0                 xor eax, eax
// 0069d462  817c240488250000     cmp dword ptr [esp + 4], 0x2588
// 0069d46a  0f94c0               sete al
// 0069d46d  89442404             mov dword ptr [esp + 4], eax
// 0069d471  e96afcffff           jmp 0x69d0e0
// copied from an identical function in another client (function ?func_6AB290@CXTPRibbonBar@ns_ROCX000015@@QAEHH@Z)

namespace ns_ROCX000015 {
struct CXTPRibbonBar
{
    int sub_6AAD90(int);
    int func_6AB290(int);
};

int CXTPRibbonBar::func_6AB290(int arg)
{
    return this->sub_6AAD90(arg == 0x2588);
}
}
