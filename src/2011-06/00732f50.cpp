// roc 2011-06 00732f50  unit: RBX::TextService  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00732f50
//
// 00732f50  51                   push ecx
// 00732f51  6a10                 push 0x10
// 00732f53  c744240400000000     mov dword ptr [esp + 4], 0
// 00732f5b  e8fe700d00           call 0x80a05e
// 00732f60  83c404               add esp, 4
// 00732f63  85c0                 test eax, eax
// 00732f65  741e                 je 0x732f85
// 00732f67  c700783cab00         mov dword ptr [eax], 0xab3c78
// 00732f6d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00732f71  894808               mov dword ptr [eax + 8], ecx
// 00732f74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00732f78  8b542410             mov edx, dword ptr [esp + 0x10]
// 00732f7c  89500c               mov dword ptr [eax + 0xc], edx
// 00732f7f  8901                 mov dword ptr [ecx], eax
// 00732f81  8bc1                 mov eax, ecx
// 00732f83  59                   pop ecx
// 00732f84  c3                   ret 
// 00732f85  8b442408             mov eax, dword ptr [esp + 8]
// 00732f89  33c9                 xor ecx, ecx
// 00732f8b  8908                 mov dword ptr [eax], ecx
// 00732f8d  59                   pop ecx
// 00732f8e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
