// roc 2012-06 008e12f0  unit: RBX::VSkateboardController::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008e12f0
//
// 008e12f0  51                   push ecx
// 008e12f1  6a10                 push 0x10
// 008e12f3  c744240400000000     mov dword ptr [esp + 4], 0
// 008e12fb  e81a0e0a00           call 0x98211a
// 008e1300  83c404               add esp, 4
// 008e1303  85c0                 test eax, eax
// 008e1305  7416                 je 0x8e131d
// 008e1307  c700ccb7be00         mov dword ptr [eax], 0xbeb7cc
// 008e130d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e1311  894808               mov dword ptr [eax + 8], ecx
// 008e1314  8b542410             mov edx, dword ptr [esp + 0x10]
// 008e1318  89500c               mov dword ptr [eax + 0xc], edx
// 008e131b  eb02                 jmp 0x8e131f
// 008e131d  33c0                 xor eax, eax
// 008e131f  56                   push esi
// 008e1320  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e1324  6a00                 push 0
// 008e1326  8906                 mov dword ptr [esi], eax
// 008e1328  e8e70d0a00           call 0x982114
// 008e132d  83c404               add esp, 4
// 008e1330  8bc6                 mov eax, esi
// 008e1332  5e                   pop esi
// 008e1333  59                   pop ecx
// 008e1334  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
