// roc 2008-06 0068de00  unit: Ogre::VDataStream::?$SharedPtr  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068de00
//
// 0068de00  8b4108               mov eax, dword ptr [ecx + 8]
// 0068de03  c7014cec8400         mov dword ptr [ecx], 0x84ec4c
// 0068de09  85c0                 test eax, eax
// 0068de0b  7411                 je 0x68de1e
// 0068de0d  ff08                 dec dword ptr [eax]
// 0068de0f  8b4108               mov eax, dword ptr [ecx + 8]
// 0068de12  833800               cmp dword ptr [eax], 0
// 0068de15  7507                 jne 0x68de1e
// 0068de17  8b11                 mov edx, dword ptr [ecx]
// 0068de19  8b4204               mov eax, dword ptr [edx + 4]
// 0068de1c  ffe0                 jmp eax
// 0068de1e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
