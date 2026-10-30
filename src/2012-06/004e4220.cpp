// roc 2012-06 004e4220  unit: Ogre::RbxMaterialAdapter  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004e4220
//
// 004e4220  8b4108               mov eax, dword ptr [ecx + 8]
// 004e4223  c7019898b600         mov dword ptr [ecx], 0xb69898
// 004e4229  85c0                 test eax, eax
// 004e422b  7411                 je 0x4e423e
// 004e422d  ff08                 dec dword ptr [eax]
// 004e422f  8b4108               mov eax, dword ptr [ecx + 8]
// 004e4232  833800               cmp dword ptr [eax], 0
// 004e4235  7507                 jne 0x4e423e
// 004e4237  8b11                 mov edx, dword ptr [ecx]
// 004e4239  8b4204               mov eax, dword ptr [edx + 4]
// 004e423c  ffe0                 jmp eax
// 004e423e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
