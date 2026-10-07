// roc 2009-06 00473c70  unit: Ogre::VRbxSky::?$SharedPtr  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473c70
//
// 00473c70  8b4108               mov eax, dword ptr [ecx + 8]
// 00473c73  c701f0db8b00         mov dword ptr [ecx], 0x8bdbf0
// 00473c79  85c0                 test eax, eax
// 00473c7b  7411                 je 0x473c8e
// 00473c7d  ff08                 dec dword ptr [eax]
// 00473c7f  8b4108               mov eax, dword ptr [ecx + 8]
// 00473c82  833800               cmp dword ptr [eax], 0
// 00473c85  7507                 jne 0x473c8e
// 00473c87  8b11                 mov edx, dword ptr [ecx]
// 00473c89  8b4204               mov eax, dword ptr [edx + 4]
// 00473c8c  ffe0                 jmp eax
// 00473c8e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
