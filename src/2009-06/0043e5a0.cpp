// roc 2009-06 0043e5a0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043e5a0
//
// 0043e5a0  6aff                 push -1
// 0043e5a2  6878ef8600           push 0x86ef78
// 0043e5a7  64a100000000         mov eax, dword ptr fs:[0]
// 0043e5ad  50                   push eax
// 0043e5ae  64892500000000       mov dword ptr fs:[0], esp
// 0043e5b5  51                   push ecx
// 0043e5b6  56                   push esi
// 0043e5b7  8bf1                 mov esi, ecx
// 0043e5b9  57                   push edi
// 0043e5ba  89742408             mov dword ptr [esp + 8], esi
// 0043e5be  8b460c               mov eax, dword ptr [esi + 0xc]
// 0043e5c1  33ff                 xor edi, edi
// 0043e5c3  897c2414             mov dword ptr [esp + 0x14], edi
// 0043e5c7  3bc7                 cmp eax, edi
// 0043e5c9  741f                 je 0x43e5ea
// 0043e5cb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043e5cf  51                   push ecx
// 0043e5d0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0043e5d3  8d5608               lea edx, [esi + 8]
// 0043e5d6  52                   push edx
// 0043e5d7  51                   push ecx
// 0043e5d8  50                   push eax
// 0043e5d9  e802fdffff           call 0x43e2e0
// 0043e5de  8b560c               mov edx, dword ptr [esi + 0xc]
// 0043e5e1  52                   push edx
// 0043e5e2  e84ba42d00           call 0x718a32
// 0043e5e7  83c414               add esp, 0x14
// 0043e5ea  8b06                 mov eax, dword ptr [esi]
// 0043e5ec  50                   push eax
// 0043e5ed  897e0c               mov dword ptr [esi + 0xc], edi
// 0043e5f0  897e10               mov dword ptr [esi + 0x10], edi
// 0043e5f3  897e14               mov dword ptr [esi + 0x14], edi
// 0043e5f6  e837a42d00           call 0x718a32
// 0043e5fb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0043e5ff  83c404               add esp, 4
// 0043e602  5f                   pop edi
// 0043e603  5e                   pop esi
// 0043e604  64890d00000000       mov dword ptr fs:[0], ecx
// 0043e60b  83c410               add esp, 0x10
// 0043e60e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
