// roc 2007-03 005a99e0  unit: seg_005a0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a99e0
//
// 005a99e0  64a100000000         mov eax, dword ptr fs:[0]
// 005a99e6  6aff                 push -1
// 005a99e8  68a08b7500           push 0x758ba0
// 005a99ed  50                   push eax
// 005a99ee  64892500000000       mov dword ptr fs:[0], esp
// 005a99f5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a99f9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a99fd  56                   push esi
// 005a99fe  50                   push eax
// 005a99ff  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a9a03  8bf1                 mov esi, ecx
// 005a9a05  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a9a09  51                   push ecx
// 005a9a0a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a9a0e  52                   push edx
// 005a9a0f  50                   push eax
// 005a9a10  51                   push ecx
// 005a9a11  8d542440             lea edx, [esp + 0x40]
// 005a9a15  52                   push edx
// 005a9a16  e855f5ffff           call 0x5a8f70
// 005a9a1b  8b10                 mov edx, dword ptr [eax]
// 005a9a1d  83c410               add esp, 0x10
// 005a9a20  8bcc                 mov ecx, esp
// 005a9a22  c70000000000         mov dword ptr [eax], 0
// 005a9a28  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a9a30  8964242c             mov dword ptr [esp + 0x2c], esp
// 005a9a34  8911                 mov dword ptr [ecx], edx
// 005a9a36  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a9a3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a9a3e  52                   push edx
// 005a9a3f  50                   push eax
// 005a9a40  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a9a45  e836effdff           call 0x588980
// 005a9a4a  50                   push eax
// 005a9a4b  8bce                 mov ecx, esi
// 005a9a4d  c644242000           mov byte ptr [esp + 0x20], 0
// 005a9a52  e899b1f8ff           call 0x534bf0
// 005a9a57  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a9a5b  51                   push ecx
// 005a9a5c  e88f460700           call 0x61e0f0
// 005a9a61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a9a65  83c404               add esp, 4
// 005a9a68  c70688667b00         mov dword ptr [esi], 0x7b6688
// 005a9a6e  8bc6                 mov eax, esi
// 005a9a70  64890d00000000       mov dword ptr fs:[0], ecx
// 005a9a77  5e                   pop esi
// 005a9a78  83c40c               add esp, 0xc
// 005a9a7b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
