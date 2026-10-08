// roc 2012-06 0080dfc0  unit: RBX::TextBox  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080dfc0
//
// 0080dfc0  51                   push ecx
// 0080dfc1  6a10                 push 0x10
// 0080dfc3  c744240400000000     mov dword ptr [esp + 4], 0
// 0080dfcb  e84a411700           call 0x98211a
// 0080dfd0  83c404               add esp, 4
// 0080dfd3  85c0                 test eax, eax
// 0080dfd5  7416                 je 0x80dfed
// 0080dfd7  c7007454bc00         mov dword ptr [eax], 0xbc5474
// 0080dfdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080dfe1  894808               mov dword ptr [eax + 8], ecx
// 0080dfe4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080dfe8  89500c               mov dword ptr [eax + 0xc], edx
// 0080dfeb  eb02                 jmp 0x80dfef
// 0080dfed  33c0                 xor eax, eax
// 0080dfef  56                   push esi
// 0080dff0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080dff4  6a00                 push 0
// 0080dff6  8906                 mov dword ptr [esi], eax
// 0080dff8  e817411700           call 0x982114
// 0080dffd  83c404               add esp, 4
// 0080e000  8bc6                 mov eax, esi
// 0080e002  5e                   pop esi
// 0080e003  59                   pop ecx
// 0080e004  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
