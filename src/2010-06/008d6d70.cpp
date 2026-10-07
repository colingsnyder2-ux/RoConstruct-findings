// roc 2010-06 008d6d70  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d6d70
//
// 008d6d70  6aff                 push -1
// 008d6d72  6858a29900           push 0x99a258
// 008d6d77  64a100000000         mov eax, dword ptr fs:[0]
// 008d6d7d  50                   push eax
// 008d6d7e  64892500000000       mov dword ptr fs:[0], esp
// 008d6d85  51                   push ecx
// 008d6d86  56                   push esi
// 008d6d87  8bf1                 mov esi, ecx
// 008d6d89  57                   push edi
// 008d6d8a  89742408             mov dword ptr [esp + 8], esi
// 008d6d8e  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d6d91  33ff                 xor edi, edi
// 008d6d93  897c2414             mov dword ptr [esp + 0x14], edi
// 008d6d97  3bc7                 cmp eax, edi
// 008d6d99  741f                 je 0x8d6dba
// 008d6d9b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008d6d9f  51                   push ecx
// 008d6da0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008d6da3  8d5608               lea edx, [esi + 8]
// 008d6da6  52                   push edx
// 008d6da7  51                   push ecx
// 008d6da8  50                   push eax
// 008d6da9  e842f5ffff           call 0x8d62f0
// 008d6dae  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d6db1  52                   push edx
// 008d6db2  e8e30bedff           call 0x7a799a
// 008d6db7  83c414               add esp, 0x14
// 008d6dba  8b06                 mov eax, dword ptr [esi]
// 008d6dbc  50                   push eax
// 008d6dbd  897e0c               mov dword ptr [esi + 0xc], edi
// 008d6dc0  897e10               mov dword ptr [esi + 0x10], edi
// 008d6dc3  897e14               mov dword ptr [esi + 0x14], edi
// 008d6dc6  e8cf0bedff           call 0x7a799a
// 008d6dcb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008d6dcf  83c404               add esp, 4
// 008d6dd2  5f                   pop edi
// 008d6dd3  5e                   pop esi
// 008d6dd4  64890d00000000       mov dword ptr fs:[0], ecx
// 008d6ddb  83c410               add esp, 0x10
// 008d6dde  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
