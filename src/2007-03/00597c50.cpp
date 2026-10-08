// roc 2007-03 00597c50  unit: seg_00590000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00597c50
//
// 00597c50  64a100000000         mov eax, dword ptr fs:[0]
// 00597c56  6aff                 push -1
// 00597c58  68a08b7500           push 0x758ba0
// 00597c5d  50                   push eax
// 00597c5e  64892500000000       mov dword ptr fs:[0], esp
// 00597c65  8b442428             mov eax, dword ptr [esp + 0x28]
// 00597c69  8b542420             mov edx, dword ptr [esp + 0x20]
// 00597c6d  56                   push esi
// 00597c6e  50                   push eax
// 00597c6f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00597c73  8bf1                 mov esi, ecx
// 00597c75  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00597c79  51                   push ecx
// 00597c7a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00597c7e  52                   push edx
// 00597c7f  50                   push eax
// 00597c80  51                   push ecx
// 00597c81  8d542440             lea edx, [esp + 0x40]
// 00597c85  52                   push edx
// 00597c86  e8a5b5ffff           call 0x593230
// 00597c8b  8b10                 mov edx, dword ptr [eax]
// 00597c8d  83c410               add esp, 0x10
// 00597c90  8bcc                 mov ecx, esp
// 00597c92  c70000000000         mov dword ptr [eax], 0
// 00597c98  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00597ca0  8964242c             mov dword ptr [esp + 0x2c], esp
// 00597ca4  8911                 mov dword ptr [ecx], edx
// 00597ca6  8b542420             mov edx, dword ptr [esp + 0x20]
// 00597caa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00597cae  52                   push edx
// 00597caf  50                   push eax
// 00597cb0  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00597cb5  e846fdffff           call 0x597a00
// 00597cba  50                   push eax
// 00597cbb  8bce                 mov ecx, esi
// 00597cbd  c644242000           mov byte ptr [esp + 0x20], 0
// 00597cc2  e8b9bbfdff           call 0x573880
// 00597cc7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00597ccb  51                   push ecx
// 00597ccc  e81f640800           call 0x61e0f0
// 00597cd1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00597cd5  83c404               add esp, 4
// 00597cd8  c706e81b7b00         mov dword ptr [esi], 0x7b1be8
// 00597cde  8bc6                 mov eax, esi
// 00597ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 00597ce7  5e                   pop esi
// 00597ce8  83c40c               add esp, 0xc
// 00597ceb  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
