// roc 2010-06 00797780  unit: std::D::DU?$char_traits::V?$basic_string::?$thread_specific_ptr::delete_data  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00797780
//
// 00797780  6aff                 push -1
// 00797782  68f80d9a00           push 0x9a0df8
// 00797787  64a100000000         mov eax, dword ptr fs:[0]
// 0079778d  50                   push eax
// 0079778e  64892500000000       mov dword ptr fs:[0], esp
// 00797795  51                   push ecx
// 00797796  56                   push esi
// 00797797  8bf1                 mov esi, ecx
// 00797799  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0079779d  83ec30               sub esp, 0x30
// 007977a0  8bc4                 mov eax, esp
// 007977a2  c70600000000         mov dword ptr [esi], 0
// 007977a8  8d542450             lea edx, [esp + 0x50]
// 007977ac  89642434             mov dword ptr [esp + 0x34], esp
// 007977b0  8908                 mov dword ptr [eax], ecx
// 007977b2  8d4808               lea ecx, [eax + 8]
// 007977b5  52                   push edx
// 007977b6  c744244400000000     mov dword ptr [esp + 0x44], 0
// 007977be  e8dde5ffff           call 0x795da0
// 007977c3  8bce                 mov ecx, esi
// 007977c5  e826feffff           call 0x7975f0
// 007977ca  8d4c2420             lea ecx, [esp + 0x20]
// 007977ce  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 007977d6  e8c5e7ffff           call 0x795fa0
// 007977db  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007977df  8bc6                 mov eax, esi
// 007977e1  64890d00000000       mov dword ptr fs:[0], ecx
// 007977e8  5e                   pop esi
// 007977e9  83c410               add esp, 0x10
// 007977ec  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
