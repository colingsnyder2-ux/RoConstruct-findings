// roc 2007-08 0058aaf0  unit: RBX::VSoundChannel::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058aaf0
//
// 0058aaf0  64a100000000         mov eax, dword ptr fs:[0]
// 0058aaf6  6aff                 push -1
// 0058aaf8  6890117500           push 0x751190
// 0058aafd  50                   push eax
// 0058aafe  64892500000000       mov dword ptr fs:[0], esp
// 0058ab05  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058ab09  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058ab0d  56                   push esi
// 0058ab0e  50                   push eax
// 0058ab0f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ab13  8bf1                 mov esi, ecx
// 0058ab15  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058ab19  51                   push ecx
// 0058ab1a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058ab1e  52                   push edx
// 0058ab1f  50                   push eax
// 0058ab20  51                   push ecx
// 0058ab21  8d542440             lea edx, [esp + 0x40]
// 0058ab25  52                   push edx
// 0058ab26  e845d5ffff           call 0x588070
// 0058ab2b  8b10                 mov edx, dword ptr [eax]
// 0058ab2d  83c410               add esp, 0x10
// 0058ab30  8bcc                 mov ecx, esp
// 0058ab32  c70000000000         mov dword ptr [eax], 0
// 0058ab38  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058ab40  8964242c             mov dword ptr [esp + 0x2c], esp
// 0058ab44  8911                 mov dword ptr [ecx], edx
// 0058ab46  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058ab4a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058ab4e  52                   push edx
// 0058ab4f  50                   push eax
// 0058ab50  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0058ab55  e8f6fbffff           call 0x58a750
// 0058ab5a  50                   push eax
// 0058ab5b  8bce                 mov ecx, esi
// 0058ab5d  c644242000           mov byte ptr [esp + 0x20], 0
// 0058ab62  e879a7ebff           call 0x4452e0
// 0058ab67  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058ab6b  51                   push ecx
// 0058ab6c  e8f1500a00           call 0x62fc62
// 0058ab71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ab75  83c404               add esp, 4
// 0058ab78  c706a4ee7a00         mov dword ptr [esi], 0x7aeea4
// 0058ab7e  8bc6                 mov eax, esi
// 0058ab80  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ab87  5e                   pop esi
// 0058ab88  83c40c               add esp, 0xc
// 0058ab8b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
