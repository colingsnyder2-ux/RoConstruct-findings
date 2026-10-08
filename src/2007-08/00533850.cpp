// roc 2007-08 00533850  unit: RBX::VSelection::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533850
//
// 00533850  56                   push esi
// 00533851  8bf1                 mov esi, ecx
// 00533853  e8d8f3ffff           call 0x532c30
// 00533858  c7063c557a00         mov dword ptr [esi], 0x7a553c
// 0053385e  c7460434557a00       mov dword ptr [esi + 4], 0x7a5534
// 00533865  c746102c557a00       mov dword ptr [esi + 0x10], 0x7a552c
// 0053386c  c746141c557a00       mov dword ptr [esi + 0x14], 0x7a551c
// 00533873  c7462c0c557a00       mov dword ptr [esi + 0x2c], 0x7a550c
// 0053387a  c74644fc547a00       mov dword ptr [esi + 0x44], 0x7a54fc
// 00533881  c7465cec547a00       mov dword ptr [esi + 0x5c], 0x7a54ec
// 00533888  c74674dc547a00       mov dword ptr [esi + 0x74], 0x7a54dc
// 0053388f  c7868c000000cc547a00 mov dword ptr [esi + 0x8c], 0x7a54cc
// 00533899  8bc6                 mov eax, esi
// 0053389b  5e                   pop esi
// 0053389c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
