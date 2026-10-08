// roc 2007-08 00572e60  unit: RBX::VTexture::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00572e60
//
// 00572e60  64a100000000         mov eax, dword ptr fs:[0]
// 00572e66  6aff                 push -1
// 00572e68  6890117500           push 0x751190
// 00572e6d  50                   push eax
// 00572e6e  64892500000000       mov dword ptr fs:[0], esp
// 00572e75  8b442428             mov eax, dword ptr [esp + 0x28]
// 00572e79  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572e7d  56                   push esi
// 00572e7e  50                   push eax
// 00572e7f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00572e83  8bf1                 mov esi, ecx
// 00572e85  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572e89  51                   push ecx
// 00572e8a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00572e8e  52                   push edx
// 00572e8f  50                   push eax
// 00572e90  51                   push ecx
// 00572e91  8d542440             lea edx, [esp + 0x40]
// 00572e95  52                   push edx
// 00572e96  e8f5f8ffff           call 0x572790
// 00572e9b  8b10                 mov edx, dword ptr [eax]
// 00572e9d  83c410               add esp, 0x10
// 00572ea0  8bcc                 mov ecx, esp
// 00572ea2  c70000000000         mov dword ptr [eax], 0
// 00572ea8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00572eb0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00572eb4  8911                 mov dword ptr [ecx], edx
// 00572eb6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00572eba  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00572ebe  52                   push edx
// 00572ebf  50                   push eax
// 00572ec0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00572ec5  e8b6feffff           call 0x572d80
// 00572eca  50                   push eax
// 00572ecb  8bce                 mov ecx, esi
// 00572ecd  c644242000           mov byte ptr [esp + 0x20], 0
// 00572ed2  e849f8ffff           call 0x572720
// 00572ed7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00572edb  51                   push ecx
// 00572edc  e881cd0b00           call 0x62fc62
// 00572ee1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00572ee5  83c404               add esp, 4
// 00572ee8  c70674a37a00         mov dword ptr [esi], 0x7aa374
// 00572eee  8bc6                 mov eax, esi
// 00572ef0  64890d00000000       mov dword ptr fs:[0], ecx
// 00572ef7  5e                   pop esi
// 00572ef8  83c40c               add esp, 0xc
// 00572efb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
