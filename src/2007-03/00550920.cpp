// roc 2007-03 00550920  unit: seg_00550000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00550920
//
// 00550920  64a100000000         mov eax, dword ptr fs:[0]
// 00550926  6aff                 push -1
// 00550928  68a08b7500           push 0x758ba0
// 0055092d  50                   push eax
// 0055092e  64892500000000       mov dword ptr fs:[0], esp
// 00550935  8b442428             mov eax, dword ptr [esp + 0x28]
// 00550939  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055093d  56                   push esi
// 0055093e  50                   push eax
// 0055093f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00550943  8bf1                 mov esi, ecx
// 00550945  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00550949  51                   push ecx
// 0055094a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0055094e  52                   push edx
// 0055094f  50                   push eax
// 00550950  51                   push ecx
// 00550951  8d542440             lea edx, [esp + 0x40]
// 00550955  52                   push edx
// 00550956  e8b5fdffff           call 0x550710
// 0055095b  8b10                 mov edx, dword ptr [eax]
// 0055095d  83c410               add esp, 0x10
// 00550960  8bcc                 mov ecx, esp
// 00550962  c70000000000         mov dword ptr [eax], 0
// 00550968  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00550970  8964242c             mov dword ptr [esp + 0x2c], esp
// 00550974  8911                 mov dword ptr [ecx], edx
// 00550976  8b542420             mov edx, dword ptr [esp + 0x20]
// 0055097a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055097e  52                   push edx
// 0055097f  50                   push eax
// 00550980  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00550985  e886feffff           call 0x550810
// 0055098a  50                   push eax
// 0055098b  8bce                 mov ecx, esi
// 0055098d  c644242000           mov byte ptr [esp + 0x20], 0
// 00550992  e85956f3ff           call 0x485ff0
// 00550997  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0055099b  51                   push ecx
// 0055099c  e84fd70c00           call 0x61e0f0
// 005509a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005509a5  83c404               add esp, 4
// 005509a8  c70688807a00         mov dword ptr [esi], 0x7a8088
// 005509ae  8bc6                 mov eax, esi
// 005509b0  64890d00000000       mov dword ptr fs:[0], ecx
// 005509b7  5e                   pop esi
// 005509b8  83c40c               add esp, 0xc
// 005509bb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
