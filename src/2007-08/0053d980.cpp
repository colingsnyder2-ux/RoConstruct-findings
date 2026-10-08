// roc 2007-08 0053d980  unit: RBX::VLocalScript::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d980
//
// 0053d980  64a100000000         mov eax, dword ptr fs:[0]
// 0053d986  6aff                 push -1
// 0053d988  6890117500           push 0x751190
// 0053d98d  50                   push eax
// 0053d98e  64892500000000       mov dword ptr fs:[0], esp
// 0053d995  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053d999  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053d99d  56                   push esi
// 0053d99e  50                   push eax
// 0053d99f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0053d9a3  8bf1                 mov esi, ecx
// 0053d9a5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053d9a9  51                   push ecx
// 0053d9aa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053d9ae  52                   push edx
// 0053d9af  50                   push eax
// 0053d9b0  51                   push ecx
// 0053d9b1  8d542440             lea edx, [esp + 0x40]
// 0053d9b5  52                   push edx
// 0053d9b6  e8e5fcffff           call 0x53d6a0
// 0053d9bb  8b10                 mov edx, dword ptr [eax]
// 0053d9bd  83c410               add esp, 0x10
// 0053d9c0  8bcc                 mov ecx, esp
// 0053d9c2  c70000000000         mov dword ptr [eax], 0
// 0053d9c8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0053d9d0  8964242c             mov dword ptr [esp + 0x2c], esp
// 0053d9d4  8911                 mov dword ptr [ecx], edx
// 0053d9d6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0053d9da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053d9de  52                   push edx
// 0053d9df  50                   push eax
// 0053d9e0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0053d9e5  e886feffff           call 0x53d870
// 0053d9ea  50                   push eax
// 0053d9eb  8bce                 mov ecx, esi
// 0053d9ed  c644242000           mov byte ptr [esp + 0x20], 0
// 0053d9f2  e8d9fbffff           call 0x53d5d0
// 0053d9f7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0053d9fb  51                   push ecx
// 0053d9fc  e861220f00           call 0x62fc62
// 0053da01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0053da05  83c404               add esp, 4
// 0053da08  c7065c607a00         mov dword ptr [esi], 0x7a605c
// 0053da0e  8bc6                 mov eax, esi
// 0053da10  64890d00000000       mov dword ptr fs:[0], ecx
// 0053da17  5e                   pop esi
// 0053da18  83c40c               add esp, 0xc
// 0053da1b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
