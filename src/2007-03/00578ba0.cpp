// roc 2007-03 00578ba0  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578ba0
//
// 00578ba0  64a100000000         mov eax, dword ptr fs:[0]
// 00578ba6  6aff                 push -1
// 00578ba8  68a08b7500           push 0x758ba0
// 00578bad  50                   push eax
// 00578bae  64892500000000       mov dword ptr fs:[0], esp
// 00578bb5  8b442428             mov eax, dword ptr [esp + 0x28]
// 00578bb9  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578bbd  56                   push esi
// 00578bbe  50                   push eax
// 00578bbf  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578bc3  8bf1                 mov esi, ecx
// 00578bc5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578bc9  51                   push ecx
// 00578bca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00578bce  52                   push edx
// 00578bcf  50                   push eax
// 00578bd0  51                   push ecx
// 00578bd1  8d542440             lea edx, [esp + 0x40]
// 00578bd5  52                   push edx
// 00578bd6  e8d5f6ffff           call 0x5782b0
// 00578bdb  8b10                 mov edx, dword ptr [eax]
// 00578bdd  83c410               add esp, 0x10
// 00578be0  8bcc                 mov ecx, esp
// 00578be2  c70000000000         mov dword ptr [eax], 0
// 00578be8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00578bf0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00578bf4  8911                 mov dword ptr [ecx], edx
// 00578bf6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578bfa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578bfe  52                   push edx
// 00578bff  50                   push eax
// 00578c00  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00578c05  e8e6fcffff           call 0x5788f0
// 00578c0a  50                   push eax
// 00578c0b  8bce                 mov ecx, esi
// 00578c0d  c644242000           mov byte ptr [esp + 0x20], 0
// 00578c12  e84985ffff           call 0x571160
// 00578c17  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578c1b  51                   push ecx
// 00578c1c  e8cf540a00           call 0x61e0f0
// 00578c21  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578c25  83c404               add esp, 4
// 00578c28  c70670c97a00         mov dword ptr [esi], 0x7ac970
// 00578c2e  8bc6                 mov eax, esi
// 00578c30  64890d00000000       mov dword ptr fs:[0], ecx
// 00578c37  5e                   pop esi
// 00578c38  83c40c               add esp, 0xc
// 00578c3b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
