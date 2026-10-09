// roc 2008-06 0070f8a0  unit: CXTPStatusBarPane  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070f8a0
//
// 0070f8a0  53                   push ebx
// 0070f8a1  55                   push ebp
// 0070f8a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0070f8a6  56                   push esi
// 0070f8a7  55                   push ebp
// 0070f8a8  8bd9                 mov ebx, ecx
// 0070f8aa  e821f3ffff           call 0x70ebd0
// 0070f8af  8bf0                 mov esi, eax
// 0070f8b1  85f6                 test esi, esi
// 0070f8b3  7439                 je 0x70f8ee
// 0070f8b5  8b4628               mov eax, dword ptr [esi + 0x28]
// 0070f8b8  57                   push edi
// 0070f8b9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0070f8bd  3bc7                 cmp eax, edi
// 0070f8bf  742c                 je 0x70f8ed
// 0070f8c1  33c7                 xor eax, edi
// 0070f8c3  a900000008           test eax, 0x8000000
// 0070f8c8  740e                 je 0x70f8d8
// 0070f8ca  6a00                 push 0
// 0070f8cc  6a01                 push 1
// 0070f8ce  8bcb                 mov ecx, ebx
// 0070f8d0  897e28               mov dword ptr [esi + 0x28], edi
// 0070f8d3  e898fdffff           call 0x70f670
// 0070f8d8  834e2c01             or dword ptr [esi + 0x2c], 1
// 0070f8dc  897e28               mov dword ptr [esi + 0x28], edi
// 0070f8df  6a01                 push 1
// 0070f8e1  83c630               add esi, 0x30
// 0070f8e4  56                   push esi
// 0070f8e5  55                   push ebp
// 0070f8e6  8bcb                 mov ecx, ebx
// 0070f8e8  e8e3f3ffff           call 0x70ecd0
// 0070f8ed  5f                   pop edi
// 0070f8ee  5e                   pop esi
// 0070f8ef  5d                   pop ebp
// 0070f8f0  5b                   pop ebx
// 0070f8f1  c20800               ret 8
// copied from an identical function in another client (function ?f@CXTPStatusBar@ns_ROCX000009@@QAEXHH@Z)

namespace ns_ROCX000009 {
struct CXTPStatusBar {
    int* sub_00692C60(int);
    void sub_006933D0(int, int);
    void sub_00692E40(int, int, int);
    void f(int, int);
};

void CXTPStatusBar::f(int a, int b)
{
    int* p = sub_00692C60(a);
    if (p != 0) {
        int old = p[10];
        if (old != b) {
            if ((old ^ b) & 0x8000000) {
                p[10] = b;
                sub_006933D0(1, 0);
            }
            p[11] |= 1;
            p[10] = b;
            sub_00692E40(a, (int)(p + 12), 1);
        }
    }
}
}
