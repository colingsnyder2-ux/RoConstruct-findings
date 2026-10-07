// roc 2009-06 00475e20  unit: Ogre::RbxMeshLoader  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00475e20
//
// 00475e20  f644240401           test byte ptr [esp + 4], 1
// 00475e25  a128078a00           mov eax, dword ptr [0x8a0728]
// 00475e2a  56                   push esi
// 00475e2b  8bf1                 mov esi, ecx
// 00475e2d  8906                 mov dword ptr [esi], eax
// 00475e2f  7409                 je 0x475e3a
// 00475e31  56                   push esi
// 00475e32  e8fb2b2a00           call 0x718a32
// 00475e37  83c404               add esp, 4
// 00475e3a  8bc6                 mov eax, esi
// 00475e3c  5e                   pop esi
// 00475e3d  c20400               ret 4
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??_GOptimisedUtilGeneral@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
