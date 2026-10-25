// from server: 100% by king_originala
// roc 2008-06 004f1a00  unit: RBX::RenderBase::VMaterialBase::?$WeakReferenceCountedPointer  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f1a00
//
// 004f1a00  6aff                 push -1
// 004f1a02  683bf47b00           push 0x7bf43b
// 004f1a07  64a100000000         mov eax, dword ptr fs:[0]
// 004f1a0d  50                   push eax
// 004f1a0e  64892500000000       mov dword ptr fs:[0], esp
// 004f1a15  51                   push ecx
// 004f1a16  6a4c                 push 0x4c
// 004f1a18  e803ef1a00           call 0x6a0920
// 004f1a1d  83c404               add esp, 4
// 004f1a20  890424               mov dword ptr [esp], eax
// 004f1a23  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 004f1a2b  85c0                 test eax, eax
// 004f1a2d  741b                 je 0x4f1a4a
// 004f1a2f  8bc8                 mov ecx, eax
// 004f1a31  e85affffff           call 0x4f1990
// 004f1a36  a380289700           mov dword ptr [0x972880], eax
// 004f1a3b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f1a3f  64890d00000000       mov dword ptr fs:[0], ecx
// 004f1a46  83c410               add esp, 0x10
// 004f1a49  c3                   ret 
// 004f1a4a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004f1a4e  33c0                 xor eax, eax
// 004f1a50  a380289700           mov dword ptr [0x972880], eax
// 004f1a55  64890d00000000       mov dword ptr fs:[0], ecx
// 004f1a5c  83c410               add esp, 0x10
// 004f1a5f  c3                   ret 

void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S {
    char storage[76];
    S();
};

S* instance;

void initialize()
{
    instance = new S;
}
