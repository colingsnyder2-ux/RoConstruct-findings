// from server: 29% by colin
// roc 2007-08 00664c60  unit: CXTPReportRows  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664c60
//
// 00664c60  6aff                 push -1
// 00664c62  6888087600           push 0x760888
// 00664c67  64a100000000         mov eax, dword ptr fs:[0]
// 00664c6d  50                   push eax
// 00664c6e  51                   push ecx
// 00664c6f  56                   push esi
// 00664c70  a188518b00           mov eax, dword ptr [0x8b5188]
// 00664c75  33c4                 xor eax, esp
// 00664c77  50                   push eax
// 00664c78  8d44240c             lea eax, [esp + 0xc]
// 00664c7c  64a300000000         mov dword ptr fs:[0], eax
// 00664c82  8bf1                 mov esi, ecx
// 00664c84  89742408             mov dword ptr [esp + 8], esi
// 00664c88  33c9                 xor ecx, ecx
// 00664c8a  3bf1                 cmp esi, ecx
// 00664c8c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00664c90  7403                 je 0x664c95
// 00664c92  8d4e54               lea ecx, [esi + 0x54]
// 00664c95  e856210000           call 0x666df0
// 00664c9a  8bce                 mov ecx, esi
// 00664c9c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00664ca4  e84f390d00           call 0x7385f8
// 00664ca9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664cad  64890d00000000       mov dword ptr fs:[0], ecx
// 00664cb4  59                   pop ecx
// 00664cb5  5e                   pop esi
// 00664cb6  83c410               add esp, 0x10
// 00664cb9  c3                   ret 

struct CXTPReportRows {
    void Destruct();
    void Cleanup();
};

extern "C" void __stdcall sub_666df0(void*);
extern "C" void __stdcall sub_7385f8(void*);

void CXTPReportRows::Destruct()
{
    sub_666df0(this ? (char*)this + 0x54 : 0);
    sub_7385f8(this);
}
