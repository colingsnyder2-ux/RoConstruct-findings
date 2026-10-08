// from server: 100% by auto
// roc 2012-06 006a5920  unit: RBX::Lua::WeakThreadRef  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a5920
//
// 006a5920  8b01                 mov eax, dword ptr [ecx]
// 006a5922  85c0                 test eax, eax
// 006a5924  7407                 je 0x6a592d
// 006a5926  50                   push eax
// 006a5927  e824eeffff           call 0x6a4750
// 006a592c  59                   pop ecx
// 006a592d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
