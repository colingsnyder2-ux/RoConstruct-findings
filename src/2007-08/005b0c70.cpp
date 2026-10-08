// roc 2007-08 005b0c70  unit: RBX::AutoJoint  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0c70
//
// 005b0c70  64a100000000         mov eax, dword ptr fs:[0]
// 005b0c76  6aff                 push -1
// 005b0c78  6890117500           push 0x751190
// 005b0c7d  50                   push eax
// 005b0c7e  64892500000000       mov dword ptr fs:[0], esp
// 005b0c85  8b442428             mov eax, dword ptr [esp + 0x28]
// 005b0c89  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b0c8d  56                   push esi
// 005b0c8e  50                   push eax
// 005b0c8f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005b0c93  8bf1                 mov esi, ecx
// 005b0c95  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0c99  51                   push ecx
// 005b0c9a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005b0c9e  52                   push edx
// 005b0c9f  50                   push eax
// 005b0ca0  51                   push ecx
// 005b0ca1  8d542440             lea edx, [esp + 0x40]
// 005b0ca5  52                   push edx
// 005b0ca6  e805f4ffff           call 0x5b00b0
// 005b0cab  8b10                 mov edx, dword ptr [eax]
// 005b0cad  83c410               add esp, 0x10
// 005b0cb0  8bcc                 mov ecx, esp
// 005b0cb2  c70000000000         mov dword ptr [eax], 0
// 005b0cb8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005b0cc0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005b0cc4  8911                 mov dword ptr [ecx], edx
// 005b0cc6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005b0cca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005b0cce  52                   push edx
// 005b0ccf  50                   push eax
// 005b0cd0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005b0cd5  e81600feff           call 0x590cf0
// 005b0cda  50                   push eax
// 005b0cdb  8bce                 mov ecx, esi
// 005b0cdd  c644242000           mov byte ptr [esp + 0x20], 0
// 005b0ce2  e8e901f8ff           call 0x530ed0
// 005b0ce7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005b0ceb  51                   push ecx
// 005b0cec  e871ef0700           call 0x62fc62
// 005b0cf1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b0cf5  83c404               add esp, 4
// 005b0cf8  c70634697b00         mov dword ptr [esi], 0x7b6934
// 005b0cfe  8bc6                 mov eax, esi
// 005b0d00  64890d00000000       mov dword ptr fs:[0], ecx
// 005b0d07  5e                   pop esi
// 005b0d08  83c40c               add esp, 0xc
// 005b0d0b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
