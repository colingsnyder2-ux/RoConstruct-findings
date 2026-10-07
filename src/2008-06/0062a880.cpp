// roc 2008-06 0062a880  unit: RBX::VExplosion::?$SignalDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062a880
//
// 0062a880  6aff                 push -1
// 0062a882  6840137d00           push 0x7d1340
// 0062a887  64a100000000         mov eax, dword ptr fs:[0]
// 0062a88d  50                   push eax
// 0062a88e  64892500000000       mov dword ptr fs:[0], esp
// 0062a895  51                   push ecx
// 0062a896  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062a89a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062a89e  56                   push esi
// 0062a89f  50                   push eax
// 0062a8a0  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062a8a4  8bf1                 mov esi, ecx
// 0062a8a6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062a8aa  51                   push ecx
// 0062a8ab  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062a8af  52                   push edx
// 0062a8b0  50                   push eax
// 0062a8b1  51                   push ecx
// 0062a8b2  8d542444             lea edx, [esp + 0x44]
// 0062a8b6  52                   push edx
// 0062a8b7  e8e4f9ffff           call 0x62a2a0
// 0062a8bc  8b08                 mov ecx, dword ptr [eax]
// 0062a8be  83c410               add esp, 0x10
// 0062a8c1  c70000000000         mov dword ptr [eax], 0
// 0062a8c7  8bc4                 mov eax, esp
// 0062a8c9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0062a8d1  8964240c             mov dword ptr [esp + 0xc], esp
// 0062a8d5  8908                 mov dword ptr [eax], ecx
// 0062a8d7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062a8db  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062a8df  50                   push eax
// 0062a8e0  51                   push ecx
// 0062a8e1  c644242001           mov byte ptr [esp + 0x20], 1
// 0062a8e6  e8355af9ff           call 0x5c0320
// 0062a8eb  50                   push eax
// 0062a8ec  8bce                 mov ecx, esi
// 0062a8ee  c644242400           mov byte ptr [esp + 0x24], 0
// 0062a8f3  e818ade1ff           call 0x445610
// 0062a8f8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0062a8fc  85c0                 test eax, eax
// 0062a8fe  7409                 je 0x62a909
// 0062a900  50                   push eax
// 0062a901  e8745d0700           call 0x6a067a
// 0062a906  83c404               add esp, 4
// 0062a909  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062a90d  c706b05c8400         mov dword ptr [esi], 0x845cb0
// 0062a913  8bc6                 mov eax, esi
// 0062a915  64890d00000000       mov dword ptr fs:[0], ecx
// 0062a91c  5e                   pop esi
// 0062a91d  83c410               add esp, 0x10
// 0062a920  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
