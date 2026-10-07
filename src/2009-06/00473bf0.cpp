// roc 2009-06 00473bf0  unit: Ogre::RbxSceneManager  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00473bf0
//
// 00473bf0  8b4108               mov eax, dword ptr [ecx + 8]
// 00473bf3  c70104dc8b00         mov dword ptr [ecx], 0x8bdc04
// 00473bf9  85c0                 test eax, eax
// 00473bfb  7411                 je 0x473c0e
// 00473bfd  ff08                 dec dword ptr [eax]
// 00473bff  8b4108               mov eax, dword ptr [ecx + 8]
// 00473c02  833800               cmp dword ptr [eax], 0
// 00473c05  7507                 jne 0x473c0e
// 00473c07  8b11                 mov edx, dword ptr [ecx]
// 00473c09  8b4204               mov eax, dword ptr [edx + 4]
// 00473c0c  ffe0                 jmp eax
// 00473c0e  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
