// roc 2012-06 0089ff40  unit: RBX::P8Mouse::?$GetImpl  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0089ff40
//
// 0089ff40  51                   push ecx
// 0089ff41  6a10                 push 0x10
// 0089ff43  c744240400000000     mov dword ptr [esp + 4], 0
// 0089ff4b  e8ca210e00           call 0x98211a
// 0089ff50  83c404               add esp, 4
// 0089ff53  85c0                 test eax, eax
// 0089ff55  7416                 je 0x89ff6d
// 0089ff57  c70004debd00         mov dword ptr [eax], 0xbdde04
// 0089ff5d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0089ff61  894808               mov dword ptr [eax + 8], ecx
// 0089ff64  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089ff68  89500c               mov dword ptr [eax + 0xc], edx
// 0089ff6b  eb02                 jmp 0x89ff6f
// 0089ff6d  33c0                 xor eax, eax
// 0089ff6f  56                   push esi
// 0089ff70  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0089ff74  6a00                 push 0
// 0089ff76  8906                 mov dword ptr [esi], eax
// 0089ff78  e897210e00           call 0x982114
// 0089ff7d  83c404               add esp, 4
// 0089ff80  8bc6                 mov eax, esi
// 0089ff82  5e                   pop esi
// 0089ff83  59                   pop ecx
// 0089ff84  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
