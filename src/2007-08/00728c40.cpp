// roc 2007-08 00728c40  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00728c40
//
// 00728c40  6a1c                 push 0x1c
// 00728c42  e8af72f0ff           call 0x62fef6
// 00728c47  83c404               add esp, 4
// 00728c4a  85c0                 test eax, eax
// 00728c4c  7402                 je 0x728c50
// 00728c4e  8900                 mov dword ptr [eax], eax
// 00728c50  8d4804               lea ecx, [eax + 4]
// 00728c53  85c9                 test ecx, ecx
// 00728c55  7402                 je 0x728c59
// 00728c57  8901                 mov dword ptr [ecx], eax
// 00728c59  c3                   ret 
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
