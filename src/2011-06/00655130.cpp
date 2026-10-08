// roc 2011-06 00655130  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655130
//
// 00655130  51                   push ecx
// 00655131  6a10                 push 0x10
// 00655133  c744240400000000     mov dword ptr [esp + 4], 0
// 0065513b  e81e4f1b00           call 0x80a05e
// 00655140  83c404               add esp, 4
// 00655143  85c0                 test eax, eax
// 00655145  741e                 je 0x655165
// 00655147  c70020a8a900         mov dword ptr [eax], 0xa9a820
// 0065514d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00655151  894808               mov dword ptr [eax + 8], ecx
// 00655154  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00655158  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065515c  89500c               mov dword ptr [eax + 0xc], edx
// 0065515f  8901                 mov dword ptr [ecx], eax
// 00655161  8bc1                 mov eax, ecx
// 00655163  59                   pop ecx
// 00655164  c3                   ret 
// 00655165  8b442408             mov eax, dword ptr [esp + 8]
// 00655169  33c9                 xor ecx, ecx
// 0065516b  8908                 mov dword ptr [eax], ecx
// 0065516d  59                   pop ecx
// 0065516e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
