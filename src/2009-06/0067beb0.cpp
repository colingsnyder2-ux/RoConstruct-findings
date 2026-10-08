// roc 2009-06 0067beb0  unit: RBX::VMotor::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0067beb0
//
// 0067beb0  6aff                 push -1
// 0067beb2  6800928500           push 0x859200
// 0067beb7  64a100000000         mov eax, dword ptr fs:[0]
// 0067bebd  50                   push eax
// 0067bebe  64892500000000       mov dword ptr fs:[0], esp
// 0067bec5  51                   push ecx
// 0067bec6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0067beca  8b542424             mov edx, dword ptr [esp + 0x24]
// 0067bece  56                   push esi
// 0067becf  50                   push eax
// 0067bed0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0067bed4  8bf1                 mov esi, ecx
// 0067bed6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0067beda  51                   push ecx
// 0067bedb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0067bedf  52                   push edx
// 0067bee0  50                   push eax
// 0067bee1  51                   push ecx
// 0067bee2  8d542444             lea edx, [esp + 0x44]
// 0067bee6  52                   push edx
// 0067bee7  e8d4f7ffff           call 0x67b6c0
// 0067beec  8b08                 mov ecx, dword ptr [eax]
// 0067beee  83c410               add esp, 0x10
// 0067bef1  c70000000000         mov dword ptr [eax], 0
// 0067bef7  8bc4                 mov eax, esp
// 0067bef9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0067bf01  8964240c             mov dword ptr [esp + 0xc], esp
// 0067bf05  8908                 mov dword ptr [eax], ecx
// 0067bf07  8b442424             mov eax, dword ptr [esp + 0x24]
// 0067bf0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0067bf0f  50                   push eax
// 0067bf10  51                   push ecx
// 0067bf11  c644242001           mov byte ptr [esp + 0x20], 1
// 0067bf16  e885f2f6ff           call 0x5eb1a0
// 0067bf1b  50                   push eax
// 0067bf1c  8bce                 mov ecx, esi
// 0067bf1e  c644242400           mov byte ptr [esp + 0x24], 0
// 0067bf23  e828b5faff           call 0x627450
// 0067bf28  8b542430             mov edx, dword ptr [esp + 0x30]
// 0067bf2c  52                   push edx
// 0067bf2d  e800cb0900           call 0x718a32
// 0067bf32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067bf36  83c404               add esp, 4
// 0067bf39  c70620538e00         mov dword ptr [esi], 0x8e5320
// 0067bf3f  8bc6                 mov eax, esi
// 0067bf41  64890d00000000       mov dword ptr fs:[0], ecx
// 0067bf48  5e                   pop esi
// 0067bf49  83c410               add esp, 0x10
// 0067bf4c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
