// roc 2007-08 0053e0e0  unit: RBX::VLocalScript::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e0e0
//
// 0053e0e0  56                   push esi
// 0053e0e1  8bf1                 mov esi, ecx
// 0053e0e3  e858ffffff           call 0x53e040
// 0053e0e8  c7061c637a00         mov dword ptr [esi], 0x7a631c
// 0053e0ee  c7460414637a00       mov dword ptr [esi + 4], 0x7a6314
// 0053e0f5  c746100c637a00       mov dword ptr [esi + 0x10], 0x7a630c
// 0053e0fc  c74614fc627a00       mov dword ptr [esi + 0x14], 0x7a62fc
// 0053e103  c7462cec627a00       mov dword ptr [esi + 0x2c], 0x7a62ec
// 0053e10a  c74644dc627a00       mov dword ptr [esi + 0x44], 0x7a62dc
// 0053e111  c7465ccc627a00       mov dword ptr [esi + 0x5c], 0x7a62cc
// 0053e118  c74674bc627a00       mov dword ptr [esi + 0x74], 0x7a62bc
// 0053e11f  c7868c000000ac627a00 mov dword ptr [esi + 0x8c], 0x7a62ac
// 0053e129  8bc6                 mov eax, esi
// 0053e12b  5e                   pop esi
// 0053e12c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
