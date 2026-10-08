// roc 2009-06 00679dd0  unit: RBX::VLighting::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00679dd0
//
// 00679dd0  6aff                 push -1
// 00679dd2  6800928500           push 0x859200
// 00679dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00679ddd  50                   push eax
// 00679dde  64892500000000       mov dword ptr fs:[0], esp
// 00679de5  51                   push ecx
// 00679de6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00679dea  8b542424             mov edx, dword ptr [esp + 0x24]
// 00679dee  56                   push esi
// 00679def  50                   push eax
// 00679df0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00679df4  8bf1                 mov esi, ecx
// 00679df6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00679dfa  51                   push ecx
// 00679dfb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00679dff  52                   push edx
// 00679e00  50                   push eax
// 00679e01  51                   push ecx
// 00679e02  8d542444             lea edx, [esp + 0x44]
// 00679e06  52                   push edx
// 00679e07  e834f0ffff           call 0x678e40
// 00679e0c  8b08                 mov ecx, dword ptr [eax]
// 00679e0e  83c410               add esp, 0x10
// 00679e11  c70000000000         mov dword ptr [eax], 0
// 00679e17  8bc4                 mov eax, esp
// 00679e19  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00679e21  8964240c             mov dword ptr [esp + 0xc], esp
// 00679e25  8908                 mov dword ptr [eax], ecx
// 00679e27  8b442424             mov eax, dword ptr [esp + 0x24]
// 00679e2b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00679e2f  50                   push eax
// 00679e30  51                   push ecx
// 00679e31  c644242001           mov byte ptr [esp + 0x20], 1
// 00679e36  e8551ef7ff           call 0x5ebc90
// 00679e3b  50                   push eax
// 00679e3c  8bce                 mov ecx, esi
// 00679e3e  c644242400           mov byte ptr [esp + 0x24], 0
// 00679e43  e8283edcff           call 0x43dc70
// 00679e48  8b542430             mov edx, dword ptr [esp + 0x30]
// 00679e4c  52                   push edx
// 00679e4d  e8e0eb0900           call 0x718a32
// 00679e52  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679e56  83c404               add esp, 4
// 00679e59  c70604498e00         mov dword ptr [esi], 0x8e4904
// 00679e5f  8bc6                 mov eax, esi
// 00679e61  64890d00000000       mov dword ptr fs:[0], ecx
// 00679e68  5e                   pop esi
// 00679e69  83c410               add esp, 0x10
// 00679e6c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
