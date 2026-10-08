// roc 2007-08 0057a130  unit: RBX::SpecialShape::W4MeshType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057a130
//
// 0057a130  64a100000000         mov eax, dword ptr fs:[0]
// 0057a136  6aff                 push -1
// 0057a138  6890117500           push 0x751190
// 0057a13d  50                   push eax
// 0057a13e  64892500000000       mov dword ptr fs:[0], esp
// 0057a145  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057a149  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a14d  56                   push esi
// 0057a14e  50                   push eax
// 0057a14f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0057a153  8bf1                 mov esi, ecx
// 0057a155  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a159  51                   push ecx
// 0057a15a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057a15e  52                   push edx
// 0057a15f  50                   push eax
// 0057a160  51                   push ecx
// 0057a161  8d542440             lea edx, [esp + 0x40]
// 0057a165  52                   push edx
// 0057a166  e805f9ffff           call 0x579a70
// 0057a16b  8b10                 mov edx, dword ptr [eax]
// 0057a16d  83c410               add esp, 0x10
// 0057a170  8bcc                 mov ecx, esp
// 0057a172  c70000000000         mov dword ptr [eax], 0
// 0057a178  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0057a180  8964242c             mov dword ptr [esp + 0x2c], esp
// 0057a184  8911                 mov dword ptr [ecx], edx
// 0057a186  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057a18a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057a18e  52                   push edx
// 0057a18f  50                   push eax
// 0057a190  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0057a195  e846fdffff           call 0x579ee0
// 0057a19a  50                   push eax
// 0057a19b  8bce                 mov ecx, esi
// 0057a19d  c644242000           mov byte ptr [esp + 0x20], 0
// 0057a1a2  e87985ffff           call 0x572720
// 0057a1a7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057a1ab  51                   push ecx
// 0057a1ac  e8b15a0b00           call 0x62fc62
// 0057a1b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0057a1b5  83c404               add esp, 4
// 0057a1b8  c706d4b27a00         mov dword ptr [esi], 0x7ab2d4
// 0057a1be  8bc6                 mov eax, esi
// 0057a1c0  64890d00000000       mov dword ptr fs:[0], ecx
// 0057a1c7  5e                   pop esi
// 0057a1c8  83c40c               add esp, 0xc
// 0057a1cb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
