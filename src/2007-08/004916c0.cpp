// roc 2007-08 004916c0  unit: RBX::Network::Players  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004916c0
//
// 004916c0  56                   push esi
// 004916c1  8bf1                 mov esi, ecx
// 004916c3  e8580e0b00           call 0x542520
// 004916c8  c706acb77900         mov dword ptr [esi], 0x79b7ac
// 004916ce  c74604a0b77900       mov dword ptr [esi + 4], 0x79b7a0
// 004916d5  c7461098b77900       mov dword ptr [esi + 0x10], 0x79b798
// 004916dc  c7461488b77900       mov dword ptr [esi + 0x14], 0x79b788
// 004916e3  c7462c78b77900       mov dword ptr [esi + 0x2c], 0x79b778
// 004916ea  c7464468b77900       mov dword ptr [esi + 0x44], 0x79b768
// 004916f1  c7465c58b77900       mov dword ptr [esi + 0x5c], 0x79b758
// 004916f8  c7467448b77900       mov dword ptr [esi + 0x74], 0x79b748
// 004916ff  c7868c00000038b77900 mov dword ptr [esi + 0x8c], 0x79b738
// 00491709  8bc6                 mov eax, esi
// 0049170b  5e                   pop esi
// 0049170c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
