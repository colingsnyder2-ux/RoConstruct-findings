// roc 2011-06 00731300  unit: RBX::P8Mouse::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731300
//
// 00731300  51                   push ecx
// 00731301  6a10                 push 0x10
// 00731303  c744240400000000     mov dword ptr [esp + 4], 0
// 0073130b  e84e8d0d00           call 0x80a05e
// 00731310  83c404               add esp, 4
// 00731313  85c0                 test eax, eax
// 00731315  741e                 je 0x731335
// 00731317  c7007c37ab00         mov dword ptr [eax], 0xab377c
// 0073131d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00731321  894808               mov dword ptr [eax + 8], ecx
// 00731324  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00731328  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073132c  89500c               mov dword ptr [eax + 0xc], edx
// 0073132f  8901                 mov dword ptr [ecx], eax
// 00731331  8bc1                 mov eax, ecx
// 00731333  59                   pop ecx
// 00731334  c3                   ret 
// 00731335  8b442408             mov eax, dword ptr [esp + 8]
// 00731339  33c9                 xor ecx, ecx
// 0073133b  8908                 mov dword ptr [eax], ecx
// 0073133d  59                   pop ecx
// 0073133e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
