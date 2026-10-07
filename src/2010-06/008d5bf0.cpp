// roc 2010-06 008d5bf0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d5bf0
//
// 008d5bf0  56                   push esi
// 008d5bf1  8b742408             mov esi, dword ptr [esp + 8]
// 008d5bf5  33c0                 xor eax, eax
// 008d5bf7  57                   push edi
// 008d5bf8  8bf9                 mov edi, ecx
// 008d5bfa  89470c               mov dword ptr [edi + 0xc], eax
// 008d5bfd  894710               mov dword ptr [edi + 0x10], eax
// 008d5c00  894714               mov dword ptr [edi + 0x14], eax
// 008d5c03  3bf0                 cmp esi, eax
// 008d5c05  7507                 jne 0x8d5c0e
// 008d5c07  5f                   pop edi
// 008d5c08  32c0                 xor al, al
// 008d5c0a  5e                   pop esi
// 008d5c0b  c20400               ret 4
// 008d5c0e  81fec3300c03         cmp esi, 0x30c30c3
// 008d5c14  7605                 jbe 0x8d5c1b
// 008d5c16  e8d5e1b4ff           call 0x423df0
// 008d5c1b  50                   push eax
// 008d5c1c  56                   push esi
// 008d5c1d  e88ef6ffff           call 0x8d52b0
// 008d5c22  6bf654               imul esi, esi, 0x54
// 008d5c25  03f0                 add esi, eax
// 008d5c27  83c408               add esp, 8
// 008d5c2a  89470c               mov dword ptr [edi + 0xc], eax
// 008d5c2d  894710               mov dword ptr [edi + 0x10], eax
// 008d5c30  897714               mov dword ptr [edi + 0x14], esi
// 008d5c33  5f                   pop edi
// 008d5c34  b001                 mov al, 1
// 008d5c36  5e                   pop esi
// 008d5c37  c20400               ret 4
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Buy@?$vector@V?$basic_option@D@program_options@boost@@V?$allocator@V?$basic_option@D@program_options@boost@@@std@@@std@@IAE_NI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
