// roc 2012-06 004c2f80  unit: RBX::AdornRbxGfx  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004c2f80
//
// 004c2f80  8b4108               mov eax, dword ptr [ecx + 8]
// 004c2f83  c701985cb600         mov dword ptr [ecx], 0xb65c98
// 004c2f89  85c0                 test eax, eax
// 004c2f8b  7411                 je 0x4c2f9e
// 004c2f8d  ff08                 dec dword ptr [eax]
// 004c2f8f  8b4108               mov eax, dword ptr [ecx + 8]
// 004c2f92  833800               cmp dword ptr [eax], 0
// 004c2f95  7507                 jne 0x4c2f9e
// 004c2f97  8b11                 mov edx, dword ptr [ecx]
// 004c2f99  8b4204               mov eax, dword ptr [edx + 4]
// 004c2f9c  ffe0                 jmp eax
// 004c2f9e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
