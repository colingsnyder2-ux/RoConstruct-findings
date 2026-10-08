// roc 2007-08 0052ce30  unit: RBX::VRunService::?$FactoryProduct  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052ce30
//
// 0052ce30  c701ec487a00         mov dword ptr [ecx], 0x7a48ec
// 0052ce36  c74104e0487a00       mov dword ptr [ecx + 4], 0x7a48e0
// 0052ce3d  c74110d8487a00       mov dword ptr [ecx + 0x10], 0x7a48d8
// 0052ce44  c74114c8487a00       mov dword ptr [ecx + 0x14], 0x7a48c8
// 0052ce4b  c7412cb8487a00       mov dword ptr [ecx + 0x2c], 0x7a48b8
// 0052ce52  c74144a8487a00       mov dword ptr [ecx + 0x44], 0x7a48a8
// 0052ce59  c7415c98487a00       mov dword ptr [ecx + 0x5c], 0x7a4898
// 0052ce60  c7417488487a00       mov dword ptr [ecx + 0x74], 0x7a4888
// 0052ce67  c7818c00000078487a00 mov dword ptr [ecx + 0x8c], 0x7a4878
// 0052ce71  e93a340100           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
