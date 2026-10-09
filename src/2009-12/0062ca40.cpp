// roc 2009-12 0062ca40  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062ca40
//
// 0062ca40  51                   push ecx
// 0062ca41  6a10                 push 0x10
// 0062ca43  c744240400000000     mov dword ptr [esp + 4], 0
// 0062ca4b  e8106e1c00           call 0x7f3860
// 0062ca50  83c404               add esp, 4
// 0062ca53  85c0                 test eax, eax
// 0062ca55  7416                 je 0x62ca6d
// 0062ca57  c700f4ad9c00         mov dword ptr [eax], 0x9cadf4
// 0062ca5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062ca61  894808               mov dword ptr [eax + 8], ecx
// 0062ca64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062ca68  89500c               mov dword ptr [eax + 0xc], edx
// 0062ca6b  eb02                 jmp 0x62ca6f
// 0062ca6d  33c0                 xor eax, eax
// 0062ca6f  56                   push esi
// 0062ca70  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062ca74  6a00                 push 0
// 0062ca76  8906                 mov dword ptr [esi], eax
// 0062ca78  e8dd6d1c00           call 0x7f385a
// 0062ca7d  83c404               add esp, 4
// 0062ca80  8bc6                 mov eax, esi
// 0062ca82  5e                   pop esi
// 0062ca83  59                   pop ecx
// 0062ca84  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
