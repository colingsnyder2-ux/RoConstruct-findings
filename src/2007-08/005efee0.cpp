// roc 2007-08 005efee0  unit: RBX::VMessage::?$FactoryProduct  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005efee0
//
// 005efee0  64a100000000         mov eax, dword ptr fs:[0]
// 005efee6  6aff                 push -1
// 005efee8  6890117500           push 0x751190
// 005efeed  50                   push eax
// 005efeee  64892500000000       mov dword ptr fs:[0], esp
// 005efef5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005efef9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005efefd  56                   push esi
// 005efefe  50                   push eax
// 005efeff  8b442424             mov eax, dword ptr [esp + 0x24]
// 005eff03  8bf1                 mov esi, ecx
// 005eff05  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eff09  51                   push ecx
// 005eff0a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005eff0e  52                   push edx
// 005eff0f  50                   push eax
// 005eff10  51                   push ecx
// 005eff11  8d542440             lea edx, [esp + 0x40]
// 005eff15  52                   push edx
// 005eff16  e8c5feffff           call 0x5efde0
// 005eff1b  8b10                 mov edx, dword ptr [eax]
// 005eff1d  83c410               add esp, 0x10
// 005eff20  8bcc                 mov ecx, esp
// 005eff22  c70000000000         mov dword ptr [eax], 0
// 005eff28  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005eff30  8964242c             mov dword ptr [esp + 0x2c], esp
// 005eff34  8911                 mov dword ptr [ecx], edx
// 005eff36  8b542420             mov edx, dword ptr [esp + 0x20]
// 005eff3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005eff3e  52                   push edx
// 005eff3f  50                   push eax
// 005eff40  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005eff45  e866e3f9ff           call 0x58e2b0
// 005eff4a  50                   push eax
// 005eff4b  8bce                 mov ecx, esi
// 005eff4d  c644242000           mov byte ptr [esp + 0x20], 0
// 005eff52  e8892ee5ff           call 0x442de0
// 005eff57  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005eff5b  51                   push ecx
// 005eff5c  e801fd0300           call 0x62fc62
// 005eff61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005eff65  83c404               add esp, 4
// 005eff68  c7062cff7b00         mov dword ptr [esi], 0x7bff2c
// 005eff6e  8bc6                 mov eax, esi
// 005eff70  64890d00000000       mov dword ptr fs:[0], ecx
// 005eff77  5e                   pop esi
// 005eff78  83c40c               add esp, 0xc
// 005eff7b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
