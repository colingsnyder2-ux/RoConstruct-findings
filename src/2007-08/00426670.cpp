// roc 2007-08 00426670  unit: CSelectionTreeCtrl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426670
//
// 00426670  56                   push esi
// 00426671  8bf1                 mov esi, ecx
// 00426673  e8c8fbffff           call 0x426240
// 00426678  c7062c977800         mov dword ptr [esi], 0x78972c
// 0042667e  c7460424977800       mov dword ptr [esi + 4], 0x789724
// 00426685  c746101c977800       mov dword ptr [esi + 0x10], 0x78971c
// 0042668c  c746140c977800       mov dword ptr [esi + 0x14], 0x78970c
// 00426693  c7462cfc967800       mov dword ptr [esi + 0x2c], 0x7896fc
// 0042669a  c74644ec967800       mov dword ptr [esi + 0x44], 0x7896ec
// 004266a1  c7465cdc967800       mov dword ptr [esi + 0x5c], 0x7896dc
// 004266a8  c74674cc967800       mov dword ptr [esi + 0x74], 0x7896cc
// 004266af  c7868c000000bc967800 mov dword ptr [esi + 0x8c], 0x7896bc
// 004266b9  8bc6                 mov eax, esi
// 004266bb  5e                   pop esi
// 004266bc  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
