// roc 2008-06 00557f50  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557f50
//
// 00557f50  51                   push ecx
// 00557f51  6a10                 push 0x10
// 00557f53  c744240400000000     mov dword ptr [esp + 4], 0
// 00557f5b  e8c0891400           call 0x6a0920
// 00557f60  83c404               add esp, 4
// 00557f63  85c0                 test eax, eax
// 00557f65  741e                 je 0x557f85
// 00557f67  c700ccd68200         mov dword ptr [eax], 0x82d6cc
// 00557f6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00557f71  894808               mov dword ptr [eax + 8], ecx
// 00557f74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00557f78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00557f7c  89500c               mov dword ptr [eax + 0xc], edx
// 00557f7f  8901                 mov dword ptr [ecx], eax
// 00557f81  8bc1                 mov eax, ecx
// 00557f83  59                   pop ecx
// 00557f84  c3                   ret 
// 00557f85  8b442408             mov eax, dword ptr [esp + 8]
// 00557f89  33c9                 xor ecx, ecx
// 00557f8b  8908                 mov dword ptr [eax], ecx
// 00557f8d  59                   pop ecx
// 00557f8e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
