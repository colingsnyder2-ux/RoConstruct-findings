// roc 2008-06 004d7380  unit: RBX::ViewNew::ViewRbxGfx  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d7380
//
// 004d7380  8b4108               mov eax, dword ptr [ecx + 8]
// 004d7383  c701c46b8200         mov dword ptr [ecx], 0x826bc4
// 004d7389  85c0                 test eax, eax
// 004d738b  7411                 je 0x4d739e
// 004d738d  ff08                 dec dword ptr [eax]
// 004d738f  8b4108               mov eax, dword ptr [ecx + 8]
// 004d7392  833800               cmp dword ptr [eax], 0
// 004d7395  7507                 jne 0x4d739e
// 004d7397  8b11                 mov edx, dword ptr [ecx]
// 004d7399  8b4204               mov eax, dword ptr [edx + 4]
// 004d739c  ffe0                 jmp eax
// 004d739e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
