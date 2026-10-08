// roc 2012-06 0087a3a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0087a3a0
//
// 0087a3a0  6aff                 push -1
// 0087a3a2  68c801ad00           push 0xad01c8
// 0087a3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0087a3ad  50                   push eax
// 0087a3ae  64892500000000       mov dword ptr fs:[0], esp
// 0087a3b5  51                   push ecx
// 0087a3b6  53                   push ebx
// 0087a3b7  56                   push esi
// 0087a3b8  8bf1                 mov esi, ecx
// 0087a3ba  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0087a3be  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0087a3c2  33c0                 xor eax, eax
// 0087a3c4  89442414             mov dword ptr [esp + 0x14], eax
// 0087a3c8  88442408             mov byte ptr [esp + 8], al
// 0087a3cc  8b442408             mov eax, dword ptr [esp + 8]
// 0087a3d0  50                   push eax
// 0087a3d1  51                   push ecx
// 0087a3d2  83ec28               sub esp, 0x28
// 0087a3d5  8bc4                 mov eax, esp
// 0087a3d7  8910                 mov dword ptr [eax], edx
// 0087a3d9  8d4804               lea ecx, [eax + 4]
// 0087a3dc  8d442450             lea eax, [esp + 0x50]
// 0087a3e0  89642474             mov dword ptr [esp + 0x74], esp
// 0087a3e4  50                   push eax
// 0087a3e5  e886e4ffff           call 0x878870
// 0087a3ea  8bce                 mov ecx, esi
// 0087a3ec  e84ffaffff           call 0x879e40
// 0087a3f1  8d4c2420             lea ecx, [esp + 0x20]
// 0087a3f5  8ad8                 mov bl, al
// 0087a3f7  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0087a3ff  e80cdff6ff           call 0x7e8310
// 0087a404  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087a408  5e                   pop esi
// 0087a409  8ac3                 mov al, bl
// 0087a40b  64890d00000000       mov dword ptr fs:[0], ecx
// 0087a412  5b                   pop ebx
// 0087a413  83c410               add esp, 0x10
// 0087a416  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
