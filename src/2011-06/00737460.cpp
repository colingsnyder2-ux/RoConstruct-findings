// roc 2011-06 00737460  unit: RBX::Network::P8Player::?$GetImpl  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00737460
//
// 00737460  51                   push ecx
// 00737461  6a10                 push 0x10
// 00737463  c744240400000000     mov dword ptr [esp + 4], 0
// 0073746b  e8ee2b0d00           call 0x80a05e
// 00737470  83c404               add esp, 4
// 00737473  85c0                 test eax, eax
// 00737475  741e                 je 0x737495
// 00737477  c7005c40ab00         mov dword ptr [eax], 0xab405c
// 0073747d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00737481  894808               mov dword ptr [eax + 8], ecx
// 00737484  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00737488  8b542410             mov edx, dword ptr [esp + 0x10]
// 0073748c  89500c               mov dword ptr [eax + 0xc], edx
// 0073748f  8901                 mov dword ptr [ecx], eax
// 00737491  8bc1                 mov eax, ecx
// 00737493  59                   pop ecx
// 00737494  c3                   ret 
// 00737495  8b442408             mov eax, dword ptr [esp + 8]
// 00737499  33c9                 xor ecx, ecx
// 0073749b  8908                 mov dword ptr [eax], ecx
// 0073749d  59                   pop ecx
// 0073749e  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
