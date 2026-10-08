// roc 2007-08 0061b1c0  unit: RBX::VModelInstance::?$RefPropDescriptor  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0061b1c0
//
// 0061b1c0  64a100000000         mov eax, dword ptr fs:[0]
// 0061b1c6  6aff                 push -1
// 0061b1c8  6890117500           push 0x751190
// 0061b1cd  50                   push eax
// 0061b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0061b1d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0061b1d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061b1dd  56                   push esi
// 0061b1de  50                   push eax
// 0061b1df  8b442424             mov eax, dword ptr [esp + 0x24]
// 0061b1e3  8bf1                 mov esi, ecx
// 0061b1e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061b1e9  51                   push ecx
// 0061b1ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0061b1ee  52                   push edx
// 0061b1ef  50                   push eax
// 0061b1f0  51                   push ecx
// 0061b1f1  8d542440             lea edx, [esp + 0x40]
// 0061b1f5  52                   push edx
// 0061b1f6  e805fdffff           call 0x61af00
// 0061b1fb  8b10                 mov edx, dword ptr [eax]
// 0061b1fd  83c410               add esp, 0x10
// 0061b200  8bcc                 mov ecx, esp
// 0061b202  c70000000000         mov dword ptr [eax], 0
// 0061b208  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0061b210  8964242c             mov dword ptr [esp + 0x2c], esp
// 0061b214  8911                 mov dword ptr [ecx], edx
// 0061b216  8b542420             mov edx, dword ptr [esp + 0x20]
// 0061b21a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061b21e  52                   push edx
// 0061b21f  50                   push eax
// 0061b220  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0061b225  e88683fbff           call 0x5d35b0
// 0061b22a  50                   push eax
// 0061b22b  8bce                 mov ecx, esi
// 0061b22d  c644242000           mov byte ptr [esp + 0x20], 0
// 0061b232  e8e974f5ff           call 0x572720
// 0061b237  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061b23b  51                   push ecx
// 0061b23c  e8214a0100           call 0x62fc62
// 0061b241  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0061b245  83c404               add esp, 4
// 0061b248  c706743b7c00         mov dword ptr [esi], 0x7c3b74
// 0061b24e  8bc6                 mov eax, esi
// 0061b250  64890d00000000       mov dword ptr fs:[0], ecx
// 0061b257  5e                   pop esi
// 0061b258  83c40c               add esp, 0xc
// 0061b25b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
