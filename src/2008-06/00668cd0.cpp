// from server: 100% by king_originala
// roc 2008-06 00668cd0  unit: RBX::JointStage  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00668cd0
//
// 00668cd0  6aff                 push -1
// 00668cd2  683bf47b00           push 0x7bf43b
// 00668cd7  64a100000000         mov eax, dword ptr fs:[0]
// 00668cdd  50                   push eax
// 00668cde  64892500000000       mov dword ptr fs:[0], esp
// 00668ce5  51                   push ecx
// 00668ce6  6a78                 push 0x78
// 00668ce8  e8337c0300           call 0x6a0920
// 00668ced  83c404               add esp, 4
// 00668cf0  890424               mov dword ptr [esp], eax
// 00668cf3  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00668cfb  85c0                 test eax, eax
// 00668cfd  741d                 je 0x668d1c
// 00668cff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00668d03  51                   push ecx
// 00668d04  8bc8                 mov ecx, eax
// 00668d06  e8e5dff7ff           call 0x5e6cf0
// 00668d0b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668d0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00668d16  83c410               add esp, 0x10
// 00668d19  c20400               ret 4
// 00668d1c  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00668d20  33c0                 xor eax, eax
// 00668d22  64890d00000000       mov dword ptr fs:[0], ecx
// 00668d29  83c410               add esp, 0x10
// 00668d2c  c20400               ret 4

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    char storage[0x78];
    S(void* arg);
};

S* __stdcall create(void* arg)
{
    return new S(arg);
}
