// roc 2007-03 0042ed70  unit: seg_00420000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042ed70
//
// 0042ed70  56                   push esi
// 0042ed71  8bf1                 mov esi, ecx
// 0042ed73  8b4604               mov eax, dword ptr [esi + 4]
// 0042ed76  85c0                 test eax, eax
// 0042ed78  7418                 je 0x42ed92
// 0042ed7a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042ed7d  51                   push ecx
// 0042ed7e  50                   push eax
// 0042ed7f  8bce                 mov ecx, esi
// 0042ed81  e86afcffff           call 0x42e9f0
// 0042ed86  8b5604               mov edx, dword ptr [esi + 4]
// 0042ed89  52                   push edx
// 0042ed8a  e861f31e00           call 0x61e0f0
// 0042ed8f  83c404               add esp, 4
// 0042ed92  c7460400000000       mov dword ptr [esi + 4], 0
// 0042ed99  c7460800000000       mov dword ptr [esi + 8], 0
// 0042eda0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042eda7  5e                   pop esi
// 0042eda8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
