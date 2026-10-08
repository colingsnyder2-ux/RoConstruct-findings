// roc 2009-06 00628520  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00628520
//
// 00628520  6aff                 push -1
// 00628522  6800928500           push 0x859200
// 00628527  64a100000000         mov eax, dword ptr fs:[0]
// 0062852d  50                   push eax
// 0062852e  64892500000000       mov dword ptr fs:[0], esp
// 00628535  51                   push ecx
// 00628536  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062853a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062853e  56                   push esi
// 0062853f  50                   push eax
// 00628540  8b442428             mov eax, dword ptr [esp + 0x28]
// 00628544  8bf1                 mov esi, ecx
// 00628546  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062854a  51                   push ecx
// 0062854b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062854f  52                   push edx
// 00628550  50                   push eax
// 00628551  51                   push ecx
// 00628552  8d542444             lea edx, [esp + 0x44]
// 00628556  52                   push edx
// 00628557  e834f0ffff           call 0x627590
// 0062855c  8b08                 mov ecx, dword ptr [eax]
// 0062855e  83c410               add esp, 0x10
// 00628561  c70000000000         mov dword ptr [eax], 0
// 00628567  8bc4                 mov eax, esp
// 00628569  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00628571  8964240c             mov dword ptr [esp + 0xc], esp
// 00628575  8908                 mov dword ptr [eax], ecx
// 00628577  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062857b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062857f  50                   push eax
// 00628580  51                   push ecx
// 00628581  c644242001           mov byte ptr [esp + 0x20], 1
// 00628586  e8e530fcff           call 0x5eb670
// 0062858b  50                   push eax
// 0062858c  8bce                 mov ecx, esi
// 0062858e  c644242400           mov byte ptr [esp + 0x24], 0
// 00628593  e85857e1ff           call 0x43dcf0
// 00628598  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062859c  52                   push edx
// 0062859d  e890040f00           call 0x718a32
// 006285a2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006285a6  83c404               add esp, 4
// 006285a9  c70624a68d00         mov dword ptr [esi], 0x8da624
// 006285af  8bc6                 mov eax, esi
// 006285b1  64890d00000000       mov dword ptr fs:[0], ecx
// 006285b8  5e                   pop esi
// 006285b9  83c410               add esp, 0x10
// 006285bc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
