// roc 2012-06 004d58b0  unit: Ogre::VRbxSky::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d58b0
//
// 004d58b0  56                   push esi
// 004d58b1  8bf1                 mov esi, ecx
// 004d58b3  8b4608               mov eax, dword ptr [esi + 8]
// 004d58b6  c706307cb600         mov dword ptr [esi], 0xb67c30
// 004d58bc  85c0                 test eax, eax
// 004d58be  7411                 je 0x4d58d1
// 004d58c0  ff08                 dec dword ptr [eax]
// 004d58c2  8b4608               mov eax, dword ptr [esi + 8]
// 004d58c5  833800               cmp dword ptr [eax], 0
// 004d58c8  7507                 jne 0x4d58d1
// 004d58ca  8b16                 mov edx, dword ptr [esi]
// 004d58cc  8b4204               mov eax, dword ptr [edx + 4]
// 004d58cf  ffd0                 call eax
// 004d58d1  f644240801           test byte ptr [esp + 8], 1
// 004d58d6  7409                 je 0x4d58e1
// 004d58d8  56                   push esi
// 004d58d9  e836c84a00           call 0x982114
// 004d58de  83c404               add esp, 4
// 004d58e1  8bc6                 mov eax, esi
// 004d58e3  5e                   pop esi
// 004d58e4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
