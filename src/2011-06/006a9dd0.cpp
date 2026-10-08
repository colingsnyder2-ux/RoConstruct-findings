// roc 2011-06 006a9dd0  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 121 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a9dd0
//
// 006a9dd0  6aff                 push -1
// 006a9dd2  68f8879f00           push 0x9f87f8
// 006a9dd7  64a100000000         mov eax, dword ptr fs:[0]
// 006a9ddd  50                   push eax
// 006a9dde  64892500000000       mov dword ptr fs:[0], esp
// 006a9de5  51                   push ecx
// 006a9de6  53                   push ebx
// 006a9de7  56                   push esi
// 006a9de8  8bf1                 mov esi, ecx
// 006a9dea  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 006a9dee  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006a9df2  33c0                 xor eax, eax
// 006a9df4  89442414             mov dword ptr [esp + 0x14], eax
// 006a9df8  88442408             mov byte ptr [esp + 8], al
// 006a9dfc  8b442408             mov eax, dword ptr [esp + 8]
// 006a9e00  50                   push eax
// 006a9e01  51                   push ecx
// 006a9e02  83ec28               sub esp, 0x28
// 006a9e05  8bc4                 mov eax, esp
// 006a9e07  8910                 mov dword ptr [eax], edx
// 006a9e09  8d4804               lea ecx, [eax + 4]
// 006a9e0c  8d442450             lea eax, [esp + 0x50]
// 006a9e10  89642474             mov dword ptr [esp + 0x74], esp
// 006a9e14  50                   push eax
// 006a9e15  e8c6df0800           call 0x737de0
// 006a9e1a  8bce                 mov ecx, esi
// 006a9e1c  e86ffcffff           call 0x6a9a90
// 006a9e21  8d4c2420             lea ecx, [esp + 0x20]
// 006a9e25  8ad8                 mov bl, al
// 006a9e27  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a9e2f  e81cce0800           call 0x736c50
// 006a9e34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a9e38  5e                   pop esi
// 006a9e39  8ac3                 mov al, bl
// 006a9e3b  64890d00000000       mov dword ptr fs:[0], ecx
// 006a9e42  5b                   pop ebx
// 006a9e43  83c410               add esp, 0x10
// 006a9e46  c22c00               ret 0x2c
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
