// roc 2007-03 007292d0  unit: seg_00720000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007292d0
//
// 007292d0  6a1c                 push 0x1c
// 007292d2  e8314eefff           call 0x61e108
// 007292d7  83c404               add esp, 4
// 007292da  85c0                 test eax, eax
// 007292dc  7402                 je 0x7292e0
// 007292de  8900                 mov dword ptr [eax], eax
// 007292e0  8d4804               lea ecx, [eax + 4]
// 007292e3  85c9                 test ecx, ecx
// 007292e5  7402                 je 0x7292e9
// 007292e7  8901                 mov dword ptr [ecx], eax
// 007292e9  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
