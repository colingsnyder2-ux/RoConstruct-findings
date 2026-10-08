// roc 2008-06 0066fe90  unit: Ogre::VRbxFont::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066fe90
//
// 0066fe90  56                   push esi
// 0066fe91  8bf1                 mov esi, ecx
// 0066fe93  8b4608               mov eax, dword ptr [esi + 8]
// 0066fe96  c706d4d18400         mov dword ptr [esi], 0x84d1d4
// 0066fe9c  85c0                 test eax, eax
// 0066fe9e  7411                 je 0x66feb1
// 0066fea0  ff08                 dec dword ptr [eax]
// 0066fea2  8b4608               mov eax, dword ptr [esi + 8]
// 0066fea5  833800               cmp dword ptr [eax], 0
// 0066fea8  7507                 jne 0x66feb1
// 0066feaa  8b16                 mov edx, dword ptr [esi]
// 0066feac  8b4204               mov eax, dword ptr [edx + 4]
// 0066feaf  ffd0                 call eax
// 0066feb1  f644240801           test byte ptr [esp + 8], 1
// 0066feb6  7409                 je 0x66fec1
// 0066feb8  56                   push esi
// 0066feb9  e8bc070300           call 0x6a067a
// 0066febe  83c404               add esp, 4
// 0066fec1  8bc6                 mov eax, esi
// 0066fec3  5e                   pop esi
// 0066fec4  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
