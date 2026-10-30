// roc 2009-12 00817c90  unit: CXTPCommandBarsOptions  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00817c90
//
// 00817c90  53                   push ebx
// 00817c91  55                   push ebp
// 00817c92  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00817c96  8bd9                 mov ebx, ecx
// 00817c98  85ed                 test ebp, ebp
// 00817c9a  741f                 je 0x817cbb
// 00817c9c  56                   push esi
// 00817c9d  57                   push edi
// 00817c9e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00817ca2  33f6                 xor esi, esi
// 00817ca4  85ff                 test edi, edi
// 00817ca6  7e11                 jle 0x817cb9
// 00817ca8  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 00817cac  50                   push eax
// 00817cad  8bcb                 mov ecx, ebx
// 00817caf  e8bcfaffff           call 0x817770
// 00817cb4  46                   inc esi
// 00817cb5  3bf7                 cmp esi, edi
// 00817cb7  7cef                 jl 0x817ca8
// 00817cb9  5f                   pop edi
// 00817cba  5e                   pop esi
// 00817cbb  5d                   pop ebp
// 00817cbc  5b                   pop ebx
// 00817cbd  c20800               ret 8
// copied from an identical function in another client (function ?f@S@ns_ROCX000004@@QAEXPAHH@Z)

namespace ns_ROCX000004 {
// from server: 100% by atomic.potato
struct S
{
    void f(int*, int);
    void g(int);
};

void S::f(int* p, int n)
{
    if (p)
    {
        int i = 0;
        while (i < n)
        {
            g(p[i]);
            ++i;
        }
    }
}
}
