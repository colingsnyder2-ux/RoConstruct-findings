// roc 2012-06 007feb30  unit: std::D::DU?$char_traits::$$A6AXV?$basic_string::?$signal::Vslot::?$callable  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007feb30
//
// 007feb30  6aff                 push -1
// 007feb32  6878a8ac00           push 0xaca878
// 007feb37  64a100000000         mov eax, dword ptr fs:[0]
// 007feb3d  50                   push eax
// 007feb3e  64892500000000       mov dword ptr fs:[0], esp
// 007feb45  51                   push ecx
// 007feb46  53                   push ebx
// 007feb47  56                   push esi
// 007feb48  8bf1                 mov esi, ecx
// 007feb4a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007feb4e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007feb52  33c0                 xor eax, eax
// 007feb54  89442414             mov dword ptr [esp + 0x14], eax
// 007feb58  88442408             mov byte ptr [esp + 8], al
// 007feb5c  8b442408             mov eax, dword ptr [esp + 8]
// 007feb60  50                   push eax
// 007feb61  51                   push ecx
// 007feb62  83ec30               sub esp, 0x30
// 007feb65  8bc4                 mov eax, esp
// 007feb67  8910                 mov dword ptr [eax], edx
// 007feb69  8d4808               lea ecx, [eax + 8]
// 007feb6c  8d44245c             lea eax, [esp + 0x5c]
// 007feb70  89a42484000000       mov dword ptr [esp + 0x84], esp
// 007feb77  50                   push eax
// 007feb78  e8a3d2ffff           call 0x7fbe20
// 007feb7d  8bce                 mov ecx, esi
// 007feb7f  e82cf8ffff           call 0x7fe3b0
// 007feb84  8d4c2424             lea ecx, [esp + 0x24]
// 007feb88  8ad8                 mov bl, al
// 007feb8a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007feb92  e889c7ffff           call 0x7fb320
// 007feb97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007feb9b  5e                   pop esi
// 007feb9c  8ac3                 mov al, bl
// 007feb9e  64890d00000000       mov dword ptr fs:[0], ecx
// 007feba5  5b                   pop ebx
// 007feba6  83c410               add esp, 0x10
// 007feba9  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
