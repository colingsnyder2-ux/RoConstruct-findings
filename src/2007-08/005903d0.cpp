// roc 2007-08 005903d0  unit: RBX::VObjectValue::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005903d0
//
// 005903d0  56                   push esi
// 005903d1  8bf1                 mov esi, ecx
// 005903d3  e84821fbff           call 0x542520
// 005903d8  c70604fa7a00         mov dword ptr [esi], 0x7afa04
// 005903de  c74604fcf97a00       mov dword ptr [esi + 4], 0x7af9fc
// 005903e5  c74610f4f97a00       mov dword ptr [esi + 0x10], 0x7af9f4
// 005903ec  c74614e4f97a00       mov dword ptr [esi + 0x14], 0x7af9e4
// 005903f3  c7462cd4f97a00       mov dword ptr [esi + 0x2c], 0x7af9d4
// 005903fa  c74644c4f97a00       mov dword ptr [esi + 0x44], 0x7af9c4
// 00590401  c7465cb4f97a00       mov dword ptr [esi + 0x5c], 0x7af9b4
// 00590408  c74674a4f97a00       mov dword ptr [esi + 0x74], 0x7af9a4
// 0059040f  c7868c00000094f97a00 mov dword ptr [esi + 0x8c], 0x7af994
// 00590419  8bc6                 mov eax, esi
// 0059041b  5e                   pop esi
// 0059041c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
