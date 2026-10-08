// roc 2009-06 005cf300  unit: VAuthoringSettings::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cf300
//
// 005cf300  6aff                 push -1
// 005cf302  6800928500           push 0x859200
// 005cf307  64a100000000         mov eax, dword ptr fs:[0]
// 005cf30d  50                   push eax
// 005cf30e  64892500000000       mov dword ptr fs:[0], esp
// 005cf315  51                   push ecx
// 005cf316  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cf31a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005cf31e  56                   push esi
// 005cf31f  50                   push eax
// 005cf320  8b442428             mov eax, dword ptr [esp + 0x28]
// 005cf324  8bf1                 mov esi, ecx
// 005cf326  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005cf32a  51                   push ecx
// 005cf32b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cf32f  52                   push edx
// 005cf330  50                   push eax
// 005cf331  51                   push ecx
// 005cf332  8d542444             lea edx, [esp + 0x44]
// 005cf336  52                   push edx
// 005cf337  e8b4efffff           call 0x5ce2f0
// 005cf33c  8b08                 mov ecx, dword ptr [eax]
// 005cf33e  83c410               add esp, 0x10
// 005cf341  c70000000000         mov dword ptr [eax], 0
// 005cf347  8bc4                 mov eax, esp
// 005cf349  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005cf351  8964240c             mov dword ptr [esp + 0xc], esp
// 005cf355  8908                 mov dword ptr [eax], ecx
// 005cf357  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cf35b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cf35f  50                   push eax
// 005cf360  51                   push ecx
// 005cf361  c644242001           mov byte ptr [esp + 0x20], 1
// 005cf366  e885b1e3ff           call 0x40a4f0
// 005cf36b  50                   push eax
// 005cf36c  8bce                 mov ecx, esi
// 005cf36e  c644242400           mov byte ptr [esp + 0x24], 0
// 005cf373  e8f8e8e6ff           call 0x43dc70
// 005cf378  8b542430             mov edx, dword ptr [esp + 0x30]
// 005cf37c  52                   push edx
// 005cf37d  e8b0961400           call 0x718a32
// 005cf382  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cf386  83c404               add esp, 4
// 005cf389  c706cc4e8d00         mov dword ptr [esi], 0x8d4ecc
// 005cf38f  8bc6                 mov eax, esi
// 005cf391  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf398  5e                   pop esi
// 005cf399  83c410               add esp, 0x10
// 005cf39c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
