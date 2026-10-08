// roc 2012-06 0080b4c0  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080b4c0
//
// 0080b4c0  51                   push ecx
// 0080b4c1  6a10                 push 0x10
// 0080b4c3  c744240400000000     mov dword ptr [esp + 4], 0
// 0080b4cb  e84a6c1700           call 0x98211a
// 0080b4d0  83c404               add esp, 4
// 0080b4d3  85c0                 test eax, eax
// 0080b4d5  7416                 je 0x80b4ed
// 0080b4d7  c700204dbc00         mov dword ptr [eax], 0xbc4d20
// 0080b4dd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080b4e1  894808               mov dword ptr [eax + 8], ecx
// 0080b4e4  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080b4e8  89500c               mov dword ptr [eax + 0xc], edx
// 0080b4eb  eb02                 jmp 0x80b4ef
// 0080b4ed  33c0                 xor eax, eax
// 0080b4ef  56                   push esi
// 0080b4f0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080b4f4  6a00                 push 0
// 0080b4f6  8906                 mov dword ptr [esi], eax
// 0080b4f8  e8176c1700           call 0x982114
// 0080b4fd  83c404               add esp, 4
// 0080b500  8bc6                 mov eax, esi
// 0080b502  5e                   pop esi
// 0080b503  59                   pop ecx
// 0080b504  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
