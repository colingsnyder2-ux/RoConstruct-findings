// roc 2009-06 00498460  unit: Ogre::UFileInfo::V?$vector::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00498460
//
// 00498460  56                   push esi
// 00498461  8bf1                 mov esi, ecx
// 00498463  8b4608               mov eax, dword ptr [esi + 8]
// 00498466  c706e0fb8b00         mov dword ptr [esi], 0x8bfbe0
// 0049846c  85c0                 test eax, eax
// 0049846e  7411                 je 0x498481
// 00498470  ff08                 dec dword ptr [eax]
// 00498472  8b4608               mov eax, dword ptr [esi + 8]
// 00498475  833800               cmp dword ptr [eax], 0
// 00498478  7507                 jne 0x498481
// 0049847a  8b16                 mov edx, dword ptr [esi]
// 0049847c  8b4204               mov eax, dword ptr [edx + 4]
// 0049847f  ffd0                 call eax
// 00498481  f644240801           test byte ptr [esp + 8], 1
// 00498486  7409                 je 0x498491
// 00498488  56                   push esi
// 00498489  e8a4052800           call 0x718a32
// 0049848e  83c404               add esp, 4
// 00498491  8bc6                 mov eax, esi
// 00498493  5e                   pop esi
// 00498494  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
