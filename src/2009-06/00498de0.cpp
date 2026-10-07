// roc 2009-06 00498de0  unit: std::D::DU?$char_traits::V?$basic_string::V?$vector::?$SharedPtr  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00498de0
//
// 00498de0  6aff                 push -1
// 00498de2  6878ef8600           push 0x86ef78
// 00498de7  64a100000000         mov eax, dword ptr fs:[0]
// 00498ded  50                   push eax
// 00498dee  64892500000000       mov dword ptr fs:[0], esp
// 00498df5  51                   push ecx
// 00498df6  56                   push esi
// 00498df7  8bf1                 mov esi, ecx
// 00498df9  57                   push edi
// 00498dfa  89742408             mov dword ptr [esp + 8], esi
// 00498dfe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00498e01  33ff                 xor edi, edi
// 00498e03  897c2414             mov dword ptr [esp + 0x14], edi
// 00498e07  3bc7                 cmp eax, edi
// 00498e09  741f                 je 0x498e2a
// 00498e0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00498e0f  51                   push ecx
// 00498e10  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00498e13  8d5608               lea edx, [esi + 8]
// 00498e16  52                   push edx
// 00498e17  51                   push ecx
// 00498e18  50                   push eax
// 00498e19  e852feffff           call 0x498c70
// 00498e1e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00498e21  52                   push edx
// 00498e22  e80bfc2700           call 0x718a32
// 00498e27  83c414               add esp, 0x14
// 00498e2a  8b06                 mov eax, dword ptr [esi]
// 00498e2c  50                   push eax
// 00498e2d  897e0c               mov dword ptr [esi + 0xc], edi
// 00498e30  897e10               mov dword ptr [esi + 0x10], edi
// 00498e33  897e14               mov dword ptr [esi + 0x14], edi
// 00498e36  e8f7fb2700           call 0x718a32
// 00498e3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00498e3f  83c404               add esp, 4
// 00498e42  5f                   pop edi
// 00498e43  5e                   pop esi
// 00498e44  64890d00000000       mov dword ptr fs:[0], ecx
// 00498e4b  83c410               add esp, 0x10
// 00498e4e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
