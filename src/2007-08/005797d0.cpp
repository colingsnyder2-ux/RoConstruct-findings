// roc 2007-08 005797d0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005797d0
//
// 005797d0  56                   push esi
// 005797d1  8bf1                 mov esi, ecx
// 005797d3  e8488dfcff           call 0x542520
// 005797d8  c7064cb17a00         mov dword ptr [esi], 0x7ab14c
// 005797de  c7460444b17a00       mov dword ptr [esi + 4], 0x7ab144
// 005797e5  c746103cb17a00       mov dword ptr [esi + 0x10], 0x7ab13c
// 005797ec  c746142cb17a00       mov dword ptr [esi + 0x14], 0x7ab12c
// 005797f3  c7462c1cb17a00       mov dword ptr [esi + 0x2c], 0x7ab11c
// 005797fa  c746440cb17a00       mov dword ptr [esi + 0x44], 0x7ab10c
// 00579801  c7465cfcb07a00       mov dword ptr [esi + 0x5c], 0x7ab0fc
// 00579808  c74674ecb07a00       mov dword ptr [esi + 0x74], 0x7ab0ec
// 0057980f  c7868c000000dcb07a00 mov dword ptr [esi + 0x8c], 0x7ab0dc
// 00579819  8bc6                 mov eax, esi
// 0057981b  5e                   pop esi
// 0057981c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
