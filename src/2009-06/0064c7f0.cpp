// roc 2009-06 0064c7f0  unit: RBX::VPhysicsSettings::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064c7f0
//
// 0064c7f0  6aff                 push -1
// 0064c7f2  6800928500           push 0x859200
// 0064c7f7  64a100000000         mov eax, dword ptr fs:[0]
// 0064c7fd  50                   push eax
// 0064c7fe  64892500000000       mov dword ptr fs:[0], esp
// 0064c805  51                   push ecx
// 0064c806  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064c80a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064c80e  56                   push esi
// 0064c80f  50                   push eax
// 0064c810  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064c814  8bf1                 mov esi, ecx
// 0064c816  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064c81a  51                   push ecx
// 0064c81b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064c81f  52                   push edx
// 0064c820  50                   push eax
// 0064c821  51                   push ecx
// 0064c822  8d542444             lea edx, [esp + 0x44]
// 0064c826  52                   push edx
// 0064c827  e814ffffff           call 0x64c740
// 0064c82c  8b08                 mov ecx, dword ptr [eax]
// 0064c82e  83c410               add esp, 0x10
// 0064c831  c70000000000         mov dword ptr [eax], 0
// 0064c837  8bc4                 mov eax, esp
// 0064c839  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064c841  8964240c             mov dword ptr [esp + 0xc], esp
// 0064c845  8908                 mov dword ptr [eax], ecx
// 0064c847  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064c84b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064c84f  50                   push eax
// 0064c850  51                   push ecx
// 0064c851  c644242001           mov byte ptr [esp + 0x20], 1
// 0064c856  e8a5e6f9ff           call 0x5eaf00
// 0064c85b  50                   push eax
// 0064c85c  8bce                 mov ecx, esi
// 0064c85e  c644242400           mov byte ptr [esp + 0x24], 0
// 0064c863  e8d8cedbff           call 0x409740
// 0064c868  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064c86c  52                   push edx
// 0064c86d  e8c0c10c00           call 0x718a32
// 0064c872  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064c876  83c404               add esp, 4
// 0064c879  c7065cf28d00         mov dword ptr [esi], 0x8df25c
// 0064c87f  8bc6                 mov eax, esi
// 0064c881  64890d00000000       mov dword ptr fs:[0], ecx
// 0064c888  5e                   pop esi
// 0064c889  83c410               add esp, 0x10
// 0064c88c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
