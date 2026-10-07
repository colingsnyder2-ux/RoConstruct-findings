// roc 2008-06 00571760  unit: RBX::Reflection::ClassDescriptor  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00571760
//
// 00571760  6aff                 push -1
// 00571762  6858027d00           push 0x7d0258
// 00571767  64a100000000         mov eax, dword ptr fs:[0]
// 0057176d  50                   push eax
// 0057176e  64892500000000       mov dword ptr fs:[0], esp
// 00571775  51                   push ecx
// 00571776  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057177a  56                   push esi
// 0057177b  8bf1                 mov esi, ecx
// 0057177d  8b08                 mov ecx, dword ptr [eax]
// 0057177f  890e                 mov dword ptr [esi], ecx
// 00571781  8b5004               mov edx, dword ptr [eax + 4]
// 00571784  895604               mov dword ptr [esi + 4], edx
// 00571787  8b4008               mov eax, dword ptr [eax + 8]
// 0057178a  89742404             mov dword ptr [esp + 4], esi
// 0057178e  894608               mov dword ptr [esi + 8], eax
// 00571791  85c0                 test eax, eax
// 00571793  740c                 je 0x5717a1
// 00571795  83c004               add eax, 4
// 00571798  b901000000           mov ecx, 1
// 0057179d  f00fc108             lock xadd dword ptr [eax], ecx
// 005717a1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005717a5  52                   push edx
// 005717a6  8d4e0c               lea ecx, [esi + 0xc]
// 005717a9  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005717b1  e8eafdffff           call 0x5715a0
// 005717b6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005717ba  8bc6                 mov eax, esi
// 005717bc  5e                   pop esi
// 005717bd  64890d00000000       mov dword ptr fs:[0], ecx
// 005717c4  83c410               add esp, 0x10
// 005717c7  c20800               ret 8
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@QAE@ABVstored_group@detail@signals@boost@@ABV?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
