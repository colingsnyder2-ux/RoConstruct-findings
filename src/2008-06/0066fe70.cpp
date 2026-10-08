// roc 2008-06 0066fe70  unit: RBX::AdornRbxGfx  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066fe70
//
// 0066fe70  8b4108               mov eax, dword ptr [ecx + 8]
// 0066fe73  c701d4d18400         mov dword ptr [ecx], 0x84d1d4
// 0066fe79  85c0                 test eax, eax
// 0066fe7b  7411                 je 0x66fe8e
// 0066fe7d  ff08                 dec dword ptr [eax]
// 0066fe7f  8b4108               mov eax, dword ptr [ecx + 8]
// 0066fe82  833800               cmp dword ptr [eax], 0
// 0066fe85  7507                 jne 0x66fe8e
// 0066fe87  8b11                 mov edx, dword ptr [ecx]
// 0066fe89  8b4204               mov eax, dword ptr [edx + 4]
// 0066fe8c  ffe0                 jmp eax
// 0066fe8e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
