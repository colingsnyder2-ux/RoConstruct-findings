// from server: 100% by king_originala
// roc 2008-06 00459fd0  unit: CRobloxView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00459fd0
//
// 00459fd0  6aff                 push -1
// 00459fd2  681afa7b00           push 0x7bfa1a
// 00459fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00459fdd  50                   push eax
// 00459fde  64892500000000       mov dword ptr fs:[0], esp
// 00459fe5  51                   push ecx
// 00459fe6  68f0010000           push 0x1f0
// 00459feb  e830692400           call 0x6a0920
// 00459ff0  83c404               add esp, 4
// 00459ff3  890424               mov dword ptr [esp], eax
// 00459ff6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00459ffe  85c0                 test eax, eax
// 0045a000  7416                 je 0x45a018
// 0045a002  8bc8                 mov ecx, eax
// 0045a004  e8a7feffff           call 0x459eb0
// 0045a009  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045a00d  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a014  83c410               add esp, 0x10
// 0045a017  c3                   ret 
// 0045a018  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0045a01c  33c0                 xor eax, eax
// 0045a01e  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a025  83c410               add esp, 0x10
// 0045a028  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S
{
    char storage[0x1f0];
    S();
};

S* __cdecl f()
{
    return new S;
}
