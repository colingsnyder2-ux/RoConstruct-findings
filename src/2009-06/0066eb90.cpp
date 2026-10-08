// roc 2009-06 0066eb90  unit: RBX::VMeshId::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0066eb90
//
// 0066eb90  6aff                 push -1
// 0066eb92  6800928500           push 0x859200
// 0066eb97  64a100000000         mov eax, dword ptr fs:[0]
// 0066eb9d  50                   push eax
// 0066eb9e  64892500000000       mov dword ptr fs:[0], esp
// 0066eba5  51                   push ecx
// 0066eba6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0066ebaa  8b542424             mov edx, dword ptr [esp + 0x24]
// 0066ebae  56                   push esi
// 0066ebaf  50                   push eax
// 0066ebb0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0066ebb4  8bf1                 mov esi, ecx
// 0066ebb6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0066ebba  51                   push ecx
// 0066ebbb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0066ebbf  52                   push edx
// 0066ebc0  50                   push eax
// 0066ebc1  51                   push ecx
// 0066ebc2  8d542444             lea edx, [esp + 0x44]
// 0066ebc6  52                   push edx
// 0066ebc7  e894fcffff           call 0x66e860
// 0066ebcc  8b08                 mov ecx, dword ptr [eax]
// 0066ebce  83c410               add esp, 0x10
// 0066ebd1  c70000000000         mov dword ptr [eax], 0
// 0066ebd7  8bc4                 mov eax, esp
// 0066ebd9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0066ebe1  8964240c             mov dword ptr [esp + 0xc], esp
// 0066ebe5  8908                 mov dword ptr [eax], ecx
// 0066ebe7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066ebeb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066ebef  50                   push eax
// 0066ebf0  51                   push ecx
// 0066ebf1  c644242001           mov byte ptr [esp + 0x20], 1
// 0066ebf6  e805caf7ff           call 0x5eb600
// 0066ebfb  50                   push eax
// 0066ebfc  8bce                 mov ecx, esi
// 0066ebfe  c644242400           mov byte ptr [esp + 0x24], 0
// 0066ec03  e808fbffff           call 0x66e710
// 0066ec08  8b542430             mov edx, dword ptr [esp + 0x30]
// 0066ec0c  52                   push edx
// 0066ec0d  e8209e0a00           call 0x718a32
// 0066ec12  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066ec16  83c404               add esp, 4
// 0066ec19  c7060c348e00         mov dword ptr [esi], 0x8e340c
// 0066ec1f  8bc6                 mov eax, esi
// 0066ec21  64890d00000000       mov dword ptr fs:[0], ecx
// 0066ec28  5e                   pop esi
// 0066ec29  83c410               add esp, 0x10
// 0066ec2c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
