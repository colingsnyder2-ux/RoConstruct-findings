// roc 2007-08 005e8c00  unit: RBX::VExplosion::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8c00
//
// 005e8c00  56                   push esi
// 005e8c01  8bf1                 mov esi, ecx
// 005e8c03  e838faffff           call 0x5e8640
// 005e8c08  c706fcda7b00         mov dword ptr [esi], 0x7bdafc
// 005e8c0e  c74604f4da7b00       mov dword ptr [esi + 4], 0x7bdaf4
// 005e8c15  c74610ecda7b00       mov dword ptr [esi + 0x10], 0x7bdaec
// 005e8c1c  c74614dcda7b00       mov dword ptr [esi + 0x14], 0x7bdadc
// 005e8c23  c7462cccda7b00       mov dword ptr [esi + 0x2c], 0x7bdacc
// 005e8c2a  c74644bcda7b00       mov dword ptr [esi + 0x44], 0x7bdabc
// 005e8c31  c7465cacda7b00       mov dword ptr [esi + 0x5c], 0x7bdaac
// 005e8c38  c746749cda7b00       mov dword ptr [esi + 0x74], 0x7bda9c
// 005e8c3f  c7868c0000008cda7b00 mov dword ptr [esi + 0x8c], 0x7bda8c
// 005e8c49  8bc6                 mov eax, esi
// 005e8c4b  5e                   pop esi
// 005e8c4c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
