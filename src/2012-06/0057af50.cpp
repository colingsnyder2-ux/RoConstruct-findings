// from server: 100% by auto
// roc 2012-06 0057af50  unit: std::H::HV?$allocator::V?$circular_buffer::?$sp_counted_impl_p  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0057af50
//
// 0057af50  6aff                 push -1
// 0057af52  6868f6aa00           push 0xaaf668
// 0057af57  64a100000000         mov eax, dword ptr fs:[0]
// 0057af5d  50                   push eax
// 0057af5e  64892500000000       mov dword ptr fs:[0], esp
// 0057af65  51                   push ecx
// 0057af66  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057af6a  56                   push esi
// 0057af6b  8bf1                 mov esi, ecx
// 0057af6d  8b08                 mov ecx, dword ptr [eax]
// 0057af6f  890e                 mov dword ptr [esi], ecx
// 0057af71  8b5004               mov edx, dword ptr [eax + 4]
// 0057af74  895604               mov dword ptr [esi + 4], edx
// 0057af77  8b4008               mov eax, dword ptr [eax + 8]
// 0057af7a  89742404             mov dword ptr [esp + 4], esi
// 0057af7e  894608               mov dword ptr [esi + 8], eax
// 0057af81  85c0                 test eax, eax
// 0057af83  740c                 je 0x57af91
// 0057af85  83c004               add eax, 4
// 0057af88  b901000000           mov ecx, 1
// 0057af8d  f00fc108             lock xadd dword ptr [eax], ecx
// 0057af91  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0057af95  52                   push edx
// 0057af96  8d4e0c               lea ecx, [esi + 0xc]
// 0057af99  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057afa1  e88a42fbff           call 0x52f230
// 0057afa6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057afaa  8bc6                 mov eax, esi
// 0057afac  5e                   pop esi
// 0057afad  64890d00000000       mov dword ptr fs:[0], ecx
// 0057afb4  83c410               add esp, 0x10
// 0057afb7  c20800               ret 8
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ??0?$pair@$$CBVstored_group@detail@signals@boost@@V?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@@std@@QAE@ABVstored_group@detail@signals@boost@@ABV?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
