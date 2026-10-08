// roc 2012-06 00749c20  unit: boost::Vthread::?$sp_counted_impl_p  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00749c20
//
// 00749c20  51                   push ecx
// 00749c21  6a10                 push 0x10
// 00749c23  c744240400000000     mov dword ptr [esp + 4], 0
// 00749c2b  e8ea842300           call 0x98211a
// 00749c30  83c404               add esp, 4
// 00749c33  85c0                 test eax, eax
// 00749c35  7416                 je 0x749c4d
// 00749c37  c70050b3ba00         mov dword ptr [eax], 0xbab350
// 00749c3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00749c41  894808               mov dword ptr [eax + 8], ecx
// 00749c44  8b542410             mov edx, dword ptr [esp + 0x10]
// 00749c48  89500c               mov dword ptr [eax + 0xc], edx
// 00749c4b  eb02                 jmp 0x749c4f
// 00749c4d  33c0                 xor eax, eax
// 00749c4f  56                   push esi
// 00749c50  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00749c54  6a00                 push 0
// 00749c56  8906                 mov dword ptr [esi], eax
// 00749c58  e8b7842300           call 0x982114
// 00749c5d  83c404               add esp, 4
// 00749c60  8bc6                 mov eax, esi
// 00749c62  5e                   pop esi
// 00749c63  59                   pop ecx
// 00749c64  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??$getset@P8Instance@RBX@@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ@?$PropDescriptor@VInstance@RBX@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@SA?AV?$auto_ptr@VGetSet@?$TypedPropertyDescriptor@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Reflection@RBX@@@std@@P8Instance@2@BE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@XZH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
