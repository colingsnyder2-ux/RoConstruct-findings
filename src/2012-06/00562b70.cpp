// roc 2012-06 00562b70  unit: RBX::Network::Server  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00562b70
//
// 00562b70  51                   push ecx
// 00562b71  6a10                 push 0x10
// 00562b73  c744240400000000     mov dword ptr [esp + 4], 0
// 00562b7b  e89af54100           call 0x98211a
// 00562b80  83c404               add esp, 4
// 00562b83  85c0                 test eax, eax
// 00562b85  7416                 je 0x562b9d
// 00562b87  c700f041b700         mov dword ptr [eax], 0xb741f0
// 00562b8d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00562b91  894808               mov dword ptr [eax + 8], ecx
// 00562b94  8b542410             mov edx, dword ptr [esp + 0x10]
// 00562b98  89500c               mov dword ptr [eax + 0xc], edx
// 00562b9b  eb02                 jmp 0x562b9f
// 00562b9d  33c0                 xor eax, eax
// 00562b9f  56                   push esi
// 00562ba0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00562ba4  6a00                 push 0
// 00562ba6  8906                 mov dword ptr [esi], eax
// 00562ba8  e867f54100           call 0x982114
// 00562bad  83c404               add esp, 4
// 00562bb0  8bc6                 mov eax, esi
// 00562bb2  5e                   pop esi
// 00562bb3  59                   pop ecx
// 00562bb4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
