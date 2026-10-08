// roc 2009-12 004aea30  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004aea30
//
// 004aea30  56                   push esi
// 004aea31  8b742408             mov esi, dword ptr [esp + 8]
// 004aea35  33c0                 xor eax, eax
// 004aea37  57                   push edi
// 004aea38  8bf9                 mov edi, ecx
// 004aea3a  89470c               mov dword ptr [edi + 0xc], eax
// 004aea3d  894710               mov dword ptr [edi + 0x10], eax
// 004aea40  894714               mov dword ptr [edi + 0x14], eax
// 004aea43  3bf0                 cmp esi, eax
// 004aea45  7507                 jne 0x4aea4e
// 004aea47  5f                   pop edi
// 004aea48  32c0                 xor al, al
// 004aea4a  5e                   pop esi
// 004aea4b  c20400               ret 4
// 004aea4e  81fec3300c03         cmp esi, 0x30c30c3
// 004aea54  7605                 jbe 0x4aea5b
// 004aea56  e80537f9ff           call 0x442160
// 004aea5b  50                   push eax
// 004aea5c  56                   push esi
// 004aea5d  e82ef8ffff           call 0x4ae290
// 004aea62  6bf654               imul esi, esi, 0x54
// 004aea65  03f0                 add esi, eax
// 004aea67  83c408               add esp, 8
// 004aea6a  89470c               mov dword ptr [edi + 0xc], eax
// 004aea6d  894710               mov dword ptr [edi + 0x10], eax
// 004aea70  897714               mov dword ptr [edi + 0x14], esi
// 004aea73  5f                   pop edi
// 004aea74  b001                 mov al, 1
// 004aea76  5e                   pop esi
// 004aea77  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Buy@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAE_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
