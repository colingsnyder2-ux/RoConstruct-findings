// roc 2011-06 007313d0  unit: RBX::P8Mouse::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007313d0
//
// 007313d0  51                   push ecx
// 007313d1  6a10                 push 0x10
// 007313d3  c744240400000000     mov dword ptr [esp + 4], 0
// 007313db  e87e8c0d00           call 0x80a05e
// 007313e0  83c404               add esp, 4
// 007313e3  85c0                 test eax, eax
// 007313e5  741e                 je 0x731405
// 007313e7  c700b837ab00         mov dword ptr [eax], 0xab37b8
// 007313ed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007313f1  894808               mov dword ptr [eax + 8], ecx
// 007313f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007313f8  8b542410             mov edx, dword ptr [esp + 0x10]
// 007313fc  89500c               mov dword ptr [eax + 0xc], edx
// 007313ff  8901                 mov dword ptr [ecx], eax
// 00731401  8bc1                 mov eax, ecx
// 00731403  59                   pop ecx
// 00731404  c3                   ret 
// 00731405  8b442408             mov eax, dword ptr [esp + 8]
// 00731409  33c9                 xor ecx, ecx
// 0073140b  8908                 mov dword ptr [eax], ecx
// 0073140d  59                   pop ecx
// 0073140e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
