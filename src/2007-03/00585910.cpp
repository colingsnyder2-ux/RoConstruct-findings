// roc 2007-03 00585910  unit: seg_00580000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585910
//
// 00585910  64a100000000         mov eax, dword ptr fs:[0]
// 00585916  6aff                 push -1
// 00585918  68a08b7500           push 0x758ba0
// 0058591d  50                   push eax
// 0058591e  64892500000000       mov dword ptr fs:[0], esp
// 00585925  8b442428             mov eax, dword ptr [esp + 0x28]
// 00585929  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058592d  56                   push esi
// 0058592e  50                   push eax
// 0058592f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00585933  8bf1                 mov esi, ecx
// 00585935  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585939  51                   push ecx
// 0058593a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058593e  52                   push edx
// 0058593f  50                   push eax
// 00585940  51                   push ecx
// 00585941  8d542440             lea edx, [esp + 0x40]
// 00585945  52                   push edx
// 00585946  e8a5edffff           call 0x5846f0
// 0058594b  8b10                 mov edx, dword ptr [eax]
// 0058594d  83c410               add esp, 0x10
// 00585950  8bcc                 mov ecx, esp
// 00585952  c70000000000         mov dword ptr [eax], 0
// 00585958  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00585960  8964242c             mov dword ptr [esp + 0x2c], esp
// 00585964  8911                 mov dword ptr [ecx], edx
// 00585966  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058596a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058596e  52                   push edx
// 0058596f  50                   push eax
// 00585970  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00585975  e806fdffff           call 0x585680
// 0058597a  50                   push eax
// 0058597b  8bce                 mov ecx, esi
// 0058597d  c644242000           mov byte ptr [esp + 0x20], 0
// 00585982  e819d0ebff           call 0x4429a0
// 00585987  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058598b  51                   push ecx
// 0058598c  e85f870900           call 0x61e0f0
// 00585991  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00585995  83c404               add esp, 4
// 00585998  c70650fd7a00         mov dword ptr [esi], 0x7afd50
// 0058599e  8bc6                 mov eax, esi
// 005859a0  64890d00000000       mov dword ptr fs:[0], ecx
// 005859a7  5e                   pop esi
// 005859a8  83c40c               add esp, 0xc
// 005859ab  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
