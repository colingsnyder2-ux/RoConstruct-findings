// roc 2007-08 00427150  unit: RBX::Reflection::Metadata::VMember::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00427150
//
// 00427150  56                   push esi
// 00427151  8bf1                 mov esi, ecx
// 00427153  e828feffff           call 0x426f80
// 00427158  c7062c9d7800         mov dword ptr [esi], 0x789d2c
// 0042715e  c74604249d7800       mov dword ptr [esi + 4], 0x789d24
// 00427165  c746101c9d7800       mov dword ptr [esi + 0x10], 0x789d1c
// 0042716c  c746140c9d7800       mov dword ptr [esi + 0x14], 0x789d0c
// 00427173  c7462cfc9c7800       mov dword ptr [esi + 0x2c], 0x789cfc
// 0042717a  c74644ec9c7800       mov dword ptr [esi + 0x44], 0x789cec
// 00427181  c7465cdc9c7800       mov dword ptr [esi + 0x5c], 0x789cdc
// 00427188  c74674cc9c7800       mov dword ptr [esi + 0x74], 0x789ccc
// 0042718f  c7868c000000bc9c7800 mov dword ptr [esi + 0x8c], 0x789cbc
// 00427199  8bc6                 mov eax, esi
// 0042719b  5e                   pop esi
// 0042719c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
