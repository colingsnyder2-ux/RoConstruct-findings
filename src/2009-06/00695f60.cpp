// roc 2009-06 00695f60  unit: RBX::VClickDetector::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00695f60
//
// 00695f60  6aff                 push -1
// 00695f62  6800928500           push 0x859200
// 00695f67  64a100000000         mov eax, dword ptr fs:[0]
// 00695f6d  50                   push eax
// 00695f6e  64892500000000       mov dword ptr fs:[0], esp
// 00695f75  51                   push ecx
// 00695f76  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00695f7a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00695f7e  56                   push esi
// 00695f7f  50                   push eax
// 00695f80  8b442428             mov eax, dword ptr [esp + 0x28]
// 00695f84  8bf1                 mov esi, ecx
// 00695f86  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00695f8a  51                   push ecx
// 00695f8b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00695f8f  52                   push edx
// 00695f90  50                   push eax
// 00695f91  51                   push ecx
// 00695f92  8d542444             lea edx, [esp + 0x44]
// 00695f96  52                   push edx
// 00695f97  e8a4feffff           call 0x695e40
// 00695f9c  8b08                 mov ecx, dword ptr [eax]
// 00695f9e  83c410               add esp, 0x10
// 00695fa1  c70000000000         mov dword ptr [eax], 0
// 00695fa7  8bc4                 mov eax, esp
// 00695fa9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00695fb1  8964240c             mov dword ptr [esp + 0xc], esp
// 00695fb5  8908                 mov dword ptr [eax], ecx
// 00695fb7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00695fbb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00695fbf  50                   push eax
// 00695fc0  51                   push ecx
// 00695fc1  c644242001           mov byte ptr [esp + 0x20], 1
// 00695fc6  e8254cf5ff           call 0x5eabf0
// 00695fcb  50                   push eax
// 00695fcc  8bce                 mov ecx, esi
// 00695fce  c644242400           mov byte ptr [esp + 0x24], 0
// 00695fd3  e86837d7ff           call 0x409740
// 00695fd8  8b542430             mov edx, dword ptr [esp + 0x30]
// 00695fdc  52                   push edx
// 00695fdd  e8502a0800           call 0x718a32
// 00695fe2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00695fe6  83c404               add esp, 4
// 00695fe9  c706f87a8e00         mov dword ptr [esi], 0x8e7af8
// 00695fef  8bc6                 mov eax, esi
// 00695ff1  64890d00000000       mov dword ptr fs:[0], ecx
// 00695ff8  5e                   pop esi
// 00695ff9  83c410               add esp, 0x10
// 00695ffc  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
