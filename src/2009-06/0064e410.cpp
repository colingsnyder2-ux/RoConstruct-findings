// roc 2009-06 0064e410  unit: RBX::VExplosion::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0064e410
//
// 0064e410  6aff                 push -1
// 0064e412  6800928500           push 0x859200
// 0064e417  64a100000000         mov eax, dword ptr fs:[0]
// 0064e41d  50                   push eax
// 0064e41e  64892500000000       mov dword ptr fs:[0], esp
// 0064e425  51                   push ecx
// 0064e426  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0064e42a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0064e42e  56                   push esi
// 0064e42f  50                   push eax
// 0064e430  8b442428             mov eax, dword ptr [esp + 0x28]
// 0064e434  8bf1                 mov esi, ecx
// 0064e436  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0064e43a  51                   push ecx
// 0064e43b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0064e43f  52                   push edx
// 0064e440  50                   push eax
// 0064e441  51                   push ecx
// 0064e442  8d542444             lea edx, [esp + 0x44]
// 0064e446  52                   push edx
// 0064e447  e8b4f4ffff           call 0x64d900
// 0064e44c  8b08                 mov ecx, dword ptr [eax]
// 0064e44e  83c410               add esp, 0x10
// 0064e451  c70000000000         mov dword ptr [eax], 0
// 0064e457  8bc4                 mov eax, esp
// 0064e459  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0064e461  8964240c             mov dword ptr [esp + 0xc], esp
// 0064e465  8908                 mov dword ptr [eax], ecx
// 0064e467  8b442424             mov eax, dword ptr [esp + 0x24]
// 0064e46b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0064e46f  50                   push eax
// 0064e470  51                   push ecx
// 0064e471  c644242001           mov byte ptr [esp + 0x20], 1
// 0064e476  e865cbf9ff           call 0x5eafe0
// 0064e47b  50                   push eax
// 0064e47c  8bce                 mov ecx, esi
// 0064e47e  c644242400           mov byte ptr [esp + 0x24], 0
// 0064e483  e8781cdfff           call 0x440100
// 0064e488  8b542430             mov edx, dword ptr [esp + 0x30]
// 0064e48c  52                   push edx
// 0064e48d  e8a0a50c00           call 0x718a32
// 0064e492  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e496  83c404               add esp, 4
// 0064e499  c70638f78d00         mov dword ptr [esi], 0x8df738
// 0064e49f  8bc6                 mov eax, esi
// 0064e4a1  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e4a8  5e                   pop esi
// 0064e4a9  83c410               add esp, 0x10
// 0064e4ac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
