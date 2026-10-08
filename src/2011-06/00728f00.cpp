// from server: 100% by auto
// roc 2011-06 00728f00  unit: RBX::FaceInstance  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00728f00
//
// 00728f00  8b01                 mov eax, dword ptr [ecx]
// 00728f02  85c0                 test eax, eax
// 00728f04  7407                 je 0x728f0d
// 00728f06  50                   push eax
// 00728f07  e84c110e00           call 0x80a058
// 00728f0c  59                   pop ecx
// 00728f0d  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ??1?$auto_ptr@Vnamed_slot_map_iterator@detail@signals@boost@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
