// roc 2009-06 006a4c30  unit: RBX::P8BackpackItem::?$GetSetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006a4c30
//
// 006a4c30  51                   push ecx
// 006a4c31  6a10                 push 0x10
// 006a4c33  c744240400000000     mov dword ptr [esp + 4], 0
// 006a4c3b  e8f83d0700           call 0x718a38
// 006a4c40  83c404               add esp, 4
// 006a4c43  85c0                 test eax, eax
// 006a4c45  7416                 je 0x6a4c5d
// 006a4c47  c7009c9c8e00         mov dword ptr [eax], 0x8e9c9c
// 006a4c4d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a4c51  894808               mov dword ptr [eax + 8], ecx
// 006a4c54  8b542410             mov edx, dword ptr [esp + 0x10]
// 006a4c58  89500c               mov dword ptr [eax + 0xc], edx
// 006a4c5b  eb02                 jmp 0x6a4c5f
// 006a4c5d  33c0                 xor eax, eax
// 006a4c5f  56                   push esi
// 006a4c60  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a4c64  6a00                 push 0
// 006a4c66  8906                 mov dword ptr [esi], eax
// 006a4c68  e8c53d0700           call 0x718a32
// 006a4c6d  83c404               add esp, 4
// 006a4c70  8bc6                 mov eax, esi
// 006a4c72  5e                   pop esi
// 006a4c73  59                   pop ecx
// 006a4c74  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
