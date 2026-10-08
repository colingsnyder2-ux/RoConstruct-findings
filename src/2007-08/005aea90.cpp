// roc 2007-08 005aea90  unit: RBX::VLighting::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005aea90
//
// 005aea90  64a100000000         mov eax, dword ptr fs:[0]
// 005aea96  6aff                 push -1
// 005aea98  6890117500           push 0x751190
// 005aea9d  50                   push eax
// 005aea9e  64892500000000       mov dword ptr fs:[0], esp
// 005aeaa5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005aeaa9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aeaad  56                   push esi
// 005aeaae  50                   push eax
// 005aeaaf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005aeab3  8bf1                 mov esi, ecx
// 005aeab5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aeab9  51                   push ecx
// 005aeaba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005aeabe  52                   push edx
// 005aeabf  50                   push eax
// 005aeac0  51                   push ecx
// 005aeac1  8d542440             lea edx, [esp + 0x40]
// 005aeac5  52                   push edx
// 005aeac6  e8e5efffff           call 0x5adab0
// 005aeacb  8b10                 mov edx, dword ptr [eax]
// 005aeacd  83c410               add esp, 0x10
// 005aead0  8bcc                 mov ecx, esp
// 005aead2  c70000000000         mov dword ptr [eax], 0
// 005aead8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005aeae0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005aeae4  8911                 mov dword ptr [ecx], edx
// 005aeae6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005aeaea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aeaee  52                   push edx
// 005aeaef  50                   push eax
// 005aeaf0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005aeaf5  e836fdffff           call 0x5ae830
// 005aeafa  50                   push eax
// 005aeafb  8bce                 mov ecx, esi
// 005aeafd  c644242000           mov byte ptr [esp + 0x20], 0
// 005aeb02  e84964fcff           call 0x574f50
// 005aeb07  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005aeb0b  51                   push ecx
// 005aeb0c  e851110800           call 0x62fc62
// 005aeb11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005aeb15  83c404               add esp, 4
// 005aeb18  c706fc5a7b00         mov dword ptr [esi], 0x7b5afc
// 005aeb1e  8bc6                 mov eax, esi
// 005aeb20  64890d00000000       mov dword ptr fs:[0], ecx
// 005aeb27  5e                   pop esi
// 005aeb28  83c40c               add esp, 0xc
// 005aeb2b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
