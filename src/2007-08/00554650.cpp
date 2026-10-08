// roc 2007-08 00554650  unit: RBX::VTeam::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554650
//
// 00554650  56                   push esi
// 00554651  8bf1                 mov esi, ecx
// 00554653  e868feffff           call 0x5544c0
// 00554658  c706ac817a00         mov dword ptr [esi], 0x7a81ac
// 0055465e  c74604a4817a00       mov dword ptr [esi + 4], 0x7a81a4
// 00554665  c746109c817a00       mov dword ptr [esi + 0x10], 0x7a819c
// 0055466c  c746148c817a00       mov dword ptr [esi + 0x14], 0x7a818c
// 00554673  c7462c7c817a00       mov dword ptr [esi + 0x2c], 0x7a817c
// 0055467a  c746446c817a00       mov dword ptr [esi + 0x44], 0x7a816c
// 00554681  c7465c5c817a00       mov dword ptr [esi + 0x5c], 0x7a815c
// 00554688  c746744c817a00       mov dword ptr [esi + 0x74], 0x7a814c
// 0055468f  c7868c0000003c817a00 mov dword ptr [esi + 0x8c], 0x7a813c
// 00554699  8bc6                 mov eax, esi
// 0055469b  5e                   pop esi
// 0055469c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
