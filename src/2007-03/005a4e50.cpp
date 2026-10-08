// roc 2007-03 005a4e50  unit: seg_005a0000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a4e50
//
// 005a4e50  64a100000000         mov eax, dword ptr fs:[0]
// 005a4e56  6aff                 push -1
// 005a4e58  68a08b7500           push 0x758ba0
// 005a4e5d  50                   push eax
// 005a4e5e  64892500000000       mov dword ptr fs:[0], esp
// 005a4e65  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a4e69  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a4e6d  56                   push esi
// 005a4e6e  50                   push eax
// 005a4e6f  8b442424             mov eax, dword ptr [esp + 0x24]
// 005a4e73  8bf1                 mov esi, ecx
// 005a4e75  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4e79  51                   push ecx
// 005a4e7a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a4e7e  52                   push edx
// 005a4e7f  50                   push eax
// 005a4e80  51                   push ecx
// 005a4e81  8d542440             lea edx, [esp + 0x40]
// 005a4e85  52                   push edx
// 005a4e86  e885e7ffff           call 0x5a3610
// 005a4e8b  8b10                 mov edx, dword ptr [eax]
// 005a4e8d  83c410               add esp, 0x10
// 005a4e90  8bcc                 mov ecx, esp
// 005a4e92  c70000000000         mov dword ptr [eax], 0
// 005a4e98  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005a4ea0  8964242c             mov dword ptr [esp + 0x2c], esp
// 005a4ea4  8911                 mov dword ptr [ecx], edx
// 005a4ea6  8b542420             mov edx, dword ptr [esp + 0x20]
// 005a4eaa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a4eae  52                   push edx
// 005a4eaf  50                   push eax
// 005a4eb0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005a4eb5  e81635feff           call 0x5883d0
// 005a4eba  50                   push eax
// 005a4ebb  8bce                 mov ecx, esi
// 005a4ebd  c644242000           mov byte ptr [esp + 0x20], 0
// 005a4ec2  e829eafcff           call 0x5738f0
// 005a4ec7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005a4ecb  51                   push ecx
// 005a4ecc  e81f920700           call 0x61e0f0
// 005a4ed1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a4ed5  83c404               add esp, 4
// 005a4ed8  c70688577b00         mov dword ptr [esi], 0x7b5788
// 005a4ede  8bc6                 mov eax, esi
// 005a4ee0  64890d00000000       mov dword ptr fs:[0], ecx
// 005a4ee7  5e                   pop esi
// 005a4ee8  83c40c               add esp, 0xc
// 005a4eeb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
