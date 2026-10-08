// roc 2012-06 008f4ca0  unit: RBX::HandlesBase  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008f4ca0
//
// 008f4ca0  51                   push ecx
// 008f4ca1  6a10                 push 0x10
// 008f4ca3  c744240400000000     mov dword ptr [esp + 4], 0
// 008f4cab  e86ad40800           call 0x98211a
// 008f4cb0  83c404               add esp, 4
// 008f4cb3  85c0                 test eax, eax
// 008f4cb5  7416                 je 0x8f4ccd
// 008f4cb7  c7001cfebe00         mov dword ptr [eax], 0xbefe1c
// 008f4cbd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f4cc1  894808               mov dword ptr [eax + 8], ecx
// 008f4cc4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f4cc8  89500c               mov dword ptr [eax + 0xc], edx
// 008f4ccb  eb02                 jmp 0x8f4ccf
// 008f4ccd  33c0                 xor eax, eax
// 008f4ccf  56                   push esi
// 008f4cd0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008f4cd4  6a00                 push 0
// 008f4cd6  8906                 mov dword ptr [esi], eax
// 008f4cd8  e837d40800           call 0x982114
// 008f4cdd  83c404               add esp, 4
// 008f4ce0  8bc6                 mov eax, esi
// 008f4ce2  5e                   pop esi
// 008f4ce3  59                   pop ecx
// 008f4ce4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
