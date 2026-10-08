// roc 2007-03 005a4db0  unit: seg_005a0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4db0
//
// 005a4db0  64a100000000         mov eax, dword ptr fs:[0]
// 005a4db6  6aff                 push -1
// 005a4db8  68a08b7500           push 0x758ba0
// 005a4dbd  50                   push eax
// 005a4dbe  64892500000000       mov dword ptr fs:[0], esp
// 005a4dc5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4dc9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a4dcd  56                   push esi
// 005a4dce  50                   push eax
// 005a4dcf  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4dd3  8bf1                 mov esi, ecx
// 005a4dd5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4dd9  51                   push ecx
// 005a4dda  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a4dde  52                   push edx
// 005a4ddf  50                   push eax
// 005a4de0  51                   push ecx
// 005a4de1  8d542440             lea edx, [esp + 0x40]
// 005a4de5  52                   push edx
// 005a4de6  e8c5e7ffff           call 0x5a35b0
// 005a4deb  8b10                 mov edx, dword ptr [eax]
// 005a4ded  83c410               add esp, 0x10
// 005a4df0  8bcc                 mov ecx, esp
// 005a4df2  c70000000000         mov dword ptr [eax], 0
// 005a4df8  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a4e00  8964242c             mov dword ptr [esp + 0x2c], esp
// 005a4e04  8911                 mov dword ptr [ecx], edx
// 005a4e06  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a4e0a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a4e0e  52                   push edx
// 005a4e0f  50                   push eax
// 005a4e10  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a4e15  e8b635feff           call 0x5883d0
// 005a4e1a  50                   push eax
// 005a4e1b  8bce                 mov ecx, esi
// 005a4e1d  c644242000           mov byte ptr [esp + 0x20], 0
// 005a4e22  e869dae9ff           call 0x442890
// 005a4e27  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4e2b  51                   push ecx
// 005a4e2c  e8bf920700           call 0x61e0f0
// 005a4e31  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4e35  83c404               add esp, 4
// 005a4e38  c70660577b00         mov dword ptr [esi], 0x7b5760
// 005a4e3e  8bc6                 mov eax, esi
// 005a4e40  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4e47  5e                   pop esi
// 005a4e48  83c40c               add esp, 0xc
// 005a4e4b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
