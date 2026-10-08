// from server: 100% by auto
// roc 2010-06 00795bb0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00795bb0
//
// 00795bb0  8b01                 mov eax, dword ptr [ecx]
// 00795bb2  85c0                 test eax, eax
// 00795bb4  7407                 je 0x795bbd
// 00795bb6  50                   push eax
// 00795bb7  e8a4ffffff           call 0x795b60
// 00795bbc  59                   pop ecx
// 00795bbd  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
