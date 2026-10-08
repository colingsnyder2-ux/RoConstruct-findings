// roc 2009-06 005cb390  unit: RBX::DataModelArbiter::W4ConcurrencyModel::?$EnumDesc  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005cb390
//
// 005cb390  6aff                 push -1
// 005cb392  6800928500           push 0x859200
// 005cb397  64a100000000         mov eax, dword ptr fs:[0]
// 005cb39d  50                   push eax
// 005cb39e  64892500000000       mov dword ptr fs:[0], esp
// 005cb3a5  51                   push ecx
// 005cb3a6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005cb3aa  8b542424             mov edx, dword ptr [esp + 0x24]
// 005cb3ae  56                   push esi
// 005cb3af  50                   push eax
// 005cb3b0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005cb3b4  8bf1                 mov esi, ecx
// 005cb3b6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005cb3ba  51                   push ecx
// 005cb3bb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005cb3bf  52                   push edx
// 005cb3c0  50                   push eax
// 005cb3c1  51                   push ecx
// 005cb3c2  8d542444             lea edx, [esp + 0x44]
// 005cb3c6  52                   push edx
// 005cb3c7  e8e4e0ffff           call 0x5c94b0
// 005cb3cc  8b08                 mov ecx, dword ptr [eax]
// 005cb3ce  83c410               add esp, 0x10
// 005cb3d1  c70000000000         mov dword ptr [eax], 0
// 005cb3d7  8bc4                 mov eax, esp
// 005cb3d9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005cb3e1  8964240c             mov dword ptr [esp + 0xc], esp
// 005cb3e5  8908                 mov dword ptr [eax], ecx
// 005cb3e7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005cb3eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005cb3ef  50                   push eax
// 005cb3f0  51                   push ecx
// 005cb3f1  c644242001           mov byte ptr [esp + 0x20], 1
// 005cb3f6  e855faffff           call 0x5cae50
// 005cb3fb  50                   push eax
// 005cb3fc  8bce                 mov ecx, esi
// 005cb3fe  c644242400           mov byte ptr [esp + 0x24], 0
// 005cb403  e838e3e3ff           call 0x409740
// 005cb408  8b542430             mov edx, dword ptr [esp + 0x30]
// 005cb40c  52                   push edx
// 005cb40d  e820d61400           call 0x718a32
// 005cb412  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005cb416  83c404               add esp, 4
// 005cb419  c7068c458d00         mov dword ptr [esi], 0x8d458c
// 005cb41f  8bc6                 mov eax, esi
// 005cb421  64890d00000000       mov dword ptr fs:[0], ecx
// 005cb428  5e                   pop esi
// 005cb429  83c410               add esp, 0x10
// 005cb42c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
