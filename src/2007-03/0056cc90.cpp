// roc 2007-03 0056cc90  unit: seg_00560000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056cc90
//
// 0056cc90  56                   push esi
// 0056cc91  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0056cc94  85f6                 test esi, esi
// 0056cc96  7410                 je 0x56cca8
// 0056cc98  8bce                 mov ecx, esi
// 0056cc9a  e891fbffff           call 0x56c830
// 0056cc9f  56                   push esi
// 0056cca0  e84b140b00           call 0x61e0f0
// 0056cca5  83c404               add esp, 4
// 0056cca8  5e                   pop esi
// 0056cca9  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
