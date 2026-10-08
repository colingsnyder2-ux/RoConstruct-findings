// roc 2007-03 0054bb90  unit: seg_00540000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054bb90
//
// 0054bb90  56                   push esi
// 0054bb91  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0054bb94  85f6                 test esi, esi
// 0054bb96  7410                 je 0x54bba8
// 0054bb98  8bce                 mov ecx, esi
// 0054bb9a  e811ebffff           call 0x54a6b0
// 0054bb9f  56                   push esi
// 0054bba0  e84b250d00           call 0x61e0f0
// 0054bba5  83c404               add esp, 4
// 0054bba8  5e                   pop esi
// 0054bba9  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
