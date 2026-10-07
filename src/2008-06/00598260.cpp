// roc 2008-06 00598260  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598260
//
// 00598260  6aff                 push -1
// 00598262  6840137d00           push 0x7d1340
// 00598267  64a100000000         mov eax, dword ptr fs:[0]
// 0059826d  50                   push eax
// 0059826e  64892500000000       mov dword ptr fs:[0], esp
// 00598275  51                   push ecx
// 00598276  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0059827a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059827e  56                   push esi
// 0059827f  50                   push eax
// 00598280  8b442428             mov eax, dword ptr [esp + 0x28]
// 00598284  8bf1                 mov esi, ecx
// 00598286  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0059828a  51                   push ecx
// 0059828b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059828f  52                   push edx
// 00598290  50                   push eax
// 00598291  51                   push ecx
// 00598292  8d542444             lea edx, [esp + 0x44]
// 00598296  52                   push edx
// 00598297  e814f7ffff           call 0x5979b0
// 0059829c  8b08                 mov ecx, dword ptr [eax]
// 0059829e  83c410               add esp, 0x10
// 005982a1  c70000000000         mov dword ptr [eax], 0
// 005982a7  8bc4                 mov eax, esp
// 005982a9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005982b1  8964240c             mov dword ptr [esp + 0xc], esp
// 005982b5  8908                 mov dword ptr [eax], ecx
// 005982b7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005982bb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005982bf  50                   push eax
// 005982c0  51                   push ecx
// 005982c1  c644242001           mov byte ptr [esp + 0x20], 1
// 005982c6  e8c5fdffff           call 0x598090
// 005982cb  50                   push eax
// 005982cc  8bce                 mov ecx, esi
// 005982ce  c644242400           mov byte ptr [esp + 0x24], 0
// 005982d3  e838d3eaff           call 0x445610
// 005982d8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005982dc  85c0                 test eax, eax
// 005982de  7409                 je 0x5982e9
// 005982e0  50                   push eax
// 005982e1  e894831000           call 0x6a067a
// 005982e6  83c404               add esp, 4
// 005982e9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005982ed  c70608268300         mov dword ptr [esi], 0x832608
// 005982f3  8bc6                 mov eax, esi
// 005982f5  64890d00000000       mov dword ptr fs:[0], ecx
// 005982fc  5e                   pop esi
// 005982fd  83c410               add esp, 0x10
// 00598300  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
