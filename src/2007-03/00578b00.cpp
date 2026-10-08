// roc 2007-03 00578b00  unit: seg_00570000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00578b00
//
// 00578b00  64a100000000         mov eax, dword ptr fs:[0]
// 00578b06  6aff                 push -1
// 00578b08  68a08b7500           push 0x758ba0
// 00578b0d  50                   push eax
// 00578b0e  64892500000000       mov dword ptr fs:[0], esp
// 00578b15  8b442428             mov eax, dword ptr [esp + 0x28]
// 00578b19  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578b1d  56                   push esi
// 00578b1e  50                   push eax
// 00578b1f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00578b23  8bf1                 mov esi, ecx
// 00578b25  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578b29  51                   push ecx
// 00578b2a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00578b2e  52                   push edx
// 00578b2f  50                   push eax
// 00578b30  51                   push ecx
// 00578b31  8d542440             lea edx, [esp + 0x40]
// 00578b35  52                   push edx
// 00578b36  e815f7ffff           call 0x578250
// 00578b3b  8b10                 mov edx, dword ptr [eax]
// 00578b3d  83c410               add esp, 0x10
// 00578b40  8bcc                 mov ecx, esp
// 00578b42  c70000000000         mov dword ptr [eax], 0
// 00578b48  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00578b50  8964242c             mov dword ptr [esp + 0x2c], esp
// 00578b54  8911                 mov dword ptr [ecx], edx
// 00578b56  8b542420             mov edx, dword ptr [esp + 0x20]
// 00578b5a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00578b5e  52                   push edx
// 00578b5f  50                   push eax
// 00578b60  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00578b65  e886fdffff           call 0x5788f0
// 00578b6a  50                   push eax
// 00578b6b  8bce                 mov ecx, esi
// 00578b6d  c644242000           mov byte ptr [esp + 0x20], 0
// 00578b72  e879f5ffff           call 0x5780f0
// 00578b77  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00578b7b  51                   push ecx
// 00578b7c  e86f550a00           call 0x61e0f0
// 00578b81  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00578b85  83c404               add esp, 4
// 00578b88  c70648c97a00         mov dword ptr [esi], 0x7ac948
// 00578b8e  8bc6                 mov eax, esi
// 00578b90  64890d00000000       mov dword ptr fs:[0], ecx
// 00578b97  5e                   pop esi
// 00578b98  83c40c               add esp, 0xc
// 00578b9b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
