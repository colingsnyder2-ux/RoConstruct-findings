// roc 2012-06 006a96e0  unit: RBX::VInstance::$$A6AXV?$shared_ptr::?$signal::Vslot::?$callable  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a96e0
//
// 006a96e0  6aff                 push -1
// 006a96e2  682859ac00           push 0xac5928
// 006a96e7  64a100000000         mov eax, dword ptr fs:[0]
// 006a96ed  50                   push eax
// 006a96ee  64892500000000       mov dword ptr fs:[0], esp
// 006a96f5  51                   push ecx
// 006a96f6  56                   push esi
// 006a96f7  8bf1                 mov esi, ecx
// 006a96f9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006a96fd  83ec20               sub esp, 0x20
// 006a9700  8bc4                 mov eax, esp
// 006a9702  c70600000000         mov dword ptr [esi], 0
// 006a9708  8d54243c             lea edx, [esp + 0x3c]
// 006a970c  89642424             mov dword ptr [esp + 0x24], esp
// 006a9710  8908                 mov dword ptr [eax], ecx
// 006a9712  8d4804               lea ecx, [eax + 4]
// 006a9715  52                   push edx
// 006a9716  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006a971e  ff154426b200         call dword ptr [0xb22644]
// 006a9724  8bce                 mov ecx, esi
// 006a9726  e8d5f5ffff           call 0x6a8d00
// 006a972b  8d4c241c             lea ecx, [esp + 0x1c]
// 006a972f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a9737  ff153c26b200         call dword ptr [0xb2263c]
// 006a973d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a9741  8bc6                 mov eax, esi
// 006a9743  64890d00000000       mov dword ptr fs:[0], ecx
// 006a974a  5e                   pop esi
// 006a974b  83c410               add esp, 0x10
// 006a974e  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$?0V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
