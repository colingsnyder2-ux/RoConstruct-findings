// roc 2011-06 006b5ff0  unit: RBX::VInsertService::?$FactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b5ff0
//
// 006b5ff0  6aff                 push -1
// 006b5ff2  6838839f00           push 0x9f8338
// 006b5ff7  64a100000000         mov eax, dword ptr fs:[0]
// 006b5ffd  50                   push eax
// 006b5ffe  64892500000000       mov dword ptr fs:[0], esp
// 006b6005  51                   push ecx
// 006b6006  56                   push esi
// 006b6007  8bf1                 mov esi, ecx
// 006b6009  8d442418             lea eax, [esp + 0x18]
// 006b600d  50                   push eax
// 006b600e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006b6016  e865e70400           call 0x704780
// 006b601b  83c404               add esp, 4
// 006b601e  84c0                 test al, al
// 006b6020  7556                 jne 0x6b6078
// 006b6022  8b542440             mov edx, dword ptr [esp + 0x40]
// 006b6026  88442404             mov byte ptr [esp + 4], al
// 006b602a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b602e  51                   push ecx
// 006b602f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b6033  52                   push edx
// 006b6034  83ec28               sub esp, 0x28
// 006b6037  8bc4                 mov eax, esp
// 006b6039  8d54244c             lea edx, [esp + 0x4c]
// 006b603d  89642470             mov dword ptr [esp + 0x70], esp
// 006b6041  8908                 mov dword ptr [eax], ecx
// 006b6043  8d4804               lea ecx, [eax + 4]
// 006b6046  52                   push edx
// 006b6047  e8d4822600           call 0x91e320
// 006b604c  8bce                 mov ecx, esi
// 006b604e  e84d940700           call 0x72f4a0
// 006b6053  8d4c241c             lea ecx, [esp + 0x1c]
// 006b6057  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b605f  e86cdb0b00           call 0x773bd0
// 006b6064  b001                 mov al, 1
// 006b6066  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b606a  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6071  5e                   pop esi
// 006b6072  83c410               add esp, 0x10
// 006b6075  c23000               ret 0x30
// 006b6078  8d4c241c             lea ecx, [esp + 0x1c]
// 006b607c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b6084  e847db0b00           call 0x773bd0
// 006b6089  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b608d  32c0                 xor al, al
// 006b608f  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6096  5e                   pop esi
// 006b6097  83c410               add esp, 0x10
// 006b609a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
