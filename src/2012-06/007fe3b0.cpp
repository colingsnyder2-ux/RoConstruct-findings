// roc 2012-06 007fe3b0  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007fe3b0
//
// 007fe3b0  6aff                 push -1
// 007fe3b2  6878a8ac00           push 0xaca878
// 007fe3b7  64a100000000         mov eax, dword ptr fs:[0]
// 007fe3bd  50                   push eax
// 007fe3be  64892500000000       mov dword ptr fs:[0], esp
// 007fe3c5  51                   push ecx
// 007fe3c6  56                   push esi
// 007fe3c7  8bf1                 mov esi, ecx
// 007fe3c9  8d442418             lea eax, [esp + 0x18]
// 007fe3cd  50                   push eax
// 007fe3ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007fe3d6  e8552b0800           call 0x880f30
// 007fe3db  83c404               add esp, 4
// 007fe3de  84c0                 test al, al
// 007fe3e0  7559                 jne 0x7fe43b
// 007fe3e2  8b542448             mov edx, dword ptr [esp + 0x48]
// 007fe3e6  88442404             mov byte ptr [esp + 4], al
// 007fe3ea  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007fe3ee  51                   push ecx
// 007fe3ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007fe3f3  52                   push edx
// 007fe3f4  83ec30               sub esp, 0x30
// 007fe3f7  8bc4                 mov eax, esp
// 007fe3f9  8d542458             lea edx, [esp + 0x58]
// 007fe3fd  89a42480000000       mov dword ptr [esp + 0x80], esp
// 007fe404  8908                 mov dword ptr [eax], ecx
// 007fe406  8d4808               lea ecx, [eax + 8]
// 007fe409  52                   push edx
// 007fe40a  e811daffff           call 0x7fbe20
// 007fe40f  8bce                 mov ecx, esi
// 007fe411  e80af5ffff           call 0x7fd920
// 007fe416  8d4c2420             lea ecx, [esp + 0x20]
// 007fe41a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007fe422  e8f9ceffff           call 0x7fb320
// 007fe427  b001                 mov al, 1
// 007fe429  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fe42d  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe434  5e                   pop esi
// 007fe435  83c410               add esp, 0x10
// 007fe438  c23800               ret 0x38
// 007fe43b  8d4c2420             lea ecx, [esp + 0x20]
// 007fe43f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007fe447  e8d4ceffff           call 0x7fb320
// 007fe44c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007fe450  32c0                 xor al, al
// 007fe452  64890d00000000       mov dword ptr fs:[0], ecx
// 007fe459  5e                   pop esi
// 007fe45a  83c410               add esp, 0x10
// 007fe45d  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
