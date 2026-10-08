// roc 2009-06 0065a700  unit: RBX::VCamera::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a700
//
// 0065a700  6aff                 push -1
// 0065a702  6800928500           push 0x859200
// 0065a707  64a100000000         mov eax, dword ptr fs:[0]
// 0065a70d  50                   push eax
// 0065a70e  64892500000000       mov dword ptr fs:[0], esp
// 0065a715  51                   push ecx
// 0065a716  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0065a71a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0065a71e  56                   push esi
// 0065a71f  50                   push eax
// 0065a720  8b442428             mov eax, dword ptr [esp + 0x28]
// 0065a724  8bf1                 mov esi, ecx
// 0065a726  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0065a72a  51                   push ecx
// 0065a72b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0065a72f  52                   push edx
// 0065a730  50                   push eax
// 0065a731  51                   push ecx
// 0065a732  8d542444             lea edx, [esp + 0x44]
// 0065a736  52                   push edx
// 0065a737  e884fdffff           call 0x65a4c0
// 0065a73c  8b08                 mov ecx, dword ptr [eax]
// 0065a73e  83c410               add esp, 0x10
// 0065a741  c70000000000         mov dword ptr [eax], 0
// 0065a747  8bc4                 mov eax, esp
// 0065a749  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0065a751  8964240c             mov dword ptr [esp + 0xc], esp
// 0065a755  8908                 mov dword ptr [eax], ecx
// 0065a757  8b442424             mov eax, dword ptr [esp + 0x24]
// 0065a75b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0065a75f  50                   push eax
// 0065a760  51                   push ecx
// 0065a761  c644242001           mov byte ptr [esp + 0x20], 1
// 0065a766  e8e501f9ff           call 0x5ea950
// 0065a76b  50                   push eax
// 0065a76c  8bce                 mov ecx, esi
// 0065a76e  c644242400           mov byte ptr [esp + 0x24], 0
// 0065a773  e8b86dfbff           call 0x611530
// 0065a778  8b542430             mov edx, dword ptr [esp + 0x30]
// 0065a77c  52                   push edx
// 0065a77d  e8b0e20b00           call 0x718a32
// 0065a782  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0065a786  83c404               add esp, 4
// 0065a789  c70624128e00         mov dword ptr [esi], 0x8e1224
// 0065a78f  8bc6                 mov eax, esi
// 0065a791  64890d00000000       mov dword ptr fs:[0], ecx
// 0065a798  5e                   pop esi
// 0065a799  83c410               add esp, 0x10
// 0065a79c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
