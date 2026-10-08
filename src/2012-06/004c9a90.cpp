// roc 2012-06 004c9a90  unit: Ogre::RBXSSAO::MRTListener  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c9a90
//
// 004c9a90  f644240401           test byte ptr [esp + 4], 1
// 004c9a95  a1802db200           mov eax, dword ptr [0xb22d80]
// 004c9a9a  56                   push esi
// 004c9a9b  8bf1                 mov esi, ecx
// 004c9a9d  8906                 mov dword ptr [esi], eax
// 004c9a9f  7409                 je 0x4c9aaa
// 004c9aa1  56                   push esi
// 004c9aa2  e86d864b00           call 0x982114
// 004c9aa7  83c404               add esp, 4
// 004c9aaa  8bc6                 mov eax, esi
// 004c9aac  5e                   pop esi
// 004c9aad  c20400               ret 4
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??_GOptimisedUtilGeneral@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
