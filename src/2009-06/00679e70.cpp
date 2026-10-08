// roc 2009-06 00679e70  unit: RBX::VLighting::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00679e70
//
// 00679e70  6aff                 push -1
// 00679e72  6800928500           push 0x859200
// 00679e77  64a100000000         mov eax, dword ptr fs:[0]
// 00679e7d  50                   push eax
// 00679e7e  64892500000000       mov dword ptr fs:[0], esp
// 00679e85  51                   push ecx
// 00679e86  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00679e8a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00679e8e  56                   push esi
// 00679e8f  50                   push eax
// 00679e90  8b442428             mov eax, dword ptr [esp + 0x28]
// 00679e94  8bf1                 mov esi, ecx
// 00679e96  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00679e9a  51                   push ecx
// 00679e9b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00679e9f  52                   push edx
// 00679ea0  50                   push eax
// 00679ea1  51                   push ecx
// 00679ea2  8d542444             lea edx, [esp + 0x44]
// 00679ea6  52                   push edx
// 00679ea7  e8f4efffff           call 0x678ea0
// 00679eac  8b08                 mov ecx, dword ptr [eax]
// 00679eae  83c410               add esp, 0x10
// 00679eb1  c70000000000         mov dword ptr [eax], 0
// 00679eb7  8bc4                 mov eax, esp
// 00679eb9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00679ec1  8964240c             mov dword ptr [esp + 0xc], esp
// 00679ec5  8908                 mov dword ptr [eax], ecx
// 00679ec7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00679ecb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00679ecf  50                   push eax
// 00679ed0  51                   push ecx
// 00679ed1  c644242001           mov byte ptr [esp + 0x20], 1
// 00679ed6  e8b51df7ff           call 0x5ebc90
// 00679edb  50                   push eax
// 00679edc  8bce                 mov ecx, esi
// 00679ede  c644242400           mov byte ptr [esp + 0x24], 0
// 00679ee3  e81862dcff           call 0x440100
// 00679ee8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00679eec  52                   push edx
// 00679eed  e840eb0900           call 0x718a32
// 00679ef2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679ef6  83c404               add esp, 4
// 00679ef9  c70638498e00         mov dword ptr [esi], 0x8e4938
// 00679eff  8bc6                 mov eax, esi
// 00679f01  64890d00000000       mov dword ptr fs:[0], ecx
// 00679f08  5e                   pop esi
// 00679f09  83c410               add esp, 0x10
// 00679f0c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
