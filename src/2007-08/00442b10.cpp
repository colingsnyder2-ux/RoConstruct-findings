// roc 2007-08 00442b10  unit: RBX::Reflection::Metadata::Members  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442b10
//
// 00442b10  56                   push esi
// 00442b11  8bf1                 mov esi, ecx
// 00442b13  e808fa0f00           call 0x542520
// 00442b18  c7060cf67800         mov dword ptr [esi], 0x78f60c
// 00442b1e  c7460404f67800       mov dword ptr [esi + 4], 0x78f604
// 00442b25  c74610fcf57800       mov dword ptr [esi + 0x10], 0x78f5fc
// 00442b2c  c74614ecf57800       mov dword ptr [esi + 0x14], 0x78f5ec
// 00442b33  c7462cdcf57800       mov dword ptr [esi + 0x2c], 0x78f5dc
// 00442b3a  c74644ccf57800       mov dword ptr [esi + 0x44], 0x78f5cc
// 00442b41  c7465cbcf57800       mov dword ptr [esi + 0x5c], 0x78f5bc
// 00442b48  c74674acf57800       mov dword ptr [esi + 0x74], 0x78f5ac
// 00442b4f  c7868c0000009cf57800 mov dword ptr [esi + 0x8c], 0x78f59c
// 00442b59  8bc6                 mov eax, esi
// 00442b5b  5e                   pop esi
// 00442b5c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
