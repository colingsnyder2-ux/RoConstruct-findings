// roc 2011-06 006b6b80  unit: RBX::VInsertService::?$FactoryProduct  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b6b80
//
// 006b6b80  6aff                 push -1
// 006b6b82  6888179f00           push 0x9f1788
// 006b6b87  64a100000000         mov eax, dword ptr fs:[0]
// 006b6b8d  50                   push eax
// 006b6b8e  64892500000000       mov dword ptr fs:[0], esp
// 006b6b95  51                   push ecx
// 006b6b96  53                   push ebx
// 006b6b97  56                   push esi
// 006b6b98  8bf1                 mov esi, ecx
// 006b6b9a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 006b6b9e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b6ba2  33c0                 xor eax, eax
// 006b6ba4  89442414             mov dword ptr [esp + 0x14], eax
// 006b6ba8  88442408             mov byte ptr [esp + 8], al
// 006b6bac  8b442408             mov eax, dword ptr [esp + 8]
// 006b6bb0  50                   push eax
// 006b6bb1  51                   push ecx
// 006b6bb2  83ec30               sub esp, 0x30
// 006b6bb5  8bc4                 mov eax, esp
// 006b6bb7  8910                 mov dword ptr [eax], edx
// 006b6bb9  8d4808               lea ecx, [eax + 8]
// 006b6bbc  8d44245c             lea eax, [esp + 0x5c]
// 006b6bc0  89a42484000000       mov dword ptr [esp + 0x84], esp
// 006b6bc7  50                   push eax
// 006b6bc8  e8a3ceffff           call 0x6b3a70
// 006b6bcd  8bce                 mov ecx, esi
// 006b6bcf  e8ccf4ffff           call 0x6b60a0
// 006b6bd4  8d4c2424             lea ecx, [esp + 0x24]
// 006b6bd8  8ad8                 mov bl, al
// 006b6bda  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006b6be2  e839c4ffff           call 0x6b3020
// 006b6be7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b6beb  5e                   pop esi
// 006b6bec  8ac3                 mov al, bl
// 006b6bee  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6bf5  5b                   pop ebx
// 006b6bf6  83c410               add esp, 0x10
// 006b6bf9  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$assign_to@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
