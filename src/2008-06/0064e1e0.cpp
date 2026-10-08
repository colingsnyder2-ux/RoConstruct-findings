// roc 2008-06 0064e1e0  unit: RBX::P8Camera::?$GetSetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064e1e0
//
// 0064e1e0  51                   push ecx
// 0064e1e1  6a10                 push 0x10
// 0064e1e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0064e1eb  e830270500           call 0x6a0920
// 0064e1f0  83c404               add esp, 4
// 0064e1f3  85c0                 test eax, eax
// 0064e1f5  741e                 je 0x64e215
// 0064e1f7  c7006cb28400         mov dword ptr [eax], 0x84b26c
// 0064e1fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0064e201  894808               mov dword ptr [eax + 8], ecx
// 0064e204  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064e208  8b542410             mov edx, dword ptr [esp + 0x10]
// 0064e20c  89500c               mov dword ptr [eax + 0xc], edx
// 0064e20f  8901                 mov dword ptr [ecx], eax
// 0064e211  8bc1                 mov eax, ecx
// 0064e213  59                   pop ecx
// 0064e214  c3                   ret 
// 0064e215  8b442408             mov eax, dword ptr [esp + 8]
// 0064e219  33c9                 xor ecx, ecx
// 0064e21b  8908                 mov dword ptr [eax], ecx
// 0064e21d  59                   pop ecx
// 0064e21e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
