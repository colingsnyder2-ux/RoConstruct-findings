// roc 2008-06 00596a50  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596a50
//
// 00596a50  6aff                 push -1
// 00596a52  6811e87c00           push 0x7ce811
// 00596a57  64a100000000         mov eax, dword ptr fs:[0]
// 00596a5d  50                   push eax
// 00596a5e  64892500000000       mov dword ptr fs:[0], esp
// 00596a65  51                   push ecx
// 00596a66  8b442414             mov eax, dword ptr [esp + 0x14]
// 00596a6a  89442414             mov dword ptr [esp + 0x14], eax
// 00596a6e  890424               mov dword ptr [esp], eax
// 00596a71  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00596a79  85c0                 test eax, eax
// 00596a7b  7420                 je 0x596a9d
// 00596a7d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00596a81  8b11                 mov edx, dword ptr [ecx]
// 00596a83  56                   push esi
// 00596a84  57                   push edi
// 00596a85  8d7108               lea esi, [ecx + 8]
// 00596a88  8d7808               lea edi, [eax + 8]
// 00596a8b  56                   push esi
// 00596a8c  8bcf                 mov ecx, edi
// 00596a8e  8910                 mov dword ptr [eax], edx
// 00596a90  e83bf8ffff           call 0x5962d0
// 00596a95  8b4640               mov eax, dword ptr [esi + 0x40]
// 00596a98  894740               mov dword ptr [edi + 0x40], eax
// 00596a9b  5f                   pop edi
// 00596a9c  5e                   pop esi
// 00596a9d  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00596aa1  64890d00000000       mov dword ptr fs:[0], ecx
// 00596aa8  83c410               add esp, 0x10
// 00596aab  c3                   ret 
// library rbxgs/roc_datamodel_http_priority_family_499d1a4013f08de7.cpp (function ??$_Construct@V?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@V?$value@H@23@@_bi@2@@_bi@boost@@V123@@std@@YAXPAV?$bind_t@XP6AXABV?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@ZV?$list3@V?$value@V?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@V?$value@H@23@@_bi@2@@_bi@boost@@ABV123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_datamodel_http_priority_family_499d1a4013f08de7.cpp
