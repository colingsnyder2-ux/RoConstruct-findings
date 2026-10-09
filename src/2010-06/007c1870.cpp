// roc 2010-06 007c1870  unit: CXTPImageManagerIconSet  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007c1870
//
// 007c1870  837c241000           cmp dword ptr [esp + 0x10], 0
// 007c1875  56                   push esi
// 007c1876  8b742408             mov esi, dword ptr [esp + 8]
// 007c187a  57                   push edi
// 007c187b  8bf9                 mov edi, ecx
// 007c187d  7426                 je 0x7c18a5
// 007c187f  6a0e                 push 0xe
// 007c1881  56                   push esi
// 007c1882  e8976afeff           call 0x7a831e
// 007c1887  85c0                 test eax, eax
// 007c1889  741a                 je 0x7c18a5
// 007c188b  6a01                 push 1
// 007c188d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c1891  8b542414             mov edx, dword ptr [esp + 0x14]
// 007c1895  51                   push ecx
// 007c1896  52                   push edx
// 007c1897  56                   push esi
// 007c1898  50                   push eax
// 007c1899  8bcf                 mov ecx, edi
// 007c189b  e8f0f5ffff           call 0x7c0e90
// 007c18a0  5f                   pop edi
// 007c18a1  5e                   pop esi
// 007c18a2  c21000               ret 0x10
// 007c18a5  6a03                 push 3
// 007c18a7  56                   push esi
// 007c18a8  e8716afeff           call 0x7a831e
// 007c18ad  85c0                 test eax, eax
// 007c18af  7404                 je 0x7c18b5
// 007c18b1  6a00                 push 0
// 007c18b3  ebd8                 jmp 0x7c188d
// 007c18b5  5f                   pop edi
// 007c18b6  33c0                 xor eax, eax
// 007c18b8  5e                   pop esi
// 007c18b9  c21000               ret 0x10
// copied from an identical function in another client (function ?func@CXTPImageManagerIcon@ns_ROCX000025@ns_ROCX00005d@@QAEHHHHH@Z)

namespace ns_ROCX000025 {
struct I_func_0071f650 {
    char pad[52];
    int m_x;
};
struct S_func_0071f650 {
    char pad[112];
    I_func_0071f650* m_p;
    int f();
};
int S_func_0071f650::f()
{
    return m_p->m_x;
}
}
