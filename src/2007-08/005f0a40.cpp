// roc 2007-08 005f0a40  unit: RBX::Reflection::Metadata::VClass::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0a40
//
// 005f0a40  c70114027c00         mov dword ptr [ecx], 0x7c0214
// 005f0a46  c741040c027c00       mov dword ptr [ecx + 4], 0x7c020c
// 005f0a4d  c7411004027c00       mov dword ptr [ecx + 0x10], 0x7c0204
// 005f0a54  c74114f4017c00       mov dword ptr [ecx + 0x14], 0x7c01f4
// 005f0a5b  c7412ce4017c00       mov dword ptr [ecx + 0x2c], 0x7c01e4
// 005f0a62  c74144d4017c00       mov dword ptr [ecx + 0x44], 0x7c01d4
// 005f0a69  c7415cc4017c00       mov dword ptr [ecx + 0x5c], 0x7c01c4
// 005f0a70  c74174b4017c00       mov dword ptr [ecx + 0x74], 0x7c01b4
// 005f0a77  c7818c000000a4017c00 mov dword ptr [ecx + 0x8c], 0x7c01a4
// 005f0a81  e92af8f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
