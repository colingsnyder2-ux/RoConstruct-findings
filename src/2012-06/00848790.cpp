// roc 2012-06 00848790  unit: RBX::LibraryService::VLibraryStateObject::?$sp_counted_impl_p  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00848790
//
// 00848790  6aff                 push -1
// 00848792  6848d8ac00           push 0xacd848
// 00848797  64a100000000         mov eax, dword ptr fs:[0]
// 0084879d  50                   push eax
// 0084879e  64892500000000       mov dword ptr fs:[0], esp
// 008487a5  51                   push ecx
// 008487a6  56                   push esi
// 008487a7  8bf1                 mov esi, ecx
// 008487a9  8d442418             lea eax, [esp + 0x18]
// 008487ad  50                   push eax
// 008487ae  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008487b6  e875870300           call 0x880f30
// 008487bb  83c404               add esp, 4
// 008487be  84c0                 test al, al
// 008487c0  7556                 jne 0x848818
// 008487c2  8b542440             mov edx, dword ptr [esp + 0x40]
// 008487c6  88442404             mov byte ptr [esp + 4], al
// 008487ca  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008487ce  51                   push ecx
// 008487cf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008487d3  52                   push edx
// 008487d4  83ec28               sub esp, 0x28
// 008487d7  8bc4                 mov eax, esp
// 008487d9  8d54244c             lea edx, [esp + 0x4c]
// 008487dd  89642470             mov dword ptr [esp + 0x70], esp
// 008487e1  8908                 mov dword ptr [eax], ecx
// 008487e3  8d4804               lea ecx, [eax + 4]
// 008487e6  52                   push edx
// 008487e7  e844e3ffff           call 0x846b30
// 008487ec  8bce                 mov ecx, esi
// 008487ee  e8bdfaffff           call 0x8482b0
// 008487f3  8d4c241c             lea ecx, [esp + 0x1c]
// 008487f7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 008487ff  e83cdeffff           call 0x846640
// 00848804  b001                 mov al, 1
// 00848806  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084880a  64890d00000000       mov dword ptr fs:[0], ecx
// 00848811  5e                   pop esi
// 00848812  83c410               add esp, 0x10
// 00848815  c23000               ret 0x30
// 00848818  8d4c241c             lea ecx, [esp + 0x1c]
// 0084881c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00848824  e817deffff           call 0x846640
// 00848829  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084882d  32c0                 xor al, al
// 0084882f  64890d00000000       mov dword ptr fs:[0], ecx
// 00848836  5e                   pop esi
// 00848837  83c410               add esp, 0x10
// 0084883a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
