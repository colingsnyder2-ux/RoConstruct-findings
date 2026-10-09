// roc 2007-03 0067cfc0  unit: seg_00670000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067cfc0
//
// 0067cfc0  53                   push ebx
// 0067cfc1  55                   push ebp
// 0067cfc2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0067cfc6  56                   push esi
// 0067cfc7  55                   push ebp
// 0067cfc8  8bd9                 mov ebx, ecx
// 0067cfca  e8b1f6ffff           call 0x67c680
// 0067cfcf  8bf0                 mov esi, eax
// 0067cfd1  85f6                 test esi, esi
// 0067cfd3  7439                 je 0x67d00e
// 0067cfd5  8b4628               mov eax, dword ptr [esi + 0x28]
// 0067cfd8  57                   push edi
// 0067cfd9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0067cfdd  3bc7                 cmp eax, edi
// 0067cfdf  742c                 je 0x67d00d
// 0067cfe1  33c7                 xor eax, edi
// 0067cfe3  a900000008           test eax, 0x8000000
// 0067cfe8  740e                 je 0x67cff8
// 0067cfea  6a00                 push 0
// 0067cfec  6a01                 push 1
// 0067cfee  8bcb                 mov ecx, ebx
// 0067cff0  897e28               mov dword ptr [esi + 0x28], edi
// 0067cff3  e8f8fdffff           call 0x67cdf0
// 0067cff8  834e2c01             or dword ptr [esi + 0x2c], 1
// 0067cffc  897e28               mov dword ptr [esi + 0x28], edi
// 0067cfff  6a01                 push 1
// 0067d001  83c630               add esi, 0x30
// 0067d004  56                   push esi
// 0067d005  55                   push ebp
// 0067d006  8bcb                 mov ecx, ebx
// 0067d008  e853f8ffff           call 0x67c860
// 0067d00d  5f                   pop edi
// 0067d00e  5e                   pop esi
// 0067d00f  5d                   pop ebp
// 0067d010  5b                   pop ebx
// 0067d011  c20800               ret 8
// copied from an identical function in another client (function ?f@CXTPStatusBar@ns_ROCX00001c@@QAEXHH@Z)

namespace ns_ROCX00001c {
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
