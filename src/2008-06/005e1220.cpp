// roc 2008-06 005e1220  unit: RBX::VLighting::?$FactoryProduct  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1220
//
// 005e1220  6aff                 push -1
// 005e1222  6840137d00           push 0x7d1340
// 005e1227  64a100000000         mov eax, dword ptr fs:[0]
// 005e122d  50                   push eax
// 005e122e  64892500000000       mov dword ptr fs:[0], esp
// 005e1235  51                   push ecx
// 005e1236  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005e123a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e123e  56                   push esi
// 005e123f  50                   push eax
// 005e1240  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e1244  8bf1                 mov esi, ecx
// 005e1246  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005e124a  51                   push ecx
// 005e124b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005e124f  52                   push edx
// 005e1250  50                   push eax
// 005e1251  51                   push ecx
// 005e1252  8d542444             lea edx, [esp + 0x44]
// 005e1256  52                   push edx
// 005e1257  e8c4f0ffff           call 0x5e0320
// 005e125c  8b08                 mov ecx, dword ptr [eax]
// 005e125e  83c410               add esp, 0x10
// 005e1261  c70000000000         mov dword ptr [eax], 0
// 005e1267  8bc4                 mov eax, esp
// 005e1269  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005e1271  8964240c             mov dword ptr [esp + 0xc], esp
// 005e1275  8908                 mov dword ptr [eax], ecx
// 005e1277  8b442424             mov eax, dword ptr [esp + 0x24]
// 005e127b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005e127f  50                   push eax
// 005e1280  51                   push ecx
// 005e1281  c644242001           mov byte ptr [esp + 0x20], 1
// 005e1286  e875feffff           call 0x5e1100
// 005e128b  50                   push eax
// 005e128c  8bce                 mov ecx, esi
// 005e128e  c644242400           mov byte ptr [esp + 0x24], 0
// 005e1293  e87843e6ff           call 0x445610
// 005e1298  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e129c  85c0                 test eax, eax
// 005e129e  7409                 je 0x5e12a9
// 005e12a0  50                   push eax
// 005e12a1  e8d4f30b00           call 0x6a067a
// 005e12a6  83c404               add esp, 4
// 005e12a9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e12ad  c706c8dc8300         mov dword ptr [esi], 0x83dcc8
// 005e12b3  8bc6                 mov eax, esi
// 005e12b5  64890d00000000       mov dword ptr fs:[0], ecx
// 005e12bc  5e                   pop esi
// 005e12bd  83c410               add esp, 0x10
// 005e12c0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
