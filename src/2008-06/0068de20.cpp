// roc 2008-06 0068de20  unit: Ogre::VDataStream::?$SharedPtr  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068de20
//
// 0068de20  8b4108               mov eax, dword ptr [ecx + 8]
// 0068de23  c7013cec8400         mov dword ptr [ecx], 0x84ec3c
// 0068de29  85c0                 test eax, eax
// 0068de2b  7411                 je 0x68de3e
// 0068de2d  ff08                 dec dword ptr [eax]
// 0068de2f  8b4108               mov eax, dword ptr [ecx + 8]
// 0068de32  833800               cmp dword ptr [eax], 0
// 0068de35  7507                 jne 0x68de3e
// 0068de37  8b11                 mov edx, dword ptr [ecx]
// 0068de39  8b4204               mov eax, dword ptr [edx + 4]
// 0068de3c  ffe0                 jmp eax
// 0068de3e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
