// roc 2009-06 0067bf50  unit: RBX::VMotor::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067bf50
//
// 0067bf50  6aff                 push -1
// 0067bf52  6800928500           push 0x859200
// 0067bf57  64a100000000         mov eax, dword ptr fs:[0]
// 0067bf5d  50                   push eax
// 0067bf5e  64892500000000       mov dword ptr fs:[0], esp
// 0067bf65  51                   push ecx
// 0067bf66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067bf6a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067bf6e  56                   push esi
// 0067bf6f  50                   push eax
// 0067bf70  8b442428             mov eax, dword ptr [esp + 0x28]
// 0067bf74  8bf1                 mov esi, ecx
// 0067bf76  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067bf7a  51                   push ecx
// 0067bf7b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067bf7f  52                   push edx
// 0067bf80  50                   push eax
// 0067bf81  51                   push ecx
// 0067bf82  8d542444             lea edx, [esp + 0x44]
// 0067bf86  52                   push edx
// 0067bf87  e8f4f7ffff           call 0x67b780
// 0067bf8c  8b08                 mov ecx, dword ptr [eax]
// 0067bf8e  83c410               add esp, 0x10
// 0067bf91  c70000000000         mov dword ptr [eax], 0
// 0067bf97  8bc4                 mov eax, esp
// 0067bf99  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067bfa1  8964240c             mov dword ptr [esp + 0xc], esp
// 0067bfa5  8908                 mov dword ptr [eax], ecx
// 0067bfa7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0067bfab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067bfaf  50                   push eax
// 0067bfb0  51                   push ecx
// 0067bfb1  c644242001           mov byte ptr [esp + 0x20], 1
// 0067bfb6  e815f4f6ff           call 0x5eb3d0
// 0067bfbb  50                   push eax
// 0067bfbc  8bce                 mov ecx, esi
// 0067bfbe  c644242400           mov byte ptr [esp + 0x24], 0
// 0067bfc3  e83841dcff           call 0x440100
// 0067bfc8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067bfcc  52                   push edx
// 0067bfcd  e860ca0900           call 0x718a32
// 0067bfd2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067bfd6  83c404               add esp, 4
// 0067bfd9  c70654538e00         mov dword ptr [esi], 0x8e5354
// 0067bfdf  8bc6                 mov eax, esi
// 0067bfe1  64890d00000000       mov dword ptr fs:[0], ecx
// 0067bfe8  5e                   pop esi
// 0067bfe9  83c410               add esp, 0x10
// 0067bfec  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
