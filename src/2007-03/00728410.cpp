// roc 2007-03 00728410  unit: seg_00720000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00728410
//
// 00728410  56                   push esi
// 00728411  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00728414  85f6                 test esi, esi
// 00728416  7410                 je 0x728428
// 00728418  8bce                 mov ecx, esi
// 0072841a  e851feffff           call 0x728270
// 0072841f  56                   push esi
// 00728420  e8cb5cefff           call 0x61e0f0
// 00728425  83c404               add esp, 4
// 00728428  5e                   pop esi
// 00728429  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
