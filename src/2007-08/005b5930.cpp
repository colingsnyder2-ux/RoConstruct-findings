// roc 2007-08 005b5930  unit: RBX::Primitive  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b5930
//
// 005b5930  c7010c807b00         mov dword ptr [ecx], 0x7b800c
// 005b5936  c7410404807b00       mov dword ptr [ecx + 4], 0x7b8004
// 005b593d  c74110fc7f7b00       mov dword ptr [ecx + 0x10], 0x7b7ffc
// 005b5944  c74114ec7f7b00       mov dword ptr [ecx + 0x14], 0x7b7fec
// 005b594b  c7412cdc7f7b00       mov dword ptr [ecx + 0x2c], 0x7b7fdc
// 005b5952  c74144cc7f7b00       mov dword ptr [ecx + 0x44], 0x7b7fcc
// 005b5959  c7415cbc7f7b00       mov dword ptr [ecx + 0x5c], 0x7b7fbc
// 005b5960  c74174ac7f7b00       mov dword ptr [ecx + 0x74], 0x7b7fac
// 005b5967  c7818c0000009c7f7b00 mov dword ptr [ecx + 0x8c], 0x7b7f9c
// 005b5971  e93aa9f8ff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
