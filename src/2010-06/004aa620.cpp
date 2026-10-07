// roc 2010-06 004aa620  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004aa620
//
// 004aa620  56                   push esi
// 004aa621  8bf1                 mov esi, ecx
// 004aa623  8b460c               mov eax, dword ptr [esi + 0xc]
// 004aa626  85c0                 test eax, eax
// 004aa628  7418                 je 0x4aa642
// 004aa62a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004aa62d  51                   push ecx
// 004aa62e  50                   push eax
// 004aa62f  8bce                 mov ecx, esi
// 004aa631  e8eaf2ffff           call 0x4a9920
// 004aa636  8b560c               mov edx, dword ptr [esi + 0xc]
// 004aa639  52                   push edx
// 004aa63a  e85bd32f00           call 0x7a799a
// 004aa63f  83c404               add esp, 4
// 004aa642  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004aa649  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004aa650  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004aa657  5e                   pop esi
// 004aa658  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
