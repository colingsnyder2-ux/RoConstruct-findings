// roc 2009-06 00473cd0  unit: Ogre::VRbxSky::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473cd0
//
// 00473cd0  56                   push esi
// 00473cd1  8bf1                 mov esi, ecx
// 00473cd3  8b4608               mov eax, dword ptr [esi + 8]
// 00473cd6  c706f0db8b00         mov dword ptr [esi], 0x8bdbf0
// 00473cdc  85c0                 test eax, eax
// 00473cde  7411                 je 0x473cf1
// 00473ce0  ff08                 dec dword ptr [eax]
// 00473ce2  8b4608               mov eax, dword ptr [esi + 8]
// 00473ce5  833800               cmp dword ptr [eax], 0
// 00473ce8  7507                 jne 0x473cf1
// 00473cea  8b16                 mov edx, dword ptr [esi]
// 00473cec  8b4204               mov eax, dword ptr [edx + 4]
// 00473cef  ffd0                 call eax
// 00473cf1  f644240801           test byte ptr [esp + 8], 1
// 00473cf6  7409                 je 0x473d01
// 00473cf8  56                   push esi
// 00473cf9  e8344d2a00           call 0x718a32
// 00473cfe  83c404               add esp, 4
// 00473d01  8bc6                 mov eax, esi
// 00473d03  5e                   pop esi
// 00473d04  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
