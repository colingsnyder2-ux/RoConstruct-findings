// roc 2008-06 00497320  unit: RBX::Network::Players  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00497320
//
// 00497320  51                   push ecx
// 00497321  6a10                 push 0x10
// 00497323  c744240400000000     mov dword ptr [esp + 4], 0
// 0049732b  e8f0952000           call 0x6a0920
// 00497330  83c404               add esp, 4
// 00497333  85c0                 test eax, eax
// 00497335  741e                 je 0x497355
// 00497337  c700b8268200         mov dword ptr [eax], 0x8226b8
// 0049733d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00497341  894808               mov dword ptr [eax + 8], ecx
// 00497344  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00497348  8b542410             mov edx, dword ptr [esp + 0x10]
// 0049734c  89500c               mov dword ptr [eax + 0xc], edx
// 0049734f  8901                 mov dword ptr [ecx], eax
// 00497351  8bc1                 mov eax, ecx
// 00497353  59                   pop ecx
// 00497354  c3                   ret 
// 00497355  8b442408             mov eax, dword ptr [esp + 8]
// 00497359  33c9                 xor ecx, ecx
// 0049735b  8908                 mov dword ptr [eax], ecx
// 0049735d  59                   pop ecx
// 0049735e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
