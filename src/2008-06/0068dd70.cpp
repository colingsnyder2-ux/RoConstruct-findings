// roc 2008-06 0068dd70  unit: Ogre::RbxSceneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068dd70
//
// 0068dd70  8b4108               mov eax, dword ptr [ecx + 8]
// 0068dd73  c7012cec8400         mov dword ptr [ecx], 0x84ec2c
// 0068dd79  85c0                 test eax, eax
// 0068dd7b  7411                 je 0x68dd8e
// 0068dd7d  ff08                 dec dword ptr [eax]
// 0068dd7f  8b4108               mov eax, dword ptr [ecx + 8]
// 0068dd82  833800               cmp dword ptr [eax], 0
// 0068dd85  7507                 jne 0x68dd8e
// 0068dd87  8b11                 mov edx, dword ptr [ecx]
// 0068dd89  8b4204               mov eax, dword ptr [edx + 4]
// 0068dd8c  ffe0                 jmp eax
// 0068dd8e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
