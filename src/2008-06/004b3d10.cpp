// from server: 100% by king_originala
// roc 2008-06 004b3d10  unit: RBX::Network::VPeer::?$BoundFuncDesc  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004b3d10
//
// 004b3d10  6aff                 push -1
// 004b3d12  68f8877c00           push 0x7c87f8
// 004b3d17  64a100000000         mov eax, dword ptr fs:[0]
// 004b3d1d  50                   push eax
// 004b3d1e  64892500000000       mov dword ptr fs:[0], esp
// 004b3d25  51                   push ecx
// 004b3d26  56                   push esi
// 004b3d27  8bf1                 mov esi, ecx
// 004b3d29  89742404             mov dword ptr [esp + 4], esi
// 004b3d2d  e85effffff           call 0x4b3c90
// 004b3d32  a168248000           mov eax, dword ptr [0x802468]
// 004b3d37  8b0d60248000         mov ecx, dword ptr [0x802460]
// 004b3d3d  50                   push eax
// 004b3d3e  51                   push ecx
// 004b3d3f  6800010000           push 0x100
// 004b3d44  6a1c                 push 0x1c
// 004b3d46  8d96240e0000         lea edx, [esi + 0xe24]
// 004b3d4c  52                   push edx
// 004b3d4d  c744242400000000     mov dword ptr [esp + 0x24], 0
// 004b3d55  e83ed81e00           call 0x6a1598
// 004b3d5a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b3d5e  8bc6                 mov eax, esi
// 004b3d60  5e                   pop esi
// 004b3d61  64890d00000000       mov dword ptr fs:[0], ecx
// 004b3d68  83c410               add esp, 0x10
// 004b3d6b  c3                   ret 

extern void *elementConstructor;
extern void *elementDestructor;

extern void __stdcall constructArray(
    void *, unsigned int, unsigned int, void *, void *);

struct Base {
    unsigned char storage[0xE24];
    Base();
    ~Base();
};

struct S : Base {
    unsigned char elements[0x100 * 0x1C];
    S();
};

S::S()
{
    constructArray(elements, 0x1C, 0x100,
                   elementConstructor, elementDestructor);
}
