// roc 2011-06 006ca2d0  unit: RBX::TextBox  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006ca2d0
//
// 006ca2d0  51                   push ecx
// 006ca2d1  6a10                 push 0x10
// 006ca2d3  c744240400000000     mov dword ptr [esp + 4], 0
// 006ca2db  e87efd1300           call 0x80a05e
// 006ca2e0  83c404               add esp, 4
// 006ca2e3  85c0                 test eax, eax
// 006ca2e5  741e                 je 0x6ca305
// 006ca2e7  c7009451aa00         mov dword ptr [eax], 0xaa5194
// 006ca2ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ca2f1  894808               mov dword ptr [eax + 8], ecx
// 006ca2f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ca2f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 006ca2fc  89500c               mov dword ptr [eax + 0xc], edx
// 006ca2ff  8901                 mov dword ptr [ecx], eax
// 006ca301  8bc1                 mov eax, ecx
// 006ca303  59                   pop ecx
// 006ca304  c3                   ret 
// 006ca305  8b442408             mov eax, dword ptr [esp + 8]
// 006ca309  33c9                 xor ecx, ecx
// 006ca30b  8908                 mov dword ptr [eax], ecx
// 006ca30d  59                   pop ecx
// 006ca30e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
