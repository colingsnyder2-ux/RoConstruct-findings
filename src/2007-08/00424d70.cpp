// roc 2007-08 00424d70  unit: RBX::Reflection::Metadata::VProperties::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00424d70
//
// 00424d70  56                   push esi
// 00424d71  8bf1                 mov esi, ecx
// 00424d73  e8d8feffff           call 0x424c50
// 00424d78  c706948b7800         mov dword ptr [esi], 0x788b94
// 00424d7e  c74604888b7800       mov dword ptr [esi + 4], 0x788b88
// 00424d85  c74610808b7800       mov dword ptr [esi + 0x10], 0x788b80
// 00424d8c  c74614708b7800       mov dword ptr [esi + 0x14], 0x788b70
// 00424d93  c7462c608b7800       mov dword ptr [esi + 0x2c], 0x788b60
// 00424d9a  c74644508b7800       mov dword ptr [esi + 0x44], 0x788b50
// 00424da1  c7465c408b7800       mov dword ptr [esi + 0x5c], 0x788b40
// 00424da8  c74674308b7800       mov dword ptr [esi + 0x74], 0x788b30
// 00424daf  c7868c000000208b7800 mov dword ptr [esi + 0x8c], 0x788b20
// 00424db9  8bc6                 mov eax, esi
// 00424dbb  5e                   pop esi
// 00424dbc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
