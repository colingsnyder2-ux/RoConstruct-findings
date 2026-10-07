// roc 2008-06 005e12d0  unit: RBX::VLighting::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e12d0
//
// 005e12d0  6aff                 push -1
// 005e12d2  6840137d00           push 0x7d1340
// 005e12d7  64a100000000         mov eax, dword ptr fs:[0]
// 005e12dd  50                   push eax
// 005e12de  64892500000000       mov dword ptr fs:[0], esp
// 005e12e5  51                   push ecx
// 005e12e6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e12ea  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e12ee  56                   push esi
// 005e12ef  50                   push eax
// 005e12f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e12f4  8bf1                 mov esi, ecx
// 005e12f6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e12fa  51                   push ecx
// 005e12fb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e12ff  52                   push edx
// 005e1300  50                   push eax
// 005e1301  51                   push ecx
// 005e1302  8d542444             lea edx, [esp + 0x44]
// 005e1306  52                   push edx
// 005e1307  e864f0ffff           call 0x5e0370
// 005e130c  8b08                 mov ecx, dword ptr [eax]
// 005e130e  83c410               add esp, 0x10
// 005e1311  c70000000000         mov dword ptr [eax], 0
// 005e1317  8bc4                 mov eax, esp
// 005e1319  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e1321  8964240c             mov dword ptr [esp + 0xc], esp
// 005e1325  8908                 mov dword ptr [eax], ecx
// 005e1327  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e132b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e132f  50                   push eax
// 005e1330  51                   push ecx
// 005e1331  c644242001           mov byte ptr [esp + 0x20], 1
// 005e1336  e8c5fdffff           call 0x5e1100
// 005e133b  50                   push eax
// 005e133c  8bce                 mov ecx, esi
// 005e133e  c644242400           mov byte ptr [esp + 0x24], 0
// 005e1343  e8c890fbff           call 0x59a410
// 005e1348  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e134c  85c0                 test eax, eax
// 005e134e  7409                 je 0x5e1359
// 005e1350  50                   push eax
// 005e1351  e824f30b00           call 0x6a067a
// 005e1356  83c404               add esp, 4
// 005e1359  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e135d  c706fcdc8300         mov dword ptr [esi], 0x83dcfc
// 005e1363  8bc6                 mov eax, esi
// 005e1365  64890d00000000       mov dword ptr fs:[0], ecx
// 005e136c  5e                   pop esi
// 005e136d  83c410               add esp, 0x10
// 005e1370  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
