// roc 2012-06 007369e0  unit: RBX::P8CRenderSettings::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007369e0
//
// 007369e0  51                   push ecx
// 007369e1  6a10                 push 0x10
// 007369e3  c744240400000000     mov dword ptr [esp + 4], 0
// 007369eb  e82ab72400           call 0x98211a
// 007369f0  83c404               add esp, 4
// 007369f3  85c0                 test eax, eax
// 007369f5  7416                 je 0x736a0d
// 007369f7  c700dc85ba00         mov dword ptr [eax], 0xba85dc
// 007369fd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00736a01  894808               mov dword ptr [eax + 8], ecx
// 00736a04  8b542410             mov edx, dword ptr [esp + 0x10]
// 00736a08  89500c               mov dword ptr [eax + 0xc], edx
// 00736a0b  eb02                 jmp 0x736a0f
// 00736a0d  33c0                 xor eax, eax
// 00736a0f  56                   push esi
// 00736a10  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00736a14  6a00                 push 0
// 00736a16  8906                 mov dword ptr [esi], eax
// 00736a18  e8f7b62400           call 0x982114
// 00736a1d  83c404               add esp, 4
// 00736a20  8bc6                 mov eax, esi
// 00736a22  5e                   pop esi
// 00736a23  59                   pop ecx
// 00736a24  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
