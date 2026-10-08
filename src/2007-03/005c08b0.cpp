// roc 2007-03 005c08b0  unit: seg_005c0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c08b0
//
// 005c08b0  56                   push esi
// 005c08b1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005c08b4  85f6                 test esi, esi
// 005c08b6  7410                 je 0x5c08c8
// 005c08b8  8bce                 mov ecx, esi
// 005c08ba  e8f1bdfaff           call 0x56c6b0
// 005c08bf  56                   push esi
// 005c08c0  e82bd80500           call 0x61e0f0
// 005c08c5  83c404               add esp, 4
// 005c08c8  5e                   pop esi
// 005c08c9  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
