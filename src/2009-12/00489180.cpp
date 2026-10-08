// roc 2009-12 00489180  unit: Ogre::GfxClustererPart  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00489180
//
// 00489180  6aff                 push -1
// 00489182  68d8c59300           push 0x93c5d8
// 00489187  64a100000000         mov eax, dword ptr fs:[0]
// 0048918d  50                   push eax
// 0048918e  64892500000000       mov dword ptr fs:[0], esp
// 00489195  51                   push ecx
// 00489196  56                   push esi
// 00489197  8bf1                 mov esi, ecx
// 00489199  57                   push edi
// 0048919a  89742408             mov dword ptr [esp + 8], esi
// 0048919e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004891a1  33ff                 xor edi, edi
// 004891a3  897c2414             mov dword ptr [esp + 0x14], edi
// 004891a7  3bc7                 cmp eax, edi
// 004891a9  741f                 je 0x4891ca
// 004891ab  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004891af  51                   push ecx
// 004891b0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004891b3  8d5608               lea edx, [esi + 8]
// 004891b6  52                   push edx
// 004891b7  51                   push ecx
// 004891b8  50                   push eax
// 004891b9  e822dcffff           call 0x486de0
// 004891be  8b560c               mov edx, dword ptr [esi + 0xc]
// 004891c1  52                   push edx
// 004891c2  e893a63600           call 0x7f385a
// 004891c7  83c414               add esp, 0x14
// 004891ca  8b06                 mov eax, dword ptr [esi]
// 004891cc  50                   push eax
// 004891cd  897e0c               mov dword ptr [esi + 0xc], edi
// 004891d0  897e10               mov dword ptr [esi + 0x10], edi
// 004891d3  897e14               mov dword ptr [esi + 0x14], edi
// 004891d6  e87fa63600           call 0x7f385a
// 004891db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004891df  83c404               add esp, 4
// 004891e2  5f                   pop edi
// 004891e3  5e                   pop esi
// 004891e4  64890d00000000       mov dword ptr fs:[0], ecx
// 004891eb  83c410               add esp, 0x10
// 004891ee  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
