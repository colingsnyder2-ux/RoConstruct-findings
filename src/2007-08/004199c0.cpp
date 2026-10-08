// roc 2007-08 004199c0  unit: VDHTMLWindowService::?$FactoryProduct  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004199c0
//
// 004199c0  56                   push esi
// 004199c1  8bf1                 mov esi, ecx
// 004199c3  e8d8fbffff           call 0x4195a0
// 004199c8  c70624777800         mov dword ptr [esi], 0x787724
// 004199ce  c7460418777800       mov dword ptr [esi + 4], 0x787718
// 004199d5  c7461010777800       mov dword ptr [esi + 0x10], 0x787710
// 004199dc  c7461400777800       mov dword ptr [esi + 0x14], 0x787700
// 004199e3  c7462cf0767800       mov dword ptr [esi + 0x2c], 0x7876f0
// 004199ea  c74644e0767800       mov dword ptr [esi + 0x44], 0x7876e0
// 004199f1  c7465cd0767800       mov dword ptr [esi + 0x5c], 0x7876d0
// 004199f8  c74674c0767800       mov dword ptr [esi + 0x74], 0x7876c0
// 004199ff  c7868c000000b0767800 mov dword ptr [esi + 0x8c], 0x7876b0
// 00419a09  8bc6                 mov eax, esi
// 00419a0b  5e                   pop esi
// 00419a0c  c3                   ret 
// library rbxgs/v8datamodel\DataModel.cpp (function ??0?$NonFactoryProduct@VInstance@RBX@@$1?sServiceProvider@2@3PBDB@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
