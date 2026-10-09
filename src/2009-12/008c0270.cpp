// roc 2009-12 008c0270  unit: CXTPShadowsManager::CShadowWnd  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c0270
//
// 008c0270  8b442408             mov eax, dword ptr [esp + 8]
// 008c0274  56                   push esi
// 008c0275  85c0                 test eax, eax
// 008c0277  7505                 jne 0x8c027e
// 008c0279  8b7104               mov esi, dword ptr [ecx + 4]
// 008c027c  eb02                 jmp 0x8c0280
// 008c027e  8b30                 mov esi, dword ptr [eax]
// 008c0280  85f6                 test esi, esi
// 008c0282  7418                 je 0x8c029c
// 008c0284  8d442408             lea eax, [esp + 8]
// 008c0288  50                   push eax
// 008c0289  8d4e08               lea ecx, [esi + 8]
// 008c028c  51                   push ecx
// 008c028d  e82e02fbff           call 0x8704c0
// 008c0292  85c0                 test eax, eax
// 008c0294  750c                 jne 0x8c02a2
// 008c0296  8b36                 mov esi, dword ptr [esi]
// 008c0298  85f6                 test esi, esi
// 008c029a  75e8                 jne 0x8c0284
// 008c029c  33c0                 xor eax, eax
// 008c029e  5e                   pop esi
// 008c029f  c20800               ret 8
// 008c02a2  8bc6                 mov eax, esi
// 008c02a4  5e                   pop esi
// 008c02a5  c20800               ret 8
// copied from an identical function in another client (function ?find@CXTPHookManagerHookAble@ns_ROCX00001d@ns_ROCX00006d@@QAEHPAX0@Z)

namespace ns_ROCX00001d {
extern "C" void __cdecl G1_func_007b27a0(void*);
struct S_func_007b27a0 {
    virtual ~S_func_007b27a0();
    void* m_p;
};
S_func_007b27a0::~S_func_007b27a0()
{
    if (m_p)
        G1_func_007b27a0(m_p);
}
}
