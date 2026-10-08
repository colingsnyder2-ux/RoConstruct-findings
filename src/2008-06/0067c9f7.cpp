// roc 2008-06 0067c9f7  unit: Ogre::RbxEntity  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c9f7
//
// 0067c9f7  33db                 xor ebx, ebx
// 0067c9f9  53                   push ebx
// 0067c9fa  53                   push ebx
// 0067c9fb  e88c4b0200           call 0x6a158c
// 0067ca00  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0067ca03  5f                   pop edi
// 0067ca04  5e                   pop esi
// 0067ca05  64890d00000000       mov dword ptr fs:[0], ecx
// 0067ca0c  5b                   pop ebx
// 0067ca0d  8be5                 mov esp, ebp
// 0067ca0f  5d                   pop ebp
// 0067ca10  c3                   ret 
// library ogre-1.7.0/OgreRenderSystem.cpp (function __catch$??$_Uninit_fill_n@PAVPlane@Ogre@@IV12@V?$allocator@VPlane@Ogre@@@std@@@std@@YAXPAVPlane@Ogre@@IABV12@AAV?$allocator@VPlane@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z$0)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderSystem.cpp
