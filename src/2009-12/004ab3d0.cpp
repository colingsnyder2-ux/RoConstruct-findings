// roc 2009-12 004ab3d0  unit: Ogre::RbxSceneUpdater  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004ab3d0
//
// 004ab3d0  51                   push ecx
// 004ab3d1  56                   push esi
// 004ab3d2  8bf1                 mov esi, ecx
// 004ab3d4  8b460c               mov eax, dword ptr [esi + 0xc]
// 004ab3d7  85c0                 test eax, eax
// 004ab3d9  741f                 je 0x4ab3fa
// 004ab3db  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ab3df  51                   push ecx
// 004ab3e0  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 004ab3e3  8d5608               lea edx, [esi + 8]
// 004ab3e6  52                   push edx
// 004ab3e7  51                   push ecx
// 004ab3e8  50                   push eax
// 004ab3e9  e842faffff           call 0x4aae30
// 004ab3ee  8b560c               mov edx, dword ptr [esi + 0xc]
// 004ab3f1  52                   push edx
// 004ab3f2  e863843400           call 0x7f385a
// 004ab3f7  83c414               add esp, 0x14
// 004ab3fa  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 004ab401  c7461000000000       mov dword ptr [esi + 0x10], 0
// 004ab408  c7461400000000       mov dword ptr [esi + 0x14], 0
// 004ab40f  5e                   pop esi
// 004ab410  59                   pop ecx
// 004ab411  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
