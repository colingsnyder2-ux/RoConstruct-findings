// roc 2012-06 00507590  unit: Ogre::RbxSceneUpdater  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00507590
//
// 00507590  56                   push esi
// 00507591  8bf1                 mov esi, ecx
// 00507593  8b4604               mov eax, dword ptr [esi + 4]
// 00507596  85c0                 test eax, eax
// 00507598  7418                 je 0x5075b2
// 0050759a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0050759d  51                   push ecx
// 0050759e  50                   push eax
// 0050759f  8bce                 mov ecx, esi
// 005075a1  e8eafeffff           call 0x507490
// 005075a6  8b5604               mov edx, dword ptr [esi + 4]
// 005075a9  52                   push edx
// 005075aa  e865ab4700           call 0x982114
// 005075af  83c404               add esp, 4
// 005075b2  c7460400000000       mov dword ptr [esi + 4], 0
// 005075b9  c7460800000000       mov dword ptr [esi + 8], 0
// 005075c0  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 005075c7  5e                   pop esi
// 005075c8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
