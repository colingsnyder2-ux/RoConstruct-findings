// roc 2007-08 00419a30  unit: VDHTMLWindowService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00419a30
//
// 00419a30  56                   push esi
// 00419a31  8bf1                 mov esi, ecx
// 00419a33  e858f7ffff           call 0x419190
// 00419a38  c706dc777800         mov dword ptr [esi], 0x7877dc
// 00419a3e  c74604d4777800       mov dword ptr [esi + 4], 0x7877d4
// 00419a45  c74610cc777800       mov dword ptr [esi + 0x10], 0x7877cc
// 00419a4c  c74614bc777800       mov dword ptr [esi + 0x14], 0x7877bc
// 00419a53  c7462cac777800       mov dword ptr [esi + 0x2c], 0x7877ac
// 00419a5a  c746449c777800       mov dword ptr [esi + 0x44], 0x78779c
// 00419a61  c7465c8c777800       mov dword ptr [esi + 0x5c], 0x78778c
// 00419a68  c746747c777800       mov dword ptr [esi + 0x74], 0x78777c
// 00419a6f  c7868c0000006c777800 mov dword ptr [esi + 0x8c], 0x78776c
// 00419a79  8bc6                 mov eax, esi
// 00419a7b  5e                   pop esi
// 00419a7c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
