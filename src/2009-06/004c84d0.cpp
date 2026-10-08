// roc 2009-06 004c84d0  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004c84d0
//
// 004c84d0  6aff                 push -1
// 004c84d2  6818a48500           push 0x85a418
// 004c84d7  64a100000000         mov eax, dword ptr fs:[0]
// 004c84dd  50                   push eax
// 004c84de  64892500000000       mov dword ptr fs:[0], esp
// 004c84e5  51                   push ecx
// 004c84e6  56                   push esi
// 004c84e7  8bf1                 mov esi, ecx
// 004c84e9  8d442418             lea eax, [esp + 0x18]
// 004c84ed  50                   push eax
// 004c84ee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004c84f6  e8b5431700           call 0x63c8b0
// 004c84fb  83c404               add esp, 4
// 004c84fe  84c0                 test al, al
// 004c8500  7556                 jne 0x4c8558
// 004c8502  8b542440             mov edx, dword ptr [esp + 0x40]
// 004c8506  88442404             mov byte ptr [esp + 4], al
// 004c850a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004c850e  51                   push ecx
// 004c850f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004c8513  52                   push edx
// 004c8514  83ec28               sub esp, 0x28
// 004c8517  8bc4                 mov eax, esp
// 004c8519  8d54244c             lea edx, [esp + 0x4c]
// 004c851d  89642470             mov dword ptr [esp + 0x70], esp
// 004c8521  8908                 mov dword ptr [eax], ecx
// 004c8523  8d4804               lea ecx, [eax + 4]
// 004c8526  52                   push edx
// 004c8527  e834d9ffff           call 0x4c5e60
// 004c852c  8bce                 mov ecx, esi
// 004c852e  e84df8ffff           call 0x4c7d80
// 004c8533  8d4c241c             lea ecx, [esp + 0x1c]
// 004c8537  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c853f  e84cd4ffff           call 0x4c5990
// 004c8544  b001                 mov al, 1
// 004c8546  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c854a  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8551  5e                   pop esi
// 004c8552  83c410               add esp, 0x10
// 004c8555  c23000               ret 0x30
// 004c8558  8d4c241c             lea ecx, [esp + 0x1c]
// 004c855c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004c8564  e827d4ffff           call 0x4c5990
// 004c8569  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c856d  32c0                 xor al, al
// 004c856f  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8576  5e                   pop esi
// 004c8577  83c410               add esp, 0x10
// 004c857a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
