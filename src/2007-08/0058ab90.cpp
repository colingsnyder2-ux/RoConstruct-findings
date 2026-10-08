// roc 2007-08 0058ab90  unit: RBX::VSoundChannel::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ab90
//
// 0058ab90  64a100000000         mov eax, dword ptr fs:[0]
// 0058ab96  6aff                 push -1
// 0058ab98  6890117500           push 0x751190
// 0058ab9d  50                   push eax
// 0058ab9e  64892500000000       mov dword ptr fs:[0], esp
// 0058aba5  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058aba9  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058abad  56                   push esi
// 0058abae  50                   push eax
// 0058abaf  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058abb3  8bf1                 mov esi, ecx
// 0058abb5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058abb9  51                   push ecx
// 0058abba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058abbe  52                   push edx
// 0058abbf  50                   push eax
// 0058abc0  51                   push ecx
// 0058abc1  8d542440             lea edx, [esp + 0x40]
// 0058abc5  52                   push edx
// 0058abc6  e855deffff           call 0x588a20
// 0058abcb  8b10                 mov edx, dword ptr [eax]
// 0058abcd  83c410               add esp, 0x10
// 0058abd0  8bcc                 mov ecx, esp
// 0058abd2  c70000000000         mov dword ptr [eax], 0
// 0058abd8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058abe0  8964242c             mov dword ptr [esp + 0x2c], esp
// 0058abe4  8911                 mov dword ptr [ecx], edx
// 0058abe6  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058abea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058abee  52                   push edx
// 0058abef  50                   push eax
// 0058abf0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0058abf5  e856fbffff           call 0x58a750
// 0058abfa  50                   push eax
// 0058abfb  8bce                 mov ecx, esi
// 0058abfd  c644242000           mov byte ptr [esp + 0x20], 0
// 0058ac02  e85982ebff           call 0x442e60
// 0058ac07  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058ac0b  51                   push ecx
// 0058ac0c  e851500a00           call 0x62fc62
// 0058ac11  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058ac15  83c404               add esp, 4
// 0058ac18  c706ccee7a00         mov dword ptr [esi], 0x7aeecc
// 0058ac1e  8bc6                 mov eax, esi
// 0058ac20  64890d00000000       mov dword ptr fs:[0], ecx
// 0058ac27  5e                   pop esi
// 0058ac28  83c40c               add esp, 0xc
// 0058ac2b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
