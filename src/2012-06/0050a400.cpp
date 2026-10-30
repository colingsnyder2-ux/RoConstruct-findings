// roc 2012-06 0050a400  unit: std::D::DU?$char_traits::V?$basic_string::V?$vector::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050a400
//
// 0050a400  56                   push esi
// 0050a401  8bf1                 mov esi, ecx
// 0050a403  8b4608               mov eax, dword ptr [esi + 8]
// 0050a406  c7067cbbb600         mov dword ptr [esi], 0xb6bb7c
// 0050a40c  85c0                 test eax, eax
// 0050a40e  7411                 je 0x50a421
// 0050a410  ff08                 dec dword ptr [eax]
// 0050a412  8b4608               mov eax, dword ptr [esi + 8]
// 0050a415  833800               cmp dword ptr [eax], 0
// 0050a418  7507                 jne 0x50a421
// 0050a41a  8b16                 mov edx, dword ptr [esi]
// 0050a41c  8b4204               mov eax, dword ptr [edx + 4]
// 0050a41f  ffd0                 call eax
// 0050a421  f644240801           test byte ptr [esp + 8], 1
// 0050a426  7409                 je 0x50a431
// 0050a428  56                   push esi
// 0050a429  e8e67c4700           call 0x982114
// 0050a42e  83c404               add esp, 4
// 0050a431  8bc6                 mov eax, esi
// 0050a433  5e                   pop esi
// 0050a434  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
