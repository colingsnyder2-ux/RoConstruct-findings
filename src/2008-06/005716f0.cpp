// roc 2008-06 005716f0  unit: RBX::Reflection::ClassDescriptor  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005716f0
//
// 005716f0  6aff                 push -1
// 005716f2  6858027d00           push 0x7d0258
// 005716f7  64a100000000         mov eax, dword ptr fs:[0]
// 005716fd  50                   push eax
// 005716fe  64892500000000       mov dword ptr fs:[0], esp
// 00571705  51                   push ecx
// 00571706  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057170a  56                   push esi
// 0057170b  8bf1                 mov esi, ecx
// 0057170d  8b08                 mov ecx, dword ptr [eax]
// 0057170f  890e                 mov dword ptr [esi], ecx
// 00571711  8b5004               mov edx, dword ptr [eax + 4]
// 00571714  895604               mov dword ptr [esi + 4], edx
// 00571717  8b4808               mov ecx, dword ptr [eax + 8]
// 0057171a  89742404             mov dword ptr [esp + 4], esi
// 0057171e  894e08               mov dword ptr [esi + 8], ecx
// 00571721  85c9                 test ecx, ecx
// 00571723  740c                 je 0x571731
// 00571725  83c104               add ecx, 4
// 00571728  ba01000000           mov edx, 1
// 0057172d  f00fc111             lock xadd dword ptr [ecx], edx
// 00571731  83c00c               add eax, 0xc
// 00571734  50                   push eax
// 00571735  8d4e0c               lea ecx, [esi + 0xc]
// 00571738  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00571740  e85bfeffff           call 0x5715a0
// 00571745  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00571749  8bc6                 mov eax, esi
// 0057174b  5e                   pop esi
// 0057174c  64890d00000000       mov dword ptr fs:[0], ecx
// 00571753  83c410               add esp, 0x10
// 00571756  c20400               ret 4
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@QAE@ABU01@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
