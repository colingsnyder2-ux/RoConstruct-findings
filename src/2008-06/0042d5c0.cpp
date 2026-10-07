// roc 2008-06 0042d5c0  unit: boost::any::H::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d5c0
//
// 0042d5c0  56                   push esi
// 0042d5c1  8bf1                 mov esi, ecx
// 0042d5c3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0042d5c6  85c0                 test eax, eax
// 0042d5c8  7418                 je 0x42d5e2
// 0042d5ca  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0042d5cd  51                   push ecx
// 0042d5ce  50                   push eax
// 0042d5cf  8bce                 mov ecx, esi
// 0042d5d1  e8baffffff           call 0x42d590
// 0042d5d6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0042d5d9  52                   push edx
// 0042d5da  e89b302700           call 0x6a067a
// 0042d5df  83c404               add esp, 4
// 0042d5e2  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042d5e9  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0042d5f0  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0042d5f7  5e                   pop esi
// 0042d5f8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
