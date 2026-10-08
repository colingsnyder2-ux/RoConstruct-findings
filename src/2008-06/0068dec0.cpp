// roc 2008-06 0068dec0  unit: Ogre::VRbxSky::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068dec0
//
// 0068dec0  56                   push esi
// 0068dec1  8bf1                 mov esi, ecx
// 0068dec3  8b4608               mov eax, dword ptr [esi + 8]
// 0068dec6  c7063cec8400         mov dword ptr [esi], 0x84ec3c
// 0068decc  85c0                 test eax, eax
// 0068dece  7411                 je 0x68dee1
// 0068ded0  ff08                 dec dword ptr [eax]
// 0068ded2  8b4608               mov eax, dword ptr [esi + 8]
// 0068ded5  833800               cmp dword ptr [eax], 0
// 0068ded8  7507                 jne 0x68dee1
// 0068deda  8b16                 mov edx, dword ptr [esi]
// 0068dedc  8b4204               mov eax, dword ptr [edx + 4]
// 0068dedf  ffd0                 call eax
// 0068dee1  f644240801           test byte ptr [esp + 8], 1
// 0068dee6  7409                 je 0x68def1
// 0068dee8  56                   push esi
// 0068dee9  e88c270100           call 0x6a067a
// 0068deee  83c404               add esp, 4
// 0068def1  8bc6                 mov eax, esi
// 0068def3  5e                   pop esi
// 0068def4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
