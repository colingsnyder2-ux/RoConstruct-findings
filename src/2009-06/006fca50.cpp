// roc 2009-06 006fca50  unit: Ogre::VRbxFont::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fca50
//
// 006fca50  56                   push esi
// 006fca51  8bf1                 mov esi, ecx
// 006fca53  8b4608               mov eax, dword ptr [esi + 8]
// 006fca56  c70644eb8e00         mov dword ptr [esi], 0x8eeb44
// 006fca5c  85c0                 test eax, eax
// 006fca5e  7411                 je 0x6fca71
// 006fca60  ff08                 dec dword ptr [eax]
// 006fca62  8b4608               mov eax, dword ptr [esi + 8]
// 006fca65  833800               cmp dword ptr [eax], 0
// 006fca68  7507                 jne 0x6fca71
// 006fca6a  8b16                 mov edx, dword ptr [esi]
// 006fca6c  8b4204               mov eax, dword ptr [edx + 4]
// 006fca6f  ffd0                 call eax
// 006fca71  f644240801           test byte ptr [esp + 8], 1
// 006fca76  7409                 je 0x6fca81
// 006fca78  56                   push esi
// 006fca79  e8b4bf0100           call 0x718a32
// 006fca7e  83c404               add esp, 4
// 006fca81  8bc6                 mov eax, esi
// 006fca83  5e                   pop esi
// 006fca84  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
