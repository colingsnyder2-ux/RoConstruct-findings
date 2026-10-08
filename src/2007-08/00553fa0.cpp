// roc 2007-08 00553fa0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00553fa0
//
// 00553fa0  c701847f7a00         mov dword ptr [ecx], 0x7a7f84
// 00553fa6  c741047c7f7a00       mov dword ptr [ecx + 4], 0x7a7f7c
// 00553fad  c74110747f7a00       mov dword ptr [ecx + 0x10], 0x7a7f74
// 00553fb4  c74114647f7a00       mov dword ptr [ecx + 0x14], 0x7a7f64
// 00553fbb  c7412c547f7a00       mov dword ptr [ecx + 0x2c], 0x7a7f54
// 00553fc2  c74144447f7a00       mov dword ptr [ecx + 0x44], 0x7a7f44
// 00553fc9  c7415c347f7a00       mov dword ptr [ecx + 0x5c], 0x7a7f34
// 00553fd0  c74174247f7a00       mov dword ptr [ecx + 0x74], 0x7a7f24
// 00553fd7  c7818c000000147f7a00 mov dword ptr [ecx + 0x8c], 0x7a7f14
// 00553fe1  e9cac2feff           jmp 0x5402b0
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$FactoryProduct@VHumanoid@RBX@@VInstance@2@$1?sHumanoid@2@3PBDB@RBX@@MAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
