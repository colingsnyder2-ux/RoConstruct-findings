// roc 2011-06 005ec1b0  unit: boost::io::Vtoo_few_args::U?$error_info_injector::?$clone_impl  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ec1b0
//
// 005ec1b0  6aff                 push -1
// 005ec1b2  6808e49e00           push 0x9ee408
// 005ec1b7  64a100000000         mov eax, dword ptr fs:[0]
// 005ec1bd  50                   push eax
// 005ec1be  64892500000000       mov dword ptr fs:[0], esp
// 005ec1c5  51                   push ecx
// 005ec1c6  56                   push esi
// 005ec1c7  8bf1                 mov esi, ecx
// 005ec1c9  8d442418             lea eax, [esp + 0x18]
// 005ec1cd  50                   push eax
// 005ec1ce  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ec1d6  e8a5851100           call 0x704780
// 005ec1db  83c404               add esp, 4
// 005ec1de  84c0                 test al, al
// 005ec1e0  7558                 jne 0x5ec23a
// 005ec1e2  8b542438             mov edx, dword ptr [esp + 0x38]
// 005ec1e6  88442404             mov byte ptr [esp + 4], al
// 005ec1ea  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec1ee  51                   push ecx
// 005ec1ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ec1f3  52                   push edx
// 005ec1f4  83ec20               sub esp, 0x20
// 005ec1f7  8bc4                 mov eax, esp
// 005ec1f9  8d542444             lea edx, [esp + 0x44]
// 005ec1fd  89642460             mov dword ptr [esp + 0x60], esp
// 005ec201  8908                 mov dword ptr [eax], ecx
// 005ec203  8d4804               lea ecx, [eax + 4]
// 005ec206  52                   push edx
// 005ec207  ff15c804a400         call dword ptr [0xa404c8]
// 005ec20d  8bce                 mov ecx, esi
// 005ec20f  e81cfa0200           call 0x61bc30
// 005ec214  8d4c241c             lea ecx, [esp + 0x1c]
// 005ec218  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ec220  ff15d004a400         call dword ptr [0xa404d0]
// 005ec226  b001                 mov al, 1
// 005ec228  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec22c  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec233  5e                   pop esi
// 005ec234  83c410               add esp, 0x10
// 005ec237  c22800               ret 0x28
// 005ec23a  8d4c241c             lea ecx, [esp + 0x1c]
// 005ec23e  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ec246  ff15d004a400         call dword ptr [0xa404d0]
// 005ec24c  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec250  32c0                 xor al, al
// 005ec252  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec259  5e                   pop esi
// 005ec25a  83c410               add esp, 0x10
// 005ec25d  c22800               ret 0x28
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
