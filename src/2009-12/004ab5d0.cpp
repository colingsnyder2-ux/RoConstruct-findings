// roc 2009-12 004ab5d0  unit: Ogre::RbxSceneUpdater  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ab5d0
//
// 004ab5d0  6aff                 push -1
// 004ab5d2  68d8c59300           push 0x93c5d8
// 004ab5d7  64a100000000         mov eax, dword ptr fs:[0]
// 004ab5dd  50                   push eax
// 004ab5de  64892500000000       mov dword ptr fs:[0], esp
// 004ab5e5  51                   push ecx
// 004ab5e6  56                   push esi
// 004ab5e7  8bf1                 mov esi, ecx
// 004ab5e9  57                   push edi
// 004ab5ea  89742408             mov dword ptr [esp + 8], esi
// 004ab5ee  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ab5f1  33ff                 xor edi, edi
// 004ab5f3  897c2414             mov dword ptr [esp + 0x14], edi
// 004ab5f7  3bc7                 cmp eax, edi
// 004ab5f9  741f                 je 0x4ab61a
// 004ab5fb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004ab5ff  51                   push ecx
// 004ab600  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ab603  8d5608               lea edx, [esi + 8]
// 004ab606  52                   push edx
// 004ab607  51                   push ecx
// 004ab608  50                   push eax
// 004ab609  e822f8ffff           call 0x4aae30
// 004ab60e  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ab611  52                   push edx
// 004ab612  e843823400           call 0x7f385a
// 004ab617  83c414               add esp, 0x14
// 004ab61a  8b06                 mov eax, dword ptr [esi]
// 004ab61c  50                   push eax
// 004ab61d  897e0c               mov dword ptr [esi + 0xc], edi
// 004ab620  897e10               mov dword ptr [esi + 0x10], edi
// 004ab623  897e14               mov dword ptr [esi + 0x14], edi
// 004ab626  e82f823400           call 0x7f385a
// 004ab62b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ab62f  83c404               add esp, 4
// 004ab632  5f                   pop edi
// 004ab633  5e                   pop esi
// 004ab634  64890d00000000       mov dword ptr fs:[0], ecx
// 004ab63b  83c410               add esp, 0x10
// 004ab63e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
