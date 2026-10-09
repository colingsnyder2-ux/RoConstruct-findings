// roc 2011-06 0087dac0  unit: CXTPWinThemeWrapper  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0087dac0
//
// 0087dac0  53                   push ebx
// 0087dac1  56                   push esi
// 0087dac2  57                   push edi
// 0087dac3  8bf9                 mov edi, ecx
// 0087dac5  e806670200           call 0x8a41d0
// 0087daca  8bd8                 mov ebx, eax
// 0087dacc  33f6                 xor esi, esi
// 0087dace  85db                 test ebx, ebx
// 0087dad0  7e29                 jle 0x87dafb
// 0087dad2  55                   push ebp
// 0087dad3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0087dad7  56                   push esi
// 0087dad8  8bcf                 mov ecx, edi
// 0087dada  e871ffffff           call 0x87da50
// 0087dadf  3bc5                 cmp eax, ebp
// 0087dae1  740c                 je 0x87daef
// 0087dae3  46                   inc esi
// 0087dae4  3bf3                 cmp esi, ebx
// 0087dae6  7cef                 jl 0x87dad7
// 0087dae8  5d                   pop ebp
// 0087dae9  5f                   pop edi
// 0087daea  5e                   pop esi
// 0087daeb  5b                   pop ebx
// 0087daec  c20400               ret 4
// 0087daef  6a01                 push 1
// 0087daf1  56                   push esi
// 0087daf2  8d4f24               lea ecx, [edi + 0x24]
// 0087daf5  e886c7faff           call 0x82a280
// 0087dafa  5d                   pop ebp
// 0087dafb  5f                   pop edi
// 0087dafc  5e                   pop esi
// 0087dafd  5b                   pop ebx
// 0087dafe  c20400               ret 4
// copied from an identical function in another client (function ?FindRow@CXTPReportRow_Batch@ns_ROCX00003b@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX00003b {
struct B_func_00761570 { virtual ~B_func_00761570(); };
struct S_func_00761570 : B_func_00761570 { ~S_func_00761570(); };
S_func_00761570::~S_func_00761570()
{
}
}
