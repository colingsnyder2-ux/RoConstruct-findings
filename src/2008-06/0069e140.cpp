// roc 2008-06 0069e140  unit: Ogre::RbxSceneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0069e140
//
// 0069e140  56                   push esi
// 0069e141  8b742408             mov esi, dword ptr [esp + 8]
// 0069e145  8b06                 mov eax, dword ptr [esi]
// 0069e147  8b5044               mov edx, dword ptr [eax + 0x44]
// 0069e14a  57                   push edi
// 0069e14b  8bf9                 mov edi, ecx
// 0069e14d  8bce                 mov ecx, esi
// 0069e14f  ffd2                 call edx
// 0069e151  50                   push eax
// 0069e152  8bcf                 mov ecx, edi
// 0069e154  e8a7fbffff           call 0x69dd00
// 0069e159  8bf8                 mov edi, eax
// 0069e15b  8b06                 mov eax, dword ptr [esi]
// 0069e15d  8b5040               mov edx, dword ptr [eax + 0x40]
// 0069e160  8bce                 mov ecx, esi
// 0069e162  ffd2                 call edx
// 0069e164  50                   push eax
// 0069e165  8bcf                 mov ecx, edi
// 0069e167  e8a437fdff           call 0x671910
// 0069e16c  5f                   pop edi
// 0069e16d  8930                 mov dword ptr [eax], esi
// 0069e16f  5e                   pop esi
// 0069e170  c20400               ret 4
// library ogre-1.6.4/OgreSceneManager.cpp (function ?injectMovableObject@SceneManager@Ogre@@UAEXPAVMovableObject@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
