// roc 2007-08 00592060  unit: RBX::VVisit::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592060
//
// 00592060  56                   push esi
// 00592061  8bf1                 mov esi, ecx
// 00592063  e8b804fbff           call 0x542520
// 00592068  c706bcff7a00         mov dword ptr [esi], 0x7affbc
// 0059206e  c74604b4ff7a00       mov dword ptr [esi + 4], 0x7affb4
// 00592075  c74610acff7a00       mov dword ptr [esi + 0x10], 0x7affac
// 0059207c  c746149cff7a00       mov dword ptr [esi + 0x14], 0x7aff9c
// 00592083  c7462c8cff7a00       mov dword ptr [esi + 0x2c], 0x7aff8c
// 0059208a  c746447cff7a00       mov dword ptr [esi + 0x44], 0x7aff7c
// 00592091  c7465c6cff7a00       mov dword ptr [esi + 0x5c], 0x7aff6c
// 00592098  c746745cff7a00       mov dword ptr [esi + 0x74], 0x7aff5c
// 0059209f  c7868c0000004cff7a00 mov dword ptr [esi + 0x8c], 0x7aff4c
// 005920a9  8bc6                 mov eax, esi
// 005920ab  5e                   pop esi
// 005920ac  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
