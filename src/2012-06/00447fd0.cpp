// roc 2012-06 00447fd0  unit: AsyncResult  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00447fd0
//
// 00447fd0  6aff                 push -1
// 00447fd2  6888e0a900           push 0xa9e088
// 00447fd7  64a100000000         mov eax, dword ptr fs:[0]
// 00447fdd  50                   push eax
// 00447fde  64892500000000       mov dword ptr fs:[0], esp
// 00447fe5  51                   push ecx
// 00447fe6  56                   push esi
// 00447fe7  8bf1                 mov esi, ecx
// 00447fe9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00447fed  83ec30               sub esp, 0x30
// 00447ff0  8bc4                 mov eax, esp
// 00447ff2  c70600000000         mov dword ptr [esi], 0
// 00447ff8  8d542450             lea edx, [esp + 0x50]
// 00447ffc  89642434             mov dword ptr [esp + 0x34], esp
// 00448000  8908                 mov dword ptr [eax], ecx
// 00448002  8d4808               lea ecx, [eax + 8]
// 00448005  52                   push edx
// 00448006  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0044800e  e82deaffff           call 0x446a40
// 00448013  8bce                 mov ecx, esi
// 00448015  e846feffff           call 0x447e60
// 0044801a  8d4c2420             lea ecx, [esp + 0x20]
// 0044801e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00448026  e8c5b35200           call 0x9733f0
// 0044802b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0044802f  8bc6                 mov eax, esi
// 00448031  64890d00000000       mov dword ptr fs:[0], ecx
// 00448038  5e                   pop esi
// 00448039  83c410               add esp, 0x10
// 0044803c  c23400               ret 0x34
// library rbxgs/util\boost.cpp (function ??$?0V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@boost@@@?$function0@XV?$allocator@Vfunction_base@boost@@@std@@@boost@@QAE@V?$bind_t@XP6AXV?$shared_ptr@Udata@worker_thread@RBX@@@boost@@ABV?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@2@@ZV?$list2@V?$value@V?$shared_ptr@Udata@worker_thread@RBX@@@boost@@@_bi@boost@@V?$value@V?$function0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@boost@@@23@@_bi@2@@_bi@1@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs util/boost.cpp
