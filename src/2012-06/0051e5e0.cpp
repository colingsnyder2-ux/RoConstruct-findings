// roc 2012-06 0051e5e0  unit: RBX::Network::P8Player::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0051e5e0
//
// 0051e5e0  51                   push ecx
// 0051e5e1  6a10                 push 0x10
// 0051e5e3  c744240400000000     mov dword ptr [esp + 4], 0
// 0051e5eb  e82a3b4600           call 0x98211a
// 0051e5f0  83c404               add esp, 4
// 0051e5f3  85c0                 test eax, eax
// 0051e5f5  7416                 je 0x51e60d
// 0051e5f7  c70078f8b600         mov dword ptr [eax], 0xb6f878
// 0051e5fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0051e601  894808               mov dword ptr [eax + 8], ecx
// 0051e604  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051e608  89500c               mov dword ptr [eax + 0xc], edx
// 0051e60b  eb02                 jmp 0x51e60f
// 0051e60d  33c0                 xor eax, eax
// 0051e60f  56                   push esi
// 0051e610  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051e614  6a00                 push 0
// 0051e616  8906                 mov dword ptr [esi], eax
// 0051e618  e8f73a4600           call 0x982114
// 0051e61d  83c404               add esp, 4
// 0051e620  8bc6                 mov eax, esi
// 0051e622  5e                   pop esi
// 0051e623  59                   pop ecx
// 0051e624  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
