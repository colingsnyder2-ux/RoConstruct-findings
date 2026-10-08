// roc 2009-06 0064aa10  unit: RBX::VTexture::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064aa10
//
// 0064aa10  6aff                 push -1
// 0064aa12  6800928500           push 0x859200
// 0064aa17  64a100000000         mov eax, dword ptr fs:[0]
// 0064aa1d  50                   push eax
// 0064aa1e  64892500000000       mov dword ptr fs:[0], esp
// 0064aa25  51                   push ecx
// 0064aa26  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064aa2a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064aa2e  56                   push esi
// 0064aa2f  50                   push eax
// 0064aa30  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064aa34  8bf1                 mov esi, ecx
// 0064aa36  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064aa3a  51                   push ecx
// 0064aa3b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064aa3f  52                   push edx
// 0064aa40  50                   push eax
// 0064aa41  51                   push ecx
// 0064aa42  8d542444             lea edx, [esp + 0x44]
// 0064aa46  52                   push edx
// 0064aa47  e804faffff           call 0x64a450
// 0064aa4c  8b08                 mov ecx, dword ptr [eax]
// 0064aa4e  83c410               add esp, 0x10
// 0064aa51  c70000000000         mov dword ptr [eax], 0
// 0064aa57  8bc4                 mov eax, esp
// 0064aa59  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064aa61  8964240c             mov dword ptr [esp + 0xc], esp
// 0064aa65  8908                 mov dword ptr [eax], ecx
// 0064aa67  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064aa6b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064aa6f  50                   push eax
// 0064aa70  51                   push ecx
// 0064aa71  c644242001           mov byte ptr [esp + 0x20], 1
// 0064aa76  e8a503faff           call 0x5eae20
// 0064aa7b  50                   push eax
// 0064aa7c  8bce                 mov ecx, esi
// 0064aa7e  c644242400           mov byte ptr [esp + 0x24], 0
// 0064aa83  e87856dfff           call 0x440100
// 0064aa88  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064aa8c  52                   push edx
// 0064aa8d  e8a0df0c00           call 0x718a32
// 0064aa92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064aa96  83c404               add esp, 4
// 0064aa99  c70610ef8d00         mov dword ptr [esi], 0x8def10
// 0064aa9f  8bc6                 mov eax, esi
// 0064aaa1  64890d00000000       mov dword ptr fs:[0], ecx
// 0064aaa8  5e                   pop esi
// 0064aaa9  83c410               add esp, 0x10
// 0064aaac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
