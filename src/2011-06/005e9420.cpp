// roc 2011-06 005e9420  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e9420
//
// 005e9420  51                   push ecx
// 005e9421  6a10                 push 0x10
// 005e9423  c744240400000000     mov dword ptr [esp + 4], 0
// 005e942b  e82e0c2200           call 0x80a05e
// 005e9430  83c404               add esp, 4
// 005e9433  85c0                 test eax, eax
// 005e9435  741e                 je 0x5e9455
// 005e9437  c700b010a900         mov dword ptr [eax], 0xa910b0
// 005e943d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9441  894808               mov dword ptr [eax + 8], ecx
// 005e9444  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e9448  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e944c  89500c               mov dword ptr [eax + 0xc], edx
// 005e944f  8901                 mov dword ptr [ecx], eax
// 005e9451  8bc1                 mov eax, ecx
// 005e9453  59                   pop ecx
// 005e9454  c3                   ret 
// 005e9455  8b442408             mov eax, dword ptr [esp + 8]
// 005e9459  33c9                 xor ecx, ecx
// 005e945b  8908                 mov dword ptr [eax], ecx
// 005e945d  59                   pop ecx
// 005e945e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
