// from server: 100% by auto
// roc 2008-06 00443cf0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00443cf0
//
// 00443cf0  6aff                 push -1
// 00443cf2  68e8727d00           push 0x7d72e8
// 00443cf7  64a100000000         mov eax, dword ptr fs:[0]
// 00443cfd  50                   push eax
// 00443cfe  64892500000000       mov dword ptr fs:[0], esp
// 00443d05  51                   push ecx
// 00443d06  56                   push esi
// 00443d07  8bf1                 mov esi, ecx
// 00443d09  57                   push edi
// 00443d0a  89742408             mov dword ptr [esp + 8], esi
// 00443d0e  8b460c               mov eax, dword ptr [esi + 0xc]
// 00443d11  33ff                 xor edi, edi
// 00443d13  897c2414             mov dword ptr [esp + 0x14], edi
// 00443d17  3bc7                 cmp eax, edi
// 00443d19  741f                 je 0x443d3a
// 00443d1b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00443d1f  51                   push ecx
// 00443d20  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00443d23  8d5608               lea edx, [esi + 8]
// 00443d26  52                   push edx
// 00443d27  51                   push ecx
// 00443d28  50                   push eax
// 00443d29  e832fdffff           call 0x443a60
// 00443d2e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00443d31  52                   push edx
// 00443d32  e843c92500           call 0x6a067a
// 00443d37  83c414               add esp, 0x14
// 00443d3a  8b06                 mov eax, dword ptr [esi]
// 00443d3c  50                   push eax
// 00443d3d  897e0c               mov dword ptr [esi + 0xc], edi
// 00443d40  897e10               mov dword ptr [esi + 0x10], edi
// 00443d43  897e14               mov dword ptr [esi + 0x14], edi
// 00443d46  e82fc92500           call 0x6a067a
// 00443d4b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00443d4f  83c404               add esp, 4
// 00443d52  5f                   pop edi
// 00443d53  5e                   pop esi
// 00443d54  64890d00000000       mov dword ptr fs:[0], ecx
// 00443d5b  83c410               add esp, 0x10
// 00443d5e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
