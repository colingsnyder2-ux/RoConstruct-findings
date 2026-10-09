// roc 2007-03 00624f60  unit: seg_00620000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00624f60
//
// 00624f60  833900               cmp dword ptr [ecx], 0
// 00624f63  750c                 jne 0x624f71
// 00624f65  83790400             cmp dword ptr [ecx + 4], 0
// 00624f69  7506                 jne 0x624f71
// 00624f6b  b801000000           mov eax, 1
// 00624f70  c3                   ret 
// 00624f71  33c0                 xor eax, eax
// 00624f73  c3                   ret 
// copied from an identical function in another client (function ?IsUnset@CXTPCommandBar@ns_ROCX000008@@QBEHXZ)

namespace ns_ROCX000008 {
struct CXTPCommandBar
{
    int m_first;
    int m_second;

    int IsUnset() const;
};

int CXTPCommandBar::IsUnset() const
{
    return m_first == 0 && m_second == 0;
}
}
