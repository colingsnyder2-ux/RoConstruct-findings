// from server: 17% by colin
// roc 2007-08 006a2f70  unit: PAVCXTPHookManagerHookAble::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a2f70
//
// 006a2f70  6aff                 push -1
// 006a2f72  68e8447600           push 0x7644e8
// 006a2f77  64a100000000         mov eax, dword ptr fs:[0]
// 006a2f7d  50                   push eax
// 006a2f7e  51                   push ecx
// 006a2f7f  56                   push esi
// 006a2f80  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a2f85  33c4                 xor eax, esp
// 006a2f87  50                   push eax
// 006a2f88  8d44240c             lea eax, [esp + 0xc]
// 006a2f8c  64a300000000         mov dword ptr fs:[0], eax
// 006a2f92  8bf1                 mov esi, ecx
// 006a2f94  89742408             mov dword ptr [esp + 8], esi
// 006a2f98  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a2fa0  e85bfcffff           call 0x6a2c00
// 006a2fa5  8bce                 mov ecx, esi
// 006a2fa7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a2faf  e89cfdffff           call 0x6a2d50
// 006a2fb4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a2fb8  64890d00000000       mov dword ptr fs:[0], ecx
// 006a2fbf  59                   pop ecx
// 006a2fc0  5e                   pop esi
// 006a2fc1  83c410               add esp, 0x10
// 006a2fc4  c3                   ret 

struct CXTPHookManagerHookAble {
    void f1();
    void f2();
    void dtor();
};

void CXTPHookManagerHookAble::dtor()
{
    f1();
    f2();
}
