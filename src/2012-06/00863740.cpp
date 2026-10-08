// from server: 100% by auto
// roc 2012-06 00863740  unit: VWiniInetRequest_source::?$stream_buffer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00863740
//
// 00863740  8b01                 mov eax, dword ptr [ecx]
// 00863742  85c0                 test eax, eax
// 00863744  7407                 je 0x86374d
// 00863746  50                   push eax
// 00863747  e824ffffff           call 0x863670
// 0086374c  59                   pop ecx
// 0086374d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
