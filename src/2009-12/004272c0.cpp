// roc 2009-12 004272c0  unit: boost::any::H::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004272c0
//
// 004272c0  56                   push esi
// 004272c1  8bf1                 mov esi, ecx
// 004272c3  8b460c               mov eax, dword ptr [esi + 0xc]
// 004272c6  85c0                 test eax, eax
// 004272c8  7418                 je 0x4272e2
// 004272ca  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004272cd  51                   push ecx
// 004272ce  50                   push eax
// 004272cf  8bce                 mov ecx, esi
// 004272d1  e8baffffff           call 0x427290
// 004272d6  8b560c               mov edx, dword ptr [esi + 0xc]
// 004272d9  52                   push edx
// 004272da  e87bc53c00           call 0x7f385a
// 004272df  83c404               add esp, 4
// 004272e2  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004272e9  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004272f0  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004272f7  5e                   pop esi
// 004272f8  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
