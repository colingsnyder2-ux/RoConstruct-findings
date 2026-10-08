// roc 2009-06 00628480  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00628480
//
// 00628480  6aff                 push -1
// 00628482  6800928500           push 0x859200
// 00628487  64a100000000         mov eax, dword ptr fs:[0]
// 0062848d  50                   push eax
// 0062848e  64892500000000       mov dword ptr fs:[0], esp
// 00628495  51                   push ecx
// 00628496  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062849a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062849e  56                   push esi
// 0062849f  50                   push eax
// 006284a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006284a4  8bf1                 mov esi, ecx
// 006284a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006284aa  51                   push ecx
// 006284ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006284af  52                   push edx
// 006284b0  50                   push eax
// 006284b1  51                   push ecx
// 006284b2  8d542444             lea edx, [esp + 0x44]
// 006284b6  52                   push edx
// 006284b7  e874f0ffff           call 0x627530
// 006284bc  8b08                 mov ecx, dword ptr [eax]
// 006284be  83c410               add esp, 0x10
// 006284c1  c70000000000         mov dword ptr [eax], 0
// 006284c7  8bc4                 mov eax, esp
// 006284c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006284d1  8964240c             mov dword ptr [esp + 0xc], esp
// 006284d5  8908                 mov dword ptr [eax], ecx
// 006284d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 006284db  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006284df  50                   push eax
// 006284e0  51                   push ecx
// 006284e1  c644242001           mov byte ptr [esp + 0x20], 1
// 006284e6  e88531fcff           call 0x5eb670
// 006284eb  50                   push eax
// 006284ec  8bce                 mov ecx, esi
// 006284ee  c644242400           mov byte ptr [esp + 0x24], 0
// 006284f3  e858efffff           call 0x627450
// 006284f8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006284fc  52                   push edx
// 006284fd  e830050f00           call 0x718a32
// 00628502  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00628506  83c404               add esp, 4
// 00628509  c706f0a58d00         mov dword ptr [esi], 0x8da5f0
// 0062850f  8bc6                 mov eax, esi
// 00628511  64890d00000000       mov dword ptr fs:[0], ecx
// 00628518  5e                   pop esi
// 00628519  83c410               add esp, 0x10
// 0062851c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
