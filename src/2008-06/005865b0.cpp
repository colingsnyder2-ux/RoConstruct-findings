// roc 2008-06 005865b0  unit: RBX::VContentId::?$TypedPropertyDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005865b0
//
// 005865b0  6aff                 push -1
// 005865b2  6840137d00           push 0x7d1340
// 005865b7  64a100000000         mov eax, dword ptr fs:[0]
// 005865bd  50                   push eax
// 005865be  64892500000000       mov dword ptr fs:[0], esp
// 005865c5  51                   push ecx
// 005865c6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005865ca  8b542424             mov edx, dword ptr [esp + 0x24]
// 005865ce  56                   push esi
// 005865cf  50                   push eax
// 005865d0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005865d4  8bf1                 mov esi, ecx
// 005865d6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005865da  51                   push ecx
// 005865db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005865df  52                   push edx
// 005865e0  50                   push eax
// 005865e1  51                   push ecx
// 005865e2  8d542444             lea edx, [esp + 0x44]
// 005865e6  52                   push edx
// 005865e7  e8b4faffff           call 0x5860a0
// 005865ec  8b08                 mov ecx, dword ptr [eax]
// 005865ee  83c410               add esp, 0x10
// 005865f1  c70000000000         mov dword ptr [eax], 0
// 005865f7  8bc4                 mov eax, esp
// 005865f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00586601  8964240c             mov dword ptr [esp + 0xc], esp
// 00586605  8908                 mov dword ptr [eax], ecx
// 00586607  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058660b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058660f  50                   push eax
// 00586610  51                   push ecx
// 00586611  c644242001           mov byte ptr [esp + 0x20], 1
// 00586616  e825ffffff           call 0x586540
// 0058661b  50                   push eax
// 0058661c  8bce                 mov ecx, esi
// 0058661e  c644242400           mov byte ptr [esp + 0x24], 0
// 00586623  e808ccebff           call 0x443230
// 00586628  8b442430             mov eax, dword ptr [esp + 0x30]
// 0058662c  85c0                 test eax, eax
// 0058662e  7409                 je 0x586639
// 00586630  50                   push eax
// 00586631  e844a01100           call 0x6a067a
// 00586636  83c404               add esp, 4
// 00586639  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058663d  c7062c138300         mov dword ptr [esi], 0x83132c
// 00586643  8bc6                 mov eax, esi
// 00586645  64890d00000000       mov dword ptr fs:[0], ecx
// 0058664c  5e                   pop esi
// 0058664d  83c410               add esp, 0x10
// 00586650  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
