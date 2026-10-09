// roc 2009-12 00709150  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::slot  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00709150
//
// 00709150  6aff                 push -1
// 00709152  68d8789500           push 0x9578d8
// 00709157  64a100000000         mov eax, dword ptr fs:[0]
// 0070915d  50                   push eax
// 0070915e  64892500000000       mov dword ptr fs:[0], esp
// 00709165  51                   push ecx
// 00709166  56                   push esi
// 00709167  8bf1                 mov esi, ecx
// 00709169  8d442418             lea eax, [esp + 0x18]
// 0070916d  50                   push eax
// 0070916e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00709176  e8f5070500           call 0x759970
// 0070917b  83c404               add esp, 4
// 0070917e  84c0                 test al, al
// 00709180  7559                 jne 0x7091db
// 00709182  8b542448             mov edx, dword ptr [esp + 0x48]
// 00709186  88442404             mov byte ptr [esp + 4], al
// 0070918a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0070918e  51                   push ecx
// 0070918f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00709193  52                   push edx
// 00709194  83ec30               sub esp, 0x30
// 00709197  8bc4                 mov eax, esp
// 00709199  8d542458             lea edx, [esp + 0x58]
// 0070919d  89a42480000000       mov dword ptr [esp + 0x80], esp
// 007091a4  8908                 mov dword ptr [eax], ecx
// 007091a6  8d4808               lea ecx, [eax + 8]
// 007091a9  52                   push edx
// 007091aa  e801ceffff           call 0x705fb0
// 007091af  8bce                 mov ecx, esi
// 007091b1  e80af0ffff           call 0x7081c0
// 007091b6  8d4c2420             lea ecx, [esp + 0x20]
// 007091ba  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007091c2  e809b5ffff           call 0x7046d0
// 007091c7  b001                 mov al, 1
// 007091c9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007091cd  64890d00000000       mov dword ptr fs:[0], ecx
// 007091d4  5e                   pop esi
// 007091d5  83c410               add esp, 0x10
// 007091d8  c23800               ret 0x38
// 007091db  8d4c2420             lea ecx, [esp + 0x20]
// 007091df  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007091e7  e8e4b4ffff           call 0x7046d0
// 007091ec  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007091f0  32c0                 xor al, al
// 007091f2  64890d00000000       mov dword ptr fs:[0], ecx
// 007091f9  5e                   pop esi
// 007091fa  83c410               add esp, 0x10
// 007091fd  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
