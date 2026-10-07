// roc 2012-06 004df3a0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004df3a0
//
// 004df3a0  51                   push ecx
// 004df3a1  56                   push esi
// 004df3a2  8bf1                 mov esi, ecx
// 004df3a4  8b4604               mov eax, dword ptr [esi + 4]
// 004df3a7  85c0                 test eax, eax
// 004df3a9  741c                 je 0x4df3c7
// 004df3ab  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004df3af  8b5608               mov edx, dword ptr [esi + 8]
// 004df3b2  51                   push ecx
// 004df3b3  56                   push esi
// 004df3b4  52                   push edx
// 004df3b5  50                   push eax
// 004df3b6  e875fcffff           call 0x4df030
// 004df3bb  8b4604               mov eax, dword ptr [esi + 4]
// 004df3be  50                   push eax
// 004df3bf  e8502d4a00           call 0x982114
// 004df3c4  83c414               add esp, 0x14
// 004df3c7  c7460400000000       mov dword ptr [esi + 4], 0
// 004df3ce  c7460800000000       mov dword ptr [esi + 8], 0
// 004df3d5  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004df3dc  5e                   pop esi
// 004df3dd  59                   pop ecx
// 004df3de  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
