// roc 2010-06 00594db0  unit: RBX::Object  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00594db0
//
// 00594db0  51                   push ecx
// 00594db1  6a10                 push 0x10
// 00594db3  c744240400000000     mov dword ptr [esp + 4], 0
// 00594dbb  e8e02b2100           call 0x7a79a0
// 00594dc0  83c404               add esp, 4
// 00594dc3  85c0                 test eax, eax
// 00594dc5  7416                 je 0x594ddd
// 00594dc7  c700389ba200         mov dword ptr [eax], 0xa29b38
// 00594dcd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00594dd1  894808               mov dword ptr [eax + 8], ecx
// 00594dd4  8b542410             mov edx, dword ptr [esp + 0x10]
// 00594dd8  89500c               mov dword ptr [eax + 0xc], edx
// 00594ddb  eb02                 jmp 0x594ddf
// 00594ddd  33c0                 xor eax, eax
// 00594ddf  56                   push esi
// 00594de0  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00594de4  6a00                 push 0
// 00594de6  8906                 mov dword ptr [esi], eax
// 00594de8  e8ad2b2100           call 0x7a799a
// 00594ded  83c404               add esp, 4
// 00594df0  8bc6                 mov eax, esi
// 00594df2  5e                   pop esi
// 00594df3  59                   pop ecx
// 00594df4  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
