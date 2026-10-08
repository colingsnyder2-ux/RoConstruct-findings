// roc 2008-06 00563d50  unit: boost::any::N::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563d50
//
// 00563d50  51                   push ecx
// 00563d51  6a10                 push 0x10
// 00563d53  c744240400000000     mov dword ptr [esp + 4], 0
// 00563d5b  e8c0cb1300           call 0x6a0920
// 00563d60  83c404               add esp, 4
// 00563d63  85c0                 test eax, eax
// 00563d65  741e                 je 0x563d85
// 00563d67  c700ace08200         mov dword ptr [eax], 0x82e0ac
// 00563d6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563d71  894808               mov dword ptr [eax + 8], ecx
// 00563d74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563d78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563d7c  89500c               mov dword ptr [eax + 0xc], edx
// 00563d7f  8901                 mov dword ptr [ecx], eax
// 00563d81  8bc1                 mov eax, ecx
// 00563d83  59                   pop ecx
// 00563d84  c3                   ret 
// 00563d85  8b442408             mov eax, dword ptr [esp + 8]
// 00563d89  33c9                 xor ecx, ecx
// 00563d8b  8908                 mov dword ptr [eax], ecx
// 00563d8d  59                   pop ecx
// 00563d8e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
