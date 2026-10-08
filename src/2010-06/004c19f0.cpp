// roc 2010-06 004c19f0  unit: RBX::Network::Players::W4ChatOption::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004c19f0
//
// 004c19f0  51                   push ecx
// 004c19f1  6a10                 push 0x10
// 004c19f3  c744240400000000     mov dword ptr [esp + 4], 0
// 004c19fb  e8a05f2e00           call 0x7a79a0
// 004c1a00  83c404               add esp, 4
// 004c1a03  85c0                 test eax, eax
// 004c1a05  7416                 je 0x4c1a1d
// 004c1a07  c7005891a100         mov dword ptr [eax], 0xa19158
// 004c1a0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004c1a11  894808               mov dword ptr [eax + 8], ecx
// 004c1a14  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c1a18  89500c               mov dword ptr [eax + 0xc], edx
// 004c1a1b  eb02                 jmp 0x4c1a1f
// 004c1a1d  33c0                 xor eax, eax
// 004c1a1f  56                   push esi
// 004c1a20  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004c1a24  6a00                 push 0
// 004c1a26  8906                 mov dword ptr [esi], eax
// 004c1a28  e86d5f2e00           call 0x7a799a
// 004c1a2d  83c404               add esp, 4
// 004c1a30  8bc6                 mov eax, esi
// 004c1a32  5e                   pop esi
// 004c1a33  59                   pop ecx
// 004c1a34  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
