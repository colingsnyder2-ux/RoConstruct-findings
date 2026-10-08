// roc 2007-03 00571740  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00571740
//
// 00571740  64a100000000         mov eax, dword ptr fs:[0]
// 00571746  6aff                 push -1
// 00571748  68a08b7500           push 0x758ba0
// 0057174d  50                   push eax
// 0057174e  64892500000000       mov dword ptr fs:[0], esp
// 00571755  8b442428             mov eax, dword ptr [esp + 0x28]
// 00571759  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057175d  56                   push esi
// 0057175e  50                   push eax
// 0057175f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00571763  8bf1                 mov esi, ecx
// 00571765  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00571769  51                   push ecx
// 0057176a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057176e  52                   push edx
// 0057176f  50                   push eax
// 00571770  51                   push ecx
// 00571771  8d542440             lea edx, [esp + 0x40]
// 00571775  52                   push edx
// 00571776  e8b5faffff           call 0x571230
// 0057177b  8b10                 mov edx, dword ptr [eax]
// 0057177d  83c410               add esp, 0x10
// 00571780  8bcc                 mov ecx, esp
// 00571782  c70000000000         mov dword ptr [eax], 0
// 00571788  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00571790  8964242c             mov dword ptr [esp + 0x2c], esp
// 00571794  8911                 mov dword ptr [ecx], edx
// 00571796  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057179a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057179e  52                   push edx
// 0057179f  50                   push eax
// 005717a0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005717a5  e816feffff           call 0x5715c0
// 005717aa  50                   push eax
// 005717ab  8bce                 mov ecx, esi
// 005717ad  c644242000           mov byte ptr [esp + 0x20], 0
// 005717b2  e80931edff           call 0x4448c0
// 005717b7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005717bb  51                   push ecx
// 005717bc  e82fc90a00           call 0x61e0f0
// 005717c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005717c5  83c404               add esp, 4
// 005717c8  c70640ba7a00         mov dword ptr [esi], 0x7aba40
// 005717ce  8bc6                 mov eax, esi
// 005717d0  64890d00000000       mov dword ptr fs:[0], ecx
// 005717d7  5e                   pop esi
// 005717d8  83c40c               add esp, 0xc
// 005717db  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
