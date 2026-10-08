// roc 2007-08 005a00b0  unit: RBX::P8ModelInstance::?$GetSetImpl  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a00b0
//
// 005a00b0  c701e4367b00         mov dword ptr [ecx], 0x7b36e4
// 005a00b6  c74104dc367b00       mov dword ptr [ecx + 4], 0x7b36dc
// 005a00bd  c74110d4367b00       mov dword ptr [ecx + 0x10], 0x7b36d4
// 005a00c4  c74114c4367b00       mov dword ptr [ecx + 0x14], 0x7b36c4
// 005a00cb  c7412cb4367b00       mov dword ptr [ecx + 0x2c], 0x7b36b4
// 005a00d2  c74144a4367b00       mov dword ptr [ecx + 0x44], 0x7b36a4
// 005a00d9  c7415c94367b00       mov dword ptr [ecx + 0x5c], 0x7b3694
// 005a00e0  c7417484367b00       mov dword ptr [ecx + 0x74], 0x7b3684
// 005a00e7  c7818c00000074367b00 mov dword ptr [ecx + 0x8c], 0x7b3674
// 005a00f1  e9ba01faff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
