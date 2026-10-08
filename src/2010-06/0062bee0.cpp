// roc 2010-06 0062bee0  unit: RBX::ContentProvider  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062bee0
//
// 0062bee0  51                   push ecx
// 0062bee1  6a10                 push 0x10
// 0062bee3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062beeb  e8b0ba1700           call 0x7a79a0
// 0062bef0  83c404               add esp, 4
// 0062bef3  85c0                 test eax, eax
// 0062bef5  7416                 je 0x62bf0d
// 0062bef7  c7009457a300         mov dword ptr [eax], 0xa35794
// 0062befd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bf01  894808               mov dword ptr [eax + 8], ecx
// 0062bf04  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062bf08  89500c               mov dword ptr [eax + 0xc], edx
// 0062bf0b  eb02                 jmp 0x62bf0f
// 0062bf0d  33c0                 xor eax, eax
// 0062bf0f  56                   push esi
// 0062bf10  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062bf14  6a00                 push 0
// 0062bf16  8906                 mov dword ptr [esi], eax
// 0062bf18  e87dba1700           call 0x7a799a
// 0062bf1d  83c404               add esp, 4
// 0062bf20  8bc6                 mov eax, esi
// 0062bf22  5e                   pop esi
// 0062bf23  59                   pop ecx
// 0062bf24  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
