// roc 2010-06 008cf330  unit: Ogre::RbxMeshLoader  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008cf330
//
// 008cf330  6aff                 push -1
// 008cf332  6858a29900           push 0x99a258
// 008cf337  64a100000000         mov eax, dword ptr fs:[0]
// 008cf33d  50                   push eax
// 008cf33e  64892500000000       mov dword ptr fs:[0], esp
// 008cf345  51                   push ecx
// 008cf346  56                   push esi
// 008cf347  8bf1                 mov esi, ecx
// 008cf349  57                   push edi
// 008cf34a  89742408             mov dword ptr [esp + 8], esi
// 008cf34e  8b460c               mov eax, dword ptr [esi + 0xc]
// 008cf351  33ff                 xor edi, edi
// 008cf353  897c2414             mov dword ptr [esp + 0x14], edi
// 008cf357  3bc7                 cmp eax, edi
// 008cf359  741f                 je 0x8cf37a
// 008cf35b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008cf35f  51                   push ecx
// 008cf360  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008cf363  8d5608               lea edx, [esi + 8]
// 008cf366  52                   push edx
// 008cf367  51                   push ecx
// 008cf368  50                   push eax
// 008cf369  e8e2e4ffff           call 0x8cd850
// 008cf36e  8b560c               mov edx, dword ptr [esi + 0xc]
// 008cf371  52                   push edx
// 008cf372  e82386edff           call 0x7a799a
// 008cf377  83c414               add esp, 0x14
// 008cf37a  8b06                 mov eax, dword ptr [esi]
// 008cf37c  50                   push eax
// 008cf37d  897e0c               mov dword ptr [esi + 0xc], edi
// 008cf380  897e10               mov dword ptr [esi + 0x10], edi
// 008cf383  897e14               mov dword ptr [esi + 0x14], edi
// 008cf386  e80f86edff           call 0x7a799a
// 008cf38b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008cf38f  83c404               add esp, 4
// 008cf392  5f                   pop edi
// 008cf393  5e                   pop esi
// 008cf394  64890d00000000       mov dword ptr fs:[0], ecx
// 008cf39b  83c410               add esp, 0x10
// 008cf39e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
