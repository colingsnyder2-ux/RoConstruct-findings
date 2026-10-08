// roc 2008-06 0068d670  unit: Ogre::RbxSceneManager::ShadowCasterSceneQueryListener  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068d670
//
// 0068d670  f644240401           test byte ptr [esp + 4], 1
// 0068d675  a198478000           mov eax, dword ptr [0x804798]
// 0068d67a  56                   push esi
// 0068d67b  8bf1                 mov esi, ecx
// 0068d67d  8906                 mov dword ptr [esi], eax
// 0068d67f  7409                 je 0x68d68a
// 0068d681  56                   push esi
// 0068d682  e8f32f0100           call 0x6a067a
// 0068d687  83c404               add esp, 4
// 0068d68a  8bc6                 mov eax, esi
// 0068d68c  5e                   pop esi
// 0068d68d  c20400               ret 4
// library ogre-1.7.0/OgreOptimisedUtilGeneral.cpp (function ??_GOptimisedUtilGeneral@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreOptimisedUtilGeneral.cpp
