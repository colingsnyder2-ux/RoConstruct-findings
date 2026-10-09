// roc 2008-06 006c72b0  unit: XTP_REPORTRECORDITEM_METRICS  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c72b0
//
// 006c72b0  53                   push ebx
// 006c72b1  56                   push esi
// 006c72b2  57                   push edi
// 006c72b3  8bf9                 mov edi, ecx
// 006c72b5  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006c72b8  33f6                 xor esi, esi
// 006c72ba  e8e1320300           call 0x6fa5a0
// 006c72bf  85c0                 test eax, eax
// 006c72c1  7e1c                 jle 0x6c72df
// 006c72c3  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006c72c7  56                   push esi
// 006c72c8  e873b30400           call 0x712640
// 006c72cd  395824               cmp dword ptr [eax + 0x24], ebx
// 006c72d0  740f                 je 0x6c72e1
// 006c72d2  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 006c72d5  46                   inc esi
// 006c72d6  e8c5320300           call 0x6fa5a0
// 006c72db  3bf0                 cmp esi, eax
// 006c72dd  7ce8                 jl 0x6c72c7
// 006c72df  33c0                 xor eax, eax
// 006c72e1  5f                   pop edi
// 006c72e2  5e                   pop esi
// 006c72e3  5b                   pop ebx
// 006c72e4  c20400               ret 4
// copied from an identical function in another client (function ?find@XTP_REPORTRECORDITEM_METRICS@ns_ROCX000024@ns_ROCX00008b@@QAEPAXH@Z)

namespace ns_ROCX000024 {
extern void G1_func_0080e670();
void fn_ROCX000024()
{
    G1_func_0080e670();
}
}
