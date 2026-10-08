// roc 2009-06 00679f10  unit: RBX::VLighting::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00679f10
//
// 00679f10  6aff                 push -1
// 00679f12  6800928500           push 0x859200
// 00679f17  64a100000000         mov eax, dword ptr fs:[0]
// 00679f1d  50                   push eax
// 00679f1e  64892500000000       mov dword ptr fs:[0], esp
// 00679f25  51                   push ecx
// 00679f26  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00679f2a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00679f2e  56                   push esi
// 00679f2f  50                   push eax
// 00679f30  8b442428             mov eax, dword ptr [esp + 0x28]
// 00679f34  8bf1                 mov esi, ecx
// 00679f36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00679f3a  51                   push ecx
// 00679f3b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00679f3f  52                   push edx
// 00679f40  50                   push eax
// 00679f41  51                   push ecx
// 00679f42  8d542444             lea edx, [esp + 0x44]
// 00679f46  52                   push edx
// 00679f47  e8b4efffff           call 0x678f00
// 00679f4c  8b08                 mov ecx, dword ptr [eax]
// 00679f4e  83c410               add esp, 0x10
// 00679f51  c70000000000         mov dword ptr [eax], 0
// 00679f57  8bc4                 mov eax, esp
// 00679f59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00679f61  8964240c             mov dword ptr [esp + 0xc], esp
// 00679f65  8908                 mov dword ptr [eax], ecx
// 00679f67  8b442424             mov eax, dword ptr [esp + 0x24]
// 00679f6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00679f6f  50                   push eax
// 00679f70  51                   push ecx
// 00679f71  c644242001           mov byte ptr [esp + 0x20], 1
// 00679f76  e8151df7ff           call 0x5ebc90
// 00679f7b  50                   push eax
// 00679f7c  8bce                 mov ecx, esi
// 00679f7e  c644242400           mov byte ptr [esp + 0x24], 0
// 00679f83  e8f82ffeff           call 0x65cf80
// 00679f88  8b542430             mov edx, dword ptr [esp + 0x30]
// 00679f8c  52                   push edx
// 00679f8d  e8a0ea0900           call 0x718a32
// 00679f92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679f96  83c404               add esp, 4
// 00679f99  c7066c498e00         mov dword ptr [esi], 0x8e496c
// 00679f9f  8bc6                 mov eax, esi
// 00679fa1  64890d00000000       mov dword ptr fs:[0], ecx
// 00679fa8  5e                   pop esi
// 00679fa9  83c410               add esp, 0x10
// 00679fac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
