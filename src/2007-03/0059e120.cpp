// roc 2007-03 0059e120  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059e120
//
// 0059e120  64a100000000         mov eax, dword ptr fs:[0]
// 0059e126  6aff                 push -1
// 0059e128  68a08b7500           push 0x758ba0
// 0059e12d  50                   push eax
// 0059e12e  64892500000000       mov dword ptr fs:[0], esp
// 0059e135  8b442428             mov eax, dword ptr [esp + 0x28]
// 0059e139  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e13d  56                   push esi
// 0059e13e  50                   push eax
// 0059e13f  8b442424             mov eax, dword ptr [esp + 0x24]
// 0059e143  8bf1                 mov esi, ecx
// 0059e145  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059e149  51                   push ecx
// 0059e14a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059e14e  52                   push edx
// 0059e14f  50                   push eax
// 0059e150  51                   push ecx
// 0059e151  8d542440             lea edx, [esp + 0x40]
// 0059e155  52                   push edx
// 0059e156  e815f5ffff           call 0x59d670
// 0059e15b  8b10                 mov edx, dword ptr [eax]
// 0059e15d  83c410               add esp, 0x10
// 0059e160  8bcc                 mov ecx, esp
// 0059e162  c70000000000         mov dword ptr [eax], 0
// 0059e168  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0059e170  8964242c             mov dword ptr [esp + 0x2c], esp
// 0059e174  8911                 mov dword ptr [ecx], edx
// 0059e176  8b542420             mov edx, dword ptr [esp + 0x20]
// 0059e17a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0059e17e  52                   push edx
// 0059e17f  50                   push eax
// 0059e180  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0059e185  e886feffff           call 0x59e010
// 0059e18a  50                   push eax
// 0059e18b  8bce                 mov ecx, esi
// 0059e18d  c644242000           mov byte ptr [esp + 0x20], 0
// 0059e192  e8c92ffdff           call 0x571160
// 0059e197  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059e19b  51                   push ecx
// 0059e19c  e84fff0700           call 0x61e0f0
// 0059e1a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059e1a5  83c404               add esp, 4
// 0059e1a8  c70618297b00         mov dword ptr [esi], 0x7b2918
// 0059e1ae  8bc6                 mov eax, esi
// 0059e1b0  64890d00000000       mov dword ptr fs:[0], ecx
// 0059e1b7  5e                   pop esi
// 0059e1b8  83c40c               add esp, 0xc
// 0059e1bb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
