// roc 2009-06 004bb010  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004bb010
//
// 004bb010  6aff                 push -1
// 004bb012  6800928500           push 0x859200
// 004bb017  64a100000000         mov eax, dword ptr fs:[0]
// 004bb01d  50                   push eax
// 004bb01e  64892500000000       mov dword ptr fs:[0], esp
// 004bb025  51                   push ecx
// 004bb026  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004bb02a  8b542424             mov edx, dword ptr [esp + 0x24]
// 004bb02e  56                   push esi
// 004bb02f  50                   push eax
// 004bb030  8b442428             mov eax, dword ptr [esp + 0x28]
// 004bb034  8bf1                 mov esi, ecx
// 004bb036  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004bb03a  51                   push ecx
// 004bb03b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004bb03f  52                   push edx
// 004bb040  50                   push eax
// 004bb041  51                   push ecx
// 004bb042  8d542444             lea edx, [esp + 0x44]
// 004bb046  52                   push edx
// 004bb047  e884a8ffff           call 0x4b58d0
// 004bb04c  8b08                 mov ecx, dword ptr [eax]
// 004bb04e  83c410               add esp, 0x10
// 004bb051  c70000000000         mov dword ptr [eax], 0
// 004bb057  8bc4                 mov eax, esp
// 004bb059  c744241800000000     mov dword ptr [esp + 0x18], 0
// 004bb061  8964240c             mov dword ptr [esp + 0xc], esp
// 004bb065  8908                 mov dword ptr [eax], ecx
// 004bb067  8b442424             mov eax, dword ptr [esp + 0x24]
// 004bb06b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004bb06f  50                   push eax
// 004bb070  51                   push ecx
// 004bb071  c644242001           mov byte ptr [esp + 0x20], 1
// 004bb076  e865fbffff           call 0x4babe0
// 004bb07b  50                   push eax
// 004bb07c  8bce                 mov ecx, esi
// 004bb07e  c644242400           mov byte ptr [esp + 0x24], 0
// 004bb083  e8e82bf8ff           call 0x43dc70
// 004bb088  8b542430             mov edx, dword ptr [esp + 0x30]
// 004bb08c  52                   push edx
// 004bb08d  e8a0d92500           call 0x718a32
// 004bb092  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bb096  83c404               add esp, 4
// 004bb099  c70644468c00         mov dword ptr [esi], 0x8c4644
// 004bb09f  8bc6                 mov eax, esi
// 004bb0a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004bb0a8  5e                   pop esi
// 004bb0a9  83c410               add esp, 0x10
// 004bb0ac  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
