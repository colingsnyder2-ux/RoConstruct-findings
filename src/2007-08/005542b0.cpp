// roc 2007-08 005542b0  unit: RBX::VTeam::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005542b0
//
// 005542b0  64a100000000         mov eax, dword ptr fs:[0]
// 005542b6  6aff                 push -1
// 005542b8  6890117500           push 0x751190
// 005542bd  50                   push eax
// 005542be  64892500000000       mov dword ptr fs:[0], esp
// 005542c5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005542c9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005542cd  56                   push esi
// 005542ce  50                   push eax
// 005542cf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005542d3  8bf1                 mov esi, ecx
// 005542d5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005542d9  51                   push ecx
// 005542da  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005542de  52                   push edx
// 005542df  50                   push eax
// 005542e0  51                   push ecx
// 005542e1  8d542440             lea edx, [esp + 0x40]
// 005542e5  52                   push edx
// 005542e6  e8d5fdffff           call 0x5540c0
// 005542eb  8b10                 mov edx, dword ptr [eax]
// 005542ed  83c410               add esp, 0x10
// 005542f0  8bcc                 mov ecx, esp
// 005542f2  c70000000000         mov dword ptr [eax], 0
// 005542f8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00554300  8964242c             mov dword ptr [esp + 0x2c], esp
// 00554304  8911                 mov dword ptr [ecx], edx
// 00554306  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055430a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055430e  52                   push edx
// 0055430f  50                   push eax
// 00554310  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00554315  e886feffff           call 0x5541a0
// 0055431a  50                   push eax
// 0055431b  8bce                 mov ecx, esi
// 0055431d  c644242000           mov byte ptr [esp + 0x20], 0
// 00554322  e8b93df3ff           call 0x4880e0
// 00554327  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055432b  51                   push ecx
// 0055432c  e831b90d00           call 0x62fc62
// 00554331  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00554335  83c404               add esp, 4
// 00554338  c70634807a00         mov dword ptr [esi], 0x7a8034
// 0055433e  8bc6                 mov eax, esi
// 00554340  64890d00000000       mov dword ptr fs:[0], ecx
// 00554347  5e                   pop esi
// 00554348  83c40c               add esp, 0xc
// 0055434b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
