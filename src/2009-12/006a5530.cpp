// roc 2009-12 006a5530  unit: RBX::VScriptContext::?$FactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a5530
//
// 006a5530  6aff                 push -1
// 006a5532  68d8c59300           push 0x93c5d8
// 006a5537  64a100000000         mov eax, dword ptr fs:[0]
// 006a553d  50                   push eax
// 006a553e  64892500000000       mov dword ptr fs:[0], esp
// 006a5545  51                   push ecx
// 006a5546  56                   push esi
// 006a5547  8bf1                 mov esi, ecx
// 006a5549  57                   push edi
// 006a554a  89742408             mov dword ptr [esp + 8], esi
// 006a554e  8b460c               mov eax, dword ptr [esi + 0xc]
// 006a5551  33ff                 xor edi, edi
// 006a5553  897c2414             mov dword ptr [esp + 0x14], edi
// 006a5557  3bc7                 cmp eax, edi
// 006a5559  741f                 je 0x6a557a
// 006a555b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a555f  51                   push ecx
// 006a5560  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006a5563  8d5608               lea edx, [esi + 8]
// 006a5566  52                   push edx
// 006a5567  51                   push ecx
// 006a5568  50                   push eax
// 006a5569  e8e2f2ffff           call 0x6a4850
// 006a556e  8b560c               mov edx, dword ptr [esi + 0xc]
// 006a5571  52                   push edx
// 006a5572  e8e3e21400           call 0x7f385a
// 006a5577  83c414               add esp, 0x14
// 006a557a  8b06                 mov eax, dword ptr [esi]
// 006a557c  50                   push eax
// 006a557d  897e0c               mov dword ptr [esi + 0xc], edi
// 006a5580  897e10               mov dword ptr [esi + 0x10], edi
// 006a5583  897e14               mov dword ptr [esi + 0x14], edi
// 006a5586  e8cfe21400           call 0x7f385a
// 006a558b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006a558f  83c404               add esp, 4
// 006a5592  5f                   pop edi
// 006a5593  5e                   pop esi
// 006a5594  64890d00000000       mov dword ptr fs:[0], ecx
// 006a559b  83c410               add esp, 0x10
// 006a559e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
