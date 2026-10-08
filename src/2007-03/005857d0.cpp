// roc 2007-03 005857d0  unit: seg_00580000  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005857d0
//
// 005857d0  64a100000000         mov eax, dword ptr fs:[0]
// 005857d6  6aff                 push -1
// 005857d8  68a08b7500           push 0x758ba0
// 005857dd  50                   push eax
// 005857de  64892500000000       mov dword ptr fs:[0], esp
// 005857e5  8b442428             mov eax, dword ptr [esp + 0x28]
// 005857e9  8b542420             mov edx, dword ptr [esp + 0x20]
// 005857ed  56                   push esi
// 005857ee  50                   push eax
// 005857ef  8b442424             mov eax, dword ptr [esp + 0x24]
// 005857f3  8bf1                 mov esi, ecx
// 005857f5  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005857f9  51                   push ecx
// 005857fa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005857fe  52                   push edx
// 005857ff  50                   push eax
// 00585800  51                   push ecx
// 00585801  8d542440             lea edx, [esp + 0x40]
// 00585805  52                   push edx
// 00585806  e885eeffff           call 0x584690
// 0058580b  8b10                 mov edx, dword ptr [eax]
// 0058580d  83c410               add esp, 0x10
// 00585810  8bcc                 mov ecx, esp
// 00585812  c70000000000         mov dword ptr [eax], 0
// 00585818  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00585820  8964242c             mov dword ptr [esp + 0x2c], esp
// 00585824  8911                 mov dword ptr [ecx], edx
// 00585826  8b542420             mov edx, dword ptr [esp + 0x20]
// 0058582a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058582e  52                   push edx
// 0058582f  50                   push eax
// 00585830  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00585835  e846feffff           call 0x585680
// 0058583a  50                   push eax
// 0058583b  8bce                 mov ecx, esi
// 0058583d  c644242000           mov byte ptr [esp + 0x20], 0
// 00585842  e829edffff           call 0x584570
// 00585847  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0058584b  51                   push ecx
// 0058584c  e89f880900           call 0x61e0f0
// 00585851  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00585855  83c404               add esp, 4
// 00585858  c70600fd7a00         mov dword ptr [esi], 0x7afd00
// 0058585e  8bc6                 mov eax, esi
// 00585860  64890d00000000       mov dword ptr fs:[0], ecx
// 00585867  5e                   pop esi
// 00585868  83c40c               add esp, 0xc
// 0058586b  c21c00               ret 0x1c
// library rbxgs/script\Script.cpp (function ??$?0P8Script@RBX@@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP801@AEXABV23@@Z@?$PropDescriptor@VScript@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Script@2@BEABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZP832@AEXABV45@@ZW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
