// from server: 100% by auto
// roc 2009-06 0048cf00  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 111 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048cf00
//
// 0048cf00  6aff                 push -1
// 0048cf02  6878ef8600           push 0x86ef78
// 0048cf07  64a100000000         mov eax, dword ptr fs:[0]
// 0048cf0d  50                   push eax
// 0048cf0e  64892500000000       mov dword ptr fs:[0], esp
// 0048cf15  51                   push ecx
// 0048cf16  56                   push esi
// 0048cf17  8bf1                 mov esi, ecx
// 0048cf19  57                   push edi
// 0048cf1a  89742408             mov dword ptr [esp + 8], esi
// 0048cf1e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048cf21  33ff                 xor edi, edi
// 0048cf23  897c2414             mov dword ptr [esp + 0x14], edi
// 0048cf27  3bc7                 cmp eax, edi
// 0048cf29  741f                 je 0x48cf4a
// 0048cf2b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048cf2f  51                   push ecx
// 0048cf30  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048cf33  8d5608               lea edx, [esi + 8]
// 0048cf36  52                   push edx
// 0048cf37  51                   push ecx
// 0048cf38  50                   push eax
// 0048cf39  e862f8ffff           call 0x48c7a0
// 0048cf3e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0048cf41  52                   push edx
// 0048cf42  e8ebba2800           call 0x718a32
// 0048cf47  83c414               add esp, 0x14
// 0048cf4a  8b06                 mov eax, dword ptr [esi]
// 0048cf4c  50                   push eax
// 0048cf4d  897e0c               mov dword ptr [esi + 0xc], edi
// 0048cf50  897e10               mov dword ptr [esi + 0x10], edi
// 0048cf53  897e14               mov dword ptr [esi + 0x14], edi
// 0048cf56  e8d7ba2800           call 0x718a32
// 0048cf5b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048cf5f  83c404               add esp, 4
// 0048cf62  5f                   pop edi
// 0048cf63  5e                   pop esi
// 0048cf64  64890d00000000       mov dword ptr fs:[0], ecx
// 0048cf6b  83c410               add esp, 0x10
// 0048cf6e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ??1?$vector@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@V?$allocator@V?$function1@V?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@AAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@V?$allocator@Vfunction_base@boost@@@2@@boost@@@std@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
