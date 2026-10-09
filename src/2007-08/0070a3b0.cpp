// from server: 27% by colin
// roc 2007-08 0070a3b0  unit: CXTColorPageStandard  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070a3b0
//
// 0070a3b0  6aff                 push -1
// 0070a3b2  68b89d7600           push 0x769db8
// 0070a3b7  64a100000000         mov eax, dword ptr fs:[0]
// 0070a3bd  50                   push eax
// 0070a3be  51                   push ecx
// 0070a3bf  56                   push esi
// 0070a3c0  a188518b00           mov eax, dword ptr [0x8b5188]
// 0070a3c5  33c4                 xor eax, esp
// 0070a3c7  50                   push eax
// 0070a3c8  8d44240c             lea eax, [esp + 0xc]
// 0070a3cc  64a300000000         mov dword ptr fs:[0], eax
// 0070a3d2  8bf1                 mov esi, ecx
// 0070a3d4  89742408             mov dword ptr [esp + 8], esi
// 0070a3d8  c7060cd77d00         mov dword ptr [esi], 0x7dd70c
// 0070a3de  8d8e88000000         lea ecx, [esi + 0x88]
// 0070a3e4  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0070a3ec  e88ff9ffff           call 0x709d80
// 0070a3f1  8bce                 mov ecx, esi
// 0070a3f3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0070a3fb  e878e30200           call 0x738778
// 0070a400  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0070a404  64890d00000000       mov dword ptr fs:[0], ecx
// 0070a40b  59                   pop ecx
// 0070a40c  5e                   pop esi
// 0070a40d  83c410               add esp, 0x10
// 0070a410  c3                   ret 

struct CXTColorPageStandard {
    char pad[0x88];
    void sub_709D80();
    void sub_738778();
    CXTColorPageStandard();
};

CXTColorPageStandard::CXTColorPageStandard()
{
    *(void**)this = (void*)0x7dd70c;
    sub_709D80();
    sub_738778();
}
