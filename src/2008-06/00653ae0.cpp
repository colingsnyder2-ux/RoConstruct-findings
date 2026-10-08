// from server: 100% by auto
// roc 2008-06 00653ae0  unit: RBX::ScoreHud  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00653ae0
//
// 00653ae0  6aff                 push -1
// 00653ae2  68e8727d00           push 0x7d72e8
// 00653ae7  64a100000000         mov eax, dword ptr fs:[0]
// 00653aed  50                   push eax
// 00653aee  64892500000000       mov dword ptr fs:[0], esp
// 00653af5  51                   push ecx
// 00653af6  56                   push esi
// 00653af7  8bf1                 mov esi, ecx
// 00653af9  57                   push edi
// 00653afa  89742408             mov dword ptr [esp + 8], esi
// 00653afe  8b460c               mov eax, dword ptr [esi + 0xc]
// 00653b01  33ff                 xor edi, edi
// 00653b03  897c2414             mov dword ptr [esp + 0x14], edi
// 00653b07  3bc7                 cmp eax, edi
// 00653b09  741f                 je 0x653b2a
// 00653b0b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00653b0f  51                   push ecx
// 00653b10  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00653b13  8d5608               lea edx, [esi + 8]
// 00653b16  52                   push edx
// 00653b17  51                   push ecx
// 00653b18  50                   push eax
// 00653b19  e822e2ffff           call 0x651d40
// 00653b1e  8b560c               mov edx, dword ptr [esi + 0xc]
// 00653b21  52                   push edx
// 00653b22  e853cb0400           call 0x6a067a
// 00653b27  83c414               add esp, 0x14
// 00653b2a  8b06                 mov eax, dword ptr [esi]
// 00653b2c  50                   push eax
// 00653b2d  897e0c               mov dword ptr [esi + 0xc], edi
// 00653b30  897e10               mov dword ptr [esi + 0x10], edi
// 00653b33  897e14               mov dword ptr [esi + 0x14], edi
// 00653b36  e83fcb0400           call 0x6a067a
// 00653b3b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00653b3f  83c404               add esp, 4
// 00653b42  5f                   pop edi
// 00653b43  5e                   pop esi
// 00653b44  64890d00000000       mov dword ptr fs:[0], ecx
// 00653b4b  83c410               add esp, 0x10
// 00653b4e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
