// roc 2011-06 00867830  unit: CXTPTabClientWnd  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00867830
//
// 00867830  53                   push ebx
// 00867831  56                   push esi
// 00867832  57                   push edi
// 00867833  8bf9                 mov edi, ecx
// 00867835  33f6                 xor esi, esi
// 00867837  e814e0ffff           call 0x865850
// 0086783c  85c0                 test eax, eax
// 0086783e  7e1c                 jle 0x86785c
// 00867840  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00867844  56                   push esi
// 00867845  8bcf                 mov ecx, edi
// 00867847  e894eeffff           call 0x8666e0
// 0086784c  3bc3                 cmp eax, ebx
// 0086784e  7415                 je 0x867865
// 00867850  8bcf                 mov ecx, edi
// 00867852  46                   inc esi
// 00867853  e8f8dfffff           call 0x865850
// 00867858  3bf0                 cmp esi, eax
// 0086785a  7ce8                 jl 0x867844
// 0086785c  5f                   pop edi
// 0086785d  5e                   pop esi
// 0086785e  83c8ff               or eax, 0xffffffff
// 00867861  5b                   pop ebx
// 00867862  c20400               ret 4
// 00867865  5f                   pop edi
// 00867866  8bc6                 mov eax, esi
// 00867868  5e                   pop esi
// 00867869  5b                   pop ebx
// 0086786a  c20400               ret 4
// copied from an identical function in another client (function ?FindTabIndex@CXTPTabClientWnd@ns_ROCX000033@ns_ROCX0000e6@@QAEHH@Z)

namespace ns_ROCX000033 {
struct S_func_006d0ed0 {
    char pad0[444];
    int m_x;
    void f(int a1);
};
void S_func_006d0ed0::f(int a1)
{
    m_x = (int)a1;
}
}
