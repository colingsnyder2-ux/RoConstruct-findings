// roc 2011-06 004e9cb0  unit: RBX::Network::Server  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004e9cb0
//
// 004e9cb0  51                   push ecx
// 004e9cb1  6a10                 push 0x10
// 004e9cb3  c744240400000000     mov dword ptr [esp + 4], 0
// 004e9cbb  e89e033200           call 0x80a05e
// 004e9cc0  83c404               add esp, 4
// 004e9cc3  85c0                 test eax, eax
// 004e9cc5  741e                 je 0x4e9ce5
// 004e9cc7  c700e8a9a700         mov dword ptr [eax], 0xa7a9e8
// 004e9ccd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e9cd1  894808               mov dword ptr [eax + 8], ecx
// 004e9cd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e9cd8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e9cdc  89500c               mov dword ptr [eax + 0xc], edx
// 004e9cdf  8901                 mov dword ptr [ecx], eax
// 004e9ce1  8bc1                 mov eax, ecx
// 004e9ce3  59                   pop ecx
// 004e9ce4  c3                   ret 
// 004e9ce5  8b442408             mov eax, dword ptr [esp + 8]
// 004e9ce9  33c9                 xor ecx, ecx
// 004e9ceb  8908                 mov dword ptr [eax], ecx
// 004e9ced  59                   pop ecx
// 004e9cee  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
