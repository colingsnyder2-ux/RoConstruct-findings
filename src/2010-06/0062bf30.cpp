// roc 2010-06 0062bf30  unit: RBX::ContentProvider  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062bf30
//
// 0062bf30  51                   push ecx
// 0062bf31  6a10                 push 0x10
// 0062bf33  c744240400000000     mov dword ptr [esp + 4], 0
// 0062bf3b  e860ba1700           call 0x7a79a0
// 0062bf40  83c404               add esp, 4
// 0062bf43  85c0                 test eax, eax
// 0062bf45  7416                 je 0x62bf5d
// 0062bf47  c700ac57a300         mov dword ptr [eax], 0xa357ac
// 0062bf4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0062bf51  894808               mov dword ptr [eax + 8], ecx
// 0062bf54  8b542410             mov edx, dword ptr [esp + 0x10]
// 0062bf58  89500c               mov dword ptr [eax + 0xc], edx
// 0062bf5b  eb02                 jmp 0x62bf5f
// 0062bf5d  33c0                 xor eax, eax
// 0062bf5f  56                   push esi
// 0062bf60  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0062bf64  6a00                 push 0
// 0062bf66  8906                 mov dword ptr [esi], eax
// 0062bf68  e82dba1700           call 0x7a799a
// 0062bf6d  83c404               add esp, 4
// 0062bf70  8bc6                 mov eax, esi
// 0062bf72  5e                   pop esi
// 0062bf73  59                   pop ecx
// 0062bf74  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
