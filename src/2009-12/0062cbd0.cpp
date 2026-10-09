// roc 2009-12 0062cbd0  unit: RBX::VTaskSchedulerSettings::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0062cbd0
//
// 0062cbd0  51                   push ecx
// 0062cbd1  6a10                 push 0x10
// 0062cbd3  c744240400000000     mov dword ptr [esp + 4], 0
// 0062cbdb  e8806c1c00           call 0x7f3860
// 0062cbe0  83c404               add esp, 4
// 0062cbe3  85c0                 test eax, eax
// 0062cbe5  7416                 je 0x62cbfd
// 0062cbe7  c7006cae9c00         mov dword ptr [eax], 0x9cae6c
// 0062cbed  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062cbf1  894808               mov dword ptr [eax + 8], ecx
// 0062cbf4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062cbf8  89500c               mov dword ptr [eax + 0xc], edx
// 0062cbfb  eb02                 jmp 0x62cbff
// 0062cbfd  33c0                 xor eax, eax
// 0062cbff  56                   push esi
// 0062cc00  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062cc04  6a00                 push 0
// 0062cc06  8906                 mov dword ptr [esi], eax
// 0062cc08  e84d6c1c00           call 0x7f385a
// 0062cc0d  83c404               add esp, 4
// 0062cc10  8bc6                 mov eax, esi
// 0062cc12  5e                   pop esi
// 0062cc13  59                   pop ecx
// 0062cc14  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
