// roc 2007-08 00426240  unit: CSelectionTreeCtrl  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00426240
//
// 00426240  56                   push esi
// 00426241  8bf1                 mov esi, ecx
// 00426243  e8d8f8ffff           call 0x425b20
// 00426248  c70694937800         mov dword ptr [esi], 0x789394
// 0042624e  c746048c937800       mov dword ptr [esi + 4], 0x78938c
// 00426255  c7461084937800       mov dword ptr [esi + 0x10], 0x789384
// 0042625c  c7461474937800       mov dword ptr [esi + 0x14], 0x789374
// 00426263  c7462c64937800       mov dword ptr [esi + 0x2c], 0x789364
// 0042626a  c7464454937800       mov dword ptr [esi + 0x44], 0x789354
// 00426271  c7465c44937800       mov dword ptr [esi + 0x5c], 0x789344
// 00426278  c7467434937800       mov dword ptr [esi + 0x74], 0x789334
// 0042627f  c7868c00000024937800 mov dword ptr [esi + 0x8c], 0x789324
// 00426289  8bc6                 mov eax, esi
// 0042628b  5e                   pop esi
// 0042628c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
