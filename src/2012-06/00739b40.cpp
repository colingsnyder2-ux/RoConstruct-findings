// roc 2012-06 00739b40  unit: RBX::BasePlayerGui  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00739b40
//
// 00739b40  51                   push ecx
// 00739b41  6a10                 push 0x10
// 00739b43  c744240400000000     mov dword ptr [esp + 4], 0
// 00739b4b  e8ca852400           call 0x98211a
// 00739b50  83c404               add esp, 4
// 00739b53  85c0                 test eax, eax
// 00739b55  7416                 je 0x739b6d
// 00739b57  c700708dba00         mov dword ptr [eax], 0xba8d70
// 00739b5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00739b61  894808               mov dword ptr [eax + 8], ecx
// 00739b64  8b542410             mov edx, dword ptr [esp + 0x10]
// 00739b68  89500c               mov dword ptr [eax + 0xc], edx
// 00739b6b  eb02                 jmp 0x739b6f
// 00739b6d  33c0                 xor eax, eax
// 00739b6f  56                   push esi
// 00739b70  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00739b74  6a00                 push 0
// 00739b76  8906                 mov dword ptr [esi], eax
// 00739b78  e897852400           call 0x982114
// 00739b7d  83c404               add esp, 4
// 00739b80  8bc6                 mov eax, esi
// 00739b82  5e                   pop esi
// 00739b83  59                   pop ecx
// 00739b84  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
