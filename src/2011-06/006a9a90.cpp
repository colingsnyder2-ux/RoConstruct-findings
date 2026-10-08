// roc 2011-06 006a9a90  unit: RBX::VUDim2::?$TypedPropertyDescriptor  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006a9a90
//
// 006a9a90  6aff                 push -1
// 006a9a92  68f8879f00           push 0x9f87f8
// 006a9a97  64a100000000         mov eax, dword ptr fs:[0]
// 006a9a9d  50                   push eax
// 006a9a9e  64892500000000       mov dword ptr fs:[0], esp
// 006a9aa5  51                   push ecx
// 006a9aa6  56                   push esi
// 006a9aa7  8bf1                 mov esi, ecx
// 006a9aa9  8d442418             lea eax, [esp + 0x18]
// 006a9aad  50                   push eax
// 006a9aae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a9ab6  e8c5ac0500           call 0x704780
// 006a9abb  83c404               add esp, 4
// 006a9abe  84c0                 test al, al
// 006a9ac0  7556                 jne 0x6a9b18
// 006a9ac2  8b542440             mov edx, dword ptr [esp + 0x40]
// 006a9ac6  88442404             mov byte ptr [esp + 4], al
// 006a9aca  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a9ace  51                   push ecx
// 006a9acf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006a9ad3  52                   push edx
// 006a9ad4  83ec28               sub esp, 0x28
// 006a9ad7  8bc4                 mov eax, esp
// 006a9ad9  8d54244c             lea edx, [esp + 0x4c]
// 006a9add  89642470             mov dword ptr [esp + 0x70], esp
// 006a9ae1  8908                 mov dword ptr [eax], ecx
// 006a9ae3  8d4804               lea ecx, [eax + 4]
// 006a9ae6  52                   push edx
// 006a9ae7  e8f4e20800           call 0x737de0
// 006a9aec  8bce                 mov ecx, esi
// 006a9aee  e84d000000           call 0x6a9b40
// 006a9af3  8d4c241c             lea ecx, [esp + 0x1c]
// 006a9af7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a9aff  e84cd10800           call 0x736c50
// 006a9b04  b001                 mov al, 1
// 006a9b06  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a9b0a  64890d00000000       mov dword ptr fs:[0], ecx
// 006a9b11  5e                   pop esi
// 006a9b12  83c410               add esp, 0x10
// 006a9b15  c23000               ret 0x30
// 006a9b18  8d4c241c             lea ecx, [esp + 0x1c]
// 006a9b1c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006a9b24  e827d10800           call 0x736c50
// 006a9b29  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a9b2d  32c0                 xor al, al
// 006a9b2f  64890d00000000       mov dword ptr fs:[0], ecx
// 006a9b36  5e                   pop esi
// 006a9b37  83c410               add esp, 0x10
// 006a9b3a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
