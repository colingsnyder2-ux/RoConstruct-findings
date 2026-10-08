// roc 2007-08 00425130  unit: RBX::Reflection::Metadata::VFunctions::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00425130
//
// 00425130  c701448d7800         mov dword ptr [ecx], 0x788d44
// 00425136  c74104388d7800       mov dword ptr [ecx + 4], 0x788d38
// 0042513d  c74110308d7800       mov dword ptr [ecx + 0x10], 0x788d30
// 00425144  c74114208d7800       mov dword ptr [ecx + 0x14], 0x788d20
// 0042514b  c7412c108d7800       mov dword ptr [ecx + 0x2c], 0x788d10
// 00425152  c74144008d7800       mov dword ptr [ecx + 0x44], 0x788d00
// 00425159  c7415cf08c7800       mov dword ptr [ecx + 0x5c], 0x788cf0
// 00425160  c74174e08c7800       mov dword ptr [ecx + 0x74], 0x788ce0
// 00425167  c7818c000000d08c7800 mov dword ptr [ecx + 0x8c], 0x788cd0
// 00425171  e93ab11100           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
