// roc 2007-08 00591310  unit: RBX::VHint::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00591310
//
// 00591310  56                   push esi
// 00591311  8bf1                 mov esi, ecx
// 00591313  e8b8faffff           call 0x590dd0
// 00591318  c70664fd7a00         mov dword ptr [esi], 0x7afd64
// 0059131e  c746045cfd7a00       mov dword ptr [esi + 4], 0x7afd5c
// 00591325  c7461054fd7a00       mov dword ptr [esi + 0x10], 0x7afd54
// 0059132c  c7461444fd7a00       mov dword ptr [esi + 0x14], 0x7afd44
// 00591333  c7462c34fd7a00       mov dword ptr [esi + 0x2c], 0x7afd34
// 0059133a  c7464424fd7a00       mov dword ptr [esi + 0x44], 0x7afd24
// 00591341  c7465c14fd7a00       mov dword ptr [esi + 0x5c], 0x7afd14
// 00591348  c7467404fd7a00       mov dword ptr [esi + 0x74], 0x7afd04
// 0059134f  c7868c000000f4fc7a00 mov dword ptr [esi + 0x8c], 0x7afcf4
// 00591359  8bc6                 mov eax, esi
// 0059135b  5e                   pop esi
// 0059135c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
