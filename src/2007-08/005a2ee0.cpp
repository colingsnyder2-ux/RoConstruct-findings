// roc 2007-08 005a2ee0  unit: RBX::VTeams::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2ee0
//
// 005a2ee0  56                   push esi
// 005a2ee1  8bf1                 mov esi, ecx
// 005a2ee3  e838f6f9ff           call 0x542520
// 005a2ee8  c706844c7b00         mov dword ptr [esi], 0x7b4c84
// 005a2eee  c746047c4c7b00       mov dword ptr [esi + 4], 0x7b4c7c
// 005a2ef5  c74610744c7b00       mov dword ptr [esi + 0x10], 0x7b4c74
// 005a2efc  c74614644c7b00       mov dword ptr [esi + 0x14], 0x7b4c64
// 005a2f03  c7462c544c7b00       mov dword ptr [esi + 0x2c], 0x7b4c54
// 005a2f0a  c74644444c7b00       mov dword ptr [esi + 0x44], 0x7b4c44
// 005a2f11  c7465c344c7b00       mov dword ptr [esi + 0x5c], 0x7b4c34
// 005a2f18  c74674244c7b00       mov dword ptr [esi + 0x74], 0x7b4c24
// 005a2f1f  c7868c000000144c7b00 mov dword ptr [esi + 0x8c], 0x7b4c14
// 005a2f29  8bc6                 mov eax, esi
// 005a2f2b  5e                   pop esi
// 005a2f2c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
