// roc 2011-06 005ec260  unit: boost::io::Vtoo_few_args::U?$error_info_injector::?$clone_impl  size: 176 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ec260
//
// 005ec260  6aff                 push -1
// 005ec262  6828689e00           push 0x9e6828
// 005ec267  64a100000000         mov eax, dword ptr fs:[0]
// 005ec26d  50                   push eax
// 005ec26e  64892500000000       mov dword ptr fs:[0], esp
// 005ec275  51                   push ecx
// 005ec276  56                   push esi
// 005ec277  8bf1                 mov esi, ecx
// 005ec279  8d442418             lea eax, [esp + 0x18]
// 005ec27d  50                   push eax
// 005ec27e  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ec286  e8f5841100           call 0x704780
// 005ec28b  83c404               add esp, 4
// 005ec28e  84c0                 test al, al
// 005ec290  7559                 jne 0x5ec2eb
// 005ec292  8b542454             mov edx, dword ptr [esp + 0x54]
// 005ec296  88442404             mov byte ptr [esp + 4], al
// 005ec29a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005ec29e  51                   push ecx
// 005ec29f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005ec2a3  52                   push edx
// 005ec2a4  83ec3c               sub esp, 0x3c
// 005ec2a7  8bc4                 mov eax, esp
// 005ec2a9  8d542460             lea edx, [esp + 0x60]
// 005ec2ad  89a42498000000       mov dword ptr [esp + 0x98], esp
// 005ec2b4  8908                 mov dword ptr [eax], ecx
// 005ec2b6  8d4804               lea ecx, [eax + 4]
// 005ec2b9  52                   push edx
// 005ec2ba  e82164fcff           call 0x5b26e0
// 005ec2bf  8bce                 mov ecx, esi
// 005ec2c1  e8faecffff           call 0x5eafc0
// 005ec2c6  8d4c241c             lea ecx, [esp + 0x1c]
// 005ec2ca  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ec2d2  e8c962fcff           call 0x5b25a0
// 005ec2d7  b001                 mov al, 1
// 005ec2d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec2dd  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec2e4  5e                   pop esi
// 005ec2e5  83c410               add esp, 0x10
// 005ec2e8  c24400               ret 0x44
// 005ec2eb  8d4c241c             lea ecx, [esp + 0x1c]
// 005ec2ef  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005ec2f7  e8a462fcff           call 0x5b25a0
// 005ec2fc  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ec300  32c0                 xor al, al
// 005ec302  64890d00000000       mov dword ptr fs:[0], ecx
// 005ec309  5e                   pop esi
// 005ec30a  83c410               add esp, 0x10
// 005ec30d  c24400               ret 0x44
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@AAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@Ufunction_obj_tag@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
