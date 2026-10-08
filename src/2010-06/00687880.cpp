// roc 2010-06 00687880  unit: RBX::VInsertService::?$BoundFuncDesc  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00687880
//
// 00687880  6aff                 push -1
// 00687882  68f80d9a00           push 0x9a0df8
// 00687887  64a100000000         mov eax, dword ptr fs:[0]
// 0068788d  50                   push eax
// 0068788e  64892500000000       mov dword ptr fs:[0], esp
// 00687895  51                   push ecx
// 00687896  56                   push esi
// 00687897  8bf1                 mov esi, ecx
// 00687899  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0068789d  83ec30               sub esp, 0x30
// 006878a0  8bc4                 mov eax, esp
// 006878a2  c70600000000         mov dword ptr [esi], 0
// 006878a8  8d542450             lea edx, [esp + 0x50]
// 006878ac  89642434             mov dword ptr [esp + 0x34], esp
// 006878b0  8908                 mov dword ptr [eax], ecx
// 006878b2  8d4808               lea ecx, [eax + 8]
// 006878b5  52                   push edx
// 006878b6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 006878be  e8dde41000           call 0x795da0
// 006878c3  8bce                 mov ecx, esi
// 006878c5  e836d3ffff           call 0x684c00
// 006878ca  8d4c2420             lea ecx, [esp + 0x20]
// 006878ce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006878d6  e8c5e61000           call 0x795fa0
// 006878db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006878df  8bc6                 mov eax, esi
// 006878e1  64890d00000000       mov dword ptr fs:[0], ecx
// 006878e8  5e                   pop esi
// 006878e9  83c410               add esp, 0x10
// 006878ec  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
