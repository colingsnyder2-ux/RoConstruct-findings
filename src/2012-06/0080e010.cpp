// roc 2012-06 0080e010  unit: RBX::TextBox  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080e010
//
// 0080e010  51                   push ecx
// 0080e011  6a10                 push 0x10
// 0080e013  c744240400000000     mov dword ptr [esp + 4], 0
// 0080e01b  e8fa401700           call 0x98211a
// 0080e020  83c404               add esp, 4
// 0080e023  85c0                 test eax, eax
// 0080e025  7416                 je 0x80e03d
// 0080e027  c7008854bc00         mov dword ptr [eax], 0xbc5488
// 0080e02d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080e031  894808               mov dword ptr [eax + 8], ecx
// 0080e034  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080e038  89500c               mov dword ptr [eax + 0xc], edx
// 0080e03b  eb02                 jmp 0x80e03f
// 0080e03d  33c0                 xor eax, eax
// 0080e03f  56                   push esi
// 0080e040  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080e044  6a00                 push 0
// 0080e046  8906                 mov dword ptr [esi], eax
// 0080e048  e8c7401700           call 0x982114
// 0080e04d  83c404               add esp, 4
// 0080e050  8bc6                 mov eax, esi
// 0080e052  5e                   pop esi
// 0080e053  59                   pop ecx
// 0080e054  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
