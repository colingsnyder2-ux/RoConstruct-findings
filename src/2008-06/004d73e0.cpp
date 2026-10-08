// roc 2008-06 004d73e0  unit: Ogre::VResource::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d73e0
//
// 004d73e0  56                   push esi
// 004d73e1  8bf1                 mov esi, ecx
// 004d73e3  8b4608               mov eax, dword ptr [esi + 8]
// 004d73e6  c706c46b8200         mov dword ptr [esi], 0x826bc4
// 004d73ec  85c0                 test eax, eax
// 004d73ee  7411                 je 0x4d7401
// 004d73f0  ff08                 dec dword ptr [eax]
// 004d73f2  8b4608               mov eax, dword ptr [esi + 8]
// 004d73f5  833800               cmp dword ptr [eax], 0
// 004d73f8  7507                 jne 0x4d7401
// 004d73fa  8b16                 mov edx, dword ptr [esi]
// 004d73fc  8b4204               mov eax, dword ptr [edx + 4]
// 004d73ff  ffd0                 call eax
// 004d7401  f644240801           test byte ptr [esp + 8], 1
// 004d7406  7409                 je 0x4d7411
// 004d7408  56                   push esi
// 004d7409  e86c921c00           call 0x6a067a
// 004d740e  83c404               add esp, 4
// 004d7411  8bc6                 mov eax, esi
// 004d7413  5e                   pop esi
// 004d7414  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
