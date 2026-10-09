// roc 2010-06 008203b0  unit: CXTPWinThemeWrapper  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008203b0
//
// 008203b0  53                   push ebx
// 008203b1  56                   push esi
// 008203b2  57                   push edi
// 008203b3  8bf9                 mov edi, ecx
// 008203b5  e89687f9ff           call 0x7b8b50
// 008203ba  8bd8                 mov ebx, eax
// 008203bc  33f6                 xor esi, esi
// 008203be  85db                 test ebx, ebx
// 008203c0  7e29                 jle 0x8203eb
// 008203c2  55                   push ebp
// 008203c3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008203c7  56                   push esi
// 008203c8  8bcf                 mov ecx, edi
// 008203ca  e871ffffff           call 0x820340
// 008203cf  3bc5                 cmp eax, ebp
// 008203d1  740c                 je 0x8203df
// 008203d3  46                   inc esi
// 008203d4  3bf3                 cmp esi, ebx
// 008203d6  7cef                 jl 0x8203c7
// 008203d8  5d                   pop ebp
// 008203d9  5f                   pop edi
// 008203da  5e                   pop esi
// 008203db  5b                   pop ebx
// 008203dc  c20400               ret 4
// 008203df  6a01                 push 1
// 008203e1  56                   push esi
// 008203e2  8d4f24               lea ecx, [edi + 0x24]
// 008203e5  e85686f9ff           call 0x7b8a40
// 008203ea  5d                   pop ebp
// 008203eb  5f                   pop edi
// 008203ec  5e                   pop esi
// 008203ed  5b                   pop ebx
// 008203ee  c20400               ret 4
// copied from an identical function in another client (function ?FindRow@CXTPReportRow_Batch@ns_ROCX00004b@ns_ROCX000033@@QAEXH@Z)

namespace ns_ROCX00004b {
extern char G;

char* fn_ROCX00004b()
{
    return &G;
}
}
