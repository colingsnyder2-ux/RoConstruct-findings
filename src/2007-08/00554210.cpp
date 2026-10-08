// roc 2007-08 00554210  unit: RBX::VTeam::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554210
//
// 00554210  64a100000000         mov eax, dword ptr fs:[0]
// 00554216  6aff                 push -1
// 00554218  6890117500           push 0x751190
// 0055421d  50                   push eax
// 0055421e  64892500000000       mov dword ptr fs:[0], esp
// 00554225  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554229  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055422d  56                   push esi
// 0055422e  50                   push eax
// 0055422f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00554233  8bf1                 mov esi, ecx
// 00554235  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00554239  51                   push ecx
// 0055423a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055423e  52                   push edx
// 0055423f  50                   push eax
// 00554240  51                   push ecx
// 00554241  8d542440             lea edx, [esp + 0x40]
// 00554245  52                   push edx
// 00554246  e815feffff           call 0x554060
// 0055424b  8b10                 mov edx, dword ptr [eax]
// 0055424d  83c410               add esp, 0x10
// 00554250  8bcc                 mov ecx, esp
// 00554252  c70000000000         mov dword ptr [eax], 0
// 00554258  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00554260  8964242c             mov dword ptr [esp + 0x2c], esp
// 00554264  8911                 mov dword ptr [ecx], edx
// 00554266  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055426a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055426e  52                   push edx
// 0055426f  50                   push eax
// 00554270  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00554275  e826ffffff           call 0x5541a0
// 0055427a  50                   push eax
// 0055427b  8bce                 mov ecx, esi
// 0055427d  c644242000           mov byte ptr [esp + 0x20], 0
// 00554282  e8d9ebeeff           call 0x442e60
// 00554287  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055428b  51                   push ecx
// 0055428c  e8d1b90d00           call 0x62fc62
// 00554291  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00554295  83c404               add esp, 4
// 00554298  c7060c807a00         mov dword ptr [esi], 0x7a800c
// 0055429e  8bc6                 mov eax, esi
// 005542a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005542a7  5e                   pop esi
// 005542a8  83c40c               add esp, 0xc
// 005542ab  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
