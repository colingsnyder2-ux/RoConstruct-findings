// roc 2008-06 005e1170  unit: RBX::VLighting::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1170
//
// 005e1170  6aff                 push -1
// 005e1172  6840137d00           push 0x7d1340
// 005e1177  64a100000000         mov eax, dword ptr fs:[0]
// 005e117d  50                   push eax
// 005e117e  64892500000000       mov dword ptr fs:[0], esp
// 005e1185  51                   push ecx
// 005e1186  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e118a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e118e  56                   push esi
// 005e118f  50                   push eax
// 005e1190  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e1194  8bf1                 mov esi, ecx
// 005e1196  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e119a  51                   push ecx
// 005e119b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e119f  52                   push edx
// 005e11a0  50                   push eax
// 005e11a1  51                   push ecx
// 005e11a2  8d542444             lea edx, [esp + 0x44]
// 005e11a6  52                   push edx
// 005e11a7  e824f1ffff           call 0x5e02d0
// 005e11ac  8b08                 mov ecx, dword ptr [eax]
// 005e11ae  83c410               add esp, 0x10
// 005e11b1  c70000000000         mov dword ptr [eax], 0
// 005e11b7  8bc4                 mov eax, esp
// 005e11b9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e11c1  8964240c             mov dword ptr [esp + 0xc], esp
// 005e11c5  8908                 mov dword ptr [eax], ecx
// 005e11c7  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e11cb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e11cf  50                   push eax
// 005e11d0  51                   push ecx
// 005e11d1  c644242001           mov byte ptr [esp + 0x20], 1
// 005e11d6  e825ffffff           call 0x5e1100
// 005e11db  50                   push eax
// 005e11dc  8bce                 mov ecx, esi
// 005e11de  c644242400           mov byte ptr [esp + 0x24], 0
// 005e11e3  e84820e6ff           call 0x443230
// 005e11e8  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e11ec  85c0                 test eax, eax
// 005e11ee  7409                 je 0x5e11f9
// 005e11f0  50                   push eax
// 005e11f1  e884f40b00           call 0x6a067a
// 005e11f6  83c404               add esp, 4
// 005e11f9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e11fd  c70694dc8300         mov dword ptr [esi], 0x83dc94
// 005e1203  8bc6                 mov eax, esi
// 005e1205  64890d00000000       mov dword ptr fs:[0], ecx
// 005e120c  5e                   pop esi
// 005e120d  83c410               add esp, 0x10
// 005e1210  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
