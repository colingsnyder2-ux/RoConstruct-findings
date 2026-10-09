// roc 2009-06 007216b0  unit: PAVCXTPControlAction::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007216b0
//
// 007216b0  53                   push ebx
// 007216b1  56                   push esi
// 007216b2  8bd9                 mov ebx, ecx
// 007216b4  33f6                 xor esi, esi
// 007216b6  e8656b0a00           call 0x7c8220
// 007216bb  85c0                 test eax, eax
// 007216bd  7e26                 jle 0x7216e5
// 007216bf  57                   push edi
// 007216c0  56                   push esi
// 007216c1  8bcb                 mov ecx, ebx
// 007216c3  e8986a0a00           call 0x7c8160
// 007216c8  8bf8                 mov edi, eax
// 007216ca  8bcf                 mov ecx, edi
// 007216cc  e8bffeffff           call 0x721590
// 007216d1  8bcf                 mov ecx, edi
// 007216d3  e8d078ffff           call 0x718fa8
// 007216d8  8bcb                 mov ecx, ebx
// 007216da  46                   inc esi
// 007216db  e8406b0a00           call 0x7c8220
// 007216e0  3bf0                 cmp esi, eax
// 007216e2  7cdc                 jl 0x7216c0
// 007216e4  5f                   pop edi
// 007216e5  6aff                 push -1
// 007216e7  6a00                 push 0
// 007216e9  8d4b20               lea ecx, [ebx + 0x20]
// 007216ec  e81f0e0300           call 0x752510
// 007216f1  5e                   pop esi
// 007216f2  5b                   pop ebx
// 007216f3  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@Outer@ns_ROCX000000@ns_ROCX00002d@@QAEXXZ)

namespace ns_ROCX000000 {
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
}
