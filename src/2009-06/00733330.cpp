// roc 2009-06 00733330  unit: CXTPImageManagerResource::CBitmapDC  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00733330
//
// 00733330  6aff                 push -1
// 00733332  6818fe8700           push 0x87fe18
// 00733337  64a100000000         mov eax, dword ptr fs:[0]
// 0073333d  50                   push eax
// 0073333e  83ec1c               sub esp, 0x1c
// 00733341  53                   push ebx
// 00733342  55                   push ebp
// 00733343  56                   push esi
// 00733344  57                   push edi
// 00733345  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073334a  33c4                 xor eax, esp
// 0073334c  50                   push eax
// 0073334d  8d442430             lea eax, [esp + 0x30]
// 00733351  64a300000000         mov dword ptr fs:[0], eax
// 00733357  8b442444             mov eax, dword ptr [esp + 0x44]
// 0073335b  8b742440             mov esi, dword ptr [esp + 0x40]
// 0073335f  6a02                 push 2
// 00733361  50                   push eax
// 00733362  56                   push esi
// 00733363  ff15c0e18900         call dword ptr [0x89e1c0]
// 00733369  8be8                 mov ebp, eax
// 0073336b  85ed                 test ebp, ebp
// 0073336d  0f849a000000         je 0x73340d
// 00733373  55                   push ebp
// 00733374  56                   push esi
// 00733375  ff15bce18900         call dword ptr [0x89e1bc]
// 0073337b  8bd8                 mov ebx, eax
// 0073337d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00733381  85db                 test ebx, ebx
// 00733383  0f8484000000         je 0x73340d
// 00733389  53                   push ebx
// 0073338a  ff1550e28900         call dword ptr [0x89e250]
// 00733390  8bf8                 mov edi, eax
// 00733392  85ff                 test edi, edi
// 00733394  7477                 je 0x73340d
// 00733396  8b7708               mov esi, dword ptr [edi + 8]
// 00733399  0faf7704             imul esi, dword ptr [edi + 4]
// 0073339d  03f6                 add esi, esi
// 0073339f  03f6                 add esi, esi
// 007333a1  66837f0e20           cmp word ptr [edi + 0xe], 0x20
// 007333a6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007333ae  0f85d5000000         jne 0x733489
// 007333b4  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007333b8  55                   push ebp
// 007333b9  51                   push ecx
// 007333ba  ff15b8e18900         call dword ptr [0x89e1b8]
// 007333c0  8d5628               lea edx, [esi + 0x28]
// 007333c3  3bc2                 cmp eax, edx
// 007333c5  0f82be000000         jb 0x733489
// 007333cb  8d4c2420             lea ecx, [esp + 0x20]
// 007333cf  e8748b1100           call 0x84bf48
// 007333d4  33ed                 xor ebp, ebp
// 007333d6  55                   push ebp
// 007333d7  896c243c             mov dword ptr [esp + 0x3c], ebp
// 007333db  ff1520e18900         call dword ptr [0x89e120]
// 007333e1  50                   push eax
// 007333e2  8d4c2424             lea ecx, [esp + 0x24]
// 007333e6  e84b8b1100           call 0x84bf36
// 007333eb  6a34                 push 0x34
// 007333ed  ff1594e98900         call dword ptr [0x89e994]
// 007333f3  8bd8                 mov ebx, eax
// 007333f5  83c404               add esp, 4
// 007333f8  3bdd                 cmp ebx, ebp
// 007333fa  7527                 jne 0x733423
// 007333fc  8d4c2420             lea ecx, [esp + 0x20]
// 00733400  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00733408  e8358b1100           call 0x84bf42
// 0073340d  33c0                 xor eax, eax
// 0073340f  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00733413  64890d00000000       mov dword ptr fs:[0], ecx
// 0073341a  59                   pop ecx
// 0073341b  5f                   pop edi
// 0073341c  5e                   pop esi
// 0073341d  5d                   pop ebp
// 0073341e  5b                   pop ebx
// 0073341f  83c428               add esp, 0x28
// 00733422  c3                   ret 
// 00733423  6a28                 push 0x28
// 00733425  57                   push edi
// 00733426  53                   push ebx
// 00733427  e864e0ffff           call 0x731490
// 0073342c  83c40c               add esp, 0xc
// 0073342f  55                   push ebp
// 00733430  55                   push ebp
// 00733431  8d44241c             lea eax, [esp + 0x1c]
// 00733435  50                   push eax
// 00733436  55                   push ebp
// 00733437  897314               mov dword ptr [ebx + 0x14], esi
// 0073343a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0073343e  53                   push ebx
// 0073343f  51                   push ecx
// 00733440  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00733444  ff155ce18900         call dword ptr [0x89e15c]
// 0073344a  8be8                 mov ebp, eax
// 0073344c  85ed                 test ebp, ebp
// 0073344e  741a                 je 0x73346a
// 00733450  8b442414             mov eax, dword ptr [esp + 0x14]
// 00733454  85c0                 test eax, eax
// 00733456  7412                 je 0x73346a
// 00733458  56                   push esi
// 00733459  83c728               add edi, 0x28
// 0073345c  57                   push edi
// 0073345d  50                   push eax
// 0073345e  e82de0ffff           call 0x731490
// 00733463  83c40c               add esp, 0xc
// 00733466  896c2418             mov dword ptr [esp + 0x18], ebp
// 0073346a  53                   push ebx
// 0073346b  ff15cce98900         call dword ptr [0x89e9cc]
// 00733471  83c404               add esp, 4
// 00733474  8d4c2420             lea ecx, [esp + 0x20]
// 00733478  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00733480  e8bd8a1100           call 0x84bf42
// 00733485  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00733489  53                   push ebx
// 0073348a  ff154ce28900         call dword ptr [0x89e24c]
// 00733490  8b442418             mov eax, dword ptr [esp + 0x18]
// 00733494  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00733498  64890d00000000       mov dword ptr fs:[0], ecx
// 0073349f  59                   pop ecx
// 007334a0  5f                   pop edi
// 007334a1  5e                   pop esi
// 007334a2  5d                   pop ebp
// 007334a3  5b                   pop ebx
// 007334a4  83c428               add esp, 0x28
// 007334a7  c3                   ret 
// copied from an identical function in another client (function ?LoadAlphaBitmap@CXTPImageManagerIcon@@SAPAUHBITMAP__@@PAUHINSTANCE__@@PBD@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-imports Source\Common\XTPImageManager.cpp