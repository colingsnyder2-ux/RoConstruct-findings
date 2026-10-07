// roc 2012-06 00720650  unit: RBX::VMouseCommand::?$sp_counted_impl_p  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00720650
//
// 00720650  8b01                 mov eax, dword ptr [ecx]
// 00720652  85c0                 test eax, eax
// 00720654  7407                 je 0x72065d
// 00720656  50                   push eax
// 00720657  e8b81a2600           call 0x982114
// 0072065c  59                   pop ecx
// 0072065d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
