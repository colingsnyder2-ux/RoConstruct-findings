// roc 2009-06 00780f70  unit: CXTPStatusBarPane  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780f70
//
// 00780f70  53                   push ebx
// 00780f71  55                   push ebp
// 00780f72  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00780f76  56                   push esi
// 00780f77  55                   push ebp
// 00780f78  8bd9                 mov ebx, ecx
// 00780f7a  e821f3ffff           call 0x7802a0
// 00780f7f  8bf0                 mov esi, eax
// 00780f81  85f6                 test esi, esi
// 00780f83  7439                 je 0x780fbe
// 00780f85  8b4628               mov eax, dword ptr [esi + 0x28]
// 00780f88  57                   push edi
// 00780f89  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00780f8d  3bc7                 cmp eax, edi
// 00780f8f  742c                 je 0x780fbd
// 00780f91  33c7                 xor eax, edi
// 00780f93  a900000008           test eax, 0x8000000
// 00780f98  740e                 je 0x780fa8
// 00780f9a  6a00                 push 0
// 00780f9c  6a01                 push 1
// 00780f9e  8bcb                 mov ecx, ebx
// 00780fa0  897e28               mov dword ptr [esi + 0x28], edi
// 00780fa3  e898fdffff           call 0x780d40
// 00780fa8  834e2c01             or dword ptr [esi + 0x2c], 1
// 00780fac  897e28               mov dword ptr [esi + 0x28], edi
// 00780faf  6a01                 push 1
// 00780fb1  83c630               add esi, 0x30
// 00780fb4  56                   push esi
// 00780fb5  55                   push ebp
// 00780fb6  8bcb                 mov ecx, ebx
// 00780fb8  e8e3f3ffff           call 0x7803a0
// 00780fbd  5f                   pop edi
// 00780fbe  5e                   pop esi
// 00780fbf  5d                   pop ebp
// 00780fc0  5b                   pop ebx
// 00780fc1  c20800               ret 8
// copied from an identical function in another client (function ?f@CXTPStatusBar@ns_ROCX00001a@@QAEXHH@Z)

namespace ns_ROCX00001a {
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
