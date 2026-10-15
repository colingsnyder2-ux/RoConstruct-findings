// roc 2008-06 00577310  unit: RBX::DataModel  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00577310
//
// 00577310  6aff                 push -1
// 00577312  6811e87c00           push 0x7ce811
// 00577317  64a100000000         mov eax, dword ptr fs:[0]
// 0057731d  50                   push eax
// 0057731e  64892500000000       mov dword ptr fs:[0], esp
// 00577325  51                   push ecx
// 00577326  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057732a  89442414             mov dword ptr [esp + 0x14], eax
// 0057732e  890424               mov dword ptr [esp], eax
// 00577331  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00577339  85c0                 test eax, eax
// 0057733b  7415                 je 0x577352
// 0057733d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00577341  8b11                 mov edx, dword ptr [ecx]
// 00577343  83c104               add ecx, 4
// 00577346  51                   push ecx
// 00577347  8d4804               lea ecx, [eax + 4]
// 0057734a  8910                 mov dword ptr [eax], edx
// 0057734c  ff155c248000         call dword ptr [0x80245c]
// 00577352  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00577356  64890d00000000       mov dword ptr fs:[0], ecx
// 0057735d  83c410               add esp, 0x10
// 00577360  c3                   ret 
// library rbxgs/roc_http_priority_default_0_e42c37ffc0bf2a22.cpp (function ??$_Construct@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_http_priority_default_0_e42c37ffc0bf2a22.cpp
