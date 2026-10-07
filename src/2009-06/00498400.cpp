// roc 2009-06 00498400  unit: Ogre::RbxArchiveFactory  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00498400
//
// 00498400  8b4108               mov eax, dword ptr [ecx + 8]
// 00498403  c701e0fb8b00         mov dword ptr [ecx], 0x8bfbe0
// 00498409  85c0                 test eax, eax
// 0049840b  7411                 je 0x49841e
// 0049840d  ff08                 dec dword ptr [eax]
// 0049840f  8b4108               mov eax, dword ptr [ecx + 8]
// 00498412  833800               cmp dword ptr [eax], 0
// 00498415  7507                 jne 0x49841e
// 00498417  8b11                 mov edx, dword ptr [ecx]
// 00498419  8b4204               mov eax, dword ptr [edx + 4]
// 0049841c  ffe0                 jmp eax
// 0049841e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
