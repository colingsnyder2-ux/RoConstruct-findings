// from server: 100% by auto
// roc 2010-06 00742aa0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00742aa0
//
// 00742aa0  6aff                 push -1
// 00742aa2  6858a29900           push 0x99a258
// 00742aa7  64a100000000         mov eax, dword ptr fs:[0]
// 00742aad  50                   push eax
// 00742aae  64892500000000       mov dword ptr fs:[0], esp
// 00742ab5  51                   push ecx
// 00742ab6  56                   push esi
// 00742ab7  8bf1                 mov esi, ecx
// 00742ab9  57                   push edi
// 00742aba  89742408             mov dword ptr [esp + 8], esi
// 00742abe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00742ac1  33ff                 xor edi, edi
// 00742ac3  897c2414             mov dword ptr [esp + 0x14], edi
// 00742ac7  3bc7                 cmp eax, edi
// 00742ac9  741f                 je 0x742aea
// 00742acb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00742acf  51                   push ecx
// 00742ad0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00742ad3  8d5608               lea edx, [esi + 8]
// 00742ad6  52                   push edx
// 00742ad7  51                   push ecx
// 00742ad8  50                   push eax
// 00742ad9  e84289f6ff           call 0x6ab420
// 00742ade  8b560c               mov edx, dword ptr [esi + 0xc]
// 00742ae1  52                   push edx
// 00742ae2  e8b34e0600           call 0x7a799a
// 00742ae7  83c414               add esp, 0x14
// 00742aea  8b06                 mov eax, dword ptr [esi]
// 00742aec  50                   push eax
// 00742aed  897e0c               mov dword ptr [esi + 0xc], edi
// 00742af0  897e10               mov dword ptr [esi + 0x10], edi
// 00742af3  897e14               mov dword ptr [esi + 0x14], edi
// 00742af6  e89f4e0600           call 0x7a799a
// 00742afb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00742aff  83c404               add esp, 4
// 00742b02  5f                   pop edi
// 00742b03  5e                   pop esi
// 00742b04  64890d00000000       mov dword ptr fs:[0], ecx
// 00742b0b  83c410               add esp, 0x10
// 00742b0e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
