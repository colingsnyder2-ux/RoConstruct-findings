// roc 2008-06 00563d10  unit: boost::any::N::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563d10
//
// 00563d10  51                   push ecx
// 00563d11  6a10                 push 0x10
// 00563d13  c744240400000000     mov dword ptr [esp + 4], 0
// 00563d1b  e800cc1300           call 0x6a0920
// 00563d20  83c404               add esp, 4
// 00563d23  85c0                 test eax, eax
// 00563d25  741e                 je 0x563d45
// 00563d27  c70098e08200         mov dword ptr [eax], 0x82e098
// 00563d2d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563d31  894808               mov dword ptr [eax + 8], ecx
// 00563d34  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563d38  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563d3c  89500c               mov dword ptr [eax + 0xc], edx
// 00563d3f  8901                 mov dword ptr [ecx], eax
// 00563d41  8bc1                 mov eax, ecx
// 00563d43  59                   pop ecx
// 00563d44  c3                   ret 
// 00563d45  8b442408             mov eax, dword ptr [esp + 8]
// 00563d49  33c9                 xor ecx, ecx
// 00563d4b  8908                 mov dword ptr [eax], ecx
// 00563d4d  59                   pop ecx
// 00563d4e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
