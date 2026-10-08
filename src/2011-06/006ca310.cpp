// roc 2011-06 006ca310  unit: RBX::TextBox  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ca310
//
// 006ca310  51                   push ecx
// 006ca311  6a10                 push 0x10
// 006ca313  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca31b  e83efd1300           call 0x80a05e
// 006ca320  83c404               add esp, 4
// 006ca323  85c0                 test eax, eax
// 006ca325  741e                 je 0x6ca345
// 006ca327  c700a851aa00         mov dword ptr [eax], 0xaa51a8
// 006ca32d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ca331  894808               mov dword ptr [eax + 8], ecx
// 006ca334  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ca338  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca33c  89500c               mov dword ptr [eax + 0xc], edx
// 006ca33f  8901                 mov dword ptr [ecx], eax
// 006ca341  8bc1                 mov eax, ecx
// 006ca343  59                   pop ecx
// 006ca344  c3                   ret 
// 006ca345  8b442408             mov eax, dword ptr [esp + 8]
// 006ca349  33c9                 xor ecx, ecx
// 006ca34b  8908                 mov dword ptr [eax], ecx
// 006ca34d  59                   pop ecx
// 006ca34e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
