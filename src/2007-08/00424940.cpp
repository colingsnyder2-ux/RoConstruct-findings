// roc 2007-08 00424940  unit: RBX::Reflection::Metadata::VClasses::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424940
//
// 00424940  56                   push esi
// 00424941  8bf1                 mov esi, ecx
// 00424943  e8d8db1100           call 0x542520
// 00424948  c70634897800         mov dword ptr [esi], 0x788934
// 0042494e  c7460428897800       mov dword ptr [esi + 4], 0x788928
// 00424955  c7461020897800       mov dword ptr [esi + 0x10], 0x788920
// 0042495c  c7461410897800       mov dword ptr [esi + 0x14], 0x788910
// 00424963  c7462c00897800       mov dword ptr [esi + 0x2c], 0x788900
// 0042496a  c74644f0887800       mov dword ptr [esi + 0x44], 0x7888f0
// 00424971  c7465ce0887800       mov dword ptr [esi + 0x5c], 0x7888e0
// 00424978  c74674d0887800       mov dword ptr [esi + 0x74], 0x7888d0
// 0042497f  c7868c000000c0887800 mov dword ptr [esi + 0x8c], 0x7888c0
// 00424989  8bc6                 mov eax, esi
// 0042498b  5e                   pop esi
// 0042498c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
