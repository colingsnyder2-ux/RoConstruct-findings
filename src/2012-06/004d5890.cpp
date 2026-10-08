// roc 2012-06 004d5890  unit: Ogre::RbxSceneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004d5890
//
// 004d5890  8b4108               mov eax, dword ptr [ecx + 8]
// 004d5893  c701307cb600         mov dword ptr [ecx], 0xb67c30
// 004d5899  85c0                 test eax, eax
// 004d589b  7411                 je 0x4d58ae
// 004d589d  ff08                 dec dword ptr [eax]
// 004d589f  8b4108               mov eax, dword ptr [ecx + 8]
// 004d58a2  833800               cmp dword ptr [eax], 0
// 004d58a5  7507                 jne 0x4d58ae
// 004d58a7  8b11                 mov edx, dword ptr [ecx]
// 004d58a9  8b4204               mov eax, dword ptr [edx + 4]
// 004d58ac  ffe0                 jmp eax
// 004d58ae  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
