// roc 2008-06 00566380  unit: RBX::VTeam::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566380
//
// 00566380  6aff                 push -1
// 00566382  6840137d00           push 0x7d1340
// 00566387  64a100000000         mov eax, dword ptr fs:[0]
// 0056638d  50                   push eax
// 0056638e  64892500000000       mov dword ptr fs:[0], esp
// 00566395  51                   push ecx
// 00566396  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056639a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0056639e  56                   push esi
// 0056639f  50                   push eax
// 005663a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005663a4  8bf1                 mov esi, ecx
// 005663a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005663aa  51                   push ecx
// 005663ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005663af  52                   push edx
// 005663b0  50                   push eax
// 005663b1  51                   push ecx
// 005663b2  8d542444             lea edx, [esp + 0x44]
// 005663b6  52                   push edx
// 005663b7  e864fdffff           call 0x566120
// 005663bc  8b08                 mov ecx, dword ptr [eax]
// 005663be  83c410               add esp, 0x10
// 005663c1  c70000000000         mov dword ptr [eax], 0
// 005663c7  8bc4                 mov eax, esp
// 005663c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005663d1  8964240c             mov dword ptr [esp + 0xc], esp
// 005663d5  8908                 mov dword ptr [eax], ecx
// 005663d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005663db  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005663df  50                   push eax
// 005663e0  51                   push ecx
// 005663e1  c644242001           mov byte ptr [esp + 0x20], 1
// 005663e6  e8c5fdffff           call 0x5661b0
// 005663eb  50                   push eax
// 005663ec  8bce                 mov ecx, esi
// 005663ee  c644242400           mov byte ptr [esp + 0x24], 0
// 005663f3  e8983eeaff           call 0x40a290
// 005663f8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005663fc  85c0                 test eax, eax
// 005663fe  7409                 je 0x566409
// 00566400  50                   push eax
// 00566401  e874a21300           call 0x6a067a
// 00566406  83c404               add esp, 4
// 00566409  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056640d  c70630eb8200         mov dword ptr [esi], 0x82eb30
// 00566413  8bc6                 mov eax, esi
// 00566415  64890d00000000       mov dword ptr fs:[0], ecx
// 0056641c  5e                   pop esi
// 0056641d  83c410               add esp, 0x10
// 00566420  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
