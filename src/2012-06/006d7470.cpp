// roc 2012-06 006d7470  unit: boost::io::Vtoo_few_args::U?$error_info_injector::?$clone_impl  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d7470
//
// 006d7470  6aff                 push -1
// 006d7472  682859ac00           push 0xac5928
// 006d7477  64a100000000         mov eax, dword ptr fs:[0]
// 006d747d  50                   push eax
// 006d747e  64892500000000       mov dword ptr fs:[0], esp
// 006d7485  51                   push ecx
// 006d7486  56                   push esi
// 006d7487  8bf1                 mov esi, ecx
// 006d7489  8d442418             lea eax, [esp + 0x18]
// 006d748d  50                   push eax
// 006d748e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d7496  e8959a1a00           call 0x880f30
// 006d749b  83c404               add esp, 4
// 006d749e  84c0                 test al, al
// 006d74a0  7558                 jne 0x6d74fa
// 006d74a2  8b542438             mov edx, dword ptr [esp + 0x38]
// 006d74a6  88442404             mov byte ptr [esp + 4], al
// 006d74aa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006d74ae  51                   push ecx
// 006d74af  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d74b3  52                   push edx
// 006d74b4  83ec20               sub esp, 0x20
// 006d74b7  8bc4                 mov eax, esp
// 006d74b9  8d542444             lea edx, [esp + 0x44]
// 006d74bd  89642460             mov dword ptr [esp + 0x60], esp
// 006d74c1  8908                 mov dword ptr [eax], ecx
// 006d74c3  8d4804               lea ecx, [eax + 4]
// 006d74c6  52                   push edx
// 006d74c7  ff154426b200         call dword ptr [0xb22644]
// 006d74cd  8bce                 mov ecx, esi
// 006d74cf  e8cceefcff           call 0x6a63a0
// 006d74d4  8d4c241c             lea ecx, [esp + 0x1c]
// 006d74d8  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d74e0  ff153c26b200         call dword ptr [0xb2263c]
// 006d74e6  b001                 mov al, 1
// 006d74e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d74ec  64890d00000000       mov dword ptr fs:[0], ecx
// 006d74f3  5e                   pop esi
// 006d74f4  83c410               add esp, 0x10
// 006d74f7  c22800               ret 0x28
// 006d74fa  8d4c241c             lea ecx, [esp + 0x1c]
// 006d74fe  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006d7506  ff153c26b200         call dword ptr [0xb2263c]
// 006d750c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006d7510  32c0                 xor al, al
// 006d7512  64890d00000000       mov dword ptr fs:[0], ecx
// 006d7519  5e                   pop esi
// 006d751a  83c410               add esp, 0x10
// 006d751d  c22800               ret 0x28
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
