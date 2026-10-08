// roc 2007-03 005717e0  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005717e0
//
// 005717e0  64a100000000         mov eax, dword ptr fs:[0]
// 005717e6  6aff                 push -1
// 005717e8  68a08b7500           push 0x758ba0
// 005717ed  50                   push eax
// 005717ee  64892500000000       mov dword ptr fs:[0], esp
// 005717f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005717f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005717fd  56                   push esi
// 005717fe  50                   push eax
// 005717ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 00571803  8bf1                 mov esi, ecx
// 00571805  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00571809  51                   push ecx
// 0057180a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0057180e  52                   push edx
// 0057180f  50                   push eax
// 00571810  51                   push ecx
// 00571811  8d542440             lea edx, [esp + 0x40]
// 00571815  52                   push edx
// 00571816  e875faffff           call 0x571290
// 0057181b  8b10                 mov edx, dword ptr [eax]
// 0057181d  83c410               add esp, 0x10
// 00571820  8bcc                 mov ecx, esp
// 00571822  c70000000000         mov dword ptr [eax], 0
// 00571828  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00571830  8964242c             mov dword ptr [esp + 0x2c], esp
// 00571834  8911                 mov dword ptr [ecx], edx
// 00571836  8b542420             mov edx, dword ptr [esp + 0x20]
// 0057183a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057183e  52                   push edx
// 0057183f  50                   push eax
// 00571840  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00571845  e8e6fdffff           call 0x571630
// 0057184a  50                   push eax
// 0057184b  8bce                 mov ecx, esi
// 0057184d  c644242000           mov byte ptr [esp + 0x20], 0
// 00571852  e86930edff           call 0x4448c0
// 00571857  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057185b  51                   push ecx
// 0057185c  e88fc80a00           call 0x61e0f0
// 00571861  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00571865  83c404               add esp, 4
// 00571868  c70668ba7a00         mov dword ptr [esi], 0x7aba68
// 0057186e  8bc6                 mov eax, esi
// 00571870  64890d00000000       mov dword ptr fs:[0], ecx
// 00571877  5e                   pop esi
// 00571878  83c40c               add esp, 0xc
// 0057187b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
