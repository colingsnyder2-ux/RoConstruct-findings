// roc 2009-06 006283e0  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006283e0
//
// 006283e0  6aff                 push -1
// 006283e2  6800928500           push 0x859200
// 006283e7  64a100000000         mov eax, dword ptr fs:[0]
// 006283ed  50                   push eax
// 006283ee  64892500000000       mov dword ptr fs:[0], esp
// 006283f5  51                   push ecx
// 006283f6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006283fa  8b542424             mov edx, dword ptr [esp + 0x24]
// 006283fe  56                   push esi
// 006283ff  50                   push eax
// 00628400  8b442428             mov eax, dword ptr [esp + 0x28]
// 00628404  8bf1                 mov esi, ecx
// 00628406  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062840a  51                   push ecx
// 0062840b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062840f  52                   push edx
// 00628410  50                   push eax
// 00628411  51                   push ecx
// 00628412  8d542444             lea edx, [esp + 0x44]
// 00628416  52                   push edx
// 00628417  e8b4f0ffff           call 0x6274d0
// 0062841c  8b08                 mov ecx, dword ptr [eax]
// 0062841e  83c410               add esp, 0x10
// 00628421  c70000000000         mov dword ptr [eax], 0
// 00628427  8bc4                 mov eax, esp
// 00628429  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00628431  8964240c             mov dword ptr [esp + 0xc], esp
// 00628435  8908                 mov dword ptr [eax], ecx
// 00628437  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062843b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062843f  50                   push eax
// 00628440  51                   push ecx
// 00628441  c644242001           mov byte ptr [esp + 0x20], 1
// 00628446  e82532fcff           call 0x5eb670
// 0062844b  50                   push eax
// 0062844c  8bce                 mov ecx, esi
// 0062844e  c644242400           mov byte ptr [esp + 0x24], 0
// 00628453  e8d890feff           call 0x611530
// 00628458  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062845c  52                   push edx
// 0062845d  e8d0050f00           call 0x718a32
// 00628462  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00628466  83c404               add esp, 4
// 00628469  c706bca58d00         mov dword ptr [esi], 0x8da5bc
// 0062846f  8bc6                 mov eax, esi
// 00628471  64890d00000000       mov dword ptr fs:[0], ecx
// 00628478  5e                   pop esi
// 00628479  83c410               add esp, 0x10
// 0062847c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
