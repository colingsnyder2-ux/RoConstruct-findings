// from server: 100% by auto
// roc 2009-06 00705970  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00705970
//
// 00705970  8b01                 mov eax, dword ptr [ecx]
// 00705972  85c0                 test eax, eax
// 00705974  7407                 je 0x70597d
// 00705976  50                   push eax
// 00705977  e8a4ffffff           call 0x705920
// 0070597c  59                   pop ecx
// 0070597d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
