// roc 2012-06 004ca6b0  unit: ResourceGroupHelper::ResourceGroupHelperLogListener  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004ca6b0
//
// 004ca6b0  8b4108               mov eax, dword ptr [ecx + 8]
// 004ca6b3  c7014068b600         mov dword ptr [ecx], 0xb66840
// 004ca6b9  85c0                 test eax, eax
// 004ca6bb  7411                 je 0x4ca6ce
// 004ca6bd  ff08                 dec dword ptr [eax]
// 004ca6bf  8b4108               mov eax, dword ptr [ecx + 8]
// 004ca6c2  833800               cmp dword ptr [eax], 0
// 004ca6c5  7507                 jne 0x4ca6ce
// 004ca6c7  8b11                 mov edx, dword ptr [ecx]
// 004ca6c9  8b4204               mov eax, dword ptr [edx + 4]
// 004ca6cc  ffe0                 jmp eax
// 004ca6ce  c3                   ret 
// library ogre-1.7.0/OgreAnimationTrack.cpp (function ??1?$SharedPtr@VAnimableValue@Ogre@@@Ogre@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: ogre-1.7.0 OgreAnimationTrack.cpp
