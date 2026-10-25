// from server: 100% by atomic.potato
// roc 2008-06 006a66e0  unit: CXTPCommandBarsOptions  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a66e0
//
// 006a66e0  53                   push ebx
// 006a66e1  55                   push ebp
// 006a66e2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006a66e6  8bd9                 mov ebx, ecx
// 006a66e8  85ed                 test ebp, ebp
// 006a66ea  741f                 je 0x6a670b
// 006a66ec  56                   push esi
// 006a66ed  57                   push edi
// 006a66ee  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006a66f2  33f6                 xor esi, esi
// 006a66f4  85ff                 test edi, edi
// 006a66f6  7e11                 jle 0x6a6709
// 006a66f8  8b44b500             mov eax, dword ptr [ebp + esi*4]
// 006a66fc  50                   push eax
// 006a66fd  8bcb                 mov ecx, ebx
// 006a66ff  e8bcfaffff           call 0x6a61c0
// 006a6704  46                   inc esi
// 006a6705  3bf7                 cmp esi, edi
// 006a6707  7cef                 jl 0x6a66f8
// 006a6709  5f                   pop edi
// 006a670a  5e                   pop esi
// 006a670b  5d                   pop ebp
// 006a670c  5b                   pop ebx
// 006a670d  c20800               ret 8

struct CXTPCommandBarsOptions
{
    void f(unsigned int* values, int count);
    void hide(unsigned int value);
};

void CXTPCommandBarsOptions::f(unsigned int* values, int count)
{
    if (values != 0)
    {
        int i = 0;
        while (i < count)
        {
            hide(values[i]);
            ++i;
        }
    }
}
