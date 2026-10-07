// roc 2008-06 00447aa0  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447aa0
//
// 00447aa0  6aff                 push -1
// 00447aa2  6840137d00           push 0x7d1340
// 00447aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00447aad  50                   push eax
// 00447aae  64892500000000       mov dword ptr fs:[0], esp
// 00447ab5  51                   push ecx
// 00447ab6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00447aba  8b542424             mov edx, dword ptr [esp + 0x24]
// 00447abe  56                   push esi
// 00447abf  50                   push eax
// 00447ac0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00447ac4  8bf1                 mov esi, ecx
// 00447ac6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00447aca  51                   push ecx
// 00447acb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00447acf  52                   push edx
// 00447ad0  50                   push eax
// 00447ad1  51                   push ecx
// 00447ad2  8d542444             lea edx, [esp + 0x44]
// 00447ad6  52                   push edx
// 00447ad7  e884ddffff           call 0x445860
// 00447adc  8b08                 mov ecx, dword ptr [eax]
// 00447ade  83c410               add esp, 0x10
// 00447ae1  c70000000000         mov dword ptr [eax], 0
// 00447ae7  8bc4                 mov eax, esp
// 00447ae9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00447af1  8964240c             mov dword ptr [esp + 0xc], esp
// 00447af5  8908                 mov dword ptr [eax], ecx
// 00447af7  8b442424             mov eax, dword ptr [esp + 0x24]
// 00447afb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00447aff  50                   push eax
// 00447b00  51                   push ecx
// 00447b01  c644242001           mov byte ptr [esp + 0x20], 1
// 00447b06  e875feffff           call 0x447980
// 00447b0b  50                   push eax
// 00447b0c  8bce                 mov ecx, esi
// 00447b0e  c644242400           mov byte ptr [esp + 0x24], 0
// 00447b13  e8f8daffff           call 0x445610
// 00447b18  8b442430             mov eax, dword ptr [esp + 0x30]
// 00447b1c  85c0                 test eax, eax
// 00447b1e  7409                 je 0x447b29
// 00447b20  50                   push eax
// 00447b21  e8548b2500           call 0x6a067a
// 00447b26  83c404               add esp, 4
// 00447b29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00447b2d  c70600608100         mov dword ptr [esi], 0x816000
// 00447b33  8bc6                 mov eax, esi
// 00447b35  64890d00000000       mov dword ptr fs:[0], ecx
// 00447b3c  5e                   pop esi
// 00447b3d  83c410               add esp, 0x10
// 00447b40  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
