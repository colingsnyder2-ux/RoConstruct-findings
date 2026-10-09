// from server: 48% by colin
// roc 2007-08 0044a900  unit: CRobloxApp  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a900
//
// 0044a900  6aff                 push -1
// 0044a902  6829ff7300           push 0x73ff29
// 0044a907  64a100000000         mov eax, dword ptr fs:[0]
// 0044a90d  50                   push eax
// 0044a90e  a188518b00           mov eax, dword ptr [0x8b5188]
// 0044a913  33c4                 xor eax, esp
// 0044a915  50                   push eax
// 0044a916  8d442404             lea eax, [esp + 4]
// 0044a91a  64a300000000         mov dword ptr fs:[0], eax
// 0044a920  8d442414             lea eax, [esp + 0x14]
// 0044a924  50                   push eax
// 0044a925  b990be8b00           mov ecx, 0x8bbe90
// 0044a92a  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044a932  ff1534d47700         call dword ptr [0x77d434]
// 0044a938  8d4c2414             lea ecx, [esp + 0x14]
// 0044a93c  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0044a942  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0044a946  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a94d  59                   pop ecx
// 0044a94e  83c40c               add esp, 0xc
// 0044a951  c3                   ret 

extern "C" {
    int __stdcall sub_77D434(void*);
    int __stdcall sub_77DDBC(void*);
}

struct CRobloxApp {
    void sub_44A900();
};

void CRobloxApp::sub_44A900()
{
    char buf[16];
    *(int*)buf = 0;
    sub_77D434(buf);
    sub_77DDBC(buf);
}
