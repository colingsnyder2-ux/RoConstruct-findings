// from server: 100% by auto
// roc 2011-06 00938ff0  unit: Ogre::VRbxTextureCompositorSceneManager::?$sp_counted_impl_p  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00938ff0
//
// 00938ff0  51                   push ecx
// 00938ff1  56                   push esi
// 00938ff2  8bf1                 mov esi, ecx
// 00938ff4  8b4604               mov eax, dword ptr [esi + 4]
// 00938ff7  85c0                 test eax, eax
// 00938ff9  741c                 je 0x939017
// 00938ffb  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00938fff  8b5608               mov edx, dword ptr [esi + 8]
// 00939002  51                   push ecx
// 00939003  56                   push esi
// 00939004  52                   push edx
// 00939005  50                   push eax
// 00939006  e865fcffff           call 0x938c70
// 0093900b  8b4604               mov eax, dword ptr [esi + 4]
// 0093900e  50                   push eax
// 0093900f  e84410edff           call 0x80a058
// 00939014  83c414               add esp, 0x14
// 00939017  c7460400000000       mov dword ptr [esi + 4], 0
// 0093901e  c7460800000000       mov dword ptr [esi + 8], 0
// 00939025  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0093902c  5e                   pop esi
// 0093902d  59                   pop ecx
// 0093902e  c3                   ret 
// library boost-1.34.1/libs\program_options\src\cmdline.cpp (function ?_Tidy@?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/program_options/src/cmdline.cpp
