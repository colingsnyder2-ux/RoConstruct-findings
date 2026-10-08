// roc 2009-06 0064aab0  unit: RBX::VTexture::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064aab0
//
// 0064aab0  6aff                 push -1
// 0064aab2  6800928500           push 0x859200
// 0064aab7  64a100000000         mov eax, dword ptr fs:[0]
// 0064aabd  50                   push eax
// 0064aabe  64892500000000       mov dword ptr fs:[0], esp
// 0064aac5  51                   push ecx
// 0064aac6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064aaca  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064aace  56                   push esi
// 0064aacf  50                   push eax
// 0064aad0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064aad4  8bf1                 mov esi, ecx
// 0064aad6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064aada  51                   push ecx
// 0064aadb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064aadf  52                   push edx
// 0064aae0  50                   push eax
// 0064aae1  51                   push ecx
// 0064aae2  8d542444             lea edx, [esp + 0x44]
// 0064aae6  52                   push edx
// 0064aae7  e8c4f9ffff           call 0x64a4b0
// 0064aaec  8b08                 mov ecx, dword ptr [eax]
// 0064aaee  83c410               add esp, 0x10
// 0064aaf1  c70000000000         mov dword ptr [eax], 0
// 0064aaf7  8bc4                 mov eax, esp
// 0064aaf9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064ab01  8964240c             mov dword ptr [esp + 0xc], esp
// 0064ab05  8908                 mov dword ptr [eax], ecx
// 0064ab07  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064ab0b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064ab0f  50                   push eax
// 0064ab10  51                   push ecx
// 0064ab11  c644242001           mov byte ptr [esp + 0x20], 1
// 0064ab16  e87503faff           call 0x5eae90
// 0064ab1b  50                   push eax
// 0064ab1c  8bce                 mov ecx, esi
// 0064ab1e  c644242400           mov byte ptr [esp + 0x24], 0
// 0064ab23  e8d855dfff           call 0x440100
// 0064ab28  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064ab2c  52                   push edx
// 0064ab2d  e800df0c00           call 0x718a32
// 0064ab32  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064ab36  83c404               add esp, 4
// 0064ab39  c70644ef8d00         mov dword ptr [esi], 0x8def44
// 0064ab3f  8bc6                 mov eax, esi
// 0064ab41  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ab48  5e                   pop esi
// 0064ab49  83c410               add esp, 0x10
// 0064ab4c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
