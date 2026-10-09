// from server: 34% by colin
// roc 2007-08 00498450  unit: RBX::Network::Players::Plugin  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00498450
//
// 00498450  6aff                 push -1
// 00498452  6828887400           push 0x748828
// 00498457  64a100000000         mov eax, dword ptr fs:[0]
// 0049845d  50                   push eax
// 0049845e  51                   push ecx
// 0049845f  56                   push esi
// 00498460  a188518b00           mov eax, dword ptr [0x8b5188]
// 00498465  33c4                 xor eax, esp
// 00498467  50                   push eax
// 00498468  8d44240c             lea eax, [esp + 0xc]
// 0049846c  64a300000000         mov dword ptr fs:[0], eax
// 00498472  8bf1                 mov esi, ecx
// 00498474  89742408             mov dword ptr [esp + 8], esi
// 00498478  33c0                 xor eax, eax
// 0049847a  894604               mov dword ptr [esi + 4], eax
// 0049847d  894608               mov dword ptr [esi + 8], eax
// 00498480  89460c               mov dword ptr [esi + 0xc], eax
// 00498483  894610               mov dword ptr [esi + 0x10], eax
// 00498486  8d4e14               lea ecx, [esi + 0x14]
// 00498489  89442414             mov dword ptr [esp + 0x14], eax
// 0049848d  e86ed22800           call 0x725700
// 00498492  8bc6                 mov eax, esi
// 00498494  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00498498  64890d00000000       mov dword ptr fs:[0], ecx
// 0049849f  59                   pop ecx
// 004984a0  5e                   pop esi
// 004984a1  83c410               add esp, 0x10
// 004984a4  c3                   ret 

struct Plugin {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    char field14;
    Plugin();
};

extern "C" void __stdcall sub_725700(char* p);

Plugin::Plugin() {
    field4 = 0;
    field8 = 0;
    fieldC = 0;
    field10 = 0;
    sub_725700(&field14);
}
