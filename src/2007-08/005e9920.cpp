// roc 2007-08 005e9920  unit: RBX::VExplosion::?$SignalDesc  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e9920
//
// 005e9920  c70154de7b00         mov dword ptr [ecx], 0x7bde54
// 005e9926  c741044cde7b00       mov dword ptr [ecx + 4], 0x7bde4c
// 005e992d  c7411044de7b00       mov dword ptr [ecx + 0x10], 0x7bde44
// 005e9934  c7411434de7b00       mov dword ptr [ecx + 0x14], 0x7bde34
// 005e993b  c7412c24de7b00       mov dword ptr [ecx + 0x2c], 0x7bde24
// 005e9942  c7414414de7b00       mov dword ptr [ecx + 0x44], 0x7bde14
// 005e9949  c7415c04de7b00       mov dword ptr [ecx + 0x5c], 0x7bde04
// 005e9950  c74174f4dd7b00       mov dword ptr [ecx + 0x74], 0x7bddf4
// 005e9957  c7818c000000e4dd7b00 mov dword ptr [ecx + 0x8c], 0x7bdde4
// 005e9961  e94a69f5ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
