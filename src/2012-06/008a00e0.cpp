// roc 2012-06 008a00e0  unit: RBX::P8Mouse::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a00e0
//
// 008a00e0  51                   push ecx
// 008a00e1  6a10                 push 0x10
// 008a00e3  c744240400000000     mov dword ptr [esp + 4], 0
// 008a00eb  e82a200e00           call 0x98211a
// 008a00f0  83c404               add esp, 4
// 008a00f3  85c0                 test eax, eax
// 008a00f5  7416                 je 0x8a010d
// 008a00f7  c70068debd00         mov dword ptr [eax], 0xbdde68
// 008a00fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a0101  894808               mov dword ptr [eax + 8], ecx
// 008a0104  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a0108  89500c               mov dword ptr [eax + 0xc], edx
// 008a010b  eb02                 jmp 0x8a010f
// 008a010d  33c0                 xor eax, eax
// 008a010f  56                   push esi
// 008a0110  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a0114  6a00                 push 0
// 008a0116  8906                 mov dword ptr [esi], eax
// 008a0118  e8f71f0e00           call 0x982114
// 008a011d  83c404               add esp, 4
// 008a0120  8bc6                 mov eax, esi
// 008a0122  5e                   pop esi
// 008a0123  59                   pop ecx
// 008a0124  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
