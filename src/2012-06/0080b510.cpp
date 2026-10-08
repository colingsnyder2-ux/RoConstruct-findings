// roc 2012-06 0080b510  unit: RBX::P8GuiTextMixin::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0080b510
//
// 0080b510  51                   push ecx
// 0080b511  6a10                 push 0x10
// 0080b513  c744240400000000     mov dword ptr [esp + 4], 0
// 0080b51b  e8fa6b1700           call 0x98211a
// 0080b520  83c404               add esp, 4
// 0080b523  85c0                 test eax, eax
// 0080b525  7416                 je 0x80b53d
// 0080b527  c700344dbc00         mov dword ptr [eax], 0xbc4d34
// 0080b52d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080b531  894808               mov dword ptr [eax + 8], ecx
// 0080b534  8b542410             mov edx, dword ptr [esp + 0x10]
// 0080b538  89500c               mov dword ptr [eax + 0xc], edx
// 0080b53b  eb02                 jmp 0x80b53f
// 0080b53d  33c0                 xor eax, eax
// 0080b53f  56                   push esi
// 0080b540  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0080b544  6a00                 push 0
// 0080b546  8906                 mov dword ptr [esi], eax
// 0080b548  e8c76b1700           call 0x982114
// 0080b54d  83c404               add esp, 4
// 0080b550  8bc6                 mov eax, esi
// 0080b552  5e                   pop esi
// 0080b553  59                   pop ecx
// 0080b554  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
