// roc 2007-03 00409960  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409960
//
// 00409960  56                   push esi
// 00409961  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00409964  85f6                 test esi, esi
// 00409966  7410                 je 0x409978
// 00409968  8bce                 mov ecx, esi
// 0040996a  e831ecffff           call 0x4085a0
// 0040996f  56                   push esi
// 00409970  e87b472100           call 0x61e0f0
// 00409975  83c404               add esp, 4
// 00409978  5e                   pop esi
// 00409979  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
