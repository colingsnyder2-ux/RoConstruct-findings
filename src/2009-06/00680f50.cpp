// roc 2009-06 00680f50  unit: RBX::VInstance::?$NonFactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00680f50
//
// 00680f50  6aff                 push -1
// 00680f52  6800928500           push 0x859200
// 00680f57  64a100000000         mov eax, dword ptr fs:[0]
// 00680f5d  50                   push eax
// 00680f5e  64892500000000       mov dword ptr fs:[0], esp
// 00680f65  51                   push ecx
// 00680f66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00680f6a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00680f6e  56                   push esi
// 00680f6f  50                   push eax
// 00680f70  8b442428             mov eax, dword ptr [esp + 0x28]
// 00680f74  8bf1                 mov esi, ecx
// 00680f76  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00680f7a  51                   push ecx
// 00680f7b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00680f7f  52                   push edx
// 00680f80  50                   push eax
// 00680f81  51                   push ecx
// 00680f82  8d542444             lea edx, [esp + 0x44]
// 00680f86  52                   push edx
// 00680f87  e814fdffff           call 0x680ca0
// 00680f8c  8b08                 mov ecx, dword ptr [eax]
// 00680f8e  83c410               add esp, 0x10
// 00680f91  c70000000000         mov dword ptr [eax], 0
// 00680f97  8bc4                 mov eax, esp
// 00680f99  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00680fa1  8964240c             mov dword ptr [esp + 0xc], esp
// 00680fa5  8908                 mov dword ptr [eax], ecx
// 00680fa7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00680fab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00680faf  50                   push eax
// 00680fb0  51                   push ecx
// 00680fb1  c644242001           mov byte ptr [esp + 0x20], 1
// 00680fb6  e805c6e9ff           call 0x51d5c0
// 00680fbb  50                   push eax
// 00680fbc  8bce                 mov ecx, esi
// 00680fbe  c644242400           mov byte ptr [esp + 0x24], 0
// 00680fc3  e88864faff           call 0x627450
// 00680fc8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00680fcc  52                   push edx
// 00680fcd  e8607a0900           call 0x718a32
// 00680fd2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00680fd6  83c404               add esp, 4
// 00680fd9  c706b45a8e00         mov dword ptr [esi], 0x8e5ab4
// 00680fdf  8bc6                 mov eax, esi
// 00680fe1  64890d00000000       mov dword ptr fs:[0], ecx
// 00680fe8  5e                   pop esi
// 00680fe9  83c410               add esp, 0x10
// 00680fec  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
