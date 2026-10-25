// from server: 100% by king_originala
// roc 2008-06 00433fc0  unit: CMemberTreeView  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00433fc0
//
// 00433fc0  6aff                 push -1
// 00433fc2  681afa7b00           push 0x7bfa1a
// 00433fc7  64a100000000         mov eax, dword ptr fs:[0]
// 00433fcd  50                   push eax
// 00433fce  64892500000000       mov dword ptr fs:[0], esp
// 00433fd5  51                   push ecx
// 00433fd6  68b0000000           push 0xb0
// 00433fdb  e840c92600           call 0x6a0920
// 00433fe0  83c404               add esp, 4
// 00433fe3  890424               mov dword ptr [esp], eax
// 00433fe6  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00433fee  85c0                 test eax, eax
// 00433ff0  7416                 je 0x434008
// 00433ff2  8bc8                 mov ecx, eax
// 00433ff4  e8d7f8ffff           call 0x4338d0
// 00433ff9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00433ffd  64890d00000000       mov dword ptr fs:[0], ecx
// 00434004  83c410               add esp, 0x10
// 00434007  c3                   ret 
// 00434008  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043400c  33c0                 xor eax, eax
// 0043400e  64890d00000000       mov dword ptr fs:[0], ecx
// 00434015  83c410               add esp, 0x10
// 00434018  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S
{
    char storage[0xB0];
    S();
};

S* func_00433fc0()
{
    return new S;
}
