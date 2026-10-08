// roc 2007-08 005a2cc0  unit: RBX::VShirt::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2cc0
//
// 005a2cc0  56                   push esi
// 005a2cc1  8bf1                 mov esi, ecx
// 005a2cc3  e858ffffff           call 0x5a2c20
// 005a2cc8  c7065c4a7b00         mov dword ptr [esi], 0x7b4a5c
// 005a2cce  c74604504a7b00       mov dword ptr [esi + 4], 0x7b4a50
// 005a2cd5  c74610484a7b00       mov dword ptr [esi + 0x10], 0x7b4a48
// 005a2cdc  c74614384a7b00       mov dword ptr [esi + 0x14], 0x7b4a38
// 005a2ce3  c7462c284a7b00       mov dword ptr [esi + 0x2c], 0x7b4a28
// 005a2cea  c74644184a7b00       mov dword ptr [esi + 0x44], 0x7b4a18
// 005a2cf1  c7465c084a7b00       mov dword ptr [esi + 0x5c], 0x7b4a08
// 005a2cf8  c74674f8497b00       mov dword ptr [esi + 0x74], 0x7b49f8
// 005a2cff  c7868c000000e8497b00 mov dword ptr [esi + 0x8c], 0x7b49e8
// 005a2d09  8bc6                 mov eax, esi
// 005a2d0b  5e                   pop esi
// 005a2d0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
