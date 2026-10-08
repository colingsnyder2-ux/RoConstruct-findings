// roc 2007-08 0042db80  unit: boost::any::_N::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042db80
//
// 0042db80  56                   push esi
// 0042db81  8bf1                 mov esi, ecx
// 0042db83  8b4604               mov eax, dword ptr [esi + 4]
// 0042db86  85c0                 test eax, eax
// 0042db88  7418                 je 0x42dba2
// 0042db8a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042db8d  51                   push ecx
// 0042db8e  50                   push eax
// 0042db8f  8bce                 mov ecx, esi
// 0042db91  e8baffffff           call 0x42db50
// 0042db96  8b5604               mov edx, dword ptr [esi + 4]
// 0042db99  52                   push edx
// 0042db9a  e8c3202000           call 0x62fc62
// 0042db9f  83c404               add esp, 4
// 0042dba2  c7460400000000       mov dword ptr [esi + 4], 0
// 0042dba9  c7460800000000       mov dword ptr [esi + 8], 0
// 0042dbb0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042dbb7  5e                   pop esi
// 0042dbb8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
