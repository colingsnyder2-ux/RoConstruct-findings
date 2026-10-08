// roc 2007-03 00578a60  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578a60
//
// 00578a60  64a100000000         mov eax, dword ptr fs:[0]
// 00578a66  6aff                 push -1
// 00578a68  68a08b7500           push 0x758ba0
// 00578a6d  50                   push eax
// 00578a6e  64892500000000       mov dword ptr fs:[0], esp
// 00578a75  8b442428             mov eax, dword ptr [esp + 0x28]
// 00578a79  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578a7d  56                   push esi
// 00578a7e  50                   push eax
// 00578a7f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578a83  8bf1                 mov esi, ecx
// 00578a85  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578a89  51                   push ecx
// 00578a8a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00578a8e  52                   push edx
// 00578a8f  50                   push eax
// 00578a90  51                   push ecx
// 00578a91  8d542440             lea edx, [esp + 0x40]
// 00578a95  52                   push edx
// 00578a96  e855f7ffff           call 0x5781f0
// 00578a9b  8b10                 mov edx, dword ptr [eax]
// 00578a9d  83c410               add esp, 0x10
// 00578aa0  8bcc                 mov ecx, esp
// 00578aa2  c70000000000         mov dword ptr [eax], 0
// 00578aa8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00578ab0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00578ab4  8911                 mov dword ptr [ecx], edx
// 00578ab6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578aba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578abe  52                   push edx
// 00578abf  50                   push eax
// 00578ac0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00578ac5  e826feffff           call 0x5788f0
// 00578aca  50                   push eax
// 00578acb  8bce                 mov ecx, esi
// 00578acd  c644242000           mov byte ptr [esp + 0x20], 0
// 00578ad2  e819aeffff           call 0x5738f0
// 00578ad7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578adb  51                   push ecx
// 00578adc  e80f560a00           call 0x61e0f0
// 00578ae1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578ae5  83c404               add esp, 4
// 00578ae8  c70620c97a00         mov dword ptr [esi], 0x7ac920
// 00578aee  8bc6                 mov eax, esi
// 00578af0  64890d00000000       mov dword ptr fs:[0], ecx
// 00578af7  5e                   pop esi
// 00578af8  83c40c               add esp, 0xc
// 00578afb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
