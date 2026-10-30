// roc 2012-06 004e4310  unit: Ogre::VGpuProgramParameters::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e4310
//
// 004e4310  56                   push esi
// 004e4311  8bf1                 mov esi, ecx
// 004e4313  8b4608               mov eax, dword ptr [esi + 8]
// 004e4316  c7069898b600         mov dword ptr [esi], 0xb69898
// 004e431c  85c0                 test eax, eax
// 004e431e  7411                 je 0x4e4331
// 004e4320  ff08                 dec dword ptr [eax]
// 004e4322  8b4608               mov eax, dword ptr [esi + 8]
// 004e4325  833800               cmp dword ptr [eax], 0
// 004e4328  7507                 jne 0x4e4331
// 004e432a  8b16                 mov edx, dword ptr [esi]
// 004e432c  8b4204               mov eax, dword ptr [edx + 4]
// 004e432f  ffd0                 call eax
// 004e4331  f644240801           test byte ptr [esp + 8], 1
// 004e4336  7409                 je 0x4e4341
// 004e4338  56                   push esi
// 004e4339  e8d6dd4900           call 0x982114
// 004e433e  83c404               add esp, 4
// 004e4341  8bc6                 mov eax, esi
// 004e4343  5e                   pop esi
// 004e4344  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
