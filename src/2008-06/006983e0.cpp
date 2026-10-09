// roc 2008-06 006983e0  unit: Ogre::RbxSceneManager  size: 312 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006983e0
//
// 006983e0  6aff                 push -1
// 006983e2  68a8e87d00           push 0x7de8a8
// 006983e7  64a100000000         mov eax, dword ptr fs:[0]
// 006983ed  50                   push eax
// 006983ee  64892500000000       mov dword ptr fs:[0], esp
// 006983f5  83ec14               sub esp, 0x14
// 006983f8  53                   push ebx
// 006983f9  55                   push ebp
// 006983fa  56                   push esi
// 006983fb  57                   push edi
// 006983fc  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00698400  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00698404  8b542434             mov edx, dword ptr [esp + 0x34]
// 00698408  33db                 xor ebx, ebx
// 0069840a  8d043f               lea eax, [edi + edi]
// 0069840d  3bc1                 cmp eax, ecx
// 0069840f  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00698413  7f62                 jg 0x698477
// 00698415  8b442458             mov eax, dword ptr [esp + 0x58]
// 00698419  50                   push eax
// 0069841a  83ec14               sub esp, 0x14
// 0069841d  8bc4                 mov eax, esp
// 0069841f  8d0cba               lea ecx, [edx + edi*4]
// 00698422  89642468             mov dword ptr [esp + 0x68], esp
// 00698426  8d34b9               lea esi, [ecx + edi*4]
// 00698429  56                   push esi
// 0069842a  51                   push ecx
// 0069842b  51                   push ecx
// 0069842c  8918                 mov dword ptr [eax], ebx
// 0069842e  895804               mov dword ptr [eax + 4], ebx
// 00698431  895808               mov dword ptr [eax + 8], ebx
// 00698434  89580c               mov dword ptr [eax + 0xc], ebx
// 00698437  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0069843b  52                   push edx
// 0069843c  8d4c2438             lea ecx, [esp + 0x38]
// 00698440  51                   push ecx
// 00698441  896810               mov dword ptr [eax + 0x10], ebp
// 00698444  e8d7beffff           call 0x694320
// 00698449  8b5010               mov edx, dword ptr [eax + 0x10]
// 0069844c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00698450  83c42c               add esp, 0x2c
// 00698453  8954244c             mov dword ptr [esp + 0x4c], edx
// 00698457  3bc3                 cmp eax, ebx
// 00698459  7409                 je 0x698464
// 0069845b  50                   push eax
// 0069845c  e819820000           call 0x6a067a
// 00698461  83c404               add esp, 4
// 00698464  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00698468  8d043f               lea eax, [edi + edi]
// 0069846b  2bc8                 sub ecx, eax
// 0069846d  3bc8                 cmp ecx, eax
// 0069846f  8bd6                 mov edx, esi
// 00698471  894c2454             mov dword ptr [esp + 0x54], ecx
// 00698475  7d9e                 jge 0x698415
// 00698477  3bcf                 cmp ecx, edi
// 00698479  7f30                 jg 0x6984ab
// 0069847b  83ec14               sub esp, 0x14
// 0069847e  8bc4                 mov eax, esp
// 00698480  8918                 mov dword ptr [eax], ebx
// 00698482  895804               mov dword ptr [eax + 4], ebx
// 00698485  895808               mov dword ptr [eax + 8], ebx
// 00698488  89580c               mov dword ptr [eax + 0xc], ebx
// 0069848b  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0069848f  894810               mov dword ptr [eax + 0x10], ecx
// 00698492  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00698496  89642468             mov dword ptr [esp + 0x68], esp
// 0069849a  50                   push eax
// 0069849b  52                   push edx
// 0069849c  8d4c242c             lea ecx, [esp + 0x2c]
// 006984a0  51                   push ecx
// 006984a1  e8aaa0ffff           call 0x692550
// 006984a6  83c420               add esp, 0x20
// 006984a9  eb38                 jmp 0x6984e3
// 006984ab  8b442458             mov eax, dword ptr [esp + 0x58]
// 006984af  50                   push eax
// 006984b0  83ec14               sub esp, 0x14
// 006984b3  8bc4                 mov eax, esp
// 006984b5  8918                 mov dword ptr [eax], ebx
// 006984b7  895804               mov dword ptr [eax + 4], ebx
// 006984ba  895808               mov dword ptr [eax + 8], ebx
// 006984bd  89580c               mov dword ptr [eax + 0xc], ebx
// 006984c0  8b742464             mov esi, dword ptr [esp + 0x64]
// 006984c4  8964246c             mov dword ptr [esp + 0x6c], esp
// 006984c8  897010               mov dword ptr [eax + 0x10], esi
// 006984cb  8b442450             mov eax, dword ptr [esp + 0x50]
// 006984cf  50                   push eax
// 006984d0  8d0cba               lea ecx, [edx + edi*4]
// 006984d3  51                   push ecx
// 006984d4  51                   push ecx
// 006984d5  52                   push edx
// 006984d6  8d4c2438             lea ecx, [esp + 0x38]
// 006984da  51                   push ecx
// 006984db  e840beffff           call 0x694320
// 006984e0  83c42c               add esp, 0x2c
// 006984e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 006984e7  3bc3                 cmp eax, ebx
// 006984e9  7409                 je 0x6984f4
// 006984eb  50                   push eax
// 006984ec  e889810000           call 0x6a067a
// 006984f1  83c404               add esp, 4
// 006984f4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006984f8  3bc3                 cmp eax, ebx
// 006984fa  7409                 je 0x698505
// 006984fc  50                   push eax
// 006984fd  e878810000           call 0x6a067a
// 00698502  83c404               add esp, 4
// 00698505  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00698509  5f                   pop edi
// 0069850a  5e                   pop esi
// 0069850b  5d                   pop ebp
// 0069850c  64890d00000000       mov dword ptr fs:[0], ecx
// 00698513  5b                   pop ebx
// 00698514  83c420               add esp, 0x20
// 00698517  c3                   ret 
// library ogre-1.6.4/OgreSceneManager.cpp (function ??$_Chunked_merge@PAPAVLight@Ogre@@V?$_Temp_iterator@PAVLight@Ogre@@@std@@HUlightsForShadowTextureLess@SceneManager@2@@std@@YAXPAPAVLight@Ogre@@0V?$_Temp_iterator@PAVLight@Ogre@@@0@HHUlightsForShadowTextureLess@SceneManager@2@U_Range_checked_iterator_tag@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreSceneManager.cpp
