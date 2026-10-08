// roc 2007-03 0054bb70  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bb70
//
// 0054bb70  56                   push esi
// 0054bb71  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0054bb74  85f6                 test esi, esi
// 0054bb76  7410                 je 0x54bb88
// 0054bb78  8bce                 mov ecx, esi
// 0054bb7a  e8d1eaffff           call 0x54a650
// 0054bb7f  56                   push esi
// 0054bb80  e86b250d00           call 0x61e0f0
// 0054bb85  83c404               add esp, 4
// 0054bb88  5e                   pop esi
// 0054bb89  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
