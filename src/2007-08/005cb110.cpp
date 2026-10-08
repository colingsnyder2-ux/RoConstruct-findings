// from server: 100% by auto
// roc 2007-08 005cb110  unit: seg_005c0000  size: 345 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cb110
//
// 005cb110  51                   push ecx
// 005cb111  53                   push ebx
// 005cb112  57                   push edi
// 005cb113  8d442408             lea eax, [esp + 8]
// 005cb117  50                   push eax
// 005cb118  51                   push ecx
// 005cb119  52                   push edx
// 005cb11a  e83142ffff           call 0x5bf350
// 005cb11f  8d9e0c020000         lea ebx, [esi + 0x20c]
// 005cb125  83c40c               add esp, 0xc
// 005cb128  391e                 cmp dword ptr [esi], ebx
// 005cb12a  8bf8                 mov edi, eax
// 005cb12c  7209                 jb 0x5cb137
// 005cb12e  56                   push esi
// 005cb12f  e89c3affff           call 0x5bebd0
// 005cb134  83c404               add esp, 4
// 005cb137  8b06                 mov eax, dword ptr [esi]
// 005cb139  c60022               mov byte ptr [eax], 0x22
// 005cb13c  830601               add dword ptr [esi], 1
// 005cb13f  837c240800           cmp dword ptr [esp + 8], 0
// 005cb144  0f8493000000         je 0x5cb1dd
// 005cb14a  8d9b00000000         lea ebx, [ebx]
// 005cb150  836c240801           sub dword ptr [esp + 8], 1
// 005cb155  0fbe07               movsx eax, byte ptr [edi]
// 005cb158  83f85c               cmp eax, 0x5c
// 005cb15b  775c                 ja 0x5cb1b9
// 005cb15d  0fb6880cb25c00       movzx ecx, byte ptr [eax + 0x5cb20c]
// 005cb164  ff248dfcb15c00       jmp dword ptr [ecx*4 + 0x5cb1fc]
// 005cb16b  391e                 cmp dword ptr [esi], ebx
// 005cb16d  7209                 jb 0x5cb178
// 005cb16f  56                   push esi
// 005cb170  e85b3affff           call 0x5bebd0
// 005cb175  83c404               add esp, 4
// 005cb178  8b16                 mov edx, dword ptr [esi]
// 005cb17a  c6025c               mov byte ptr [edx], 0x5c
// 005cb17d  830601               add dword ptr [esi], 1
// 005cb180  391e                 cmp dword ptr [esi], ebx
// 005cb182  7209                 jb 0x5cb18d
// 005cb184  56                   push esi
// 005cb185  e8463affff           call 0x5bebd0
// 005cb18a  83c404               add esp, 4
// 005cb18d  8b06                 mov eax, dword ptr [esi]
// 005cb18f  8a0f                 mov cl, byte ptr [edi]
// 005cb191  8808                 mov byte ptr [eax], cl
// 005cb193  eb37                 jmp 0x5cb1cc
// 005cb195  6a02                 push 2
// 005cb197  682c0b7a00           push 0x7a0b2c
// 005cb19c  56                   push esi
// 005cb19d  e86e3affff           call 0x5bec10
// 005cb1a2  83c40c               add esp, 0xc
// 005cb1a5  eb28                 jmp 0x5cb1cf
// 005cb1a7  6a04                 push 4
// 005cb1a9  6814a07b00           push 0x7ba014
// 005cb1ae  56                   push esi
// 005cb1af  e85c3affff           call 0x5bec10
// 005cb1b4  83c40c               add esp, 0xc
// 005cb1b7  eb16                 jmp 0x5cb1cf
// 005cb1b9  391e                 cmp dword ptr [esi], ebx
// 005cb1bb  7209                 jb 0x5cb1c6
// 005cb1bd  56                   push esi
// 005cb1be  e80d3affff           call 0x5bebd0
// 005cb1c3  83c404               add esp, 4
// 005cb1c6  8b16                 mov edx, dword ptr [esi]
// 005cb1c8  8a07                 mov al, byte ptr [edi]
// 005cb1ca  8802                 mov byte ptr [edx], al
// 005cb1cc  830601               add dword ptr [esi], 1
// 005cb1cf  83c701               add edi, 1
// 005cb1d2  837c240800           cmp dword ptr [esp + 8], 0
// 005cb1d7  0f8573ffffff         jne 0x5cb150
// 005cb1dd  836c240801           sub dword ptr [esp + 8], 1
// 005cb1e2  391e                 cmp dword ptr [esi], ebx
// 005cb1e4  5f                   pop edi
// 005cb1e5  5b                   pop ebx
// 005cb1e6  7209                 jb 0x5cb1f1
// 005cb1e8  56                   push esi
// 005cb1e9  e8e239ffff           call 0x5bebd0
// 005cb1ee  83c404               add esp, 4
// 005cb1f1  8b0e                 mov ecx, dword ptr [esi]
// 005cb1f3  c60122               mov byte ptr [ecx], 0x22
// 005cb1f6  830601               add dword ptr [esi], 1
// 005cb1f9  59                   pop ecx
// 005cb1fa  c3                   ret 
// 005cb1fb  90                   nop 
// 005cb1fc  a7                   cmpsd dword ptr [esi], dword ptr es:[edi]
// 005cb1fd  b15c                 mov cl, 0x5c
// 005cb1ff  006bb1               add byte ptr [ebx - 0x4f], ch
// 005cb202  5c                   pop esp
// 005cb203  0095b15c00b9         add byte ptr [ebp - 0x46ffa34f], dl
// 005cb209  b15c                 mov cl, 0x5c
// 005cb20b  0000                 add byte ptr [eax], al
// 005cb20d  0303                 add eax, dword ptr [ebx]
// 005cb20f  0303                 add eax, dword ptr [ebx]
// 005cb211  0303                 add eax, dword ptr [ebx]
// 005cb213  0303                 add eax, dword ptr [ebx]
// 005cb215  0301                 add eax, dword ptr [ecx]
// 005cb217  0303                 add eax, dword ptr [ebx]
// 005cb219  0203                 add al, byte ptr [ebx]
// 005cb21b  0303                 add eax, dword ptr [ebx]
// 005cb21d  0303                 add eax, dword ptr [ebx]
// 005cb21f  0303                 add eax, dword ptr [ebx]
// 005cb221  0303                 add eax, dword ptr [ebx]
// 005cb223  0303                 add eax, dword ptr [ebx]
// 005cb225  0303                 add eax, dword ptr [ebx]
// 005cb227  0303                 add eax, dword ptr [ebx]
// 005cb229  0303                 add eax, dword ptr [ebx]
// 005cb22b  0303                 add eax, dword ptr [ebx]
// 005cb22d  0301                 add eax, dword ptr [ecx]
// 005cb22f  0303                 add eax, dword ptr [ebx]
// 005cb231  0303                 add eax, dword ptr [ebx]
// 005cb233  0303                 add eax, dword ptr [ebx]
// 005cb235  0303                 add eax, dword ptr [ebx]
// 005cb237  0303                 add eax, dword ptr [ebx]
// 005cb239  0303                 add eax, dword ptr [ebx]
// 005cb23b  0303                 add eax, dword ptr [ebx]
// 005cb23d  0303                 add eax, dword ptr [ebx]
// 005cb23f  0303                 add eax, dword ptr [ebx]
// 005cb241  0303                 add eax, dword ptr [ebx]
// 005cb243  0303                 add eax, dword ptr [ebx]
// 005cb245  0303                 add eax, dword ptr [ebx]
// 005cb247  0303                 add eax, dword ptr [ebx]
// 005cb249  0303                 add eax, dword ptr [ebx]
// 005cb24b  0303                 add eax, dword ptr [ebx]
// 005cb24d  0303                 add eax, dword ptr [ebx]
// 005cb24f  0303                 add eax, dword ptr [ebx]
// 005cb251  0303                 add eax, dword ptr [ebx]
// 005cb253  0303                 add eax, dword ptr [ebx]
// 005cb255  0303                 add eax, dword ptr [ebx]
// 005cb257  0303                 add eax, dword ptr [ebx]
// 005cb259  0303                 add eax, dword ptr [ebx]
// 005cb25b  0303                 add eax, dword ptr [ebx]
// 005cb25d  0303                 add eax, dword ptr [ebx]
// 005cb25f  0303                 add eax, dword ptr [ebx]
// 005cb261  0303                 add eax, dword ptr [ebx]
// 005cb263  0303                 add eax, dword ptr [ebx]
// 005cb265  0303                 add eax, dword ptr [ebx]
// 005cb267  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
