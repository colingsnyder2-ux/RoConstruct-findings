// roc 2012-06 004bd0b0  unit: RBX::ViewRbxGfx  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004bd0b0
//
// 004bd0b0  6aff                 push -1
// 004bd0b2  6838f4ab00           push 0xabf438
// 004bd0b7  64a100000000         mov eax, dword ptr fs:[0]
// 004bd0bd  50                   push eax
// 004bd0be  64892500000000       mov dword ptr fs:[0], esp
// 004bd0c5  51                   push ecx
// 004bd0c6  56                   push esi
// 004bd0c7  8bf1                 mov esi, ecx
// 004bd0c9  8d442418             lea eax, [esp + 0x18]
// 004bd0cd  50                   push eax
// 004bd0ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 004bd0d6  e8553e3c00           call 0x880f30
// 004bd0db  83c404               add esp, 4
// 004bd0de  84c0                 test al, al
// 004bd0e0  7556                 jne 0x4bd138
// 004bd0e2  8b542440             mov edx, dword ptr [esp + 0x40]
// 004bd0e6  88442404             mov byte ptr [esp + 4], al
// 004bd0ea  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004bd0ee  51                   push ecx
// 004bd0ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004bd0f3  52                   push edx
// 004bd0f4  83ec28               sub esp, 0x28
// 004bd0f7  8bc4                 mov eax, esp
// 004bd0f9  8d54244c             lea edx, [esp + 0x4c]
// 004bd0fd  89642470             mov dword ptr [esp + 0x70], esp
// 004bd101  8908                 mov dword ptr [eax], ecx
// 004bd103  8d4804               lea ecx, [eax + 4]
// 004bd106  52                   push edx
// 004bd107  e8542c0600           call 0x51fd60
// 004bd10c  8bce                 mov ecx, esi
// 004bd10e  e88d073400           call 0x7fd8a0
// 004bd113  8d4c241c             lea ecx, [esp + 0x1c]
// 004bd117  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004bd11f  e82c063200           call 0x7dd750
// 004bd124  b001                 mov al, 1
// 004bd126  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bd12a  64890d00000000       mov dword ptr fs:[0], ecx
// 004bd131  5e                   pop esi
// 004bd132  83c410               add esp, 0x10
// 004bd135  c23000               ret 0x30
// 004bd138  8d4c241c             lea ecx, [esp + 0x1c]
// 004bd13c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 004bd144  e807063200           call 0x7dd750
// 004bd149  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004bd14d  32c0                 xor al, al
// 004bd14f  64890d00000000       mov dword ptr fs:[0], ecx
// 004bd156  5e                   pop esi
// 004bd157  83c410               add esp, 0x10
// 004bd15a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
