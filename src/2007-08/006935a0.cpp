// from server: 100% by colin
// roc 2007-08 006935a0  unit: CXTPStatusBar  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006935a0
//
// 006935a0  53                   push ebx
// 006935a1  55                   push ebp
// 006935a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006935a6  56                   push esi
// 006935a7  55                   push ebp
// 006935a8  8bd9                 mov ebx, ecx
// 006935aa  e8b1f6ffff           call 0x692c60
// 006935af  8bf0                 mov esi, eax
// 006935b1  85f6                 test esi, esi
// 006935b3  7439                 je 0x6935ee
// 006935b5  8b4628               mov eax, dword ptr [esi + 0x28]
// 006935b8  57                   push edi
// 006935b9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006935bd  3bc7                 cmp eax, edi
// 006935bf  742c                 je 0x6935ed
// 006935c1  33c7                 xor eax, edi
// 006935c3  a900000008           test eax, 0x8000000
// 006935c8  740e                 je 0x6935d8
// 006935ca  6a00                 push 0
// 006935cc  6a01                 push 1
// 006935ce  8bcb                 mov ecx, ebx
// 006935d0  897e28               mov dword ptr [esi + 0x28], edi
// 006935d3  e8f8fdffff           call 0x6933d0
// 006935d8  834e2c01             or dword ptr [esi + 0x2c], 1
// 006935dc  897e28               mov dword ptr [esi + 0x28], edi
// 006935df  6a01                 push 1
// 006935e1  83c630               add esi, 0x30
// 006935e4  56                   push esi
// 006935e5  55                   push ebp
// 006935e6  8bcb                 mov ecx, ebx
// 006935e8  e853f8ffff           call 0x692e40
// 006935ed  5f                   pop edi
// 006935ee  5e                   pop esi
// 006935ef  5d                   pop ebp
// 006935f0  5b                   pop ebx
// 006935f1  c20800               ret 8

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
