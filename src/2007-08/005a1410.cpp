// from server: 18% by colin
// roc 2007-08 005a1410  unit: RBX::SpawnLocation  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1410
//
// 005a1410  6aff                 push -1
// 005a1412  68f87d7500           push 0x757df8
// 005a1417  64a100000000         mov eax, dword ptr fs:[0]
// 005a141d  50                   push eax
// 005a141e  64892500000000       mov dword ptr fs:[0], esp
// 005a1425  51                   push ecx
// 005a1426  56                   push esi
// 005a1427  8bf1                 mov esi, ecx
// 005a1429  89742404             mov dword ptr [esp + 4], esi
// 005a142d  8d8e84020000         lea ecx, [esi + 0x284]
// 005a1433  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005a143b  e860711800           call 0x7285a0
// 005a1440  8bce                 mov ecx, esi
// 005a1442  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005a144a  e8a1e8ffff           call 0x59fcf0
// 005a144f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a1453  5e                   pop esi
// 005a1454  64890d00000000       mov dword ptr fs:[0], ecx
// 005a145b  83c410               add esp, 0x10
// 005a145e  c3                   ret 

struct SpawnLocation {
    void sub_59FCF0();
    void sub_7285A0();
    void destructor();
};

void SpawnLocation::destructor()
{
    sub_7285A0();
    sub_59FCF0();
}
