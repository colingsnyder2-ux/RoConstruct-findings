// roc 2010-06 004c1a40  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c1a40
//
// 004c1a40  51                   push ecx
// 004c1a41  6a10                 push 0x10
// 004c1a43  c744240400000000     mov dword ptr [esp + 4], 0
// 004c1a4b  e8505f2e00           call 0x7a79a0
// 004c1a50  83c404               add esp, 4
// 004c1a53  85c0                 test eax, eax
// 004c1a55  7416                 je 0x4c1a6d
// 004c1a57  c7007091a100         mov dword ptr [eax], 0xa19170
// 004c1a5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c1a61  894808               mov dword ptr [eax + 8], ecx
// 004c1a64  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c1a68  89500c               mov dword ptr [eax + 0xc], edx
// 004c1a6b  eb02                 jmp 0x4c1a6f
// 004c1a6d  33c0                 xor eax, eax
// 004c1a6f  56                   push esi
// 004c1a70  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c1a74  6a00                 push 0
// 004c1a76  8906                 mov dword ptr [esi], eax
// 004c1a78  e81d5f2e00           call 0x7a799a
// 004c1a7d  83c404               add esp, 4
// 004c1a80  8bc6                 mov eax, esi
// 004c1a82  5e                   pop esi
// 004c1a83  59                   pop ecx
// 004c1a84  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
