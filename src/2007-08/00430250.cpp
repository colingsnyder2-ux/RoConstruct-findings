// from server: 30% by colin
// roc 2007-08 00430250  unit: CMainFrame  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430250
//
// 00430250  53                   push ebx
// 00430251  56                   push esi
// 00430252  57                   push edi
// 00430253  33f6                 xor esi, esi
// 00430255  56                   push esi
// 00430256  83ec10               sub esp, 0x10
// 00430259  8bc4                 mov eax, esp
// 0043025b  33d2                 xor edx, edx
// 0043025d  8910                 mov dword ptr [eax], edx
// 0043025f  897004               mov dword ptr [eax + 4], esi
// 00430262  bf18010000           mov edi, 0x118
// 00430267  bb90010000           mov ebx, 0x190
// 0043026c  897808               mov dword ptr [eax + 8], edi
// 0043026f  68bf000000           push 0xbf
// 00430274  89580c               mov dword ptr [eax + 0xc], ebx
// 00430277  e884e8ffff           call 0x42eb00
// 0043027c  5f                   pop edi
// 0043027d  5e                   pop esi
// 0043027e  5b                   pop ebx
// 0043027f  c3                   ret 

struct CMainFrame {
    void sub_430250();
};

extern "C" void __stdcall sub_42EB00(int a, int b, int c, int d, int e);

void CMainFrame::sub_430250()
{
    int v[4];
    v[0] = 0;
    v[1] = 0;
    v[2] = 0x118;
    v[3] = 0x190;
    sub_42EB00(0xbf, v[0], v[1], v[2], v[3]);
}
