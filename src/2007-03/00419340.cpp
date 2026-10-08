// roc 2007-03 00419340  unit: seg_00410000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00419340
//
// 00419340  56                   push esi
// 00419341  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00419344  85f6                 test esi, esi
// 00419346  7410                 je 0x419358
// 00419348  8bce                 mov ecx, esi
// 0041934a  e851fcffff           call 0x418fa0
// 0041934f  56                   push esi
// 00419350  e89b4d2000           call 0x61e0f0
// 00419355  83c404               add esp, 4
// 00419358  5e                   pop esi
// 00419359  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
