// roc 2007-03 00585870  unit: seg_00580000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00585870
//
// 00585870  64a100000000         mov eax, dword ptr fs:[0]
// 00585876  6aff                 push -1
// 00585878  68a08b7500           push 0x758ba0
// 0058587d  50                   push eax
// 0058587e  64892500000000       mov dword ptr fs:[0], esp
// 00585885  8b442428             mov eax, dword ptr [esp + 0x28]
// 00585889  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058588d  56                   push esi
// 0058588e  50                   push eax
// 0058588f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00585893  8bf1                 mov esi, ecx
// 00585895  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00585899  51                   push ecx
// 0058589a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058589e  52                   push edx
// 0058589f  50                   push eax
// 005858a0  51                   push ecx
// 005858a1  8d542440             lea edx, [esp + 0x40]
// 005858a5  52                   push edx
// 005858a6  e8d5e9ffff           call 0x584280
// 005858ab  8b10                 mov edx, dword ptr [eax]
// 005858ad  83c410               add esp, 0x10
// 005858b0  8bcc                 mov ecx, esp
// 005858b2  c70000000000         mov dword ptr [eax], 0
// 005858b8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005858c0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005858c4  8911                 mov dword ptr [ecx], edx
// 005858c6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005858ca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005858ce  52                   push edx
// 005858cf  50                   push eax
// 005858d0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005858d5  e8a6fdffff           call 0x585680
// 005858da  50                   push eax
// 005858db  8bce                 mov ecx, esi
// 005858dd  c644242000           mov byte ptr [esp + 0x20], 0
// 005858e2  e8d9efebff           call 0x4448c0
// 005858e7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005858eb  51                   push ecx
// 005858ec  e8ff870900           call 0x61e0f0
// 005858f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005858f5  83c404               add esp, 4
// 005858f8  c70628fd7a00         mov dword ptr [esi], 0x7afd28
// 005858fe  8bc6                 mov eax, esi
// 00585900  64890d00000000       mov dword ptr fs:[0], ecx
// 00585907  5e                   pop esi
// 00585908  83c40c               add esp, 0xc
// 0058590b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
