// roc 2008-06 00445280  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445280
//
// 00445280  8b01                 mov eax, dword ptr [ecx]
// 00445282  85c0                 test eax, eax
// 00445284  7407                 je 0x44528d
// 00445286  50                   push eax
// 00445287  e8eeb32500           call 0x6a067a
// 0044528c  59                   pop ecx
// 0044528d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
