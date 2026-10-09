// roc 2007-03 00699d30  unit: seg_00690000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699d30
//
// 00699d30  33c0                 xor eax, eax
// 00699d32  39817c020000         cmp dword ptr [ecx + 0x27c], eax
// 00699d38  0f95c0               setne al
// 00699d3b  c3                   ret 
// copied from an identical function in another client (function ?IsSet@CXTPRibbonBar@ns_ROCX000033@@QAE_NXZ)

namespace ns_ROCX000033 {
struct CXTPRibbonBar
{
    char pad[0x27c];
    int m_nField;
    bool IsSet();
};

bool CXTPRibbonBar::IsSet()
{
    return m_nField != 0;
}
}
