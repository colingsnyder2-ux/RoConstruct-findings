// roc 2009-06 007069a0  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007069a0
//
// 007069a0  6aff                 push -1
// 007069a2  6838358700           push 0x873538
// 007069a7  64a100000000         mov eax, dword ptr fs:[0]
// 007069ad  50                   push eax
// 007069ae  64892500000000       mov dword ptr fs:[0], esp
// 007069b5  51                   push ecx
// 007069b6  56                   push esi
// 007069b7  8bf1                 mov esi, ecx
// 007069b9  8d442418             lea eax, [esp + 0x18]
// 007069bd  50                   push eax
// 007069be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007069c6  e8e55ef3ff           call 0x63c8b0
// 007069cb  83c404               add esp, 4
// 007069ce  84c0                 test al, al
// 007069d0  7559                 jne 0x706a2b
// 007069d2  8b542448             mov edx, dword ptr [esp + 0x48]
// 007069d6  88442404             mov byte ptr [esp + 4], al
// 007069da  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007069de  51                   push ecx
// 007069df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007069e3  52                   push edx
// 007069e4  83ec30               sub esp, 0x30
// 007069e7  8bc4                 mov eax, esp
// 007069e9  8d542458             lea edx, [esp + 0x58]
// 007069ed  89a42480000000       mov dword ptr [esp + 0x80], esp
// 007069f4  8908                 mov dword ptr [eax], ecx
// 007069f6  8d4808               lea ecx, [eax + 8]
// 007069f9  52                   push edx
// 007069fa  e891f1ffff           call 0x705b90
// 007069ff  8bce                 mov ecx, esi
// 00706a01  e85afdffff           call 0x706760
// 00706a06  8d4c2420             lea ecx, [esp + 0x20]
// 00706a0a  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00706a12  e879f3ffff           call 0x705d90
// 00706a17  b001                 mov al, 1
// 00706a19  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00706a1d  64890d00000000       mov dword ptr fs:[0], ecx
// 00706a24  5e                   pop esi
// 00706a25  83c410               add esp, 0x10
// 00706a28  c23800               ret 0x38
// 00706a2b  8d4c2420             lea ecx, [esp + 0x20]
// 00706a2f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00706a37  e854f3ffff           call 0x705d90
// 00706a3c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00706a40  32c0                 xor al, al
// 00706a42  64890d00000000       mov dword ptr fs:[0], ecx
// 00706a49  5e                   pop esi
// 00706a4a  83c410               add esp, 0x10
// 00706a4d  c23800               ret 0x38
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
