// roc 2009-06 004be140  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004be140
//
// 004be140  56                   push esi
// 004be141  8bf1                 mov esi, ecx
// 004be143  8b460c               mov eax, dword ptr [esi + 0xc]
// 004be146  85c0                 test eax, eax
// 004be148  7418                 je 0x4be162
// 004be14a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004be14d  51                   push ecx
// 004be14e  50                   push eax
// 004be14f  8bce                 mov ecx, esi
// 004be151  e8baffffff           call 0x4be110
// 004be156  8b560c               mov edx, dword ptr [esi + 0xc]
// 004be159  52                   push edx
// 004be15a  e8d3a82500           call 0x718a32
// 004be15f  83c404               add esp, 4
// 004be162  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004be169  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004be170  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004be177  5e                   pop esi
// 004be178  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
