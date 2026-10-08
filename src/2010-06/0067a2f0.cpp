// roc 2010-06 0067a2f0  unit: RBX::PrismPoly  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0067a2f0
//
// 0067a2f0  51                   push ecx
// 0067a2f1  6a10                 push 0x10
// 0067a2f3  c744240400000000     mov dword ptr [esp + 4], 0
// 0067a2fb  e8a0d61200           call 0x7a79a0
// 0067a300  83c404               add esp, 4
// 0067a303  85c0                 test eax, eax
// 0067a305  7416                 je 0x67a31d
// 0067a307  c7000cd6a300         mov dword ptr [eax], 0xa3d60c
// 0067a30d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067a311  894808               mov dword ptr [eax + 8], ecx
// 0067a314  8b542410             mov edx, dword ptr [esp + 0x10]
// 0067a318  89500c               mov dword ptr [eax + 0xc], edx
// 0067a31b  eb02                 jmp 0x67a31f
// 0067a31d  33c0                 xor eax, eax
// 0067a31f  56                   push esi
// 0067a320  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0067a324  6a00                 push 0
// 0067a326  8906                 mov dword ptr [esi], eax
// 0067a328  e86dd61200           call 0x7a799a
// 0067a32d  83c404               add esp, 4
// 0067a330  8bc6                 mov eax, esi
// 0067a332  5e                   pop esi
// 0067a333  59                   pop ecx
// 0067a334  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
