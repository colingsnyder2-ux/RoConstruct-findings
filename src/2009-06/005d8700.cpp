// roc 2009-06 005d8700  unit: RBX::VTeam::?$FactoryProduct  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d8700
//
// 005d8700  6aff                 push -1
// 005d8702  6800928500           push 0x859200
// 005d8707  64a100000000         mov eax, dword ptr fs:[0]
// 005d870d  50                   push eax
// 005d870e  64892500000000       mov dword ptr fs:[0], esp
// 005d8715  51                   push ecx
// 005d8716  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005d871a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005d871e  56                   push esi
// 005d871f  50                   push eax
// 005d8720  8b442428             mov eax, dword ptr [esp + 0x28]
// 005d8724  8bf1                 mov esi, ecx
// 005d8726  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005d872a  51                   push ecx
// 005d872b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005d872f  52                   push edx
// 005d8730  50                   push eax
// 005d8731  51                   push ecx
// 005d8732  8d542444             lea edx, [esp + 0x44]
// 005d8736  52                   push edx
// 005d8737  e8d4fdffff           call 0x5d8510
// 005d873c  8b08                 mov ecx, dword ptr [eax]
// 005d873e  83c410               add esp, 0x10
// 005d8741  c70000000000         mov dword ptr [eax], 0
// 005d8747  8bc4                 mov eax, esp
// 005d8749  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d8751  8964240c             mov dword ptr [esp + 0xc], esp
// 005d8755  8908                 mov dword ptr [eax], ecx
// 005d8757  8b442424             mov eax, dword ptr [esp + 0x24]
// 005d875b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005d875f  50                   push eax
// 005d8760  51                   push ecx
// 005d8761  c644242001           mov byte ptr [esp + 0x20], 1
// 005d8766  e885feffff           call 0x5d85f0
// 005d876b  50                   push eax
// 005d876c  8bce                 mov ecx, esi
// 005d876e  c644242400           mov byte ptr [esp + 0x24], 0
// 005d8773  e848caedff           call 0x4b51c0
// 005d8778  8b542430             mov edx, dword ptr [esp + 0x30]
// 005d877c  52                   push edx
// 005d877d  e8b0021400           call 0x718a32
// 005d8782  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d8786  83c404               add esp, 4
// 005d8789  c706e0558d00         mov dword ptr [esi], 0x8d55e0
// 005d878f  8bc6                 mov eax, esi
// 005d8791  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8798  5e                   pop esi
// 005d8799  83c410               add esp, 0x10
// 005d879c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
