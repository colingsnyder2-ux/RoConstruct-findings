// roc 2011-06 00655170  unit: std::D::DU?$char_traits::V?$basic_string::V?$basic_path::?$basic_filesystem_error  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00655170
//
// 00655170  51                   push ecx
// 00655171  6a10                 push 0x10
// 00655173  c744240400000000     mov dword ptr [esp + 4], 0
// 0065517b  e8de4e1b00           call 0x80a05e
// 00655180  83c404               add esp, 4
// 00655183  85c0                 test eax, eax
// 00655185  741e                 je 0x6551a5
// 00655187  c70034a8a900         mov dword ptr [eax], 0xa9a834
// 0065518d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00655191  894808               mov dword ptr [eax + 8], ecx
// 00655194  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00655198  8b542410             mov edx, dword ptr [esp + 0x10]
// 0065519c  89500c               mov dword ptr [eax + 0xc], edx
// 0065519f  8901                 mov dword ptr [ecx], eax
// 006551a1  8bc1                 mov eax, ecx
// 006551a3  59                   pop ecx
// 006551a4  c3                   ret 
// 006551a5  8b442408             mov eax, dword ptr [esp + 8]
// 006551a9  33c9                 xor ecx, ecx
// 006551ab  8908                 mov dword ptr [eax], ecx
// 006551ad  59                   pop ecx
// 006551ae  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
