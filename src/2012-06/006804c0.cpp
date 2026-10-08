// roc 2012-06 006804c0  unit: RBX::Object  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006804c0
//
// 006804c0  51                   push ecx
// 006804c1  6a10                 push 0x10
// 006804c3  c744240400000000     mov dword ptr [esp + 4], 0
// 006804cb  e84a1c3000           call 0x98211a
// 006804d0  83c404               add esp, 4
// 006804d3  85c0                 test eax, eax
// 006804d5  7416                 je 0x6804ed
// 006804d7  c700c8eeb800         mov dword ptr [eax], 0xb8eec8
// 006804dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006804e1  894808               mov dword ptr [eax + 8], ecx
// 006804e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 006804e8  89500c               mov dword ptr [eax + 0xc], edx
// 006804eb  eb02                 jmp 0x6804ef
// 006804ed  33c0                 xor eax, eax
// 006804ef  56                   push esi
// 006804f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006804f4  6a00                 push 0
// 006804f6  8906                 mov dword ptr [esi], eax
// 006804f8  e8171c3000           call 0x982114
// 006804fd  83c404               add esp, 4
// 00680500  8bc6                 mov eax, esi
// 00680502  5e                   pop esi
// 00680503  59                   pop ecx
// 00680504  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
