// roc 2007-03 0042c830  unit: seg_00420000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042c830
//
// 0042c830  56                   push esi
// 0042c831  8b710c               mov esi, dword ptr [ecx + 0xc]
// 0042c834  85f6                 test esi, esi
// 0042c836  7410                 je 0x42c848
// 0042c838  8bce                 mov ecx, esi
// 0042c83a  e861f1ffff           call 0x42b9a0
// 0042c83f  56                   push esi
// 0042c840  e8ab181f00           call 0x61e0f0
// 0042c845  83c404               add esp, 4
// 0042c848  5e                   pop esi
// 0042c849  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?dispose@?$sp_counted_impl_p@Vconnection@signals@boost@@@detail@boost@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
