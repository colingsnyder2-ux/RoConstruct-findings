// roc 2007-08 005f0210  unit: RBX::Message  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0210
//
// 005f0210  c701f4047c00         mov dword ptr [ecx], 0x7c04f4
// 005f0216  c74104ec047c00       mov dword ptr [ecx + 4], 0x7c04ec
// 005f021d  c74110e4047c00       mov dword ptr [ecx + 0x10], 0x7c04e4
// 005f0224  c74114d4047c00       mov dword ptr [ecx + 0x14], 0x7c04d4
// 005f022b  c7412cc4047c00       mov dword ptr [ecx + 0x2c], 0x7c04c4
// 005f0232  c74144b4047c00       mov dword ptr [ecx + 0x44], 0x7c04b4
// 005f0239  c7415ca4047c00       mov dword ptr [ecx + 0x5c], 0x7c04a4
// 005f0240  c7417494047c00       mov dword ptr [ecx + 0x74], 0x7c0494
// 005f0247  c7818c00000084047c00 mov dword ptr [ecx + 0x8c], 0x7c0484
// 005f0251  e95a00f5ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
