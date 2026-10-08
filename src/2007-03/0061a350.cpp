// roc 2007-03 0061a350  unit: seg_00610000  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0061a350
//
// 0061a350  6aff                 push -1
// 0061a352  6898da7500           push 0x75da98
// 0061a357  64a100000000         mov eax, dword ptr fs:[0]
// 0061a35d  50                   push eax
// 0061a35e  64892500000000       mov dword ptr fs:[0], esp
// 0061a365  51                   push ecx
// 0061a366  56                   push esi
// 0061a367  57                   push edi
// 0061a368  83ec0c               sub esp, 0xc
// 0061a36b  8d44243c             lea eax, [esp + 0x3c]
// 0061a36f  89642414             mov dword ptr [esp + 0x14], esp
// 0061a373  8bcc                 mov ecx, esp
// 0061a375  50                   push eax
// 0061a376  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0061a37e  e82df8ffff           call 0x619bb0
// 0061a383  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0061a387  8b542430             mov edx, dword ptr [esp + 0x30]
// 0061a38b  51                   push ecx
// 0061a38c  52                   push edx
// 0061a38d  e8eefdffff           call 0x61a180
// 0061a392  8b742430             mov esi, dword ptr [esp + 0x30]
// 0061a396  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061a39a  83c414               add esp, 0x14
// 0061a39d  894604               mov dword ptr [esi + 4], eax
// 0061a3a0  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061a3a4  8b10                 mov edx, dword ptr [eax]
// 0061a3a6  50                   push eax
// 0061a3a7  890e                 mov dword ptr [esi], ecx
// 0061a3a9  8d4c2434             lea ecx, [esp + 0x34]
// 0061a3ad  51                   push ecx
// 0061a3ae  52                   push edx
// 0061a3af  8bf9                 mov edi, ecx
// 0061a3b1  57                   push edi
// 0061a3b2  8d542430             lea edx, [esp + 0x30]
// 0061a3b6  52                   push edx
// 0061a3b7  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 0061a3bf  e8fcf1ffff           call 0x6195c0
// 0061a3c4  8b442434             mov eax, dword ptr [esp + 0x34]
// 0061a3c8  50                   push eax
// 0061a3c9  e8223d0000           call 0x61e0f0
// 0061a3ce  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061a3d2  83c404               add esp, 4
// 0061a3d5  5f                   pop edi
// 0061a3d6  8bc6                 mov eax, esi
// 0061a3d8  64890d00000000       mov dword ptr fs:[0], ecx
// 0061a3df  5e                   pop esi
// 0061a3e0  83c410               add esp, 0x10
// 0061a3e3  c3                   ret 
// library rbxgs-net/Player.cpp (function ??$find_if@V?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$is_any_ofF@D@detail@algorithm@boost@@@std@@YA?AV?$_String_iterator@DU?$char_traits@D@std@@V?$allocator@D@2@@0@V10@0U?$is_any_ofF@D@detail@algorithm@boost@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
