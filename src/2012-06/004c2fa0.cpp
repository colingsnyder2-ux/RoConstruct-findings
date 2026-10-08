// roc 2012-06 004c2fa0  unit: Ogre::VDataStream::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c2fa0
//
// 004c2fa0  56                   push esi
// 004c2fa1  8bf1                 mov esi, ecx
// 004c2fa3  8b4608               mov eax, dword ptr [esi + 8]
// 004c2fa6  c706985cb600         mov dword ptr [esi], 0xb65c98
// 004c2fac  85c0                 test eax, eax
// 004c2fae  7411                 je 0x4c2fc1
// 004c2fb0  ff08                 dec dword ptr [eax]
// 004c2fb2  8b4608               mov eax, dword ptr [esi + 8]
// 004c2fb5  833800               cmp dword ptr [eax], 0
// 004c2fb8  7507                 jne 0x4c2fc1
// 004c2fba  8b16                 mov edx, dword ptr [esi]
// 004c2fbc  8b4204               mov eax, dword ptr [edx + 4]
// 004c2fbf  ffd0                 call eax
// 004c2fc1  f644240801           test byte ptr [esp + 8], 1
// 004c2fc6  7409                 je 0x4c2fd1
// 004c2fc8  56                   push esi
// 004c2fc9  e846f14b00           call 0x982114
// 004c2fce  83c404               add esp, 4
// 004c2fd1  8bc6                 mov eax, esi
// 004c2fd3  5e                   pop esi
// 004c2fd4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
