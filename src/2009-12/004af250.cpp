// roc 2009-12 004af250  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004af250
//
// 004af250  51                   push ecx
// 004af251  56                   push esi
// 004af252  8bf1                 mov esi, ecx
// 004af254  8b460c               mov eax, dword ptr [esi + 0xc]
// 004af257  85c0                 test eax, eax
// 004af259  741f                 je 0x4af27a
// 004af25b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004af25f  51                   push ecx
// 004af260  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004af263  8d5608               lea edx, [esi + 8]
// 004af266  52                   push edx
// 004af267  51                   push ecx
// 004af268  50                   push eax
// 004af269  e8a2fbffff           call 0x4aee10
// 004af26e  8b560c               mov edx, dword ptr [esi + 0xc]
// 004af271  52                   push edx
// 004af272  e8e3453400           call 0x7f385a
// 004af277  83c414               add esp, 0x14
// 004af27a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004af281  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004af288  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004af28f  5e                   pop esi
// 004af290  59                   pop ecx
// 004af291  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
