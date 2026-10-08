// roc 2009-12 004af3f0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004af3f0
//
// 004af3f0  6aff                 push -1
// 004af3f2  68d8c59300           push 0x93c5d8
// 004af3f7  64a100000000         mov eax, dword ptr fs:[0]
// 004af3fd  50                   push eax
// 004af3fe  64892500000000       mov dword ptr fs:[0], esp
// 004af405  51                   push ecx
// 004af406  56                   push esi
// 004af407  8bf1                 mov esi, ecx
// 004af409  57                   push edi
// 004af40a  89742408             mov dword ptr [esp + 8], esi
// 004af40e  8b460c               mov eax, dword ptr [esi + 0xc]
// 004af411  33ff                 xor edi, edi
// 004af413  897c2414             mov dword ptr [esp + 0x14], edi
// 004af417  3bc7                 cmp eax, edi
// 004af419  741f                 je 0x4af43a
// 004af41b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004af41f  51                   push ecx
// 004af420  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004af423  8d5608               lea edx, [esi + 8]
// 004af426  52                   push edx
// 004af427  51                   push ecx
// 004af428  50                   push eax
// 004af429  e8e2f9ffff           call 0x4aee10
// 004af42e  8b560c               mov edx, dword ptr [esi + 0xc]
// 004af431  52                   push edx
// 004af432  e823443400           call 0x7f385a
// 004af437  83c414               add esp, 0x14
// 004af43a  8b06                 mov eax, dword ptr [esi]
// 004af43c  50                   push eax
// 004af43d  897e0c               mov dword ptr [esi + 0xc], edi
// 004af440  897e10               mov dword ptr [esi + 0x10], edi
// 004af443  897e14               mov dword ptr [esi + 0x14], edi
// 004af446  e80f443400           call 0x7f385a
// 004af44b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004af44f  83c404               add esp, 4
// 004af452  5f                   pop edi
// 004af453  5e                   pop esi
// 004af454  64890d00000000       mov dword ptr fs:[0], ecx
// 004af45b  83c410               add esp, 0x10
// 004af45e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
