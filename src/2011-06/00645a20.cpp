// from server: 80% by atomic.potato
// roc 2011-06 00645a20  unit: RBX::Workspace  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00645a20
//
// 00645a20  53                   push ebx
// 00645a21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00645a25  55                   push ebp
// 00645a26  56                   push esi
// 00645a27  57                   push edi
// 00645a28  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00645a2c  57                   push edi
// 00645a2d  53                   push ebx
// 00645a2e  e89dffffff           call 0x6459d0
// 00645a33  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00645a37  8bf0                 mov esi, eax
// 00645a39  8b442428             mov eax, dword ptr [esp + 0x28]
// 00645a3d  50                   push eax
// 00645a3e  51                   push ecx
// 00645a3f  e88cffffff           call 0x6459d0
// 00645a44  83c410               add esp, 0x10
// 00645a47  8be8                 mov ebp, eax
// 00645a49  8bcb                 mov ecx, ebx
// 00645a4b  85f6                 test esi, esi
// 00645a4d  7f02                 jg 0x645a51
// 00645a4f  8bcf                 mov ecx, edi
// 00645a51  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00645a55  85ed                 test ebp, ebp
// 00645a57  7f04                 jg 0x645a5d
// 00645a59  8b442420             mov eax, dword ptr [esp + 0x20]
// 00645a5d  50                   push eax
// 00645a5e  51                   push ecx
// 00645a5f  e86cffffff           call 0x6459d0
// 00645a64  83c408               add esp, 8
// 00645a67  85c0                 test eax, eax
// 00645a69  751c                 jne 0x645a87
// 00645a6b  85f6                 test esi, esi
// 00645a6d  7f02                 jg 0x645a71
// 00645a6f  8bfb                 mov edi, ebx
// 00645a71  8b442420             mov eax, dword ptr [esp + 0x20]
// 00645a75  85ed                 test ebp, ebp
// 00645a77  7f04                 jg 0x645a7d
// 00645a79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00645a7d  50                   push eax
// 00645a7e  57                   push edi
// 00645a7f  e84cffffff           call 0x6459d0
// 00645a84  83c408               add esp, 8
// 00645a87  5f                   pop edi
// 00645a88  5e                   pop esi
// 00645a89  5d                   pop ebp
// 00645a8a  5b                   pop ebx
// 00645a8b  c3                   ret 

extern "C" int __cdecl sub_006459D0(int a, int b);

int sub_00645A20(int a, int b, int c, int d, int e, int f) {
    int esi = sub_006459D0(a, b);
    int ebp = sub_006459D0(c, d);
    int ecx = (esi > 0) ? a : b;
    int eax = (ebp > 0) ? e : f;
    int r = sub_006459D0(ecx, eax);
    if (r == 0) {
        int edi = (esi > 0) ? b : a;
        int eax2 = (ebp > 0) ? f : e;
        r = sub_006459D0(edi, eax2);
    }
    return r;
}
