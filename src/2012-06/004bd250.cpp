// roc 2012-06 004bd250  unit: RBX::ViewRbxGfx  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004bd250
//
// 004bd250  6aff                 push -1
// 004bd252  6838f4ab00           push 0xabf438
// 004bd257  64a100000000         mov eax, dword ptr fs:[0]
// 004bd25d  50                   push eax
// 004bd25e  64892500000000       mov dword ptr fs:[0], esp
// 004bd265  51                   push ecx
// 004bd266  53                   push ebx
// 004bd267  56                   push esi
// 004bd268  8bf1                 mov esi, ecx
// 004bd26a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 004bd26e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 004bd272  33c0                 xor eax, eax
// 004bd274  89442414             mov dword ptr [esp + 0x14], eax
// 004bd278  88442408             mov byte ptr [esp + 8], al
// 004bd27c  8b442408             mov eax, dword ptr [esp + 8]
// 004bd280  50                   push eax
// 004bd281  51                   push ecx
// 004bd282  83ec28               sub esp, 0x28
// 004bd285  8bc4                 mov eax, esp
// 004bd287  8910                 mov dword ptr [eax], edx
// 004bd289  8d4804               lea ecx, [eax + 4]
// 004bd28c  8d442450             lea eax, [esp + 0x50]
// 004bd290  89642474             mov dword ptr [esp + 0x74], esp
// 004bd294  50                   push eax
// 004bd295  e8c62a0600           call 0x51fd60
// 004bd29a  8bce                 mov ecx, esi
// 004bd29c  e80ffeffff           call 0x4bd0b0
// 004bd2a1  8d4c2420             lea ecx, [esp + 0x20]
// 004bd2a5  8ad8                 mov bl, al
// 004bd2a7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 004bd2af  e89c043200           call 0x7dd750
// 004bd2b4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004bd2b8  5e                   pop esi
// 004bd2b9  8ac3                 mov al, bl
// 004bd2bb  64890d00000000       mov dword ptr fs:[0], ecx
// 004bd2c2  5b                   pop ebx
// 004bd2c3  83c410               add esp, 0x10
// 004bd2c6  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
