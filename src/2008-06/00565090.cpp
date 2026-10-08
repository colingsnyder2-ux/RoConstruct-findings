// roc 2008-06 00565090  unit: RBX::Debugable::W4AssertAction::?$EnumDesc  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00565090
//
// 00565090  64a100000000         mov eax, dword ptr fs:[0]
// 00565096  6aff                 push -1
// 00565098  6890b27d00           push 0x7db290
// 0056509d  50                   push eax
// 0056509e  64892500000000       mov dword ptr fs:[0], esp
// 005650a5  8b442424             mov eax, dword ptr [esp + 0x24]
// 005650a9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005650ad  56                   push esi
// 005650ae  50                   push eax
// 005650af  8b442420             mov eax, dword ptr [esp + 0x20]
// 005650b3  8bf1                 mov esi, ecx
// 005650b5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005650b9  51                   push ecx
// 005650ba  52                   push edx
// 005650bb  50                   push eax
// 005650bc  8d4c2438             lea ecx, [esp + 0x38]
// 005650c0  51                   push ecx
// 005650c1  e8caecffff           call 0x563d90
// 005650c6  8b08                 mov ecx, dword ptr [eax]
// 005650c8  83c40c               add esp, 0xc
// 005650cb  c70000000000         mov dword ptr [eax], 0
// 005650d1  8bc4                 mov eax, esp
// 005650d3  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005650db  8964242c             mov dword ptr [esp + 0x2c], esp
// 005650df  8908                 mov dword ptr [eax], ecx
// 005650e1  8b542420             mov edx, dword ptr [esp + 0x20]
// 005650e5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005650e9  52                   push edx
// 005650ea  50                   push eax
// 005650eb  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005650f0  e8ebfdffff           call 0x564ee0
// 005650f5  50                   push eax
// 005650f6  8bce                 mov ecx, esi
// 005650f8  c644242000           mov byte ptr [esp + 0x20], 0
// 005650fd  e82ee1edff           call 0x443230
// 00565102  8b442428             mov eax, dword ptr [esp + 0x28]
// 00565106  85c0                 test eax, eax
// 00565108  7409                 je 0x565113
// 0056510a  50                   push eax
// 0056510b  e86ab51300           call 0x6a067a
// 00565110  83c404               add esp, 4
// 00565113  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00565117  c7061ce48200         mov dword ptr [esi], 0x82e41c
// 0056511d  8bc6                 mov eax, esi
// 0056511f  64890d00000000       mov dword ptr fs:[0], ecx
// 00565126  5e                   pop esi
// 00565127  83c40c               add esp, 0xc
// 0056512a  c21800               ret 0x18
// library rbxgs/v8tree\Instance.cpp (function ??$?0P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZH@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@QAE@PBD0P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZHW4Functionality@PropertyDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
