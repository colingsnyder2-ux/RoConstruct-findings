// roc 2010-06 0080ffa0  unit: CXTPStatusBarPane  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080ffa0
//
// 0080ffa0  53                   push ebx
// 0080ffa1  55                   push ebp
// 0080ffa2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0080ffa6  56                   push esi
// 0080ffa7  55                   push ebp
// 0080ffa8  8bd9                 mov ebx, ecx
// 0080ffaa  e821f3ffff           call 0x80f2d0
// 0080ffaf  8bf0                 mov esi, eax
// 0080ffb1  85f6                 test esi, esi
// 0080ffb3  7439                 je 0x80ffee
// 0080ffb5  8b4628               mov eax, dword ptr [esi + 0x28]
// 0080ffb8  57                   push edi
// 0080ffb9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0080ffbd  3bc7                 cmp eax, edi
// 0080ffbf  742c                 je 0x80ffed
// 0080ffc1  33c7                 xor eax, edi
// 0080ffc3  a900000008           test eax, 0x8000000
// 0080ffc8  740e                 je 0x80ffd8
// 0080ffca  6a00                 push 0
// 0080ffcc  6a01                 push 1
// 0080ffce  8bcb                 mov ecx, ebx
// 0080ffd0  897e28               mov dword ptr [esi + 0x28], edi
// 0080ffd3  e898fdffff           call 0x80fd70
// 0080ffd8  834e2c01             or dword ptr [esi + 0x2c], 1
// 0080ffdc  897e28               mov dword ptr [esi + 0x28], edi
// 0080ffdf  6a01                 push 1
// 0080ffe1  83c630               add esi, 0x30
// 0080ffe4  56                   push esi
// 0080ffe5  55                   push ebp
// 0080ffe6  8bcb                 mov ecx, ebx
// 0080ffe8  e8e3f3ffff           call 0x80f3d0
// 0080ffed  5f                   pop edi
// 0080ffee  5e                   pop esi
// 0080ffef  5d                   pop ebp
// 0080fff0  5b                   pop ebx
// 0080fff1  c20800               ret 8
// copied from an identical function in another client (function ?f@CXTPStatusBar@ns_ROCX00001a@ns_ROCX0000d5@@QAEXHH@Z)

namespace ns_ROCX00001a {
extern "C" void __cdecl G1_func_0074ffc0(void*);
struct S_func_0074ffc0 {
    virtual ~S_func_0074ffc0();
    void* m_p;
};
S_func_0074ffc0::~S_func_0074ffc0()
{
    if (m_p)
        G1_func_0074ffc0(m_p);
}
}
