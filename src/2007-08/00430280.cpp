// from server: 19% by colin
// roc 2007-08 00430280  unit: CMainFrame  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00430280
//
// 00430280  53                   push ebx
// 00430281  56                   push esi
// 00430282  57                   push edi
// 00430283  6a03                 push 3
// 00430285  83ec10               sub esp, 0x10
// 00430288  8bc4                 mov eax, esp
// 0043028a  33d2                 xor edx, edx
// 0043028c  8910                 mov dword ptr [eax], edx
// 0043028e  33f6                 xor esi, esi
// 00430290  897004               mov dword ptr [eax + 4], esi
// 00430293  bf80020000           mov edi, 0x280
// 00430298  bbc8000000           mov ebx, 0xc8
// 0043029d  897808               mov dword ptr [eax + 8], edi
// 004302a0  68c0000000           push 0xc0
// 004302a5  89580c               mov dword ptr [eax + 0xc], ebx
// 004302a8  e853e8ffff           call 0x42eb00
// 004302ad  5f                   pop edi
// 004302ae  5e                   pop esi
// 004302af  5b                   pop ebx
// 004302b0  c3                   ret 

struct CMainFrame
{
    void method_00430280();
};

extern "C" void __stdcall sub_0042EB00(int a, int b, int c, int d, int e);

void CMainFrame::method_00430280()
{
    int arr[4];
    arr[0] = 0;
    arr[1] = 0;
    arr[2] = 0x280;
    arr[3] = 0xc8;
    sub_0042EB00(3, arr[0], arr[1], arr[2], arr[3]);
}
