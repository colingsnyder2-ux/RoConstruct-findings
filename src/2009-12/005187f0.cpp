// roc 2009-12 005187f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005187f0
//
// 005187f0  6aff                 push -1
// 005187f2  68f8269500           push 0x9526f8
// 005187f7  64a100000000         mov eax, dword ptr fs:[0]
// 005187fd  50                   push eax
// 005187fe  64892500000000       mov dword ptr fs:[0], esp
// 00518805  51                   push ecx
// 00518806  56                   push esi
// 00518807  8bf1                 mov esi, ecx
// 00518809  8d442418             lea eax, [esp + 0x18]
// 0051880d  50                   push eax
// 0051880e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00518816  e855112400           call 0x759970
// 0051881b  83c404               add esp, 4
// 0051881e  84c0                 test al, al
// 00518820  7556                 jne 0x518878
// 00518822  8b542440             mov edx, dword ptr [esp + 0x40]
// 00518826  88442404             mov byte ptr [esp + 4], al
// 0051882a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0051882e  51                   push ecx
// 0051882f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00518833  52                   push edx
// 00518834  83ec28               sub esp, 0x28
// 00518837  8bc4                 mov eax, esp
// 00518839  8d54244c             lea edx, [esp + 0x4c]
// 0051883d  89642470             mov dword ptr [esp + 0x70], esp
// 00518841  8908                 mov dword ptr [eax], ecx
// 00518843  8d4804               lea ecx, [eax + 4]
// 00518846  52                   push edx
// 00518847  e844022500           call 0x768a90
// 0051884c  8bce                 mov ecx, esi
// 0051884e  e8edf81e00           call 0x708140
// 00518853  8d4c241c             lea ecx, [esp + 0x1c]
// 00518857  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0051885f  e84c861c00           call 0x6e0eb0
// 00518864  b001                 mov al, 1
// 00518866  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051886a  64890d00000000       mov dword ptr fs:[0], ecx
// 00518871  5e                   pop esi
// 00518872  83c410               add esp, 0x10
// 00518875  c23000               ret 0x30
// 00518878  8d4c241c             lea ecx, [esp + 0x1c]
// 0051887c  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00518884  e827861c00           call 0x6e0eb0
// 00518889  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051888d  32c0                 xor al, al
// 0051888f  64890d00000000       mov dword ptr fs:[0], ecx
// 00518896  5e                   pop esi
// 00518897  83c410               add esp, 0x10
// 0051889a  c23000               ret 0x30
// library rbxgs-net/Players.cpp (function ??$assign_to@V?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@boost@@@?$basic_vtable0@W4work_result@worker_thread@RBX@@V?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@W4work_result@worker_thread@RBX@@P6A?AW4123@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@ZV?$list2@V?$value@V?$shared_ptr@Udata@AbuseReporter@Network@RBX@@@boost@@@_bi@boost@@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@23@@_bi@5@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Players.cpp
