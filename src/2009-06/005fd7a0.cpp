// roc 2009-06 005fd7a0  unit: RBX::VInstance::?$NonFactoryProduct  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005fd7a0
//
// 005fd7a0  6aff                 push -1
// 005fd7a2  6818c18500           push 0x85c118
// 005fd7a7  64a100000000         mov eax, dword ptr fs:[0]
// 005fd7ad  50                   push eax
// 005fd7ae  64892500000000       mov dword ptr fs:[0], esp
// 005fd7b5  51                   push ecx
// 005fd7b6  56                   push esi
// 005fd7b7  8bf1                 mov esi, ecx
// 005fd7b9  8d442418             lea eax, [esp + 0x18]
// 005fd7bd  50                   push eax
// 005fd7be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005fd7c6  e8e5f00300           call 0x63c8b0
// 005fd7cb  83c404               add esp, 4
// 005fd7ce  84c0                 test al, al
// 005fd7d0  7558                 jne 0x5fd82a
// 005fd7d2  8b542438             mov edx, dword ptr [esp + 0x38]
// 005fd7d6  88442404             mov byte ptr [esp + 4], al
// 005fd7da  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005fd7de  51                   push ecx
// 005fd7df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005fd7e3  52                   push edx
// 005fd7e4  83ec20               sub esp, 0x20
// 005fd7e7  8bc4                 mov eax, esp
// 005fd7e9  8d542444             lea edx, [esp + 0x44]
// 005fd7ed  89642460             mov dword ptr [esp + 0x60], esp
// 005fd7f1  8908                 mov dword ptr [eax], ecx
// 005fd7f3  8d4804               lea ecx, [eax + 4]
// 005fd7f6  52                   push edx
// 005fd7f7  ff15b8e48900         call dword ptr [0x89e4b8]
// 005fd7fd  8bce                 mov ecx, esi
// 005fd7ff  e86cf6ffff           call 0x5fce70
// 005fd804  8d4c241c             lea ecx, [esp + 0x1c]
// 005fd808  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd810  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fd816  b001                 mov al, 1
// 005fd818  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd81c  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd823  5e                   pop esi
// 005fd824  83c410               add esp, 0x10
// 005fd827  c22800               ret 0x28
// 005fd82a  8d4c241c             lea ecx, [esp + 0x1c]
// 005fd82e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005fd836  ff15c4e48900         call dword ptr [0x89e4c4]
// 005fd83c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005fd840  32c0                 xor al, al
// 005fd842  64890d00000000       mov dword ptr fs:[0], ecx
// 005fd849  5e                   pop esi
// 005fd84a  83c410               add esp, 0x10
// 005fd84d  c22800               ret 0x28
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
