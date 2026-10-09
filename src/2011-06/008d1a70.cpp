// roc 2011-06 008d1a70  unit: CXTPShadowsManager::CShadowWnd  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d1a70
//
// 008d1a70  8b442408             mov eax, dword ptr [esp + 8]
// 008d1a74  56                   push esi
// 008d1a75  85c0                 test eax, eax
// 008d1a77  7505                 jne 0x8d1a7e
// 008d1a79  8b7104               mov esi, dword ptr [ecx + 4]
// 008d1a7c  eb02                 jmp 0x8d1a80
// 008d1a7e  8b30                 mov esi, dword ptr [eax]
// 008d1a80  85f6                 test esi, esi
// 008d1a82  7418                 je 0x8d1a9c
// 008d1a84  8d442408             lea eax, [esp + 8]
// 008d1a88  50                   push eax
// 008d1a89  8d4e08               lea ecx, [esi + 8]
// 008d1a8c  51                   push ecx
// 008d1a8d  e8aee20100           call 0x8efd40
// 008d1a92  85c0                 test eax, eax
// 008d1a94  750c                 jne 0x8d1aa2
// 008d1a96  8b36                 mov esi, dword ptr [esi]
// 008d1a98  85f6                 test esi, esi
// 008d1a9a  75e8                 jne 0x8d1a84
// 008d1a9c  33c0                 xor eax, eax
// 008d1a9e  5e                   pop esi
// 008d1a9f  c20800               ret 8
// 008d1aa2  8bc6                 mov eax, esi
// 008d1aa4  5e                   pop esi
// 008d1aa5  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001e@ns_ROCX0000e7@@QAEHPAX0@Z)

namespace ns_ROCX00001e {
extern void G1_func_0065e450();
void fn_ROCX00001e()
{
    G1_func_0065e450();
}
}
