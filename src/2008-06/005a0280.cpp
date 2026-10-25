// from server: 100% by king_originala
// roc 2008-06 005a0280  unit: RBX::Workspace  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0280
//
// 005a0280  6aff                 push -1
// 005a0282  683bf47b00           push 0x7bf43b
// 005a0287  64a100000000         mov eax, dword ptr fs:[0]
// 005a028d  50                   push eax
// 005a028e  64892500000000       mov dword ptr fs:[0], esp
// 005a0295  51                   push ecx
// 005a0296  6a48                 push 0x48
// 005a0298  e883061000           call 0x6a0920
// 005a029d  83c404               add esp, 4
// 005a02a0  890424               mov dword ptr [esp], eax
// 005a02a3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005a02ab  85c0                 test eax, eax
// 005a02ad  741b                 je 0x5a02ca
// 005a02af  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a02b3  51                   push ecx
// 005a02b4  8bc8                 mov ecx, eax
// 005a02b6  e8a57e0700           call 0x618160
// 005a02bb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a02bf  64890d00000000       mov dword ptr fs:[0], ecx
// 005a02c6  83c410               add esp, 0x10
// 005a02c9  c3                   ret 
// 005a02ca  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a02ce  33c0                 xor eax, eax
// 005a02d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a02d7  83c410               add esp, 0x10
// 005a02da  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    unsigned char storage[0x48];
    S(void* arg);
};

S* __cdecl create(void* arg)
{
    return new S(arg);
}
