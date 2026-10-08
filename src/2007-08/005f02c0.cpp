// roc 2007-08 005f02c0  unit: G3D::VVector3::V?$Value::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f02c0
//
// 005f02c0  56                   push esi
// 005f02c1  8bf1                 mov esi, ecx
// 005f02c3  e85822f5ff           call 0x542520
// 005f02c8  c7065c017c00         mov dword ptr [esi], 0x7c015c
// 005f02ce  c7460454017c00       mov dword ptr [esi + 4], 0x7c0154
// 005f02d5  c746104c017c00       mov dword ptr [esi + 0x10], 0x7c014c
// 005f02dc  c746143c017c00       mov dword ptr [esi + 0x14], 0x7c013c
// 005f02e3  c7462c2c017c00       mov dword ptr [esi + 0x2c], 0x7c012c
// 005f02ea  c746441c017c00       mov dword ptr [esi + 0x44], 0x7c011c
// 005f02f1  c7465c0c017c00       mov dword ptr [esi + 0x5c], 0x7c010c
// 005f02f8  c74674fc007c00       mov dword ptr [esi + 0x74], 0x7c00fc
// 005f02ff  c7868c000000ec007c00 mov dword ptr [esi + 0x8c], 0x7c00ec
// 005f0309  8bc6                 mov eax, esi
// 005f030b  5e                   pop esi
// 005f030c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
