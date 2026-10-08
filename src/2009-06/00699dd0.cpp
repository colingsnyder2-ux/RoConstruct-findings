// roc 2009-06 00699dd0  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699dd0
//
// 00699dd0  6aff                 push -1
// 00699dd2  6800928500           push 0x859200
// 00699dd7  64a100000000         mov eax, dword ptr fs:[0]
// 00699ddd  50                   push eax
// 00699dde  64892500000000       mov dword ptr fs:[0], esp
// 00699de5  51                   push ecx
// 00699de6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00699dea  8b542424             mov edx, dword ptr [esp + 0x24]
// 00699dee  56                   push esi
// 00699def  50                   push eax
// 00699df0  8b442428             mov eax, dword ptr [esp + 0x28]
// 00699df4  8bf1                 mov esi, ecx
// 00699df6  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00699dfa  51                   push ecx
// 00699dfb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00699dff  52                   push edx
// 00699e00  50                   push eax
// 00699e01  51                   push ecx
// 00699e02  8d542444             lea edx, [esp + 0x44]
// 00699e06  52                   push edx
// 00699e07  e8f4f0ffff           call 0x698f00
// 00699e0c  8b08                 mov ecx, dword ptr [eax]
// 00699e0e  83c410               add esp, 0x10
// 00699e11  c70000000000         mov dword ptr [eax], 0
// 00699e17  8bc4                 mov eax, esp
// 00699e19  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00699e21  8964240c             mov dword ptr [esp + 0xc], esp
// 00699e25  8908                 mov dword ptr [eax], ecx
// 00699e27  8b442424             mov eax, dword ptr [esp + 0x24]
// 00699e2b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00699e2f  50                   push eax
// 00699e30  51                   push ecx
// 00699e31  c644242001           mov byte ptr [esp + 0x20], 1
// 00699e36  e85517f5ff           call 0x5eb590
// 00699e3b  50                   push eax
// 00699e3c  8bce                 mov ecx, esi
// 00699e3e  c644242400           mov byte ptr [esp + 0x24], 0
// 00699e43  e8b862daff           call 0x440100
// 00699e48  8b542430             mov edx, dword ptr [esp + 0x30]
// 00699e4c  52                   push edx
// 00699e4d  e8e0eb0700           call 0x718a32
// 00699e52  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00699e56  83c404               add esp, 4
// 00699e59  c7066c838e00         mov dword ptr [esi], 0x8e836c
// 00699e5f  8bc6                 mov eax, esi
// 00699e61  64890d00000000       mov dword ptr fs:[0], ecx
// 00699e68  5e                   pop esi
// 00699e69  83c410               add esp, 0x10
// 00699e6c  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
