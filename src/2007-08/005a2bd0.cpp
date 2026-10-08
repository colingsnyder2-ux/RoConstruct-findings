// roc 2007-08 005a2bd0  unit: RBX::VSkin::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a2bd0
//
// 005a2bd0  56                   push esi
// 005a2bd1  8bf1                 mov esi, ecx
// 005a2bd3  e8a8fcffff           call 0x5a2880
// 005a2bd8  c706ac417b00         mov dword ptr [esi], 0x7b41ac
// 005a2bde  c74604a0417b00       mov dword ptr [esi + 4], 0x7b41a0
// 005a2be5  c7461098417b00       mov dword ptr [esi + 0x10], 0x7b4198
// 005a2bec  c7461488417b00       mov dword ptr [esi + 0x14], 0x7b4188
// 005a2bf3  c7462c78417b00       mov dword ptr [esi + 0x2c], 0x7b4178
// 005a2bfa  c7464468417b00       mov dword ptr [esi + 0x44], 0x7b4168
// 005a2c01  c7465c58417b00       mov dword ptr [esi + 0x5c], 0x7b4158
// 005a2c08  c7467448417b00       mov dword ptr [esi + 0x74], 0x7b4148
// 005a2c0f  c7868c00000038417b00 mov dword ptr [esi + 0x8c], 0x7b4138
// 005a2c19  8bc6                 mov eax, esi
// 005a2c1b  5e                   pop esi
// 005a2c1c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
