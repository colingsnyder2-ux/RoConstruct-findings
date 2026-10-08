// roc 2007-08 00592930  unit: RBX::VVisit::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00592930
//
// 00592930  56                   push esi
// 00592931  8bf1                 mov esi, ecx
// 00592933  e838ffffff           call 0x592870
// 00592938  c7060c027b00         mov dword ptr [esi], 0x7b020c
// 0059293e  c7460404027b00       mov dword ptr [esi + 4], 0x7b0204
// 00592945  c74610fc017b00       mov dword ptr [esi + 0x10], 0x7b01fc
// 0059294c  c74614ec017b00       mov dword ptr [esi + 0x14], 0x7b01ec
// 00592953  c7462cdc017b00       mov dword ptr [esi + 0x2c], 0x7b01dc
// 0059295a  c74644cc017b00       mov dword ptr [esi + 0x44], 0x7b01cc
// 00592961  c7465cbc017b00       mov dword ptr [esi + 0x5c], 0x7b01bc
// 00592968  c74674ac017b00       mov dword ptr [esi + 0x74], 0x7b01ac
// 0059296f  c7868c0000009c017b00 mov dword ptr [esi + 0x8c], 0x7b019c
// 00592979  8bc6                 mov eax, esi
// 0059297b  5e                   pop esi
// 0059297c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
