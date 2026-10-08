// roc 2012-06 004ca760  unit: Ogre::UFileInfo::V?$vector::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ca760
//
// 004ca760  56                   push esi
// 004ca761  8bf1                 mov esi, ecx
// 004ca763  8b4608               mov eax, dword ptr [esi + 8]
// 004ca766  c7064068b600         mov dword ptr [esi], 0xb66840
// 004ca76c  85c0                 test eax, eax
// 004ca76e  7411                 je 0x4ca781
// 004ca770  ff08                 dec dword ptr [eax]
// 004ca772  8b4608               mov eax, dword ptr [esi + 8]
// 004ca775  833800               cmp dword ptr [eax], 0
// 004ca778  7507                 jne 0x4ca781
// 004ca77a  8b16                 mov edx, dword ptr [esi]
// 004ca77c  8b4204               mov eax, dword ptr [edx + 4]
// 004ca77f  ffd0                 call eax
// 004ca781  f644240801           test byte ptr [esp + 8], 1
// 004ca786  7409                 je 0x4ca791
// 004ca788  56                   push esi
// 004ca789  e886794b00           call 0x982114
// 004ca78e  83c404               add esp, 4
// 004ca791  8bc6                 mov eax, esi
// 004ca793  5e                   pop esi
// 004ca794  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
