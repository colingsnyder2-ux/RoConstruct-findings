// roc 2012-06 00736990  unit: RBX::P8CRenderSettings::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00736990
//
// 00736990  51                   push ecx
// 00736991  6a10                 push 0x10
// 00736993  c744240400000000     mov dword ptr [esp + 4], 0
// 0073699b  e87ab72400           call 0x98211a
// 007369a0  83c404               add esp, 4
// 007369a3  85c0                 test eax, eax
// 007369a5  7416                 je 0x7369bd
// 007369a7  c700c885ba00         mov dword ptr [eax], 0xba85c8
// 007369ad  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007369b1  894808               mov dword ptr [eax + 8], ecx
// 007369b4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007369b8  89500c               mov dword ptr [eax + 0xc], edx
// 007369bb  eb02                 jmp 0x7369bf
// 007369bd  33c0                 xor eax, eax
// 007369bf  56                   push esi
// 007369c0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007369c4  6a00                 push 0
// 007369c6  8906                 mov dword ptr [esi], eax
// 007369c8  e847b72400           call 0x982114
// 007369cd  83c404               add esp, 4
// 007369d0  8bc6                 mov eax, esi
// 007369d2  5e                   pop esi
// 007369d3  59                   pop ecx
// 007369d4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
