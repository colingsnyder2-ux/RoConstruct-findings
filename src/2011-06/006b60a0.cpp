// roc 2011-06 006b60a0  unit: RBX::VInsertService::?$FactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b60a0
//
// 006b60a0  6aff                 push -1
// 006b60a2  6888179f00           push 0x9f1788
// 006b60a7  64a100000000         mov eax, dword ptr fs:[0]
// 006b60ad  50                   push eax
// 006b60ae  64892500000000       mov dword ptr fs:[0], esp
// 006b60b5  51                   push ecx
// 006b60b6  56                   push esi
// 006b60b7  8bf1                 mov esi, ecx
// 006b60b9  8d442418             lea eax, [esp + 0x18]
// 006b60bd  50                   push eax
// 006b60be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006b60c6  e8b5e60400           call 0x704780
// 006b60cb  83c404               add esp, 4
// 006b60ce  84c0                 test al, al
// 006b60d0  7559                 jne 0x6b612b
// 006b60d2  8b542448             mov edx, dword ptr [esp + 0x48]
// 006b60d6  88442404             mov byte ptr [esp + 4], al
// 006b60da  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006b60de  51                   push ecx
// 006b60df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006b60e3  52                   push edx
// 006b60e4  83ec30               sub esp, 0x30
// 006b60e7  8bc4                 mov eax, esp
// 006b60e9  8d542458             lea edx, [esp + 0x58]
// 006b60ed  89a42480000000       mov dword ptr [esp + 0x80], esp
// 006b60f4  8908                 mov dword ptr [eax], ecx
// 006b60f6  8d4808               lea ecx, [eax + 8]
// 006b60f9  52                   push edx
// 006b60fa  e871d9ffff           call 0x6b3a70
// 006b60ff  8bce                 mov ecx, esi
// 006b6101  e8aaf0ffff           call 0x6b51b0
// 006b6106  8d4c2420             lea ecx, [esp + 0x20]
// 006b610a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b6112  e809cfffff           call 0x6b3020
// 006b6117  b001                 mov al, 1
// 006b6119  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b611d  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6124  5e                   pop esi
// 006b6125  83c410               add esp, 0x10
// 006b6128  c23800               ret 0x38
// 006b612b  8d4c2420             lea ecx, [esp + 0x20]
// 006b612f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006b6137  e8e4ceffff           call 0x6b3020
// 006b613c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b6140  32c0                 xor al, al
// 006b6142  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6149  5e                   pop esi
// 006b614a  83c410               add esp, 0x10
// 006b614d  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
