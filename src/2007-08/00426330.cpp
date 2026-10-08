// roc 2007-08 00426330  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426330
//
// 00426330  56                   push esi
// 00426331  8bf1                 mov esi, ecx
// 00426333  e898f9ffff           call 0x425cd0
// 00426338  c70604957800         mov dword ptr [esi], 0x789504
// 0042633e  c74604fc947800       mov dword ptr [esi + 4], 0x7894fc
// 00426345  c74610f4947800       mov dword ptr [esi + 0x10], 0x7894f4
// 0042634c  c74614e4947800       mov dword ptr [esi + 0x14], 0x7894e4
// 00426353  c7462cd4947800       mov dword ptr [esi + 0x2c], 0x7894d4
// 0042635a  c74644c4947800       mov dword ptr [esi + 0x44], 0x7894c4
// 00426361  c7465cb4947800       mov dword ptr [esi + 0x5c], 0x7894b4
// 00426368  c74674a4947800       mov dword ptr [esi + 0x74], 0x7894a4
// 0042636f  c7868c00000094947800 mov dword ptr [esi + 0x8c], 0x789494
// 00426379  8bc6                 mov eax, esi
// 0042637b  5e                   pop esi
// 0042637c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
