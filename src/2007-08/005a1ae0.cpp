// roc 2007-08 005a1ae0  unit: RBX::VShirt::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1ae0
//
// 005a1ae0  c7012c3f7b00         mov dword ptr [ecx], 0x7b3f2c
// 005a1ae6  c74104203f7b00       mov dword ptr [ecx + 4], 0x7b3f20
// 005a1aed  c74110183f7b00       mov dword ptr [ecx + 0x10], 0x7b3f18
// 005a1af4  c74114083f7b00       mov dword ptr [ecx + 0x14], 0x7b3f08
// 005a1afb  c7412cf83e7b00       mov dword ptr [ecx + 0x2c], 0x7b3ef8
// 005a1b02  c74144e83e7b00       mov dword ptr [ecx + 0x44], 0x7b3ee8
// 005a1b09  c7415cd83e7b00       mov dword ptr [ecx + 0x5c], 0x7b3ed8
// 005a1b10  c74174c83e7b00       mov dword ptr [ecx + 0x74], 0x7b3ec8
// 005a1b17  c7818c000000b83e7b00 mov dword ptr [ecx + 0x8c], 0x7b3eb8
// 005a1b21  e98ae7f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
