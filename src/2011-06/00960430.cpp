// roc 2011-06 00960430  unit: Ogre::RbxSceneUpdater  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00960430
//
// 00960430  51                   push ecx
// 00960431  56                   push esi
// 00960432  8bf1                 mov esi, ecx
// 00960434  8b4604               mov eax, dword ptr [esi + 4]
// 00960437  85c0                 test eax, eax
// 00960439  741c                 je 0x960457
// 0096043b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0096043f  8b5608               mov edx, dword ptr [esi + 8]
// 00960442  51                   push ecx
// 00960443  56                   push esi
// 00960444  52                   push edx
// 00960445  50                   push eax
// 00960446  e8c5feffff           call 0x960310
// 0096044b  8b4604               mov eax, dword ptr [esi + 4]
// 0096044e  50                   push eax
// 0096044f  e8049ceaff           call 0x80a058
// 00960454  83c414               add esp, 0x14
// 00960457  c7460400000000       mov dword ptr [esi + 4], 0
// 0096045e  c7460800000000       mov dword ptr [esi + 8], 0
// 00960465  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0096046c  5e                   pop esi
// 0096046d  59                   pop ecx
// 0096046e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
