// roc 2008-06 00447b50  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447b50
//
// 00447b50  6aff                 push -1
// 00447b52  6840137d00           push 0x7d1340
// 00447b57  64a100000000         mov eax, dword ptr fs:[0]
// 00447b5d  50                   push eax
// 00447b5e  64892500000000       mov dword ptr fs:[0], esp
// 00447b65  51                   push ecx
// 00447b66  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00447b6a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00447b6e  56                   push esi
// 00447b6f  50                   push eax
// 00447b70  8b442428             mov eax, dword ptr [esp + 0x28]
// 00447b74  8bf1                 mov esi, ecx
// 00447b76  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00447b7a  51                   push ecx
// 00447b7b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00447b7f  52                   push edx
// 00447b80  50                   push eax
// 00447b81  51                   push ecx
// 00447b82  8d542444             lea edx, [esp + 0x44]
// 00447b86  52                   push edx
// 00447b87  e824ddffff           call 0x4458b0
// 00447b8c  8b08                 mov ecx, dword ptr [eax]
// 00447b8e  83c410               add esp, 0x10
// 00447b91  c70000000000         mov dword ptr [eax], 0
// 00447b97  8bc4                 mov eax, esp
// 00447b99  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00447ba1  8964240c             mov dword ptr [esp + 0xc], esp
// 00447ba5  8908                 mov dword ptr [eax], ecx
// 00447ba7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00447bab  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00447baf  50                   push eax
// 00447bb0  51                   push ecx
// 00447bb1  c644242001           mov byte ptr [esp + 0x20], 1
// 00447bb6  e8c5fdffff           call 0x447980
// 00447bbb  50                   push eax
// 00447bbc  8bce                 mov ecx, esi
// 00447bbe  c644242400           mov byte ptr [esp + 0x24], 0
// 00447bc3  e848daffff           call 0x445610
// 00447bc8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00447bcc  85c0                 test eax, eax
// 00447bce  7409                 je 0x447bd9
// 00447bd0  50                   push eax
// 00447bd1  e8a48a2500           call 0x6a067a
// 00447bd6  83c404               add esp, 4
// 00447bd9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00447bdd  c70600608100         mov dword ptr [esi], 0x816000
// 00447be3  8bc6                 mov eax, esi
// 00447be5  64890d00000000       mov dword ptr fs:[0], ecx
// 00447bec  5e                   pop esi
// 00447bed  83c410               add esp, 0x10
// 00447bf0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
