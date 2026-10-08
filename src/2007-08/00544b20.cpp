// roc 2007-08 00544b20  unit: RBX::VDebugSettings::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544b20
//
// 00544b20  56                   push esi
// 00544b21  8bf1                 mov esi, ecx
// 00544b23  e828fcffff           call 0x544750
// 00544b28  c706a46b7a00         mov dword ptr [esi], 0x7a6ba4
// 00544b2e  c746049c6b7a00       mov dword ptr [esi + 4], 0x7a6b9c
// 00544b35  c74610946b7a00       mov dword ptr [esi + 0x10], 0x7a6b94
// 00544b3c  c74614846b7a00       mov dword ptr [esi + 0x14], 0x7a6b84
// 00544b43  c7462c746b7a00       mov dword ptr [esi + 0x2c], 0x7a6b74
// 00544b4a  c74644646b7a00       mov dword ptr [esi + 0x44], 0x7a6b64
// 00544b51  c7465c546b7a00       mov dword ptr [esi + 0x5c], 0x7a6b54
// 00544b58  c74674446b7a00       mov dword ptr [esi + 0x74], 0x7a6b44
// 00544b5f  c7868c000000346b7a00 mov dword ptr [esi + 0x8c], 0x7a6b34
// 00544b69  8bc6                 mov eax, esi
// 00544b6b  5e                   pop esi
// 00544b6c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
