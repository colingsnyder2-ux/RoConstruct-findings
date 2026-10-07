// roc 2009-06 00473c90  unit: Ogre::VResource::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473c90
//
// 00473c90  56                   push esi
// 00473c91  8bf1                 mov esi, ecx
// 00473c93  8b4608               mov eax, dword ptr [esi + 8]
// 00473c96  c70604dc8b00         mov dword ptr [esi], 0x8bdc04
// 00473c9c  85c0                 test eax, eax
// 00473c9e  7411                 je 0x473cb1
// 00473ca0  ff08                 dec dword ptr [eax]
// 00473ca2  8b4608               mov eax, dword ptr [esi + 8]
// 00473ca5  833800               cmp dword ptr [eax], 0
// 00473ca8  7507                 jne 0x473cb1
// 00473caa  8b16                 mov edx, dword ptr [esi]
// 00473cac  8b4204               mov eax, dword ptr [edx + 4]
// 00473caf  ffd0                 call eax
// 00473cb1  f644240801           test byte ptr [esp + 8], 1
// 00473cb6  7409                 je 0x473cc1
// 00473cb8  56                   push esi
// 00473cb9  e8744d2a00           call 0x718a32
// 00473cbe  83c404               add esp, 4
// 00473cc1  8bc6                 mov eax, esi
// 00473cc3  5e                   pop esi
// 00473cc4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
