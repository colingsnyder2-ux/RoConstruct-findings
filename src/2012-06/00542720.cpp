// roc 2012-06 00542720  unit: RBX::VObjectValue::?$FactoryProduct::Creator  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00542720
//
// 00542720  51                   push ecx
// 00542721  6a10                 push 0x10
// 00542723  c744240400000000     mov dword ptr [esp + 4], 0
// 0054272b  e8eaf94300           call 0x98211a
// 00542730  83c404               add esp, 4
// 00542733  85c0                 test eax, eax
// 00542735  7416                 je 0x54274d
// 00542737  c700e81fb700         mov dword ptr [eax], 0xb71fe8
// 0054273d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00542741  894808               mov dword ptr [eax + 8], ecx
// 00542744  8b542410             mov edx, dword ptr [esp + 0x10]
// 00542748  89500c               mov dword ptr [eax + 0xc], edx
// 0054274b  eb02                 jmp 0x54274f
// 0054274d  33c0                 xor eax, eax
// 0054274f  56                   push esi
// 00542750  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00542754  6a00                 push 0
// 00542756  8906                 mov dword ptr [esi], eax
// 00542758  e8b7f94300           call 0x982114
// 0054275d  83c404               add esp, 4
// 00542760  8bc6                 mov eax, esi
// 00542762  5e                   pop esi
// 00542763  59                   pop ecx
// 00542764  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
