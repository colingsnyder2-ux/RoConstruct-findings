// roc 2008-06 0068de80  unit: Ogre::VShadowCameraSetup::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068de80
//
// 0068de80  56                   push esi
// 0068de81  8bf1                 mov esi, ecx
// 0068de83  8b4608               mov eax, dword ptr [esi + 8]
// 0068de86  c7064cec8400         mov dword ptr [esi], 0x84ec4c
// 0068de8c  85c0                 test eax, eax
// 0068de8e  7411                 je 0x68dea1
// 0068de90  ff08                 dec dword ptr [eax]
// 0068de92  8b4608               mov eax, dword ptr [esi + 8]
// 0068de95  833800               cmp dword ptr [eax], 0
// 0068de98  7507                 jne 0x68dea1
// 0068de9a  8b16                 mov edx, dword ptr [esi]
// 0068de9c  8b4204               mov eax, dword ptr [edx + 4]
// 0068de9f  ffd0                 call eax
// 0068dea1  f644240801           test byte ptr [esp + 8], 1
// 0068dea6  7409                 je 0x68deb1
// 0068dea8  56                   push esi
// 0068dea9  e8cc270100           call 0x6a067a
// 0068deae  83c404               add esp, 4
// 0068deb1  8bc6                 mov eax, esi
// 0068deb3  5e                   pop esi
// 0068deb4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
