// roc 2008-06 0067c8e7  unit: Ogre::RbxEntity  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0067c8e7
//
// 0067c8e7  33db                 xor ebx, ebx
// 0067c8e9  53                   push ebx
// 0067c8ea  53                   push ebx
// 0067c8eb  e89c4c0200           call 0x6a158c
// 0067c8f0  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0067c8f3  5f                   pop edi
// 0067c8f4  8bc6                 mov eax, esi
// 0067c8f6  5e                   pop esi
// 0067c8f7  64890d00000000       mov dword ptr fs:[0], ecx
// 0067c8fe  5b                   pop ebx
// 0067c8ff  8be5                 mov esp, ebp
// 0067c901  5d                   pop ebp
// 0067c902  c3                   ret 
// library ogre-1.7.0/OgreRenderSystem.cpp (function __catch$??$_Uninit_copy@PAVPlane@Ogre@@PAV12@V?$allocator@VPlane@Ogre@@@std@@@std@@YAPAVPlane@Ogre@@PAV12@00AAV?$allocator@VPlane@Ogre@@@0@U_Nonscalar_ptr_iterator_tag@0@U_Range_checked_iterator_tag@0@@Z$0)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreRenderSystem.cpp
