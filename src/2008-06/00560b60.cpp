// from server: 100% by auto
// roc 2008-06 00560b60  unit: RBX::VContentProvider::?$DescribedNonCreatable  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00560b60
//
// 00560b60  6aff                 push -1
// 00560b62  68e8727d00           push 0x7d72e8
// 00560b67  64a100000000         mov eax, dword ptr fs:[0]
// 00560b6d  50                   push eax
// 00560b6e  64892500000000       mov dword ptr fs:[0], esp
// 00560b75  51                   push ecx
// 00560b76  56                   push esi
// 00560b77  8bf1                 mov esi, ecx
// 00560b79  57                   push edi
// 00560b7a  89742408             mov dword ptr [esp + 8], esi
// 00560b7e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00560b81  33ff                 xor edi, edi
// 00560b83  897c2414             mov dword ptr [esp + 0x14], edi
// 00560b87  3bc7                 cmp eax, edi
// 00560b89  741f                 je 0x560baa
// 00560b8b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00560b8f  51                   push ecx
// 00560b90  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00560b93  8d5608               lea edx, [esi + 8]
// 00560b96  52                   push edx
// 00560b97  51                   push ecx
// 00560b98  50                   push eax
// 00560b99  e812eaffff           call 0x55f5b0
// 00560b9e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00560ba1  52                   push edx
// 00560ba2  e8d3fa1300           call 0x6a067a
// 00560ba7  83c414               add esp, 0x14
// 00560baa  8b06                 mov eax, dword ptr [esi]
// 00560bac  50                   push eax
// 00560bad  897e0c               mov dword ptr [esi + 0xc], edi
// 00560bb0  897e10               mov dword ptr [esi + 0x10], edi
// 00560bb3  897e14               mov dword ptr [esi + 0x14], edi
// 00560bb6  e8bffa1300           call 0x6a067a
// 00560bbb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00560bbf  83c404               add esp, 4
// 00560bc2  5f                   pop edi
// 00560bc3  5e                   pop esi
// 00560bc4  64890d00000000       mov dword ptr fs:[0], ecx
// 00560bcb  83c410               add esp, 0x10
// 00560bce  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
