// roc 2010-06 006f0ac0  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f0ac0
//
// 006f0ac0  6aff                 push -1
// 006f0ac2  68d80d9a00           push 0x9a0dd8
// 006f0ac7  64a100000000         mov eax, dword ptr fs:[0]
// 006f0acd  50                   push eax
// 006f0ace  64892500000000       mov dword ptr fs:[0], esp
// 006f0ad5  51                   push ecx
// 006f0ad6  56                   push esi
// 006f0ad7  8bf1                 mov esi, ecx
// 006f0ad9  8d442418             lea eax, [esp + 0x18]
// 006f0add  50                   push eax
// 006f0ade  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006f0ae6  e8656c0000           call 0x6f7750
// 006f0aeb  83c404               add esp, 4
// 006f0aee  84c0                 test al, al
// 006f0af0  7556                 jne 0x6f0b48
// 006f0af2  8b542440             mov edx, dword ptr [esp + 0x40]
// 006f0af6  88442404             mov byte ptr [esp + 4], al
// 006f0afa  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006f0afe  51                   push ecx
// 006f0aff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006f0b03  52                   push edx
// 006f0b04  83ec28               sub esp, 0x28
// 006f0b07  8bc4                 mov eax, esp
// 006f0b09  8d54244c             lea edx, [esp + 0x4c]
// 006f0b0d  89642470             mov dword ptr [esp + 0x70], esp
// 006f0b11  8908                 mov dword ptr [eax], ecx
// 006f0b13  8d4804               lea ecx, [eax + 4]
// 006f0b16  52                   push edx
// 006f0b17  e814b5f8ff           call 0x67c030
// 006f0b1c  8bce                 mov ecx, esi
// 006f0b1e  e81df9ffff           call 0x6f0440
// 006f0b23  8d4c241c             lea ecx, [esp + 0x1c]
// 006f0b27  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006f0b2f  e85c14ddff           call 0x4c1f90
// 006f0b34  b001                 mov al, 1
// 006f0b36  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f0b3a  64890d00000000       mov dword ptr fs:[0], ecx
// 006f0b41  5e                   pop esi
// 006f0b42  83c410               add esp, 0x10
// 006f0b45  c23000               ret 0x30
// 006f0b48  8d4c241c             lea ecx, [esp + 0x1c]
// 006f0b4c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 006f0b54  e83714ddff           call 0x4c1f90
// 006f0b59  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006f0b5d  32c0                 xor al, al
// 006f0b5f  64890d00000000       mov dword ptr fs:[0], ecx
// 006f0b66  5e                   pop esi
// 006f0b67  83c410               add esp, 0x10
// 006f0b6a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
