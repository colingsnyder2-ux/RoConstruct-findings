// roc 2007-08 00554350  unit: RBX::VTeam::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00554350
//
// 00554350  64a100000000         mov eax, dword ptr fs:[0]
// 00554356  6aff                 push -1
// 00554358  6890117500           push 0x751190
// 0055435d  50                   push eax
// 0055435e  64892500000000       mov dword ptr fs:[0], esp
// 00554365  8b442428             mov eax, dword ptr [esp + 0x28]
// 00554369  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055436d  56                   push esi
// 0055436e  50                   push eax
// 0055436f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00554373  8bf1                 mov esi, ecx
// 00554375  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00554379  51                   push ecx
// 0055437a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055437e  52                   push edx
// 0055437f  50                   push eax
// 00554380  51                   push ecx
// 00554381  8d542440             lea edx, [esp + 0x40]
// 00554385  52                   push edx
// 00554386  e895fdffff           call 0x554120
// 0055438b  8b10                 mov edx, dword ptr [eax]
// 0055438d  83c410               add esp, 0x10
// 00554390  8bcc                 mov ecx, esp
// 00554392  c70000000000         mov dword ptr [eax], 0
// 00554398  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005543a0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005543a4  8911                 mov dword ptr [ecx], edx
// 005543a6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005543aa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005543ae  52                   push edx
// 005543af  50                   push eax
// 005543b0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005543b5  e8e6fdffff           call 0x5541a0
// 005543ba  50                   push eax
// 005543bb  8bce                 mov ecx, esi
// 005543bd  c644242000           mov byte ptr [esp + 0x20], 0
// 005543c2  e899e9eeff           call 0x442d60
// 005543c7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005543cb  51                   push ecx
// 005543cc  e891b80d00           call 0x62fc62
// 005543d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005543d5  83c404               add esp, 4
// 005543d8  c7065c807a00         mov dword ptr [esi], 0x7a805c
// 005543de  8bc6                 mov eax, esi
// 005543e0  64890d00000000       mov dword ptr fs:[0], ecx
// 005543e7  5e                   pop esi
// 005543e8  83c40c               add esp, 0xc
// 005543eb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
