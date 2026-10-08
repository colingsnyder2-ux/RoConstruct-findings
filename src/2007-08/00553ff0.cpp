// roc 2007-08 00553ff0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00553ff0
//
// 00553ff0  56                   push esi
// 00553ff1  8bf1                 mov esi, ecx
// 00553ff3  e828e5feff           call 0x542520
// 00553ff8  c706847f7a00         mov dword ptr [esi], 0x7a7f84
// 00553ffe  c746047c7f7a00       mov dword ptr [esi + 4], 0x7a7f7c
// 00554005  c74610747f7a00       mov dword ptr [esi + 0x10], 0x7a7f74
// 0055400c  c74614647f7a00       mov dword ptr [esi + 0x14], 0x7a7f64
// 00554013  c7462c547f7a00       mov dword ptr [esi + 0x2c], 0x7a7f54
// 0055401a  c74644447f7a00       mov dword ptr [esi + 0x44], 0x7a7f44
// 00554021  c7465c347f7a00       mov dword ptr [esi + 0x5c], 0x7a7f34
// 00554028  c74674247f7a00       mov dword ptr [esi + 0x74], 0x7a7f24
// 0055402f  c7868c000000147f7a00 mov dword ptr [esi + 0x8c], 0x7a7f14
// 00554039  8bc6                 mov eax, esi
// 0055403b  5e                   pop esi
// 0055403c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
