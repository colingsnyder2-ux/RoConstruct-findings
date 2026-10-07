// roc 2009-06 0048ca70  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048ca70
//
// 0048ca70  51                   push ecx
// 0048ca71  56                   push esi
// 0048ca72  8bf1                 mov esi, ecx
// 0048ca74  8b460c               mov eax, dword ptr [esi + 0xc]
// 0048ca77  85c0                 test eax, eax
// 0048ca79  741f                 je 0x48ca9a
// 0048ca7b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0048ca7f  51                   push ecx
// 0048ca80  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0048ca83  8d5608               lea edx, [esi + 8]
// 0048ca86  52                   push edx
// 0048ca87  51                   push ecx
// 0048ca88  50                   push eax
// 0048ca89  e812fdffff           call 0x48c7a0
// 0048ca8e  8b560c               mov edx, dword ptr [esi + 0xc]
// 0048ca91  52                   push edx
// 0048ca92  e89bbf2800           call 0x718a32
// 0048ca97  83c414               add esp, 0x14
// 0048ca9a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0048caa1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0048caa8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0048caaf  5e                   pop esi
// 0048cab0  59                   pop ecx
// 0048cab1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
