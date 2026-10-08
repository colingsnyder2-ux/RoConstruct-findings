// roc 2007-08 005734d0  unit: RBX::Decal  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005734d0
//
// 005734d0  56                   push esi
// 005734d1  8bf1                 mov esi, ecx
// 005734d3  e878feffff           call 0x573350
// 005734d8  c7062ca37a00         mov dword ptr [esi], 0x7aa32c
// 005734de  c7460424a37a00       mov dword ptr [esi + 4], 0x7aa324
// 005734e5  c746101ca37a00       mov dword ptr [esi + 0x10], 0x7aa31c
// 005734ec  c746140ca37a00       mov dword ptr [esi + 0x14], 0x7aa30c
// 005734f3  c7462cfca27a00       mov dword ptr [esi + 0x2c], 0x7aa2fc
// 005734fa  c74644eca27a00       mov dword ptr [esi + 0x44], 0x7aa2ec
// 00573501  c7465cdca27a00       mov dword ptr [esi + 0x5c], 0x7aa2dc
// 00573508  c74674cca27a00       mov dword ptr [esi + 0x74], 0x7aa2cc
// 0057350f  c7868c000000bca27a00 mov dword ptr [esi + 0x8c], 0x7aa2bc
// 00573519  8bc6                 mov eax, esi
// 0057351b  5e                   pop esi
// 0057351c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
