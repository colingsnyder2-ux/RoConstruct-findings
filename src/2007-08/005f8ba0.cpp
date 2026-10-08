// roc 2007-08 005f8ba0  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8ba0
//
// 005f8ba0  c7013c1b7c00         mov dword ptr [ecx], 0x7c1b3c
// 005f8ba6  c74104341b7c00       mov dword ptr [ecx + 4], 0x7c1b34
// 005f8bad  c741102c1b7c00       mov dword ptr [ecx + 0x10], 0x7c1b2c
// 005f8bb4  c741141c1b7c00       mov dword ptr [ecx + 0x14], 0x7c1b1c
// 005f8bbb  c7412c0c1b7c00       mov dword ptr [ecx + 0x2c], 0x7c1b0c
// 005f8bc2  c74144fc1a7c00       mov dword ptr [ecx + 0x44], 0x7c1afc
// 005f8bc9  c7415cec1a7c00       mov dword ptr [ecx + 0x5c], 0x7c1aec
// 005f8bd0  c74174dc1a7c00       mov dword ptr [ecx + 0x74], 0x7c1adc
// 005f8bd7  c7818c000000cc1a7c00 mov dword ptr [ecx + 0x8c], 0x7c1acc
// 005f8be1  e9ca76f4ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
