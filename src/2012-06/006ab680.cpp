// roc 2012-06 006ab680  unit: RBX::GcJob  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006ab680
//
// 006ab680  56                   push esi
// 006ab681  8bf1                 mov esi, ecx
// 006ab683  8b4604               mov eax, dword ptr [esi + 4]
// 006ab686  85c0                 test eax, eax
// 006ab688  7418                 je 0x6ab6a2
// 006ab68a  8b4e08               mov ecx, dword ptr [esi + 8]
// 006ab68d  51                   push ecx
// 006ab68e  50                   push eax
// 006ab68f  8bce                 mov ecx, esi
// 006ab691  e8dad5ffff           call 0x6a8c70
// 006ab696  8b5604               mov edx, dword ptr [esi + 4]
// 006ab699  52                   push edx
// 006ab69a  e8756a2d00           call 0x982114
// 006ab69f  83c404               add esp, 4
// 006ab6a2  c7460400000000       mov dword ptr [esi + 4], 0
// 006ab6a9  c7460800000000       mov dword ptr [esi + 8], 0
// 006ab6b0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 006ab6b7  5e                   pop esi
// 006ab6b8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
