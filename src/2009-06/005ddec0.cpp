// from server: 100% by auto
// roc 2009-06 005ddec0  unit: RBX::VInstance::?$NonFactoryProduct  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ddec0
//
// 005ddec0  6aff                 push -1
// 005ddec2  6878ef8600           push 0x86ef78
// 005ddec7  64a100000000         mov eax, dword ptr fs:[0]
// 005ddecd  50                   push eax
// 005ddece  64892500000000       mov dword ptr fs:[0], esp
// 005dded5  51                   push ecx
// 005dded6  56                   push esi
// 005dded7  8bf1                 mov esi, ecx
// 005dded9  57                   push edi
// 005ddeda  89742408             mov dword ptr [esp + 8], esi
// 005ddede  8b460c               mov eax, dword ptr [esi + 0xc]
// 005ddee1  33ff                 xor edi, edi
// 005ddee3  897c2414             mov dword ptr [esp + 0x14], edi
// 005ddee7  3bc7                 cmp eax, edi
// 005ddee9  741f                 je 0x5ddf0a
// 005ddeeb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ddeef  51                   push ecx
// 005ddef0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005ddef3  8d5608               lea edx, [esi + 8]
// 005ddef6  52                   push edx
// 005ddef7  51                   push ecx
// 005ddef8  50                   push eax
// 005ddef9  e822e8ffff           call 0x5dc720
// 005ddefe  8b560c               mov edx, dword ptr [esi + 0xc]
// 005ddf01  52                   push edx
// 005ddf02  e82bab1300           call 0x718a32
// 005ddf07  83c414               add esp, 0x14
// 005ddf0a  8b06                 mov eax, dword ptr [esi]
// 005ddf0c  50                   push eax
// 005ddf0d  897e0c               mov dword ptr [esi + 0xc], edi
// 005ddf10  897e10               mov dword ptr [esi + 0x10], edi
// 005ddf13  897e14               mov dword ptr [esi + 0x14], edi
// 005ddf16  e817ab1300           call 0x718a32
// 005ddf1b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005ddf1f  83c404               add esp, 4
// 005ddf22  5f                   pop edi
// 005ddf23  5e                   pop esi
// 005ddf24  64890d00000000       mov dword ptr fs:[0], ecx
// 005ddf2b  83c410               add esp, 0x10
// 005ddf2e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
