// roc 2008-06 005bbc20  unit: RBX::Soundscape::SoundService  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bbc20
//
// 005bbc20  6aff                 push -1
// 005bbc22  6840137d00           push 0x7d1340
// 005bbc27  64a100000000         mov eax, dword ptr fs:[0]
// 005bbc2d  50                   push eax
// 005bbc2e  64892500000000       mov dword ptr fs:[0], esp
// 005bbc35  51                   push ecx
// 005bbc36  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005bbc3a  8b542424             mov edx, dword ptr [esp + 0x24]
// 005bbc3e  56                   push esi
// 005bbc3f  50                   push eax
// 005bbc40  8b442428             mov eax, dword ptr [esp + 0x28]
// 005bbc44  8bf1                 mov esi, ecx
// 005bbc46  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005bbc4a  51                   push ecx
// 005bbc4b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bbc4f  52                   push edx
// 005bbc50  50                   push eax
// 005bbc51  51                   push ecx
// 005bbc52  8d542444             lea edx, [esp + 0x44]
// 005bbc56  52                   push edx
// 005bbc57  e844c2ffff           call 0x5b7ea0
// 005bbc5c  8b08                 mov ecx, dword ptr [eax]
// 005bbc5e  83c410               add esp, 0x10
// 005bbc61  c70000000000         mov dword ptr [eax], 0
// 005bbc67  8bc4                 mov eax, esp
// 005bbc69  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005bbc71  8964240c             mov dword ptr [esp + 0xc], esp
// 005bbc75  8908                 mov dword ptr [eax], ecx
// 005bbc77  8b442424             mov eax, dword ptr [esp + 0x24]
// 005bbc7b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005bbc7f  50                   push eax
// 005bbc80  51                   push ecx
// 005bbc81  c644242001           mov byte ptr [esp + 0x20], 1
// 005bbc86  e8d5fbffff           call 0x5bb860
// 005bbc8b  50                   push eax
// 005bbc8c  8bce                 mov ecx, esi
// 005bbc8e  c644242400           mov byte ptr [esp + 0x24], 0
// 005bbc93  e8f8e5e4ff           call 0x40a290
// 005bbc98  8b442430             mov eax, dword ptr [esp + 0x30]
// 005bbc9c  85c0                 test eax, eax
// 005bbc9e  7409                 je 0x5bbca9
// 005bbca0  50                   push eax
// 005bbca1  e8d4490e00           call 0x6a067a
// 005bbca6  83c404               add esp, 4
// 005bbca9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bbcad  c706d07c8300         mov dword ptr [esi], 0x837cd0
// 005bbcb3  8bc6                 mov eax, esi
// 005bbcb5  64890d00000000       mov dword ptr fs:[0], ecx
// 005bbcbc  5e                   pop esi
// 005bbcbd  83c410               add esp, 0x10
// 005bbcc0  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
