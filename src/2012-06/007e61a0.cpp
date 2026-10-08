// roc 2012-06 007e61a0  unit: RBX::P8GuiBase::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007e61a0
//
// 007e61a0  51                   push ecx
// 007e61a1  6a10                 push 0x10
// 007e61a3  c744240400000000     mov dword ptr [esp + 4], 0
// 007e61ab  e86abf1900           call 0x98211a
// 007e61b0  83c404               add esp, 4
// 007e61b3  85c0                 test eax, eax
// 007e61b5  7416                 je 0x7e61cd
// 007e61b7  c7003023bc00         mov dword ptr [eax], 0xbc2330
// 007e61bd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007e61c1  894808               mov dword ptr [eax + 8], ecx
// 007e61c4  8b542410             mov edx, dword ptr [esp + 0x10]
// 007e61c8  89500c               mov dword ptr [eax + 0xc], edx
// 007e61cb  eb02                 jmp 0x7e61cf
// 007e61cd  33c0                 xor eax, eax
// 007e61cf  56                   push esi
// 007e61d0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007e61d4  6a00                 push 0
// 007e61d6  8906                 mov dword ptr [esi], eax
// 007e61d8  e837bf1900           call 0x982114
// 007e61dd  83c404               add esp, 4
// 007e61e0  8bc6                 mov eax, esi
// 007e61e2  5e                   pop esi
// 007e61e3  59                   pop ecx
// 007e61e4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
