// roc 2007-03 0054f490  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054f490
//
// 0054f490  56                   push esi
// 0054f491  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0054f494  85f6                 test esi, esi
// 0054f496  7410                 je 0x54f4a8
// 0054f498  8bce                 mov ecx, esi
// 0054f49a  e851f8ffff           call 0x54ecf0
// 0054f49f  56                   push esi
// 0054f4a0  e84bec0c00           call 0x61e0f0
// 0054f4a5  83c404               add esp, 4
// 0054f4a8  5e                   pop esi
// 0054f4a9  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
