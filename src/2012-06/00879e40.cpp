// roc 2012-06 00879e40  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00879e40
//
// 00879e40  6aff                 push -1
// 00879e42  68c801ad00           push 0xad01c8
// 00879e47  64a100000000         mov eax, dword ptr fs:[0]
// 00879e4d  50                   push eax
// 00879e4e  64892500000000       mov dword ptr fs:[0], esp
// 00879e55  51                   push ecx
// 00879e56  56                   push esi
// 00879e57  8bf1                 mov esi, ecx
// 00879e59  8d442418             lea eax, [esp + 0x18]
// 00879e5d  50                   push eax
// 00879e5e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00879e66  e8c5700000           call 0x880f30
// 00879e6b  83c404               add esp, 4
// 00879e6e  84c0                 test al, al
// 00879e70  7556                 jne 0x879ec8
// 00879e72  8b542440             mov edx, dword ptr [esp + 0x40]
// 00879e76  88442404             mov byte ptr [esp + 4], al
// 00879e7a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00879e7e  51                   push ecx
// 00879e7f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00879e83  52                   push edx
// 00879e84  83ec28               sub esp, 0x28
// 00879e87  8bc4                 mov eax, esp
// 00879e89  8d54244c             lea edx, [esp + 0x4c]
// 00879e8d  89642470             mov dword ptr [esp + 0x70], esp
// 00879e91  8908                 mov dword ptr [eax], ecx
// 00879e93  8d4804               lea ecx, [eax + 4]
// 00879e96  52                   push edx
// 00879e97  e8d4e9ffff           call 0x878870
// 00879e9c  8bce                 mov ecx, esi
// 00879e9e  e85dfff6ff           call 0x7e9e00
// 00879ea3  8d4c241c             lea ecx, [esp + 0x1c]
// 00879ea7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00879eaf  e85ce4f6ff           call 0x7e8310
// 00879eb4  b001                 mov al, 1
// 00879eb6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00879eba  64890d00000000       mov dword ptr fs:[0], ecx
// 00879ec1  5e                   pop esi
// 00879ec2  83c410               add esp, 0x10
// 00879ec5  c23000               ret 0x30
// 00879ec8  8d4c241c             lea ecx, [esp + 0x1c]
// 00879ecc  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00879ed4  e837e4f6ff           call 0x7e8310
// 00879ed9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00879edd  32c0                 xor al, al
// 00879edf  64890d00000000       mov dword ptr fs:[0], ecx
// 00879ee6  5e                   pop esi
// 00879ee7  83c410               add esp, 0x10
// 00879eea  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
