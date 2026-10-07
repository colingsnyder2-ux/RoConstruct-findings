// roc 2009-06 004983e0  unit: Ogre::RbxArchiveFactory  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004983e0
//
// 004983e0  8b4108               mov eax, dword ptr [ecx + 8]
// 004983e3  c701d0fb8b00         mov dword ptr [ecx], 0x8bfbd0
// 004983e9  85c0                 test eax, eax
// 004983eb  7411                 je 0x4983fe
// 004983ed  ff08                 dec dword ptr [eax]
// 004983ef  8b4108               mov eax, dword ptr [ecx + 8]
// 004983f2  833800               cmp dword ptr [eax], 0
// 004983f5  7507                 jne 0x4983fe
// 004983f7  8b11                 mov edx, dword ptr [ecx]
// 004983f9  8b4204               mov eax, dword ptr [edx + 4]
// 004983fc  ffe0                 jmp eax
// 004983fe  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
