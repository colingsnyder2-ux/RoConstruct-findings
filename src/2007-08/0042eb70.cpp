// from server: 19% by colin
// roc 2007-08 0042eb70  unit: CMainFrame  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042eb70
//
// 0042eb70  53                   push ebx
// 0042eb71  56                   push esi
// 0042eb72  57                   push edi
// 0042eb73  6a01                 push 1
// 0042eb75  83ec10               sub esp, 0x10
// 0042eb78  8bc4                 mov eax, esp
// 0042eb7a  33d2                 xor edx, edx
// 0042eb7c  8910                 mov dword ptr [eax], edx
// 0042eb7e  33f6                 xor esi, esi
// 0042eb80  897004               mov dword ptr [eax + 4], esi
// 0042eb83  bffa000000           mov edi, 0xfa
// 0042eb88  bb2c010000           mov ebx, 0x12c
// 0042eb8d  897808               mov dword ptr [eax + 8], edi
// 0042eb90  68c2000000           push 0xc2
// 0042eb95  89580c               mov dword ptr [eax + 0xc], ebx
// 0042eb98  e863ffffff           call 0x42eb00
// 0042eb9d  5f                   pop edi
// 0042eb9e  5e                   pop esi
// 0042eb9f  5b                   pop ebx
// 0042eba0  c3                   ret 

struct CMainFrame {
    void OnCreate();
};

extern "C" void __stdcall sub_42EB00(int, int, int, int, int);

void CMainFrame::OnCreate()
{
    sub_42EB00(1, 0, 0, 0xfa, 0x12c);
}
