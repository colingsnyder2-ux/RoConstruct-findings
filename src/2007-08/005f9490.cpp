// roc 2007-08 005f9490  unit: RBX::VDebrisService::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f9490
//
// 005f9490  64a100000000         mov eax, dword ptr fs:[0]
// 005f9496  6aff                 push -1
// 005f9498  6890117500           push 0x751190
// 005f949d  50                   push eax
// 005f949e  64892500000000       mov dword ptr fs:[0], esp
// 005f94a5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005f94a9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f94ad  56                   push esi
// 005f94ae  50                   push eax
// 005f94af  8b442424             mov eax, dword ptr [esp + 0x24]
// 005f94b3  8bf1                 mov esi, ecx
// 005f94b5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f94b9  51                   push ecx
// 005f94ba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005f94be  52                   push edx
// 005f94bf  50                   push eax
// 005f94c0  51                   push ecx
// 005f94c1  8d542440             lea edx, [esp + 0x40]
// 005f94c5  52                   push edx
// 005f94c6  e825f7ffff           call 0x5f8bf0
// 005f94cb  8b10                 mov edx, dword ptr [eax]
// 005f94cd  83c410               add esp, 0x10
// 005f94d0  8bcc                 mov ecx, esp
// 005f94d2  c70000000000         mov dword ptr [eax], 0
// 005f94d8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005f94e0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005f94e4  8911                 mov dword ptr [ecx], edx
// 005f94e6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005f94ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f94ee  52                   push edx
// 005f94ef  50                   push eax
// 005f94f0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005f94f5  e8764ff9ff           call 0x58e470
// 005f94fa  50                   push eax
// 005f94fb  8bce                 mov ecx, esi
// 005f94fd  c644242000           mov byte ptr [esp + 0x20], 0
// 005f9502  e85999e4ff           call 0x442e60
// 005f9507  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005f950b  51                   push ecx
// 005f950c  e851670300           call 0x62fc62
// 005f9511  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f9515  83c404               add esp, 4
// 005f9518  c706941b7c00         mov dword ptr [esi], 0x7c1b94
// 005f951e  8bc6                 mov eax, esi
// 005f9520  64890d00000000       mov dword ptr fs:[0], ecx
// 005f9527  5e                   pop esi
// 005f9528  83c40c               add esp, 0xc
// 005f952b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
