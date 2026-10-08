// roc 2011-06 005ecdf0  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005ecdf0
//
// 005ecdf0  6aff                 push -1
// 005ecdf2  6828689e00           push 0x9e6828
// 005ecdf7  64a100000000         mov eax, dword ptr fs:[0]
// 005ecdfd  50                   push eax
// 005ecdfe  64892500000000       mov dword ptr fs:[0], esp
// 005ece05  51                   push ecx
// 005ece06  53                   push ebx
// 005ece07  56                   push esi
// 005ece08  8bf1                 mov esi, ecx
// 005ece0a  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 005ece0e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005ece12  33c0                 xor eax, eax
// 005ece14  89442414             mov dword ptr [esp + 0x14], eax
// 005ece18  88442408             mov byte ptr [esp + 8], al
// 005ece1c  8b442408             mov eax, dword ptr [esp + 8]
// 005ece20  50                   push eax
// 005ece21  51                   push ecx
// 005ece22  83ec3c               sub esp, 0x3c
// 005ece25  8bc4                 mov eax, esp
// 005ece27  8910                 mov dword ptr [eax], edx
// 005ece29  8d4804               lea ecx, [eax + 4]
// 005ece2c  8d442464             lea eax, [esp + 0x64]
// 005ece30  89a4249c000000       mov dword ptr [esp + 0x9c], esp
// 005ece37  50                   push eax
// 005ece38  e8a358fcff           call 0x5b26e0
// 005ece3d  8bce                 mov ecx, esi
// 005ece3f  e81cf4ffff           call 0x5ec260
// 005ece44  8d4c2420             lea ecx, [esp + 0x20]
// 005ece48  8ad8                 mov bl, al
// 005ece4a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005ece52  e84957fcff           call 0x5b25a0
// 005ece57  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ece5b  5e                   pop esi
// 005ece5c  8ac3                 mov al, bl
// 005ece5e  64890d00000000       mov dword ptr fs:[0], ecx
// 005ece65  5b                   pop ebx
// 005ece66  83c410               add esp, 0x10
// 005ece69  c24000               ret 0x40
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@0@ZV?$list2@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@V123@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
