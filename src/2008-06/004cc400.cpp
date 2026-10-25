// from server: 100% by king_originala
// roc 2008-06 004cc400  unit: RBX::VInstance::?$NonFactoryProduct  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cc400
//
// 004cc400  6aff                 push -1
// 004cc402  68db987c00           push 0x7c98db
// 004cc407  64a100000000         mov eax, dword ptr fs:[0]
// 004cc40d  50                   push eax
// 004cc40e  64892500000000       mov dword ptr fs:[0], esp
// 004cc415  51                   push ecx
// 004cc416  56                   push esi
// 004cc417  8bf1                 mov esi, ecx
// 004cc419  6a78                 push 0x78
// 004cc41b  89742408             mov dword ptr [esp + 8], esi
// 004cc41f  e8fc441d00           call 0x6a0920
// 004cc424  83c404               add esp, 4
// 004cc427  894604               mov dword ptr [esi + 4], eax
// 004cc42a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004cc42e  8d442418             lea eax, [esp + 0x18]
// 004cc432  50                   push eax
// 004cc433  51                   push ecx
// 004cc434  8d4e0c               lea ecx, [esi + 0xc]
// 004cc437  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004cc43f  e87cf9ffff           call 0x4cbdc0
// 004cc444  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004cc448  c7463000000000       mov dword ptr [esi + 0x30], 0
// 004cc44f  8bc6                 mov eax, esi
// 004cc451  5e                   pop esi
// 004cc452  64890d00000000       mov dword ptr fs:[0], ecx
// 004cc459  83c410               add esp, 0x10
// 004cc45c  c20800               ret 8

extern void* __cdecl allocate(unsigned int);

struct Cleanup {
    unsigned char storage[4];
    ~Cleanup();
};

struct Range {
    unsigned char storage[0x24];
    Range(void*, void**);
};

struct S {
    unsigned int reserved;
    void* buffer;
    Cleanup cleanup;
    Range range;
    unsigned int count;

    S(void*, void*);
};

S::S(void* first, void* last)
    : buffer(allocate(0x78)),
      range(first, &first),
      count(0)
{
}
