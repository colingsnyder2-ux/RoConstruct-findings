// roc 2007-08 005aeb30  unit: RBX::VLighting::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aeb30
//
// 005aeb30  64a100000000         mov eax, dword ptr fs:[0]
// 005aeb36  6aff                 push -1
// 005aeb38  6890117500           push 0x751190
// 005aeb3d  50                   push eax
// 005aeb3e  64892500000000       mov dword ptr fs:[0], esp
// 005aeb45  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aeb49  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aeb4d  56                   push esi
// 005aeb4e  50                   push eax
// 005aeb4f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005aeb53  8bf1                 mov esi, ecx
// 005aeb55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aeb59  51                   push ecx
// 005aeb5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005aeb5e  52                   push edx
// 005aeb5f  50                   push eax
// 005aeb60  51                   push ecx
// 005aeb61  8d542440             lea edx, [esp + 0x40]
// 005aeb65  52                   push edx
// 005aeb66  e8a5efffff           call 0x5adb10
// 005aeb6b  8b10                 mov edx, dword ptr [eax]
// 005aeb6d  83c410               add esp, 0x10
// 005aeb70  8bcc                 mov ecx, esp
// 005aeb72  c70000000000         mov dword ptr [eax], 0
// 005aeb78  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005aeb80  8964242c             mov dword ptr [esp + 0x2c], esp
// 005aeb84  8911                 mov dword ptr [ecx], edx
// 005aeb86  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aeb8a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aeb8e  52                   push edx
// 005aeb8f  50                   push eax
// 005aeb90  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005aeb95  e896fcffff           call 0x5ae830
// 005aeb9a  50                   push eax
// 005aeb9b  8bce                 mov ecx, esi
// 005aeb9d  c644242000           mov byte ptr [esp + 0x20], 0
// 005aeba2  e83942e9ff           call 0x442de0
// 005aeba7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aebab  51                   push ecx
// 005aebac  e8b1100800           call 0x62fc62
// 005aebb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aebb5  83c404               add esp, 4
// 005aebb8  c706245b7b00         mov dword ptr [esi], 0x7b5b24
// 005aebbe  8bc6                 mov eax, esi
// 005aebc0  64890d00000000       mov dword ptr fs:[0], ecx
// 005aebc7  5e                   pop esi
// 005aebc8  83c40c               add esp, 0xc
// 005aebcb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
