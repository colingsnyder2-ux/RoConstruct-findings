// roc 2011-06 005e9520  unit: boost::io::Vbad_format_string::?$error_info_injector  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005e9520
//
// 005e9520  51                   push ecx
// 005e9521  6a10                 push 0x10
// 005e9523  c744240400000000     mov dword ptr [esp + 4], 0
// 005e952b  e82e0b2200           call 0x80a05e
// 005e9530  83c404               add esp, 4
// 005e9533  85c0                 test eax, eax
// 005e9535  741e                 je 0x5e9555
// 005e9537  c7000011a900         mov dword ptr [eax], 0xa91100
// 005e953d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9541  894808               mov dword ptr [eax + 8], ecx
// 005e9544  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e9548  8b542410             mov edx, dword ptr [esp + 0x10]
// 005e954c  89500c               mov dword ptr [eax + 0xc], edx
// 005e954f  8901                 mov dword ptr [ecx], eax
// 005e9551  8bc1                 mov eax, ecx
// 005e9553  59                   pop ecx
// 005e9554  c3                   ret 
// 005e9555  8b442408             mov eax, dword ptr [esp + 8]
// 005e9559  33c9                 xor ecx, ecx
// 005e955b  8908                 mov dword ptr [eax], ecx
// 005e955d  59                   pop ecx
// 005e955e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
