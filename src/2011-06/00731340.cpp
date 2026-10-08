// roc 2011-06 00731340  unit: RBX::P8Mouse::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00731340
//
// 00731340  51                   push ecx
// 00731341  6a10                 push 0x10
// 00731343  c744240400000000     mov dword ptr [esp + 4], 0
// 0073134b  e80e8d0d00           call 0x80a05e
// 00731350  83c404               add esp, 4
// 00731353  85c0                 test eax, eax
// 00731355  741e                 je 0x731375
// 00731357  c7009037ab00         mov dword ptr [eax], 0xab3790
// 0073135d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00731361  894808               mov dword ptr [eax + 8], ecx
// 00731364  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00731368  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073136c  89500c               mov dword ptr [eax + 0xc], edx
// 0073136f  8901                 mov dword ptr [ecx], eax
// 00731371  8bc1                 mov eax, ecx
// 00731373  59                   pop ecx
// 00731374  c3                   ret 
// 00731375  8b442408             mov eax, dword ptr [esp + 8]
// 00731379  33c9                 xor ecx, ecx
// 0073137b  8908                 mov dword ptr [eax], ecx
// 0073137d  59                   pop ecx
// 0073137e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
