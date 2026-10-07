// roc 2009-06 0048a970  unit: Ogre::VDataStream::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048a970
//
// 0048a970  56                   push esi
// 0048a971  8bf1                 mov esi, ecx
// 0048a973  8b4608               mov eax, dword ptr [esi + 8]
// 0048a976  c70674f28b00         mov dword ptr [esi], 0x8bf274
// 0048a97c  85c0                 test eax, eax
// 0048a97e  7411                 je 0x48a991
// 0048a980  ff08                 dec dword ptr [eax]
// 0048a982  8b4608               mov eax, dword ptr [esi + 8]
// 0048a985  833800               cmp dword ptr [eax], 0
// 0048a988  7507                 jne 0x48a991
// 0048a98a  8b16                 mov edx, dword ptr [esi]
// 0048a98c  8b4204               mov eax, dword ptr [edx + 4]
// 0048a98f  ffd0                 call eax
// 0048a991  f644240801           test byte ptr [esp + 8], 1
// 0048a996  7409                 je 0x48a9a1
// 0048a998  56                   push esi
// 0048a999  e894e02800           call 0x718a32
// 0048a99e  83c404               add esp, 4
// 0048a9a1  8bc6                 mov eax, esi
// 0048a9a3  5e                   pop esi
// 0048a9a4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
