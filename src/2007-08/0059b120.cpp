// roc 2007-08 0059b120  unit: RBX::Camera::W4CameraType::?$EnumDesc  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059b120
//
// 0059b120  64a100000000         mov eax, dword ptr fs:[0]
// 0059b126  6aff                 push -1
// 0059b128  6890117500           push 0x751190
// 0059b12d  50                   push eax
// 0059b12e  64892500000000       mov dword ptr fs:[0], esp
// 0059b135  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059b139  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b13d  56                   push esi
// 0059b13e  50                   push eax
// 0059b13f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059b143  8bf1                 mov esi, ecx
// 0059b145  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059b149  51                   push ecx
// 0059b14a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059b14e  52                   push edx
// 0059b14f  50                   push eax
// 0059b150  51                   push ecx
// 0059b151  8d542440             lea edx, [esp + 0x40]
// 0059b155  52                   push edx
// 0059b156  e815f3ffff           call 0x59a470
// 0059b15b  8b10                 mov edx, dword ptr [eax]
// 0059b15d  83c410               add esp, 0x10
// 0059b160  8bcc                 mov ecx, esp
// 0059b162  c70000000000         mov dword ptr [eax], 0
// 0059b168  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059b170  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059b174  8911                 mov dword ptr [ecx], edx
// 0059b176  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059b17a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059b17e  52                   push edx
// 0059b17f  50                   push eax
// 0059b180  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059b185  e816feffff           call 0x59afa0
// 0059b18a  50                   push eax
// 0059b18b  8bce                 mov ecx, esi
// 0059b18d  c644242000           mov byte ptr [esp + 0x20], 0
// 0059b192  e8395df9ff           call 0x530ed0
// 0059b197  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059b19b  51                   push ecx
// 0059b19c  e8c14a0900           call 0x62fc62
// 0059b1a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059b1a5  83c404               add esp, 4
// 0059b1a8  c706e0167b00         mov dword ptr [esi], 0x7b16e0
// 0059b1ae  8bc6                 mov eax, esi
// 0059b1b0  64890d00000000       mov dword ptr fs:[0], ecx
// 0059b1b7  5e                   pop esi
// 0059b1b8  83c40c               add esp, 0xc
// 0059b1bb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
