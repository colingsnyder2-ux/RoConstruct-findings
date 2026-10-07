// roc 2008-06 004a7fa0  unit: RBX::VHint::?$FactoryProduct::Creator  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a7fa0
//
// 004a7fa0  6aff                 push -1
// 004a7fa2  68e8727d00           push 0x7d72e8
// 004a7fa7  64a100000000         mov eax, dword ptr fs:[0]
// 004a7fad  50                   push eax
// 004a7fae  64892500000000       mov dword ptr fs:[0], esp
// 004a7fb5  51                   push ecx
// 004a7fb6  56                   push esi
// 004a7fb7  8bf1                 mov esi, ecx
// 004a7fb9  57                   push edi
// 004a7fba  89742408             mov dword ptr [esp + 8], esi
// 004a7fbe  8b460c               mov eax, dword ptr [esi + 0xc]
// 004a7fc1  33ff                 xor edi, edi
// 004a7fc3  897c2414             mov dword ptr [esp + 0x14], edi
// 004a7fc7  3bc7                 cmp eax, edi
// 004a7fc9  741f                 je 0x4a7fea
// 004a7fcb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a7fcf  51                   push ecx
// 004a7fd0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004a7fd3  8d5608               lea edx, [esi + 8]
// 004a7fd6  52                   push edx
// 004a7fd7  51                   push ecx
// 004a7fd8  50                   push eax
// 004a7fd9  e802faffff           call 0x4a79e0
// 004a7fde  8b560c               mov edx, dword ptr [esi + 0xc]
// 004a7fe1  52                   push edx
// 004a7fe2  e893861f00           call 0x6a067a
// 004a7fe7  83c414               add esp, 0x14
// 004a7fea  8b06                 mov eax, dword ptr [esi]
// 004a7fec  50                   push eax
// 004a7fed  897e0c               mov dword ptr [esi + 0xc], edi
// 004a7ff0  897e10               mov dword ptr [esi + 0x10], edi
// 004a7ff3  897e14               mov dword ptr [esi + 0x14], edi
// 004a7ff6  e87f861f00           call 0x6a067a
// 004a7ffb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a7fff  83c404               add esp, 4
// 004a8002  5f                   pop edi
// 004a8003  5e                   pop esi
// 004a8004  64890d00000000       mov dword ptr fs:[0], ecx
// 004a800b  83c410               add esp, 0x10
// 004a800e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
