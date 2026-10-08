// from server: 100% by auto
// roc 2011-06 006eb0f0  unit: VWiniInetRequest_source::?$stream_buffer  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006eb0f0
//
// 006eb0f0  8b01                 mov eax, dword ptr [ecx]
// 006eb0f2  85c0                 test eax, eax
// 006eb0f4  7407                 je 0x6eb0fd
// 006eb0f6  50                   push eax
// 006eb0f7  e824ffffff           call 0x6eb020
// 006eb0fc  59                   pop ecx
// 006eb0fd  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
