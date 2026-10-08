// roc 2011-06 0043b4c0  unit: AsyncResult  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043b4c0
//
// 0043b4c0  56                   push esi
// 0043b4c1  8bf1                 mov esi, ecx
// 0043b4c3  8b4604               mov eax, dword ptr [esi + 4]
// 0043b4c6  85c0                 test eax, eax
// 0043b4c8  7418                 je 0x43b4e2
// 0043b4ca  8b4e08               mov ecx, dword ptr [esi + 8]
// 0043b4cd  51                   push ecx
// 0043b4ce  50                   push eax
// 0043b4cf  8bce                 mov ecx, esi
// 0043b4d1  e8cad5fdff           call 0x418aa0
// 0043b4d6  8b5604               mov edx, dword ptr [esi + 4]
// 0043b4d9  52                   push edx
// 0043b4da  e879eb3c00           call 0x80a058
// 0043b4df  83c404               add esp, 4
// 0043b4e2  c7460400000000       mov dword ptr [esi + 4], 0
// 0043b4e9  c7460800000000       mov dword ptr [esi + 8], 0
// 0043b4f0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0043b4f7  5e                   pop esi
// 0043b4f8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
