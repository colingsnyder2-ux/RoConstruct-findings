// roc 2009-06 0048a950  unit: Ogre::RbxMeshPartAdapter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0048a950
//
// 0048a950  8b4108               mov eax, dword ptr [ecx + 8]
// 0048a953  c70174f28b00         mov dword ptr [ecx], 0x8bf274
// 0048a959  85c0                 test eax, eax
// 0048a95b  7411                 je 0x48a96e
// 0048a95d  ff08                 dec dword ptr [eax]
// 0048a95f  8b4108               mov eax, dword ptr [ecx + 8]
// 0048a962  833800               cmp dword ptr [eax], 0
// 0048a965  7507                 jne 0x48a96e
// 0048a967  8b11                 mov edx, dword ptr [ecx]
// 0048a969  8b4204               mov eax, dword ptr [edx + 4]
// 0048a96c  ffe0                 jmp eax
// 0048a96e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
