// roc 2011-06 00721f60  unit: RBX::P8BillboardGui::?$GetSetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00721f60
//
// 00721f60  51                   push ecx
// 00721f61  6a10                 push 0x10
// 00721f63  c744240400000000     mov dword ptr [esp + 4], 0
// 00721f6b  e8ee800e00           call 0x80a05e
// 00721f70  83c404               add esp, 4
// 00721f73  85c0                 test eax, eax
// 00721f75  741e                 je 0x721f95
// 00721f77  c7007c29ab00         mov dword ptr [eax], 0xab297c
// 00721f7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00721f81  894808               mov dword ptr [eax + 8], ecx
// 00721f84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00721f88  8b542410             mov edx, dword ptr [esp + 0x10]
// 00721f8c  89500c               mov dword ptr [eax + 0xc], edx
// 00721f8f  8901                 mov dword ptr [ecx], eax
// 00721f91  8bc1                 mov eax, ecx
// 00721f93  59                   pop ecx
// 00721f94  c3                   ret 
// 00721f95  8b442408             mov eax, dword ptr [esp + 8]
// 00721f99  33c9                 xor ecx, ecx
// 00721f9b  8908                 mov dword ptr [eax], ecx
// 00721f9d  59                   pop ecx
// 00721f9e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
