// roc 2007-08 005b63b0  unit: RBX::VSky::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b63b0
//
// 005b63b0  56                   push esi
// 005b63b1  8bf1                 mov esi, ecx
// 005b63b3  e808ffffff           call 0x5b62c0
// 005b63b8  c706cc817b00         mov dword ptr [esi], 0x7b81cc
// 005b63be  c74604c4817b00       mov dword ptr [esi + 4], 0x7b81c4
// 005b63c5  c74610bc817b00       mov dword ptr [esi + 0x10], 0x7b81bc
// 005b63cc  c74614ac817b00       mov dword ptr [esi + 0x14], 0x7b81ac
// 005b63d3  c7462c9c817b00       mov dword ptr [esi + 0x2c], 0x7b819c
// 005b63da  c746448c817b00       mov dword ptr [esi + 0x44], 0x7b818c
// 005b63e1  c7465c7c817b00       mov dword ptr [esi + 0x5c], 0x7b817c
// 005b63e8  c746746c817b00       mov dword ptr [esi + 0x74], 0x7b816c
// 005b63ef  c7868c0000005c817b00 mov dword ptr [esi + 0x8c], 0x7b815c
// 005b63f9  8bc6                 mov eax, esi
// 005b63fb  5e                   pop esi
// 005b63fc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
