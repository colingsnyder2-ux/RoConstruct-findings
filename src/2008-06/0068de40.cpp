// roc 2008-06 0068de40  unit: Ogre::VGpuProgramParameters::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068de40
//
// 0068de40  56                   push esi
// 0068de41  8bf1                 mov esi, ecx
// 0068de43  8b4608               mov eax, dword ptr [esi + 8]
// 0068de46  c7062cec8400         mov dword ptr [esi], 0x84ec2c
// 0068de4c  85c0                 test eax, eax
// 0068de4e  7411                 je 0x68de61
// 0068de50  ff08                 dec dword ptr [eax]
// 0068de52  8b4608               mov eax, dword ptr [esi + 8]
// 0068de55  833800               cmp dword ptr [eax], 0
// 0068de58  7507                 jne 0x68de61
// 0068de5a  8b16                 mov edx, dword ptr [esi]
// 0068de5c  8b4204               mov eax, dword ptr [edx + 4]
// 0068de5f  ffd0                 call eax
// 0068de61  f644240801           test byte ptr [esp + 8], 1
// 0068de66  7409                 je 0x68de71
// 0068de68  56                   push esi
// 0068de69  e80c280100           call 0x6a067a
// 0068de6e  83c404               add esp, 4
// 0068de71  8bc6                 mov eax, esi
// 0068de73  5e                   pop esi
// 0068de74  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
