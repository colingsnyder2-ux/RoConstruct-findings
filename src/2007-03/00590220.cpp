// roc 2007-03 00590220  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00590220
//
// 00590220  64a100000000         mov eax, dword ptr fs:[0]
// 00590226  6aff                 push -1
// 00590228  68a08b7500           push 0x758ba0
// 0059022d  50                   push eax
// 0059022e  64892500000000       mov dword ptr fs:[0], esp
// 00590235  8b442428             mov eax, dword ptr [esp + 0x28]
// 00590239  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059023d  56                   push esi
// 0059023e  50                   push eax
// 0059023f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00590243  8bf1                 mov esi, ecx
// 00590245  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00590249  51                   push ecx
// 0059024a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059024e  52                   push edx
// 0059024f  50                   push eax
// 00590250  51                   push ecx
// 00590251  8d542440             lea edx, [esp + 0x40]
// 00590255  52                   push edx
// 00590256  e815f1ffff           call 0x58f370
// 0059025b  8b10                 mov edx, dword ptr [eax]
// 0059025d  83c410               add esp, 0x10
// 00590260  8bcc                 mov ecx, esp
// 00590262  c70000000000         mov dword ptr [eax], 0
// 00590268  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00590270  8964242c             mov dword ptr [esp + 0x2c], esp
// 00590274  8911                 mov dword ptr [ecx], edx
// 00590276  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059027a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059027e  52                   push edx
// 0059027f  50                   push eax
// 00590280  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00590285  e816feffff           call 0x5900a0
// 0059028a  50                   push eax
// 0059028b  8bce                 mov ecx, esi
// 0059028d  c644242000           mov byte ptr [esp + 0x20], 0
// 00590292  e85949faff           call 0x534bf0
// 00590297  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059029b  51                   push ecx
// 0059029c  e84fde0800           call 0x61e0f0
// 005902a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005902a5  83c404               add esp, 4
// 005902a8  c706b4167b00         mov dword ptr [esi], 0x7b16b4
// 005902ae  8bc6                 mov eax, esi
// 005902b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005902b7  5e                   pop esi
// 005902b8  83c40c               add esp, 0xc
// 005902bb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
