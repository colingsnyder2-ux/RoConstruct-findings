// roc 2007-03 005bebb0  unit: seg_005b0000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bebb0
//
// 005bebb0  56                   push esi
// 005bebb1  8b710c               mov esi, dword ptr [ecx + 0xc]
// 005bebb4  85f6                 test esi, esi
// 005bebb6  7410                 je 0x5bebc8
// 005bebb8  8bce                 mov ecx, esi
// 005bebba  e8a19e1600           call 0x728a60
// 005bebbf  56                   push esi
// 005bebc0  e82bf50500           call 0x61e0f0
// 005bebc5  83c404               add esp, 4
// 005bebc8  5e                   pop esi
// 005bebc9  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
