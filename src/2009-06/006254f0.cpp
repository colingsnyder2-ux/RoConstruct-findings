// roc 2009-06 006254f0  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006254f0
//
// 006254f0  6aff                 push -1
// 006254f2  6800928500           push 0x859200
// 006254f7  64a100000000         mov eax, dword ptr fs:[0]
// 006254fd  50                   push eax
// 006254fe  64892500000000       mov dword ptr fs:[0], esp
// 00625505  51                   push ecx
// 00625506  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0062550a  8b542424             mov edx, dword ptr [esp + 0x24]
// 0062550e  56                   push esi
// 0062550f  50                   push eax
// 00625510  8b442428             mov eax, dword ptr [esp + 0x28]
// 00625514  8bf1                 mov esi, ecx
// 00625516  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0062551a  51                   push ecx
// 0062551b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0062551f  52                   push edx
// 00625520  50                   push eax
// 00625521  51                   push ecx
// 00625522  8d542444             lea edx, [esp + 0x44]
// 00625526  52                   push edx
// 00625527  e854f8ffff           call 0x624d80
// 0062552c  8b08                 mov ecx, dword ptr [eax]
// 0062552e  83c410               add esp, 0x10
// 00625531  c70000000000         mov dword ptr [eax], 0
// 00625537  8bc4                 mov eax, esp
// 00625539  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00625541  8964240c             mov dword ptr [esp + 0xc], esp
// 00625545  8908                 mov dword ptr [eax], ecx
// 00625547  8b442424             mov eax, dword ptr [esp + 0x24]
// 0062554b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0062554f  50                   push eax
// 00625550  51                   push ecx
// 00625551  c644242001           mov byte ptr [esp + 0x20], 1
// 00625556  e8254ffcff           call 0x5ea480
// 0062555b  50                   push eax
// 0062555c  8bce                 mov ecx, esi
// 0062555e  c644242400           mov byte ptr [esp + 0x24], 0
// 00625563  e868f6ffff           call 0x624bd0
// 00625568  8b542430             mov edx, dword ptr [esp + 0x30]
// 0062556c  52                   push edx
// 0062556d  e8c0340f00           call 0x718a32
// 00625572  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00625576  83c404               add esp, 4
// 00625579  c706389f8d00         mov dword ptr [esi], 0x8d9f38
// 0062557f  8bc6                 mov eax, esi
// 00625581  64890d00000000       mov dword ptr fs:[0], ecx
// 00625588  5e                   pop esi
// 00625589  83c410               add esp, 0x10
// 0062558c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
