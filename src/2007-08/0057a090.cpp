// roc 2007-08 0057a090  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a090
//
// 0057a090  64a100000000         mov eax, dword ptr fs:[0]
// 0057a096  6aff                 push -1
// 0057a098  6890117500           push 0x751190
// 0057a09d  50                   push eax
// 0057a09e  64892500000000       mov dword ptr fs:[0], esp
// 0057a0a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057a0a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a0ad  56                   push esi
// 0057a0ae  50                   push eax
// 0057a0af  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a0b3  8bf1                 mov esi, ecx
// 0057a0b5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a0b9  51                   push ecx
// 0057a0ba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a0be  52                   push edx
// 0057a0bf  50                   push eax
// 0057a0c0  51                   push ecx
// 0057a0c1  8d542440             lea edx, [esp + 0x40]
// 0057a0c5  52                   push edx
// 0057a0c6  e845f9ffff           call 0x579a10
// 0057a0cb  8b10                 mov edx, dword ptr [eax]
// 0057a0cd  83c410               add esp, 0x10
// 0057a0d0  8bcc                 mov ecx, esp
// 0057a0d2  c70000000000         mov dword ptr [eax], 0
// 0057a0d8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057a0e0  8964242c             mov dword ptr [esp + 0x2c], esp
// 0057a0e4  8911                 mov dword ptr [ecx], edx
// 0057a0e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a0ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057a0ee  52                   push edx
// 0057a0ef  50                   push eax
// 0057a0f0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0057a0f5  e8e6fdffff           call 0x579ee0
// 0057a0fa  50                   push eax
// 0057a0fb  8bce                 mov ecx, esi
// 0057a0fd  c644242000           mov byte ptr [esp + 0x20], 0
// 0057a102  e8c9f7ffff           call 0x5798d0
// 0057a107  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a10b  51                   push ecx
// 0057a10c  e8515b0b00           call 0x62fc62
// 0057a111  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a115  83c404               add esp, 4
// 0057a118  c706acb27a00         mov dword ptr [esi], 0x7ab2ac
// 0057a11e  8bc6                 mov eax, esi
// 0057a120  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a127  5e                   pop esi
// 0057a128  83c40c               add esp, 0xc
// 0057a12b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
