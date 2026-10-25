// from server: 100% by king_originala
// roc 2008-06 00614b40  unit: RBX::RevoluteLink  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00614b40
//
// 00614b40  6aff                 push -1
// 00614b42  683bf47b00           push 0x7bf43b
// 00614b47  64a100000000         mov eax, dword ptr fs:[0]
// 00614b4d  50                   push eax
// 00614b4e  64892500000000       mov dword ptr fs:[0], esp
// 00614b55  51                   push ecx
// 00614b56  68dc000000           push 0xdc
// 00614b5b  e8c0bd0800           call 0x6a0920
// 00614b60  83c404               add esp, 4
// 00614b63  890424               mov dword ptr [esp], eax
// 00614b66  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00614b6e  85c0                 test eax, eax
// 00614b70  741b                 je 0x614b8d
// 00614b72  8bc8                 mov ecx, eax
// 00614b74  e847feffff           call 0x6149c0
// 00614b79  a3c4be9700           mov dword ptr [0x97bec4], eax
// 00614b7e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614b82  64890d00000000       mov dword ptr fs:[0], ecx
// 00614b89  83c410               add esp, 0x10
// 00614b8c  c3                   ret 
// 00614b8d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00614b91  33c0                 xor eax, eax
// 00614b93  a3c4be9700           mov dword ptr [0x97bec4], eax
// 00614b98  64890d00000000       mov dword ptr fs:[0], ecx
// 00614b9f  83c410               add esp, 0x10
// 00614ba2  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    unsigned char data[220];
    S();
};

extern S* instance;

void __cdecl initialize()
{
    instance = new S;
}
