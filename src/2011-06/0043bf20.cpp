// roc 2011-06 0043bf20  unit: AsyncResult  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043bf20
//
// 0043bf20  6aff                 push -1
// 0043bf22  68b80b9d00           push 0x9d0bb8
// 0043bf27  64a100000000         mov eax, dword ptr fs:[0]
// 0043bf2d  50                   push eax
// 0043bf2e  64892500000000       mov dword ptr fs:[0], esp
// 0043bf35  51                   push ecx
// 0043bf36  56                   push esi
// 0043bf37  8bf1                 mov esi, ecx
// 0043bf39  8d442418             lea eax, [esp + 0x18]
// 0043bf3d  50                   push eax
// 0043bf3e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0043bf46  e835882c00           call 0x704780
// 0043bf4b  83c404               add esp, 4
// 0043bf4e  84c0                 test al, al
// 0043bf50  7559                 jne 0x43bfab
// 0043bf52  8b542448             mov edx, dword ptr [esp + 0x48]
// 0043bf56  88442404             mov byte ptr [esp + 4], al
// 0043bf5a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0043bf5e  51                   push ecx
// 0043bf5f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0043bf63  52                   push edx
// 0043bf64  83ec30               sub esp, 0x30
// 0043bf67  8bc4                 mov eax, esp
// 0043bf69  8d542458             lea edx, [esp + 0x58]
// 0043bf6d  89a42480000000       mov dword ptr [esp + 0x80], esp
// 0043bf74  8908                 mov dword ptr [eax], ecx
// 0043bf76  8d4808               lea ecx, [eax + 8]
// 0043bf79  52                   push edx
// 0043bf7a  e851f2ffff           call 0x43b1d0
// 0043bf7f  8bce                 mov ecx, esi
// 0043bf81  e8dada3b00           call 0x7f9a60
// 0043bf86  8d4c2420             lea ecx, [esp + 0x20]
// 0043bf8a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043bf92  e8d9d53b00           call 0x7f9570
// 0043bf97  b001                 mov al, 1
// 0043bf99  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043bf9d  64890d00000000       mov dword ptr fs:[0], ecx
// 0043bfa4  5e                   pop esi
// 0043bfa5  83c410               add esp, 0x10
// 0043bfa8  c23800               ret 0x38
// 0043bfab  8d4c2420             lea ecx, [esp + 0x20]
// 0043bfaf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0043bfb7  e8b4d53b00           call 0x7f9570
// 0043bfbc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043bfc0  32c0                 xor al, al
// 0043bfc2  64890d00000000       mov dword ptr fs:[0], ecx
// 0043bfc9  5e                   pop esi
// 0043bfca  83c410               add esp, 0x10
// 0043bfcd  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
