// from server: 100% by king_originala
// roc 2008-06 0049a040  unit: RBX::VInstance::?$SignalDesc  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049a040
//
// 0049a040  6aff                 push -1
// 0049a042  683bf47b00           push 0x7bf43b
// 0049a047  64a100000000         mov eax, dword ptr fs:[0]
// 0049a04d  50                   push eax
// 0049a04e  64892500000000       mov dword ptr fs:[0], esp
// 0049a055  51                   push ecx
// 0049a056  6a2c                 push 0x2c
// 0049a058  e8c3682000           call 0x6a0920
// 0049a05d  83c404               add esp, 4
// 0049a060  890424               mov dword ptr [esp], eax
// 0049a063  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0049a06b  85c0                 test eax, eax
// 0049a06d  741b                 je 0x49a08a
// 0049a06f  8bc8                 mov ecx, eax
// 0049a071  e8eafcffff           call 0x499d60
// 0049a076  a3e8059700           mov dword ptr [0x9705e8], eax
// 0049a07b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a07f  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a086  83c410               add esp, 0x10
// 0049a089  c3                   ret 
// 0049a08a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0049a08e  33c0                 xor eax, eax
// 0049a090  a3e8059700           mov dword ptr [0x9705e8], eax
// 0049a095  64890d00000000       mov dword ptr fs:[0], ecx
// 0049a09c  83c410               add esp, 0x10
// 0049a09f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    char storage[44];
    S();
};

extern S* globalInstance;

void __cdecl initializeInstance()
{
    globalInstance = new S;
}
