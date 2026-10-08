// roc 2007-08 005f0400  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f0400
//
// 005f0400  56                   push esi
// 005f0401  8bf1                 mov esi, ecx
// 005f0403  e81821f5ff           call 0x542520
// 005f0408  c7063c047c00         mov dword ptr [esi], 0x7c043c
// 005f040e  c7460434047c00       mov dword ptr [esi + 4], 0x7c0434
// 005f0415  c746102c047c00       mov dword ptr [esi + 0x10], 0x7c042c
// 005f041c  c746141c047c00       mov dword ptr [esi + 0x14], 0x7c041c
// 005f0423  c7462c0c047c00       mov dword ptr [esi + 0x2c], 0x7c040c
// 005f042a  c74644fc037c00       mov dword ptr [esi + 0x44], 0x7c03fc
// 005f0431  c7465cec037c00       mov dword ptr [esi + 0x5c], 0x7c03ec
// 005f0438  c74674dc037c00       mov dword ptr [esi + 0x74], 0x7c03dc
// 005f043f  c7868c000000cc037c00 mov dword ptr [esi + 0x8c], 0x7c03cc
// 005f0449  8bc6                 mov eax, esi
// 005f044b  5e                   pop esi
// 005f044c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
