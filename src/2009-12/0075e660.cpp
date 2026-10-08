// roc 2009-12 0075e660  unit: RBX::VLuaDragger::?$FactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0075e660
//
// 0075e660  6aff                 push -1
// 0075e662  68d8c59300           push 0x93c5d8
// 0075e667  64a100000000         mov eax, dword ptr fs:[0]
// 0075e66d  50                   push eax
// 0075e66e  64892500000000       mov dword ptr fs:[0], esp
// 0075e675  51                   push ecx
// 0075e676  56                   push esi
// 0075e677  8bf1                 mov esi, ecx
// 0075e679  57                   push edi
// 0075e67a  89742408             mov dword ptr [esp + 8], esi
// 0075e67e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0075e681  33ff                 xor edi, edi
// 0075e683  897c2414             mov dword ptr [esp + 0x14], edi
// 0075e687  3bc7                 cmp eax, edi
// 0075e689  741f                 je 0x75e6aa
// 0075e68b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0075e68f  51                   push ecx
// 0075e690  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0075e693  8d5608               lea edx, [esi + 8]
// 0075e696  52                   push edx
// 0075e697  51                   push ecx
// 0075e698  50                   push eax
// 0075e699  e80250d6ff           call 0x4c36a0
// 0075e69e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0075e6a1  52                   push edx
// 0075e6a2  e8b3510900           call 0x7f385a
// 0075e6a7  83c414               add esp, 0x14
// 0075e6aa  8b06                 mov eax, dword ptr [esi]
// 0075e6ac  50                   push eax
// 0075e6ad  897e0c               mov dword ptr [esi + 0xc], edi
// 0075e6b0  897e10               mov dword ptr [esi + 0x10], edi
// 0075e6b3  897e14               mov dword ptr [esi + 0x14], edi
// 0075e6b6  e89f510900           call 0x7f385a
// 0075e6bb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0075e6bf  83c404               add esp, 4
// 0075e6c2  5f                   pop edi
// 0075e6c3  5e                   pop esi
// 0075e6c4  64890d00000000       mov dword ptr fs:[0], ecx
// 0075e6cb  83c410               add esp, 0x10
// 0075e6ce  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
