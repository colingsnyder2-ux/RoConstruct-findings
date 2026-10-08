// from server: 18% by colin
// roc 2007-08 0042f090  unit: CWrapperView  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042f090
//
// 0042f090  53                   push ebx
// 0042f091  56                   push esi
// 0042f092  57                   push edi
// 0042f093  33f6                 xor esi, esi
// 0042f095  56                   push esi
// 0042f096  83ec10               sub esp, 0x10
// 0042f099  8bc4                 mov eax, esp
// 0042f09b  33d2                 xor edx, edx
// 0042f09d  8910                 mov dword ptr [eax], edx
// 0042f09f  897004               mov dword ptr [eax + 4], esi
// 0042f0a2  bf96000000           mov edi, 0x96
// 0042f0a7  bb90010000           mov ebx, 0x190
// 0042f0ac  897808               mov dword ptr [eax + 8], edi
// 0042f0af  688c000000           push 0x8c
// 0042f0b4  89580c               mov dword ptr [eax + 0xc], ebx
// 0042f0b7  e844faffff           call 0x42eb00
// 0042f0bc  5f                   pop edi
// 0042f0bd  5e                   pop esi
// 0042f0be  5b                   pop ebx
// 0042f0bf  c3                   ret 

struct CWrapperView
{
    void func_0042f090();
};

extern "C" void __cdecl func_0042eb00(int, int, int, int, int);

void CWrapperView::func_0042f090()
{
    func_0042eb00(0, 0, 0x96, 0x190, 0x8c);
}
