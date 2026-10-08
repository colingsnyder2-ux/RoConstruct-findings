// roc 2008-06 004d7420  unit: Ogre::VDataStream::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7420
//
// 004d7420  56                   push esi
// 004d7421  8bf1                 mov esi, ecx
// 004d7423  8b4608               mov eax, dword ptr [esi + 8]
// 004d7426  c706b46b8200         mov dword ptr [esi], 0x826bb4
// 004d742c  85c0                 test eax, eax
// 004d742e  7411                 je 0x4d7441
// 004d7430  ff08                 dec dword ptr [eax]
// 004d7432  8b4608               mov eax, dword ptr [esi + 8]
// 004d7435  833800               cmp dword ptr [eax], 0
// 004d7438  7507                 jne 0x4d7441
// 004d743a  8b16                 mov edx, dword ptr [esi]
// 004d743c  8b4204               mov eax, dword ptr [edx + 4]
// 004d743f  ffd0                 call eax
// 004d7441  f644240801           test byte ptr [esp + 8], 1
// 004d7446  7409                 je 0x4d7451
// 004d7448  56                   push esi
// 004d7449  e82c921c00           call 0x6a067a
// 004d744e  83c404               add esp, 4
// 004d7451  8bc6                 mov eax, esi
// 004d7453  5e                   pop esi
// 004d7454  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
