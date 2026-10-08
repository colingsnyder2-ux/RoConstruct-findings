// roc 2011-06 00731450  unit: RBX::P8Mouse::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731450
//
// 00731450  51                   push ecx
// 00731451  6a10                 push 0x10
// 00731453  c744240400000000     mov dword ptr [esp + 4], 0
// 0073145b  e8fe8b0d00           call 0x80a05e
// 00731460  83c404               add esp, 4
// 00731463  85c0                 test eax, eax
// 00731465  741e                 je 0x731485
// 00731467  c700e037ab00         mov dword ptr [eax], 0xab37e0
// 0073146d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00731471  894808               mov dword ptr [eax + 8], ecx
// 00731474  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00731478  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073147c  89500c               mov dword ptr [eax + 0xc], edx
// 0073147f  8901                 mov dword ptr [ecx], eax
// 00731481  8bc1                 mov eax, ecx
// 00731483  59                   pop ecx
// 00731484  c3                   ret 
// 00731485  8b442408             mov eax, dword ptr [esp + 8]
// 00731489  33c9                 xor ecx, ecx
// 0073148b  8908                 mov dword ptr [eax], ecx
// 0073148d  59                   pop ecx
// 0073148e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
