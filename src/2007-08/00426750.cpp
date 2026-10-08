// roc 2007-08 00426750  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426750
//
// 00426750  56                   push esi
// 00426751  8bf1                 mov esi, ecx
// 00426753  e8d8fbffff           call 0x426330
// 00426758  c7069c987800         mov dword ptr [esi], 0x78989c
// 0042675e  c7460494987800       mov dword ptr [esi + 4], 0x789894
// 00426765  c746108c987800       mov dword ptr [esi + 0x10], 0x78988c
// 0042676c  c746147c987800       mov dword ptr [esi + 0x14], 0x78987c
// 00426773  c7462c6c987800       mov dword ptr [esi + 0x2c], 0x78986c
// 0042677a  c746445c987800       mov dword ptr [esi + 0x44], 0x78985c
// 00426781  c7465c4c987800       mov dword ptr [esi + 0x5c], 0x78984c
// 00426788  c746743c987800       mov dword ptr [esi + 0x74], 0x78983c
// 0042678f  c7868c0000002c987800 mov dword ptr [esi + 0x8c], 0x78982c
// 00426799  8bc6                 mov eax, esi
// 0042679b  5e                   pop esi
// 0042679c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
