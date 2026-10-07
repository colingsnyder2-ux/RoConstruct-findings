// roc 2009-06 00498420  unit: std::D::DU?$char_traits::V?$basic_string::V?$vector::?$SharedPtr  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00498420
//
// 00498420  56                   push esi
// 00498421  8bf1                 mov esi, ecx
// 00498423  8b4608               mov eax, dword ptr [esi + 8]
// 00498426  c706d0fb8b00         mov dword ptr [esi], 0x8bfbd0
// 0049842c  85c0                 test eax, eax
// 0049842e  7411                 je 0x498441
// 00498430  ff08                 dec dword ptr [eax]
// 00498432  8b4608               mov eax, dword ptr [esi + 8]
// 00498435  833800               cmp dword ptr [eax], 0
// 00498438  7507                 jne 0x498441
// 0049843a  8b16                 mov edx, dword ptr [esi]
// 0049843c  8b4204               mov eax, dword ptr [edx + 4]
// 0049843f  ffd0                 call eax
// 00498441  f644240801           test byte ptr [esp + 8], 1
// 00498446  7409                 je 0x498451
// 00498448  56                   push esi
// 00498449  e8e4052800           call 0x718a32
// 0049844e  83c404               add esp, 4
// 00498451  8bc6                 mov eax, esi
// 00498453  5e                   pop esi
// 00498454  c20400               ret 4
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??_G?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
