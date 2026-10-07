// roc 2009-06 006fca30  unit: RBX::AdornRbxGfx  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006fca30
//
// 006fca30  8b4108               mov eax, dword ptr [ecx + 8]
// 006fca33  c70144eb8e00         mov dword ptr [ecx], 0x8eeb44
// 006fca39  85c0                 test eax, eax
// 006fca3b  7411                 je 0x6fca4e
// 006fca3d  ff08                 dec dword ptr [eax]
// 006fca3f  8b4108               mov eax, dword ptr [ecx + 8]
// 006fca42  833800               cmp dword ptr [eax], 0
// 006fca45  7507                 jne 0x6fca4e
// 006fca47  8b11                 mov edx, dword ptr [ecx]
// 006fca49  8b4204               mov eax, dword ptr [edx + 4]
// 006fca4c  ffe0                 jmp eax
// 006fca4e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
