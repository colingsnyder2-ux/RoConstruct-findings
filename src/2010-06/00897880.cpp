// roc 2010-06 00897880  unit: CXTShadowWnd  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00897880
//
// 00897880  8b442408             mov eax, dword ptr [esp + 8]
// 00897884  56                   push esi
// 00897885  85c0                 test eax, eax
// 00897887  7505                 jne 0x89788e
// 00897889  8b7104               mov esi, dword ptr [ecx + 4]
// 0089788c  eb02                 jmp 0x897890
// 0089788e  8b30                 mov esi, dword ptr [eax]
// 00897890  85f6                 test esi, esi
// 00897892  7418                 je 0x8978ac
// 00897894  8d442408             lea eax, [esp + 8]
// 00897898  50                   push eax
// 00897899  8d4e08               lea ecx, [esi + 8]
// 0089789c  51                   push ecx
// 0089789d  e8aec9fdff           call 0x874250
// 008978a2  85c0                 test eax, eax
// 008978a4  750c                 jne 0x8978b2
// 008978a6  8b36                 mov esi, dword ptr [esi]
// 008978a8  85f6                 test esi, esi
// 008978aa  75e8                 jne 0x897894
// 008978ac  33c0                 xor eax, eax
// 008978ae  5e                   pop esi
// 008978af  c20800               ret 8
// 008978b2  8bc6                 mov eax, esi
// 008978b4  5e                   pop esi
// 008978b5  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001d@ns_ROCX0000b4@@QAEHPAX0@Z)

namespace ns_ROCX00001d {
extern char G;

char* fn_ROCX00001d()
{
    return &G;
}
}
