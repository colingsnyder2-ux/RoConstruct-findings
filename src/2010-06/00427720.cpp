// roc 2010-06 00427720  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427720
//
// 00427720  56                   push esi
// 00427721  8bf1                 mov esi, ecx
// 00427723  8b460c               mov eax, dword ptr [esi + 0xc]
// 00427726  85c0                 test eax, eax
// 00427728  7418                 je 0x427742
// 0042772a  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0042772d  51                   push ecx
// 0042772e  50                   push eax
// 0042772f  8bce                 mov ecx, esi
// 00427731  e8baffffff           call 0x4276f0
// 00427736  8b560c               mov edx, dword ptr [esi + 0xc]
// 00427739  52                   push edx
// 0042773a  e85b023800           call 0x7a799a
// 0042773f  83c404               add esp, 4
// 00427742  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00427749  c7461000000000       mov dword ptr [esi + 0x10], 0
// 00427750  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00427757  5e                   pop esi
// 00427758  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
