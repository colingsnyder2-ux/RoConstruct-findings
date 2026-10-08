// roc 2010-06 006e6d20  unit: RBX::VBillboardGui::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006e6d20
//
// 006e6d20  51                   push ecx
// 006e6d21  6a10                 push 0x10
// 006e6d23  c744240400000000     mov dword ptr [esp + 4], 0
// 006e6d2b  e8700c0c00           call 0x7a79a0
// 006e6d30  83c404               add esp, 4
// 006e6d33  85c0                 test eax, eax
// 006e6d35  7416                 je 0x6e6d4d
// 006e6d37  c700549ba400         mov dword ptr [eax], 0xa49b54
// 006e6d3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e6d41  894808               mov dword ptr [eax + 8], ecx
// 006e6d44  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e6d48  89500c               mov dword ptr [eax + 0xc], edx
// 006e6d4b  eb02                 jmp 0x6e6d4f
// 006e6d4d  33c0                 xor eax, eax
// 006e6d4f  56                   push esi
// 006e6d50  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006e6d54  6a00                 push 0
// 006e6d56  8906                 mov dword ptr [esi], eax
// 006e6d58  e83d0c0c00           call 0x7a799a
// 006e6d5d  83c404               add esp, 4
// 006e6d60  8bc6                 mov eax, esi
// 006e6d62  5e                   pop esi
// 006e6d63  59                   pop ecx
// 006e6d64  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
