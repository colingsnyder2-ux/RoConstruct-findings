// roc 2011-06 004cdfd0  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004cdfd0
//
// 004cdfd0  6aff                 push -1
// 004cdfd2  68e8b39f00           push 0x9fb3e8
// 004cdfd7  64a100000000         mov eax, dword ptr fs:[0]
// 004cdfdd  50                   push eax
// 004cdfde  64892500000000       mov dword ptr fs:[0], esp
// 004cdfe5  51                   push ecx
// 004cdfe6  56                   push esi
// 004cdfe7  8bf1                 mov esi, ecx
// 004cdfe9  8d442418             lea eax, [esp + 0x18]
// 004cdfed  50                   push eax
// 004cdfee  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004cdff6  e885672300           call 0x704780
// 004cdffb  83c404               add esp, 4
// 004cdffe  84c0                 test al, al
// 004ce000  7556                 jne 0x4ce058
// 004ce002  8b542440             mov edx, dword ptr [esp + 0x40]
// 004ce006  88442404             mov byte ptr [esp + 4], al
// 004ce00a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ce00e  51                   push ecx
// 004ce00f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004ce013  52                   push edx
// 004ce014  83ec28               sub esp, 0x28
// 004ce017  8bc4                 mov eax, esp
// 004ce019  8d54244c             lea edx, [esp + 0x4c]
// 004ce01d  89642470             mov dword ptr [esp + 0x70], esp
// 004ce021  8908                 mov dword ptr [eax], ecx
// 004ce023  8d4804               lea ecx, [eax + 4]
// 004ce026  52                   push edx
// 004ce027  e824682a00           call 0x774850
// 004ce02c  8bce                 mov ecx, esi
// 004ce02e  e80d802a00           call 0x776040
// 004ce033  8d4c241c             lea ecx, [esp + 0x1c]
// 004ce037  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ce03f  e8ac612a00           call 0x7741f0
// 004ce044  b001                 mov al, 1
// 004ce046  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ce04a  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce051  5e                   pop esi
// 004ce052  83c410               add esp, 0x10
// 004ce055  c23000               ret 0x30
// 004ce058  8d4c241c             lea ecx, [esp + 0x1c]
// 004ce05c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004ce064  e887612a00           call 0x7741f0
// 004ce069  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ce06d  32c0                 xor al, al
// 004ce06f  64890d00000000       mov dword ptr fs:[0], ecx
// 004ce076  5e                   pop esi
// 004ce077  83c410               add esp, 0x10
// 004ce07a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
