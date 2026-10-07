// roc 2008-06 00570d40  unit: RBX::Reflection::ClassDescriptor  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570d40
//
// 00570d40  6a1c                 push 0x1c
// 00570d42  e8d9fb1200           call 0x6a0920
// 00570d47  83c404               add esp, 4
// 00570d4a  85c0                 test eax, eax
// 00570d4c  7402                 je 0x570d50
// 00570d4e  8900                 mov dword ptr [eax], eax
// 00570d50  8d4804               lea ecx, [eax + 4]
// 00570d53  85c9                 test ecx, ecx
// 00570d55  7402                 je 0x570d59
// 00570d57  8901                 mov dword ptr [ecx], eax
// 00570d59  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
