// roc 2012-06 006d8140  unit: boost::io::Vtoo_many_args::U?$error_info_injector::?$clone_impl  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006d8140
//
// 006d8140  6aff                 push -1
// 006d8142  682859ac00           push 0xac5928
// 006d8147  64a100000000         mov eax, dword ptr fs:[0]
// 006d814d  50                   push eax
// 006d814e  64892500000000       mov dword ptr fs:[0], esp
// 006d8155  51                   push ecx
// 006d8156  53                   push ebx
// 006d8157  56                   push esi
// 006d8158  8bf1                 mov esi, ecx
// 006d815a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006d815e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006d8162  33c0                 xor eax, eax
// 006d8164  89442414             mov dword ptr [esp + 0x14], eax
// 006d8168  88442408             mov byte ptr [esp + 8], al
// 006d816c  8b442408             mov eax, dword ptr [esp + 8]
// 006d8170  50                   push eax
// 006d8171  51                   push ecx
// 006d8172  83ec20               sub esp, 0x20
// 006d8175  8bc4                 mov eax, esp
// 006d8177  8910                 mov dword ptr [eax], edx
// 006d8179  8d4804               lea ecx, [eax + 4]
// 006d817c  8d442448             lea eax, [esp + 0x48]
// 006d8180  89642464             mov dword ptr [esp + 0x64], esp
// 006d8184  50                   push eax
// 006d8185  ff154426b200         call dword ptr [0xb22644]
// 006d818b  8bce                 mov ecx, esi
// 006d818d  e8def2ffff           call 0x6d7470
// 006d8192  8d4c2420             lea ecx, [esp + 0x20]
// 006d8196  8ad8                 mov bl, al
// 006d8198  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006d81a0  ff153c26b200         call dword ptr [0xb2263c]
// 006d81a6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d81aa  5e                   pop esi
// 006d81ab  8ac3                 mov al, bl
// 006d81ad  64890d00000000       mov dword ptr fs:[0], ecx
// 006d81b4  5b                   pop ebx
// 006d81b5  83c410               add esp, 0x10
// 006d81b8  c22400               ret 0x24
// library rbxgs/v8datamodel\DataModel.cpp (function ??$assign_to@V?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@@?$basic_vtable0@XV?$allocator@Vfunction_base@boost@@@std@@@function@detail@boost@@QAE_NV?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@3@AATfunction_buffer@123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
