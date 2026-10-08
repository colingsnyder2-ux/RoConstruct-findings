// roc 2007-08 005b0df0  unit: RBX::AutoJoint  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0df0
//
// 005b0df0  56                   push esi
// 005b0df1  8bf1                 mov esi, ecx
// 005b0df3  e838fdffff           call 0x5b0b30
// 005b0df8  c706f4697b00         mov dword ptr [esi], 0x7b69f4
// 005b0dfe  c74604ec697b00       mov dword ptr [esi + 4], 0x7b69ec
// 005b0e05  c74610e4697b00       mov dword ptr [esi + 0x10], 0x7b69e4
// 005b0e0c  c74614d4697b00       mov dword ptr [esi + 0x14], 0x7b69d4
// 005b0e13  c7462cc4697b00       mov dword ptr [esi + 0x2c], 0x7b69c4
// 005b0e1a  c74644b4697b00       mov dword ptr [esi + 0x44], 0x7b69b4
// 005b0e21  c7465ca4697b00       mov dword ptr [esi + 0x5c], 0x7b69a4
// 005b0e28  c7467494697b00       mov dword ptr [esi + 0x74], 0x7b6994
// 005b0e2f  c7868c00000084697b00 mov dword ptr [esi + 0x8c], 0x7b6984
// 005b0e39  8bc6                 mov eax, esi
// 005b0e3b  5e                   pop esi
// 005b0e3c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
