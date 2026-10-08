// roc 2007-08 0059b1c0  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b1c0
//
// 0059b1c0  64a100000000         mov eax, dword ptr fs:[0]
// 0059b1c6  6aff                 push -1
// 0059b1c8  6890117500           push 0x751190
// 0059b1cd  50                   push eax
// 0059b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0059b1d5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059b1d9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b1dd  56                   push esi
// 0059b1de  50                   push eax
// 0059b1df  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059b1e3  8bf1                 mov esi, ecx
// 0059b1e5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059b1e9  51                   push ecx
// 0059b1ea  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059b1ee  52                   push edx
// 0059b1ef  50                   push eax
// 0059b1f0  51                   push ecx
// 0059b1f1  8d542440             lea edx, [esp + 0x40]
// 0059b1f5  52                   push edx
// 0059b1f6  e8d5f2ffff           call 0x59a4d0
// 0059b1fb  8b10                 mov edx, dword ptr [eax]
// 0059b1fd  83c410               add esp, 0x10
// 0059b200  8bcc                 mov ecx, esp
// 0059b202  c70000000000         mov dword ptr [eax], 0
// 0059b208  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059b210  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059b214  8911                 mov dword ptr [ecx], edx
// 0059b216  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b21a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059b21e  52                   push edx
// 0059b21f  50                   push eax
// 0059b220  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059b225  e876fdffff           call 0x59afa0
// 0059b22a  50                   push eax
// 0059b22b  8bce                 mov ecx, esi
// 0059b22d  c644242000           mov byte ptr [esp + 0x20], 0
// 0059b232  e8995cf9ff           call 0x530ed0
// 0059b237  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059b23b  51                   push ecx
// 0059b23c  e8214a0900           call 0x62fc62
// 0059b241  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b245  83c404               add esp, 4
// 0059b248  c706e0167b00         mov dword ptr [esi], 0x7b16e0
// 0059b24e  8bc6                 mov eax, esi
// 0059b250  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b257  5e                   pop esi
// 0059b258  83c40c               add esp, 0xc
// 0059b25b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
