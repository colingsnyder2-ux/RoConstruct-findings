// roc 2009-12 0079e2a0  unit: seg_00790000  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079e2a0
//
// 0079e2a0  51                   push ecx
// 0079e2a1  53                   push ebx
// 0079e2a2  57                   push edi
// 0079e2a3  8d442408             lea eax, [esp + 8]
// 0079e2a7  50                   push eax
// 0079e2a8  51                   push ecx
// 0079e2a9  52                   push edx
// 0079e2aa  e8c1c4feff           call 0x78a770
// 0079e2af  8d9e0c020000         lea ebx, [esi + 0x20c]
// 0079e2b5  83c40c               add esp, 0xc
// 0079e2b8  8bf8                 mov edi, eax
// 0079e2ba  391e                 cmp dword ptr [esi], ebx
// 0079e2bc  7209                 jb 0x79e2c7
// 0079e2be  56                   push esi
// 0079e2bf  e80cbdfeff           call 0x789fd0
// 0079e2c4  83c404               add esp, 4
// 0079e2c7  8b06                 mov eax, dword ptr [esi]
// 0079e2c9  c60022               mov byte ptr [eax], 0x22
// 0079e2cc  ff06                 inc dword ptr [esi]
// 0079e2ce  837c240800           cmp dword ptr [esp + 8], 0
// 0079e2d3  0f848f000000         je 0x79e368
// 0079e2d9  8da42400000000       lea esp, [esp]
// 0079e2e0  ff4c2408             dec dword ptr [esp + 8]
// 0079e2e4  0fbe07               movsx eax, byte ptr [edi]
// 0079e2e7  83f85c               cmp eax, 0x5c
// 0079e2ea  775b                 ja 0x79e347
// 0079e2ec  0fb68894e37900       movzx ecx, byte ptr [eax + 0x79e394]
// 0079e2f3  ff248d84e37900       jmp dword ptr [ecx*4 + 0x79e384]
// 0079e2fa  391e                 cmp dword ptr [esi], ebx
// 0079e2fc  7209                 jb 0x79e307
// 0079e2fe  56                   push esi
// 0079e2ff  e8ccbcfeff           call 0x789fd0
// 0079e304  83c404               add esp, 4
// 0079e307  8b16                 mov edx, dword ptr [esi]
// 0079e309  c6025c               mov byte ptr [edx], 0x5c
// 0079e30c  ff06                 inc dword ptr [esi]
// 0079e30e  391e                 cmp dword ptr [esi], ebx
// 0079e310  7209                 jb 0x79e31b
// 0079e312  56                   push esi
// 0079e313  e8b8bcfeff           call 0x789fd0
// 0079e318  83c404               add esp, 4
// 0079e31b  8b06                 mov eax, dword ptr [esi]
// 0079e31d  8a0f                 mov cl, byte ptr [edi]
// 0079e31f  8808                 mov byte ptr [eax], cl
// 0079e321  eb37                 jmp 0x79e35a
// 0079e323  6a02                 push 2
// 0079e325  68ec289c00           push 0x9c28ec
// 0079e32a  56                   push esi
// 0079e32b  e8e0bcfeff           call 0x78a010
// 0079e330  83c40c               add esp, 0xc
// 0079e333  eb27                 jmp 0x79e35c
// 0079e335  6a04                 push 4
// 0079e337  680cb29e00           push 0x9eb20c
// 0079e33c  56                   push esi
// 0079e33d  e8cebcfeff           call 0x78a010
// 0079e342  83c40c               add esp, 0xc
// 0079e345  eb15                 jmp 0x79e35c
// 0079e347  391e                 cmp dword ptr [esi], ebx
// 0079e349  7209                 jb 0x79e354
// 0079e34b  56                   push esi
// 0079e34c  e87fbcfeff           call 0x789fd0
// 0079e351  83c404               add esp, 4
// 0079e354  8b16                 mov edx, dword ptr [esi]
// 0079e356  8a07                 mov al, byte ptr [edi]
// 0079e358  8802                 mov byte ptr [edx], al
// 0079e35a  ff06                 inc dword ptr [esi]
// 0079e35c  47                   inc edi
// 0079e35d  837c240800           cmp dword ptr [esp + 8], 0
// 0079e362  0f8578ffffff         jne 0x79e2e0
// 0079e368  ff4c2408             dec dword ptr [esp + 8]
// 0079e36c  391e                 cmp dword ptr [esi], ebx
// 0079e36e  5f                   pop edi
// 0079e36f  5b                   pop ebx
// 0079e370  7209                 jb 0x79e37b
// 0079e372  56                   push esi
// 0079e373  e858bcfeff           call 0x789fd0
// 0079e378  83c404               add esp, 4
// 0079e37b  8b0e                 mov ecx, dword ptr [esi]
// 0079e37d  c60122               mov byte ptr [ecx], 0x22
// 0079e380  ff06                 inc dword ptr [esi]
// 0079e382  59                   pop ecx
// 0079e383  c3                   ret 
// 0079e384  35e37900fa           xor eax, 0xfa0079e3
// 0079e389  e279                 loop 0x79e404
// 0079e38b  0023                 add byte ptr [ebx], ah
// 0079e38d  e379                 jecxz 0x79e408
// 0079e38f  0047e3               add byte ptr [edi - 0x1d], al
// 0079e392  7900                 jns 0x79e394
// 0079e394  0003                 add byte ptr [ebx], al
// 0079e396  0303                 add eax, dword ptr [ebx]
// 0079e398  0303                 add eax, dword ptr [ebx]
// 0079e39a  0303                 add eax, dword ptr [ebx]
// 0079e39c  0303                 add eax, dword ptr [ebx]
// 0079e39e  0103                 add dword ptr [ebx], eax
// 0079e3a0  0302                 add eax, dword ptr [edx]
// 0079e3a2  0303                 add eax, dword ptr [ebx]
// 0079e3a4  0303                 add eax, dword ptr [ebx]
// 0079e3a6  0303                 add eax, dword ptr [ebx]
// 0079e3a8  0303                 add eax, dword ptr [ebx]
// 0079e3aa  0303                 add eax, dword ptr [ebx]
// 0079e3ac  0303                 add eax, dword ptr [ebx]
// 0079e3ae  0303                 add eax, dword ptr [ebx]
// 0079e3b0  0303                 add eax, dword ptr [ebx]
// 0079e3b2  0303                 add eax, dword ptr [ebx]
// 0079e3b4  0303                 add eax, dword ptr [ebx]
// 0079e3b6  0103                 add dword ptr [ebx], eax
// 0079e3b8  0303                 add eax, dword ptr [ebx]
// 0079e3ba  0303                 add eax, dword ptr [ebx]
// 0079e3bc  0303                 add eax, dword ptr [ebx]
// 0079e3be  0303                 add eax, dword ptr [ebx]
// 0079e3c0  0303                 add eax, dword ptr [ebx]
// 0079e3c2  0303                 add eax, dword ptr [ebx]
// 0079e3c4  0303                 add eax, dword ptr [ebx]
// 0079e3c6  0303                 add eax, dword ptr [ebx]
// 0079e3c8  0303                 add eax, dword ptr [ebx]
// 0079e3ca  0303                 add eax, dword ptr [ebx]
// 0079e3cc  0303                 add eax, dword ptr [ebx]
// 0079e3ce  0303                 add eax, dword ptr [ebx]
// 0079e3d0  0303                 add eax, dword ptr [ebx]
// 0079e3d2  0303                 add eax, dword ptr [ebx]
// 0079e3d4  0303                 add eax, dword ptr [ebx]
// 0079e3d6  0303                 add eax, dword ptr [ebx]
// 0079e3d8  0303                 add eax, dword ptr [ebx]
// 0079e3da  0303                 add eax, dword ptr [ebx]
// 0079e3dc  0303                 add eax, dword ptr [ebx]
// 0079e3de  0303                 add eax, dword ptr [ebx]
// 0079e3e0  0303                 add eax, dword ptr [ebx]
// 0079e3e2  0303                 add eax, dword ptr [ebx]
// 0079e3e4  0303                 add eax, dword ptr [ebx]
// 0079e3e6  0303                 add eax, dword ptr [ebx]
// 0079e3e8  0303                 add eax, dword ptr [ebx]
// 0079e3ea  0303                 add eax, dword ptr [ebx]
// 0079e3ec  0303                 add eax, dword ptr [ebx]
// 0079e3ee  0303                 add eax, dword ptr [ebx]
// library lua-5.1.1/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lstrlib.c
