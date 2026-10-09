// roc 2011-06 0086d790  unit: CXTPStatusBarPane  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086d790
//
// 0086d790  53                   push ebx
// 0086d791  55                   push ebp
// 0086d792  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0086d796  56                   push esi
// 0086d797  55                   push ebp
// 0086d798  8bd9                 mov ebx, ecx
// 0086d79a  e8c1f2ffff           call 0x86ca60
// 0086d79f  8bf0                 mov esi, eax
// 0086d7a1  85f6                 test esi, esi
// 0086d7a3  7439                 je 0x86d7de
// 0086d7a5  8b4628               mov eax, dword ptr [esi + 0x28]
// 0086d7a8  57                   push edi
// 0086d7a9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0086d7ad  3bc7                 cmp eax, edi
// 0086d7af  742c                 je 0x86d7dd
// 0086d7b1  33c7                 xor eax, edi
// 0086d7b3  a900000008           test eax, 0x8000000
// 0086d7b8  740e                 je 0x86d7c8
// 0086d7ba  6a00                 push 0
// 0086d7bc  6a01                 push 1
// 0086d7be  8bcb                 mov ecx, ebx
// 0086d7c0  897e28               mov dword ptr [esi + 0x28], edi
// 0086d7c3  e898fdffff           call 0x86d560
// 0086d7c8  834e2c01             or dword ptr [esi + 0x2c], 1
// 0086d7cc  897e28               mov dword ptr [esi + 0x28], edi
// 0086d7cf  6a01                 push 1
// 0086d7d1  83c630               add esi, 0x30
// 0086d7d4  56                   push esi
// 0086d7d5  55                   push ebp
// 0086d7d6  8bcb                 mov ecx, ebx
// 0086d7d8  e883f3ffff           call 0x86cb60
// 0086d7dd  5f                   pop edi
// 0086d7de  5e                   pop esi
// 0086d7df  5d                   pop ebp
// 0086d7e0  5b                   pop ebx
// 0086d7e1  c20800               ret 8
// copied from an identical function in another client (function ?f@CXTPStatusBar@ns_ROCX000009@ns_ROCX00001e@@QAEXHH@Z)

namespace ns_ROCX000009 {
struct S_func_0070bdf0 {

    void f(int a1);
};
void S_func_0070bdf0::f(int a1)
{
}
}
