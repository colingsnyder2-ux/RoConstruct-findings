// roc 2007-03 004193a0  unit: seg_00410000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004193a0
//
// 004193a0  56                   push esi
// 004193a1  8bf1                 mov esi, ecx
// 004193a3  8b4604               mov eax, dword ptr [esi + 4]
// 004193a6  85c0                 test eax, eax
// 004193a8  7418                 je 0x4193c2
// 004193aa  8b4e08               mov ecx, dword ptr [esi + 8]
// 004193ad  51                   push ecx
// 004193ae  50                   push eax
// 004193af  8bce                 mov ecx, esi
// 004193b1  e8cafeffff           call 0x419280
// 004193b6  8b5604               mov edx, dword ptr [esi + 4]
// 004193b9  52                   push edx
// 004193ba  e8314d2000           call 0x61e0f0
// 004193bf  83c404               add esp, 4
// 004193c2  c7460400000000       mov dword ptr [esi + 4], 0
// 004193c9  c7460800000000       mov dword ptr [esi + 8], 0
// 004193d0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004193d7  5e                   pop esi
// 004193d8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
