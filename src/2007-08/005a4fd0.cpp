// roc 2007-08 005a4fd0  unit: RBX::P8Humanoid::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4fd0
//
// 005a4fd0  c701dc527b00         mov dword ptr [ecx], 0x7b52dc
// 005a4fd6  c74104d0527b00       mov dword ptr [ecx + 4], 0x7b52d0
// 005a4fdd  c74110c8527b00       mov dword ptr [ecx + 0x10], 0x7b52c8
// 005a4fe4  c74114b8527b00       mov dword ptr [ecx + 0x14], 0x7b52b8
// 005a4feb  c7412ca8527b00       mov dword ptr [ecx + 0x2c], 0x7b52a8
// 005a4ff2  c7414498527b00       mov dword ptr [ecx + 0x44], 0x7b5298
// 005a4ff9  c7415c88527b00       mov dword ptr [ecx + 0x5c], 0x7b5288
// 005a5000  c7417478527b00       mov dword ptr [ecx + 0x74], 0x7b5278
// 005a5007  c7818c00000068527b00 mov dword ptr [ecx + 0x8c], 0x7b5268
// 005a5011  e99ab2f9ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
