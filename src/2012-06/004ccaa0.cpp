// roc 2012-06 004ccaa0  unit: Ogre::RbxMeshLoader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ccaa0
//
// 004ccaa0  f644240401           test byte ptr [esp + 4], 1
// 004ccaa5  a19839b200           mov eax, dword ptr [0xb23998]
// 004ccaaa  56                   push esi
// 004ccaab  8bf1                 mov esi, ecx
// 004ccaad  8906                 mov dword ptr [esi], eax
// 004ccaaf  7409                 je 0x4ccaba
// 004ccab1  56                   push esi
// 004ccab2  e85d564b00           call 0x982114
// 004ccab7  83c404               add esp, 4
// 004ccaba  8bc6                 mov eax, esi
// 004ccabc  5e                   pop esi
// 004ccabd  c20400               ret 4
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??_GOptimisedUtilGeneral@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
