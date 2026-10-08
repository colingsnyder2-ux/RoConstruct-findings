// roc 2007-08 005904f0  unit: RBX::VObjectValue::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005904f0
//
// 005904f0  c70104fa7a00         mov dword ptr [ecx], 0x7afa04
// 005904f6  c74104fcf97a00       mov dword ptr [ecx + 4], 0x7af9fc
// 005904fd  c74110f4f97a00       mov dword ptr [ecx + 0x10], 0x7af9f4
// 00590504  c74114e4f97a00       mov dword ptr [ecx + 0x14], 0x7af9e4
// 0059050b  c7412cd4f97a00       mov dword ptr [ecx + 0x2c], 0x7af9d4
// 00590512  c74144c4f97a00       mov dword ptr [ecx + 0x44], 0x7af9c4
// 00590519  c7415cb4f97a00       mov dword ptr [ecx + 0x5c], 0x7af9b4
// 00590520  c74174a4f97a00       mov dword ptr [ecx + 0x74], 0x7af9a4
// 00590527  c7818c00000094f97a00 mov dword ptr [ecx + 0x8c], 0x7af994
// 00590531  e97afdfaff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
