// roc 2010-06 00796a40  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00796a40
//
// 00796a40  6aff                 push -1
// 00796a42  68f80d9a00           push 0x9a0df8
// 00796a47  64a100000000         mov eax, dword ptr fs:[0]
// 00796a4d  50                   push eax
// 00796a4e  64892500000000       mov dword ptr fs:[0], esp
// 00796a55  51                   push ecx
// 00796a56  56                   push esi
// 00796a57  8bf1                 mov esi, ecx
// 00796a59  8d442418             lea eax, [esp + 0x18]
// 00796a5d  50                   push eax
// 00796a5e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00796a66  e8e50cf6ff           call 0x6f7750
// 00796a6b  83c404               add esp, 4
// 00796a6e  84c0                 test al, al
// 00796a70  7559                 jne 0x796acb
// 00796a72  8b542448             mov edx, dword ptr [esp + 0x48]
// 00796a76  88442404             mov byte ptr [esp + 4], al
// 00796a7a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00796a7e  51                   push ecx
// 00796a7f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00796a83  52                   push edx
// 00796a84  83ec30               sub esp, 0x30
// 00796a87  8bc4                 mov eax, esp
// 00796a89  8d542458             lea edx, [esp + 0x58]
// 00796a8d  89a42480000000       mov dword ptr [esp + 0x80], esp
// 00796a94  8908                 mov dword ptr [eax], ecx
// 00796a96  8d4808               lea ecx, [eax + 8]
// 00796a99  52                   push edx
// 00796a9a  e801f3ffff           call 0x795da0
// 00796a9f  8bce                 mov ecx, esi
// 00796aa1  e8aa8deeff           call 0x67f850
// 00796aa6  8d4c2420             lea ecx, [esp + 0x20]
// 00796aaa  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00796ab2  e8e9f4ffff           call 0x795fa0
// 00796ab7  b001                 mov al, 1
// 00796ab9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00796abd  64890d00000000       mov dword ptr fs:[0], ecx
// 00796ac4  5e                   pop esi
// 00796ac5  83c410               add esp, 0x10
// 00796ac8  c23800               ret 0x38
// 00796acb  8d4c2420             lea ecx, [esp + 0x20]
// 00796acf  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00796ad7  e8c4f4ffff           call 0x795fa0
// 00796adc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00796ae0  32c0                 xor al, al
// 00796ae2  64890d00000000       mov dword ptr fs:[0], ecx
// 00796ae9  5e                   pop esi
// 00796aea  83c410               add esp, 0x10
// 00796aed  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
