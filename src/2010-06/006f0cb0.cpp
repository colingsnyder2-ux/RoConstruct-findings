// roc 2010-06 006f0cb0  unit: RBX::VInstance::?$NonFactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f0cb0
//
// 006f0cb0  6aff                 push -1
// 006f0cb2  68d80d9a00           push 0x9a0dd8
// 006f0cb7  64a100000000         mov eax, dword ptr fs:[0]
// 006f0cbd  50                   push eax
// 006f0cbe  64892500000000       mov dword ptr fs:[0], esp
// 006f0cc5  51                   push ecx
// 006f0cc6  53                   push ebx
// 006f0cc7  56                   push esi
// 006f0cc8  8bf1                 mov esi, ecx
// 006f0cca  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006f0cce  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006f0cd2  33c0                 xor eax, eax
// 006f0cd4  89442414             mov dword ptr [esp + 0x14], eax
// 006f0cd8  88442408             mov byte ptr [esp + 8], al
// 006f0cdc  8b442408             mov eax, dword ptr [esp + 8]
// 006f0ce0  50                   push eax
// 006f0ce1  51                   push ecx
// 006f0ce2  83ec28               sub esp, 0x28
// 006f0ce5  8bc4                 mov eax, esp
// 006f0ce7  8910                 mov dword ptr [eax], edx
// 006f0ce9  8d4804               lea ecx, [eax + 4]
// 006f0cec  8d442450             lea eax, [esp + 0x50]
// 006f0cf0  89642474             mov dword ptr [esp + 0x74], esp
// 006f0cf4  50                   push eax
// 006f0cf5  e836b3f8ff           call 0x67c030
// 006f0cfa  8bce                 mov ecx, esi
// 006f0cfc  e8bffdffff           call 0x6f0ac0
// 006f0d01  8d4c2420             lea ecx, [esp + 0x20]
// 006f0d05  8ad8                 mov bl, al
// 006f0d07  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006f0d0f  e87c12ddff           call 0x4c1f90
// 006f0d14  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006f0d18  5e                   pop esi
// 006f0d19  8ac3                 mov al, bl
// 006f0d1b  64890d00000000       mov dword ptr fs:[0], ecx
// 006f0d22  5b                   pop ebx
// 006f0d23  83c410               add esp, 0x10
// 006f0d26  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
