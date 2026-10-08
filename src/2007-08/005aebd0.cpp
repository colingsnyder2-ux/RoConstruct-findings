// roc 2007-08 005aebd0  unit: RBX::VLighting::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aebd0
//
// 005aebd0  64a100000000         mov eax, dword ptr fs:[0]
// 005aebd6  6aff                 push -1
// 005aebd8  6890117500           push 0x751190
// 005aebdd  50                   push eax
// 005aebde  64892500000000       mov dword ptr fs:[0], esp
// 005aebe5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aebe9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aebed  56                   push esi
// 005aebee  50                   push eax
// 005aebef  8b442424             mov eax, dword ptr [esp + 0x24]
// 005aebf3  8bf1                 mov esi, ecx
// 005aebf5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aebf9  51                   push ecx
// 005aebfa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005aebfe  52                   push edx
// 005aebff  50                   push eax
// 005aec00  51                   push ecx
// 005aec01  8d542440             lea edx, [esp + 0x40]
// 005aec05  52                   push edx
// 005aec06  e865efffff           call 0x5adb70
// 005aec0b  8b10                 mov edx, dword ptr [eax]
// 005aec0d  83c410               add esp, 0x10
// 005aec10  8bcc                 mov ecx, esp
// 005aec12  c70000000000         mov dword ptr [eax], 0
// 005aec18  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005aec20  8964242c             mov dword ptr [esp + 0x2c], esp
// 005aec24  8911                 mov dword ptr [ecx], edx
// 005aec26  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aec2a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aec2e  52                   push edx
// 005aec2f  50                   push eax
// 005aec30  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005aec35  e8f6fbffff           call 0x5ae830
// 005aec3a  50                   push eax
// 005aec3b  8bce                 mov ecx, esi
// 005aec3d  c644242000           mov byte ptr [esp + 0x20], 0
// 005aec42  e89966e9ff           call 0x4452e0
// 005aec47  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aec4b  51                   push ecx
// 005aec4c  e811100800           call 0x62fc62
// 005aec51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aec55  83c404               add esp, 4
// 005aec58  c7064c5b7b00         mov dword ptr [esi], 0x7b5b4c
// 005aec5e  8bc6                 mov eax, esi
// 005aec60  64890d00000000       mov dword ptr fs:[0], ecx
// 005aec67  5e                   pop esi
// 005aec68  83c40c               add esp, 0xc
// 005aec6b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
