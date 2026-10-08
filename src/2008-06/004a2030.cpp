// roc 2008-06 004a2030  unit: RBX::Network::P8Players::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2030
//
// 004a2030  51                   push ecx
// 004a2031  6a10                 push 0x10
// 004a2033  c744240400000000     mov dword ptr [esp + 4], 0
// 004a203b  e8e0e81f00           call 0x6a0920
// 004a2040  83c404               add esp, 4
// 004a2043  85c0                 test eax, eax
// 004a2045  741e                 je 0x4a2065
// 004a2047  c700d0348200         mov dword ptr [eax], 0x8234d0
// 004a204d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004a2051  894808               mov dword ptr [eax + 8], ecx
// 004a2054  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a2058  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a205c  89500c               mov dword ptr [eax + 0xc], edx
// 004a205f  8901                 mov dword ptr [ecx], eax
// 004a2061  8bc1                 mov eax, ecx
// 004a2063  59                   pop ecx
// 004a2064  c3                   ret 
// 004a2065  8b442408             mov eax, dword ptr [esp + 8]
// 004a2069  33c9                 xor ecx, ecx
// 004a206b  8908                 mov dword ptr [eax], ecx
// 004a206d  59                   pop ecx
// 004a206e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
