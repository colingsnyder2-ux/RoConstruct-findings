// roc 2007-03 00556760  unit: seg_00550000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00556760
//
// 00556760  56                   push esi
// 00556761  8b710c               mov esi, dword ptr [ecx + 0xc]
// 00556764  85f6                 test esi, esi
// 00556766  7410                 je 0x556778
// 00556768  8bce                 mov ecx, esi
// 0055676a  e8e1021d00           call 0x726a50
// 0055676f  56                   push esi
// 00556770  e87b790c00           call 0x61e0f0
// 00556775  83c404               add esp, 4
// 00556778  5e                   pop esi
// 00556779  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
