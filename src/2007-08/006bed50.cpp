// from server: 21% by colin
// roc 2007-08 006bed50  unit: CXTPOffice2007Theme  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006bed50
//
// 006bed50  6aff                 push -1
// 006bed52  68985b7600           push 0x765b98
// 006bed57  64a100000000         mov eax, dword ptr fs:[0]
// 006bed5d  50                   push eax
// 006bed5e  51                   push ecx
// 006bed5f  56                   push esi
// 006bed60  a188518b00           mov eax, dword ptr [0x8b5188]
// 006bed65  33c4                 xor eax, esp
// 006bed67  50                   push eax
// 006bed68  8d44240c             lea eax, [esp + 0xc]
// 006bed6c  64a300000000         mov dword ptr fs:[0], eax
// 006bed72  8bf1                 mov esi, ecx
// 006bed74  89742408             mov dword ptr [esp + 8], esi
// 006bed78  c7066c6f7d00         mov dword ptr [esi], 0x7d6f6c
// 006bed7e  8d8e28050000         lea ecx, [esi + 0x528]
// 006bed84  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006bed8c  e82917f7ff           call 0x6304ba
// 006bed91  8bce                 mov ecx, esi
// 006bed93  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006bed9b  e8f044f8ff           call 0x643290
// 006beda0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006beda4  64890d00000000       mov dword ptr fs:[0], ecx
// 006bedab  59                   pop ecx
// 006bedac  5e                   pop esi
// 006bedad  83c410               add esp, 0x10
// 006bedb0  c3                   ret 

struct CXTPOffice2007Theme
{
    void dtor();
};

extern void func_006304ba();
extern void func_00643290();

void CXTPOffice2007Theme::dtor()
{
    *(int*)this = 0x7d6f6c;
    func_006304ba();
    func_00643290();
}
