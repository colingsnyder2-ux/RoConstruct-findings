// roc 2012-06 008a0090  unit: RBX::P8Mouse::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008a0090
//
// 008a0090  51                   push ecx
// 008a0091  6a10                 push 0x10
// 008a0093  c744240400000000     mov dword ptr [esp + 4], 0
// 008a009b  e87a200e00           call 0x98211a
// 008a00a0  83c404               add esp, 4
// 008a00a3  85c0                 test eax, eax
// 008a00a5  7416                 je 0x8a00bd
// 008a00a7  c70054debd00         mov dword ptr [eax], 0xbdde54
// 008a00ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008a00b1  894808               mov dword ptr [eax + 8], ecx
// 008a00b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008a00b8  89500c               mov dword ptr [eax + 0xc], edx
// 008a00bb  eb02                 jmp 0x8a00bf
// 008a00bd  33c0                 xor eax, eax
// 008a00bf  56                   push esi
// 008a00c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008a00c4  6a00                 push 0
// 008a00c6  8906                 mov dword ptr [esi], eax
// 008a00c8  e847200e00           call 0x982114
// 008a00cd  83c404               add esp, 4
// 008a00d0  8bc6                 mov eax, esi
// 008a00d2  5e                   pop esi
// 008a00d3  59                   pop ecx
// 008a00d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
