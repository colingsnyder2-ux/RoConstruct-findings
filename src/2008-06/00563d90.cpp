// roc 2008-06 00563d90  unit: boost::any::N::?$holder  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563d90
//
// 00563d90  51                   push ecx
// 00563d91  6a10                 push 0x10
// 00563d93  c744240400000000     mov dword ptr [esp + 4], 0
// 00563d9b  e880cb1300           call 0x6a0920
// 00563da0  83c404               add esp, 4
// 00563da3  85c0                 test eax, eax
// 00563da5  741e                 je 0x563dc5
// 00563da7  c700c0e08200         mov dword ptr [eax], 0x82e0c0
// 00563dad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00563db1  894808               mov dword ptr [eax + 8], ecx
// 00563db4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00563db8  8b542410             mov edx, dword ptr [esp + 0x10]
// 00563dbc  89500c               mov dword ptr [eax + 0xc], edx
// 00563dbf  8901                 mov dword ptr [ecx], eax
// 00563dc1  8bc1                 mov eax, ecx
// 00563dc3  59                   pop ecx
// 00563dc4  c3                   ret 
// 00563dc5  8b442408             mov eax, dword ptr [esp + 8]
// 00563dc9  33c9                 xor ecx, ecx
// 00563dcb  8908                 mov dword ptr [eax], ecx
// 00563dcd  59                   pop ecx
// 00563dce  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
