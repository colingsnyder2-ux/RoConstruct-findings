// roc 2009-12 004fcb00  unit: RBX::Network::Player  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004fcb00
//
// 004fcb00  56                   push esi
// 004fcb01  8bf1                 mov esi, ecx
// 004fcb03  8b460c               mov eax, dword ptr [esi + 0xc]
// 004fcb06  85c0                 test eax, eax
// 004fcb08  7418                 je 0x4fcb22
// 004fcb0a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004fcb0d  51                   push ecx
// 004fcb0e  50                   push eax
// 004fcb0f  8bce                 mov ecx, esi
// 004fcb11  e8aaf4ffff           call 0x4fbfc0
// 004fcb16  8b560c               mov edx, dword ptr [esi + 0xc]
// 004fcb19  52                   push edx
// 004fcb1a  e83b6d2f00           call 0x7f385a
// 004fcb1f  83c404               add esp, 4
// 004fcb22  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004fcb29  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004fcb30  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004fcb37  5e                   pop esi
// 004fcb38  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
