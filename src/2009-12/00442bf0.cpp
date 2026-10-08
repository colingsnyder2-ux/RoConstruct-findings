// roc 2009-12 00442bf0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442bf0
//
// 00442bf0  6aff                 push -1
// 00442bf2  68d8c59300           push 0x93c5d8
// 00442bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00442bfd  50                   push eax
// 00442bfe  64892500000000       mov dword ptr fs:[0], esp
// 00442c05  51                   push ecx
// 00442c06  56                   push esi
// 00442c07  8bf1                 mov esi, ecx
// 00442c09  57                   push edi
// 00442c0a  89742408             mov dword ptr [esp + 8], esi
// 00442c0e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00442c11  33ff                 xor edi, edi
// 00442c13  897c2414             mov dword ptr [esp + 0x14], edi
// 00442c17  3bc7                 cmp eax, edi
// 00442c19  741f                 je 0x442c3a
// 00442c1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00442c1f  51                   push ecx
// 00442c20  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00442c23  8d5608               lea edx, [esi + 8]
// 00442c26  52                   push edx
// 00442c27  51                   push ecx
// 00442c28  50                   push eax
// 00442c29  e802fdffff           call 0x442930
// 00442c2e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00442c31  52                   push edx
// 00442c32  e8230c3b00           call 0x7f385a
// 00442c37  83c414               add esp, 0x14
// 00442c3a  8b06                 mov eax, dword ptr [esi]
// 00442c3c  50                   push eax
// 00442c3d  897e0c               mov dword ptr [esi + 0xc], edi
// 00442c40  897e10               mov dword ptr [esi + 0x10], edi
// 00442c43  897e14               mov dword ptr [esi + 0x14], edi
// 00442c46  e80f0c3b00           call 0x7f385a
// 00442c4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00442c4f  83c404               add esp, 4
// 00442c52  5f                   pop edi
// 00442c53  5e                   pop esi
// 00442c54  64890d00000000       mov dword ptr fs:[0], ecx
// 00442c5b  83c410               add esp, 0x10
// 00442c5e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
