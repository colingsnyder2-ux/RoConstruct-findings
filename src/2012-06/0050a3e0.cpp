// roc 2012-06 0050a3e0  unit: Ogre::RbxArchiveFactory  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0050a3e0
//
// 0050a3e0  8b4108               mov eax, dword ptr [ecx + 8]
// 0050a3e3  c7017cbbb600         mov dword ptr [ecx], 0xb6bb7c
// 0050a3e9  85c0                 test eax, eax
// 0050a3eb  7411                 je 0x50a3fe
// 0050a3ed  ff08                 dec dword ptr [eax]
// 0050a3ef  8b4108               mov eax, dword ptr [ecx + 8]
// 0050a3f2  833800               cmp dword ptr [eax], 0
// 0050a3f5  7507                 jne 0x50a3fe
// 0050a3f7  8b11                 mov edx, dword ptr [ecx]
// 0050a3f9  8b4204               mov eax, dword ptr [edx + 4]
// 0050a3fc  ffe0                 jmp eax
// 0050a3fe  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
