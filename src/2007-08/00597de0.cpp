// roc 2007-08 00597de0  unit: RBX::KeyboardSecondaryController  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00597de0
//
// 00597de0  c701e4117b00         mov dword ptr [ecx], 0x7b11e4
// 00597de6  c74104d8117b00       mov dword ptr [ecx + 4], 0x7b11d8
// 00597ded  c74110d0117b00       mov dword ptr [ecx + 0x10], 0x7b11d0
// 00597df4  c74114c0117b00       mov dword ptr [ecx + 0x14], 0x7b11c0
// 00597dfb  c7412cb0117b00       mov dword ptr [ecx + 0x2c], 0x7b11b0
// 00597e02  c74144a0117b00       mov dword ptr [ecx + 0x44], 0x7b11a0
// 00597e09  c7415c90117b00       mov dword ptr [ecx + 0x5c], 0x7b1190
// 00597e10  c7417480117b00       mov dword ptr [ecx + 0x74], 0x7b1180
// 00597e17  c7818c00000070117b00 mov dword ptr [ecx + 0x8c], 0x7b1170
// 00597e21  e98a84faff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
