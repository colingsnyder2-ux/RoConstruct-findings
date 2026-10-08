// roc 2009-06 0069b050  unit: RBX::VFlag::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0069b050
//
// 0069b050  6aff                 push -1
// 0069b052  6800928500           push 0x859200
// 0069b057  64a100000000         mov eax, dword ptr fs:[0]
// 0069b05d  50                   push eax
// 0069b05e  64892500000000       mov dword ptr fs:[0], esp
// 0069b065  51                   push ecx
// 0069b066  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069b06a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0069b06e  56                   push esi
// 0069b06f  50                   push eax
// 0069b070  8b442428             mov eax, dword ptr [esp + 0x28]
// 0069b074  8bf1                 mov esi, ecx
// 0069b076  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0069b07a  51                   push ecx
// 0069b07b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0069b07f  52                   push edx
// 0069b080  50                   push eax
// 0069b081  51                   push ecx
// 0069b082  8d542444             lea edx, [esp + 0x44]
// 0069b086  52                   push edx
// 0069b087  e8f4feffff           call 0x69af80
// 0069b08c  8b08                 mov ecx, dword ptr [eax]
// 0069b08e  83c410               add esp, 0x10
// 0069b091  c70000000000         mov dword ptr [eax], 0
// 0069b097  8bc4                 mov eax, esp
// 0069b099  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0069b0a1  8964240c             mov dword ptr [esp + 0xc], esp
// 0069b0a5  8908                 mov dword ptr [eax], ecx
// 0069b0a7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0069b0ab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0069b0af  50                   push eax
// 0069b0b0  51                   push ecx
// 0069b0b1  c644242001           mov byte ptr [esp + 0x20], 1
// 0069b0b6  e82506f5ff           call 0x5eb6e0
// 0069b0bb  50                   push eax
// 0069b0bc  8bce                 mov ecx, esi
// 0069b0be  c644242400           mov byte ptr [esp + 0x24], 0
// 0069b0c3  e8f8a0e1ff           call 0x4b51c0
// 0069b0c8  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069b0cc  52                   push edx
// 0069b0cd  e860d90700           call 0x718a32
// 0069b0d2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069b0d6  83c404               add esp, 4
// 0069b0d9  c70610888e00         mov dword ptr [esi], 0x8e8810
// 0069b0df  8bc6                 mov eax, esi
// 0069b0e1  64890d00000000       mov dword ptr fs:[0], ecx
// 0069b0e8  5e                   pop esi
// 0069b0e9  83c410               add esp, 0x10
// 0069b0ec  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
