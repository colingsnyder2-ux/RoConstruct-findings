// roc 2007-08 0058ac30  unit: RBX::VSoundChannel::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058ac30
//
// 0058ac30  64a100000000         mov eax, dword ptr fs:[0]
// 0058ac36  6aff                 push -1
// 0058ac38  6890117500           push 0x751190
// 0058ac3d  50                   push eax
// 0058ac3e  64892500000000       mov dword ptr fs:[0], esp
// 0058ac45  8b442428             mov eax, dword ptr [esp + 0x28]
// 0058ac49  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058ac4d  56                   push esi
// 0058ac4e  50                   push eax
// 0058ac4f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0058ac53  8bf1                 mov esi, ecx
// 0058ac55  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058ac59  51                   push ecx
// 0058ac5a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058ac5e  52                   push edx
// 0058ac5f  50                   push eax
// 0058ac60  51                   push ecx
// 0058ac61  8d542440             lea edx, [esp + 0x40]
// 0058ac65  52                   push edx
// 0058ac66  e815deffff           call 0x588a80
// 0058ac6b  8b10                 mov edx, dword ptr [eax]
// 0058ac6d  83c410               add esp, 0x10
// 0058ac70  8bcc                 mov ecx, esp
// 0058ac72  c70000000000         mov dword ptr [eax], 0
// 0058ac78  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0058ac80  8964242c             mov dword ptr [esp + 0x2c], esp
// 0058ac84  8911                 mov dword ptr [ecx], edx
// 0058ac86  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058ac8a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058ac8e  52                   push edx
// 0058ac8f  50                   push eax
// 0058ac90  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0058ac95  e8b6faffff           call 0x58a750
// 0058ac9a  50                   push eax
// 0058ac9b  8bce                 mov ecx, esi
// 0058ac9d  c644242000           mov byte ptr [esp + 0x20], 0
// 0058aca2  e8b980ebff           call 0x442d60
// 0058aca7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058acab  51                   push ecx
// 0058acac  e8b14f0a00           call 0x62fc62
// 0058acb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0058acb5  83c404               add esp, 4
// 0058acb8  c706f4ee7a00         mov dword ptr [esi], 0x7aeef4
// 0058acbe  8bc6                 mov eax, esi
// 0058acc0  64890d00000000       mov dword ptr fs:[0], ecx
// 0058acc7  5e                   pop esi
// 0058acc8  83c40c               add esp, 0xc
// 0058accb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
