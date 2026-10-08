// roc 2011-06 006b6b00  unit: RBX::VInsertService::?$FactoryProduct  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006b6b00
//
// 006b6b00  6aff                 push -1
// 006b6b02  6838839f00           push 0x9f8338
// 006b6b07  64a100000000         mov eax, dword ptr fs:[0]
// 006b6b0d  50                   push eax
// 006b6b0e  64892500000000       mov dword ptr fs:[0], esp
// 006b6b15  51                   push ecx
// 006b6b16  53                   push ebx
// 006b6b17  56                   push esi
// 006b6b18  8bf1                 mov esi, ecx
// 006b6b1a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006b6b1e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006b6b22  33c0                 xor eax, eax
// 006b6b24  89442414             mov dword ptr [esp + 0x14], eax
// 006b6b28  88442408             mov byte ptr [esp + 8], al
// 006b6b2c  8b442408             mov eax, dword ptr [esp + 8]
// 006b6b30  50                   push eax
// 006b6b31  51                   push ecx
// 006b6b32  83ec28               sub esp, 0x28
// 006b6b35  8bc4                 mov eax, esp
// 006b6b37  8910                 mov dword ptr [eax], edx
// 006b6b39  8d4804               lea ecx, [eax + 4]
// 006b6b3c  8d442450             lea eax, [esp + 0x50]
// 006b6b40  89642474             mov dword ptr [esp + 0x74], esp
// 006b6b44  50                   push eax
// 006b6b45  e8d6772600           call 0x91e320
// 006b6b4a  8bce                 mov ecx, esi
// 006b6b4c  e89ff4ffff           call 0x6b5ff0
// 006b6b51  8d4c2420             lea ecx, [esp + 0x20]
// 006b6b55  8ad8                 mov bl, al
// 006b6b57  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006b6b5f  e86cd00b00           call 0x773bd0
// 006b6b64  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006b6b68  5e                   pop esi
// 006b6b69  8ac3                 mov al, bl
// 006b6b6b  64890d00000000       mov dword ptr fs:[0], ecx
// 006b6b72  5b                   pop ebx
// 006b6b73  83c410               add esp, 0x10
// 006b6b76  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
