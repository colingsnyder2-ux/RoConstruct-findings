// roc 2008-06 00566220  unit: RBX::VTeam::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00566220
//
// 00566220  6aff                 push -1
// 00566222  6840137d00           push 0x7d1340
// 00566227  64a100000000         mov eax, dword ptr fs:[0]
// 0056622d  50                   push eax
// 0056622e  64892500000000       mov dword ptr fs:[0], esp
// 00566235  51                   push ecx
// 00566236  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0056623a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0056623e  56                   push esi
// 0056623f  50                   push eax
// 00566240  8b442428             mov eax, dword ptr [esp + 0x28]
// 00566244  8bf1                 mov esi, ecx
// 00566246  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056624a  51                   push ecx
// 0056624b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056624f  52                   push edx
// 00566250  50                   push eax
// 00566251  51                   push ecx
// 00566252  8d542444             lea edx, [esp + 0x44]
// 00566256  52                   push edx
// 00566257  e824feffff           call 0x566080
// 0056625c  8b08                 mov ecx, dword ptr [eax]
// 0056625e  83c410               add esp, 0x10
// 00566261  c70000000000         mov dword ptr [eax], 0
// 00566267  8bc4                 mov eax, esp
// 00566269  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00566271  8964240c             mov dword ptr [esp + 0xc], esp
// 00566275  8908                 mov dword ptr [eax], ecx
// 00566277  8b442424             mov eax, dword ptr [esp + 0x24]
// 0056627b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056627f  50                   push eax
// 00566280  51                   push ecx
// 00566281  c644242001           mov byte ptr [esp + 0x20], 1
// 00566286  e825ffffff           call 0x5661b0
// 0056628b  50                   push eax
// 0056628c  8bce                 mov ecx, esi
// 0056628e  c644242400           mov byte ptr [esp + 0x24], 0
// 00566293  e808d0edff           call 0x4432a0
// 00566298  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056629c  85c0                 test eax, eax
// 0056629e  7409                 je 0x5662a9
// 005662a0  50                   push eax
// 005662a1  e8d4a31300           call 0x6a067a
// 005662a6  83c404               add esp, 4
// 005662a9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005662ad  c706c8ea8200         mov dword ptr [esi], 0x82eac8
// 005662b3  8bc6                 mov eax, esi
// 005662b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005662bc  5e                   pop esi
// 005662bd  83c410               add esp, 0x10
// 005662c0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
