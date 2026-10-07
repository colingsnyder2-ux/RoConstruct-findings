// roc 2008-06 005662d0  unit: RBX::VTeam::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005662d0
//
// 005662d0  6aff                 push -1
// 005662d2  6840137d00           push 0x7d1340
// 005662d7  64a100000000         mov eax, dword ptr fs:[0]
// 005662dd  50                   push eax
// 005662de  64892500000000       mov dword ptr fs:[0], esp
// 005662e5  51                   push ecx
// 005662e6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005662ea  8b542424             mov edx, dword ptr [esp + 0x24]
// 005662ee  56                   push esi
// 005662ef  50                   push eax
// 005662f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005662f4  8bf1                 mov esi, ecx
// 005662f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005662fa  51                   push ecx
// 005662fb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005662ff  52                   push edx
// 00566300  50                   push eax
// 00566301  51                   push ecx
// 00566302  8d542444             lea edx, [esp + 0x44]
// 00566306  52                   push edx
// 00566307  e8c4fdffff           call 0x5660d0
// 0056630c  8b08                 mov ecx, dword ptr [eax]
// 0056630e  83c410               add esp, 0x10
// 00566311  c70000000000         mov dword ptr [eax], 0
// 00566317  8bc4                 mov eax, esp
// 00566319  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00566321  8964240c             mov dword ptr [esp + 0xc], esp
// 00566325  8908                 mov dword ptr [eax], ecx
// 00566327  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056632b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056632f  50                   push eax
// 00566330  51                   push ecx
// 00566331  c644242001           mov byte ptr [esp + 0x20], 1
// 00566336  e875feffff           call 0x5661b0
// 0056633b  50                   push eax
// 0056633c  8bce                 mov ecx, esi
// 0056633e  c644242400           mov byte ptr [esp + 0x24], 0
// 00566343  e8384ef2ff           call 0x48b180
// 00566348  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056634c  85c0                 test eax, eax
// 0056634e  7409                 je 0x566359
// 00566350  50                   push eax
// 00566351  e824a31300           call 0x6a067a
// 00566356  83c404               add esp, 4
// 00566359  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056635d  c706fcea8200         mov dword ptr [esi], 0x82eafc
// 00566363  8bc6                 mov eax, esi
// 00566365  64890d00000000       mov dword ptr fs:[0], ecx
// 0056636c  5e                   pop esi
// 0056636d  83c410               add esp, 0x10
// 00566370  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
