// roc 2012-06 005734c0  unit: AsyncResult  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 005734c0
//
// 005734c0  51                   push ecx
// 005734c1  6a10                 push 0x10
// 005734c3  c744240400000000     mov dword ptr [esp + 4], 0
// 005734cb  e84aec4000           call 0x98211a
// 005734d0  83c404               add esp, 4
// 005734d3  85c0                 test eax, eax
// 005734d5  7416                 je 0x5734ed
// 005734d7  c700b45fb700         mov dword ptr [eax], 0xb75fb4
// 005734dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005734e1  894808               mov dword ptr [eax + 8], ecx
// 005734e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 005734e8  89500c               mov dword ptr [eax + 0xc], edx
// 005734eb  eb02                 jmp 0x5734ef
// 005734ed  33c0                 xor eax, eax
// 005734ef  56                   push esi
// 005734f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005734f4  6a00                 push 0
// 005734f6  8906                 mov dword ptr [esi], eax
// 005734f8  e817ec4000           call 0x982114
// 005734fd  83c404               add esp, 4
// 00573500  8bc6                 mov eax, esi
// 00573502  5e                   pop esi
// 00573503  59                   pop ecx
// 00573504  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
