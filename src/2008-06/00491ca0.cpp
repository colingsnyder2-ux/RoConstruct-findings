// roc 2008-06 00491ca0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00491ca0
//
// 00491ca0  6aff                 push -1
// 00491ca2  6840137d00           push 0x7d1340
// 00491ca7  64a100000000         mov eax, dword ptr fs:[0]
// 00491cad  50                   push eax
// 00491cae  64892500000000       mov dword ptr fs:[0], esp
// 00491cb5  51                   push ecx
// 00491cb6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00491cba  8b542424             mov edx, dword ptr [esp + 0x24]
// 00491cbe  56                   push esi
// 00491cbf  50                   push eax
// 00491cc0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00491cc4  8bf1                 mov esi, ecx
// 00491cc6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00491cca  51                   push ecx
// 00491ccb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00491ccf  52                   push edx
// 00491cd0  50                   push eax
// 00491cd1  51                   push ecx
// 00491cd2  8d542444             lea edx, [esp + 0x44]
// 00491cd6  52                   push edx
// 00491cd7  e8b48cffff           call 0x48a990
// 00491cdc  8b08                 mov ecx, dword ptr [eax]
// 00491cde  83c410               add esp, 0x10
// 00491ce1  c70000000000         mov dword ptr [eax], 0
// 00491ce7  8bc4                 mov eax, esp
// 00491ce9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00491cf1  8964240c             mov dword ptr [esp + 0xc], esp
// 00491cf5  8908                 mov dword ptr [eax], ecx
// 00491cf7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00491cfb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00491cff  50                   push eax
// 00491d00  51                   push ecx
// 00491d01  c644242001           mov byte ptr [esp + 0x20], 1
// 00491d06  e855f6ffff           call 0x491360
// 00491d0b  50                   push eax
// 00491d0c  8bce                 mov ecx, esi
// 00491d0e  c644242400           mov byte ptr [esp + 0x24], 0
// 00491d13  e87885f7ff           call 0x40a290
// 00491d18  8b442430             mov eax, dword ptr [esp + 0x30]
// 00491d1c  85c0                 test eax, eax
// 00491d1e  7409                 je 0x491d29
// 00491d20  50                   push eax
// 00491d21  e854e92000           call 0x6a067a
// 00491d26  83c404               add esp, 4
// 00491d29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00491d2d  c706701c8200         mov dword ptr [esi], 0x821c70
// 00491d33  8bc6                 mov eax, esi
// 00491d35  64890d00000000       mov dword ptr fs:[0], ecx
// 00491d3c  5e                   pop esi
// 00491d3d  83c410               add esp, 0x10
// 00491d40  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
