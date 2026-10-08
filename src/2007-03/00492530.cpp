// roc 2007-03 00492530  unit: seg_00490000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00492530
//
// 00492530  56                   push esi
// 00492531  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00492534  85f6                 test esi, esi
// 00492536  7410                 je 0x492548
// 00492538  8bce                 mov ecx, esi
// 0049253a  e821fcffff           call 0x492160
// 0049253f  56                   push esi
// 00492540  e8abbb1800           call 0x61e0f0
// 00492545  83c404               add esp, 4
// 00492548  5e                   pop esi
// 00492549  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
