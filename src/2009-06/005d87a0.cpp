// roc 2009-06 005d87a0  unit: RBX::VTeam::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d87a0
//
// 005d87a0  6aff                 push -1
// 005d87a2  6800928500           push 0x859200
// 005d87a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d87ad  50                   push eax
// 005d87ae  64892500000000       mov dword ptr fs:[0], esp
// 005d87b5  51                   push ecx
// 005d87b6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d87ba  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d87be  56                   push esi
// 005d87bf  50                   push eax
// 005d87c0  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d87c4  8bf1                 mov esi, ecx
// 005d87c6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d87ca  51                   push ecx
// 005d87cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d87cf  52                   push edx
// 005d87d0  50                   push eax
// 005d87d1  51                   push ecx
// 005d87d2  8d542444             lea edx, [esp + 0x44]
// 005d87d6  52                   push edx
// 005d87d7  e894fdffff           call 0x5d8570
// 005d87dc  8b08                 mov ecx, dword ptr [eax]
// 005d87de  83c410               add esp, 0x10
// 005d87e1  c70000000000         mov dword ptr [eax], 0
// 005d87e7  8bc4                 mov eax, esp
// 005d87e9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d87f1  8964240c             mov dword ptr [esp + 0xc], esp
// 005d87f5  8908                 mov dword ptr [eax], ecx
// 005d87f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d87fb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d87ff  50                   push eax
// 005d8800  51                   push ecx
// 005d8801  c644242001           mov byte ptr [esp + 0x20], 1
// 005d8806  e8e5fdffff           call 0x5d85f0
// 005d880b  50                   push eax
// 005d880c  8bce                 mov ecx, esi
// 005d880e  c644242400           mov byte ptr [esp + 0x24], 0
// 005d8813  e8280fe3ff           call 0x409740
// 005d8818  8b542430             mov edx, dword ptr [esp + 0x30]
// 005d881c  52                   push edx
// 005d881d  e810021400           call 0x718a32
// 005d8822  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8826  83c404               add esp, 4
// 005d8829  c70614568d00         mov dword ptr [esi], 0x8d5614
// 005d882f  8bc6                 mov eax, esi
// 005d8831  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8838  5e                   pop esi
// 005d8839  83c410               add esp, 0x10
// 005d883c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
