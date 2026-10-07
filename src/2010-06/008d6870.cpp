// roc 2010-06 008d6870  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008d6870
//
// 008d6870  51                   push ecx
// 008d6871  56                   push esi
// 008d6872  8bf1                 mov esi, ecx
// 008d6874  8b460c               mov eax, dword ptr [esi + 0xc]
// 008d6877  85c0                 test eax, eax
// 008d6879  741f                 je 0x8d689a
// 008d687b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 008d687f  51                   push ecx
// 008d6880  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008d6883  8d5608               lea edx, [esi + 8]
// 008d6886  52                   push edx
// 008d6887  51                   push ecx
// 008d6888  50                   push eax
// 008d6889  e862faffff           call 0x8d62f0
// 008d688e  8b560c               mov edx, dword ptr [esi + 0xc]
// 008d6891  52                   push edx
// 008d6892  e80311edff           call 0x7a799a
// 008d6897  83c414               add esp, 0x14
// 008d689a  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 008d68a1  c7461000000000       mov dword ptr [esi + 0x10], 0
// 008d68a8  c7461400000000       mov dword ptr [esi + 0x14], 0
// 008d68af  5e                   pop esi
// 008d68b0  59                   pop ecx
// 008d68b1  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
