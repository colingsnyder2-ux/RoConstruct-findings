// roc 2007-03 0040b450  unit: seg_00400000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040b450
//
// 0040b450  56                   push esi
// 0040b451  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0040b454  85f6                 test esi, esi
// 0040b456  7410                 je 0x40b468
// 0040b458  8bce                 mov ecx, esi
// 0040b45a  e8e1f7ffff           call 0x40ac40
// 0040b45f  56                   push esi
// 0040b460  e88b2c2100           call 0x61e0f0
// 0040b465  83c404               add esp, 4
// 0040b468  5e                   pop esi
// 0040b469  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
