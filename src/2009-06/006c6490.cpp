// roc 2009-06 006c6490  unit: lua_exception  size: 337 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c6490
//
// 006c6490  51                   push ecx
// 006c6491  53                   push ebx
// 006c6492  57                   push edi
// 006c6493  8d442408             lea eax, [esp + 8]
// 006c6497  50                   push eax
// 006c6498  51                   push ecx
// 006c6499  52                   push edx
// 006c649a  e82148ffff           call 0x6bacc0
// 006c649f  8d9e0c020000         lea ebx, [esi + 0x20c]
// 006c64a5  83c40c               add esp, 0xc
// 006c64a8  8bf8                 mov edi, eax
// 006c64aa  391e                 cmp dword ptr [esi], ebx
// 006c64ac  7209                 jb 0x6c64b7
// 006c64ae  56                   push esi
// 006c64af  e86c40ffff           call 0x6ba520
// 006c64b4  83c404               add esp, 4
// 006c64b7  8b06                 mov eax, dword ptr [esi]
// 006c64b9  c60022               mov byte ptr [eax], 0x22
// 006c64bc  ff06                 inc dword ptr [esi]
// 006c64be  837c240800           cmp dword ptr [esp + 8], 0
// 006c64c3  0f848f000000         je 0x6c6558
// 006c64c9  8da42400000000       lea esp, [esp]
// 006c64d0  ff4c2408             dec dword ptr [esp + 8]
// 006c64d4  0fbe07               movsx eax, byte ptr [edi]
// 006c64d7  83f85c               cmp eax, 0x5c
// 006c64da  775b                 ja 0x6c6537
// 006c64dc  0fb68884656c00       movzx ecx, byte ptr [eax + 0x6c6584]
// 006c64e3  ff248d74656c00       jmp dword ptr [ecx*4 + 0x6c6574]
// 006c64ea  391e                 cmp dword ptr [esi], ebx
// 006c64ec  7209                 jb 0x6c64f7
// 006c64ee  56                   push esi
// 006c64ef  e82c40ffff           call 0x6ba520
// 006c64f4  83c404               add esp, 4
// 006c64f7  8b16                 mov edx, dword ptr [esi]
// 006c64f9  c6025c               mov byte ptr [edx], 0x5c
// 006c64fc  ff06                 inc dword ptr [esi]
// 006c64fe  391e                 cmp dword ptr [esi], ebx
// 006c6500  7209                 jb 0x6c650b
// 006c6502  56                   push esi
// 006c6503  e81840ffff           call 0x6ba520
// 006c6508  83c404               add esp, 4
// 006c650b  8b06                 mov eax, dword ptr [esi]
// 006c650d  8a0f                 mov cl, byte ptr [edi]
// 006c650f  8808                 mov byte ptr [eax], cl
// 006c6511  eb37                 jmp 0x6c654a
// 006c6513  6a02                 push 2
// 006c6515  687cba8c00           push 0x8cba7c
// 006c651a  56                   push esi
// 006c651b  e84040ffff           call 0x6ba560
// 006c6520  83c40c               add esp, 0xc
// 006c6523  eb27                 jmp 0x6c654c
// 006c6525  6a04                 push 4
// 006c6527  68dcbc8e00           push 0x8ebcdc
// 006c652c  56                   push esi
// 006c652d  e82e40ffff           call 0x6ba560
// 006c6532  83c40c               add esp, 0xc
// 006c6535  eb15                 jmp 0x6c654c
// 006c6537  391e                 cmp dword ptr [esi], ebx
// 006c6539  7209                 jb 0x6c6544
// 006c653b  56                   push esi
// 006c653c  e8df3fffff           call 0x6ba520
// 006c6541  83c404               add esp, 4
// 006c6544  8b16                 mov edx, dword ptr [esi]
// 006c6546  8a07                 mov al, byte ptr [edi]
// 006c6548  8802                 mov byte ptr [edx], al
// 006c654a  ff06                 inc dword ptr [esi]
// 006c654c  47                   inc edi
// 006c654d  837c240800           cmp dword ptr [esp + 8], 0
// 006c6552  0f8578ffffff         jne 0x6c64d0
// 006c6558  ff4c2408             dec dword ptr [esp + 8]
// 006c655c  391e                 cmp dword ptr [esi], ebx
// 006c655e  5f                   pop edi
// 006c655f  5b                   pop ebx
// 006c6560  7209                 jb 0x6c656b
// 006c6562  56                   push esi
// 006c6563  e8b83fffff           call 0x6ba520
// 006c6568  83c404               add esp, 4
// 006c656b  8b0e                 mov ecx, dword ptr [esi]
// 006c656d  c60122               mov byte ptr [ecx], 0x22
// 006c6570  ff06                 inc dword ptr [esi]
// 006c6572  59                   pop ecx
// 006c6573  c3                   ret 
// 006c6574  25656c00ea           and eax, 0xea006c65
// 006c6579  646c                 insb byte ptr es:[edi], dx
// 006c657b  0013                 add byte ptr [ebx], dl
// 006c657d  656c                 insb byte ptr es:[edi], dx
// 006c657f  0037                 add byte ptr [edi], dh
// 006c6581  656c                 insb byte ptr es:[edi], dx
// 006c6583  0000                 add byte ptr [eax], al
// 006c6585  0303                 add eax, dword ptr [ebx]
// 006c6587  0303                 add eax, dword ptr [ebx]
// 006c6589  0303                 add eax, dword ptr [ebx]
// 006c658b  0303                 add eax, dword ptr [ebx]
// 006c658d  0301                 add eax, dword ptr [ecx]
// 006c658f  0303                 add eax, dword ptr [ebx]
// 006c6591  0203                 add al, byte ptr [ebx]
// 006c6593  0303                 add eax, dword ptr [ebx]
// 006c6595  0303                 add eax, dword ptr [ebx]
// 006c6597  0303                 add eax, dword ptr [ebx]
// 006c6599  0303                 add eax, dword ptr [ebx]
// 006c659b  0303                 add eax, dword ptr [ebx]
// 006c659d  0303                 add eax, dword ptr [ebx]
// 006c659f  0303                 add eax, dword ptr [ebx]
// 006c65a1  0303                 add eax, dword ptr [ebx]
// 006c65a3  0303                 add eax, dword ptr [ebx]
// 006c65a5  0301                 add eax, dword ptr [ecx]
// 006c65a7  0303                 add eax, dword ptr [ebx]
// 006c65a9  0303                 add eax, dword ptr [ebx]
// 006c65ab  0303                 add eax, dword ptr [ebx]
// 006c65ad  0303                 add eax, dword ptr [ebx]
// 006c65af  0303                 add eax, dword ptr [ebx]
// 006c65b1  0303                 add eax, dword ptr [ebx]
// 006c65b3  0303                 add eax, dword ptr [ebx]
// 006c65b5  0303                 add eax, dword ptr [ebx]
// 006c65b7  0303                 add eax, dword ptr [ebx]
// 006c65b9  0303                 add eax, dword ptr [ebx]
// 006c65bb  0303                 add eax, dword ptr [ebx]
// 006c65bd  0303                 add eax, dword ptr [ebx]
// 006c65bf  0303                 add eax, dword ptr [ebx]
// 006c65c1  0303                 add eax, dword ptr [ebx]
// 006c65c3  0303                 add eax, dword ptr [ebx]
// 006c65c5  0303                 add eax, dword ptr [ebx]
// 006c65c7  0303                 add eax, dword ptr [ebx]
// 006c65c9  0303                 add eax, dword ptr [ebx]
// 006c65cb  0303                 add eax, dword ptr [ebx]
// 006c65cd  0303                 add eax, dword ptr [ebx]
// 006c65cf  0303                 add eax, dword ptr [ebx]
// 006c65d1  0303                 add eax, dword ptr [ebx]
// 006c65d3  0303                 add eax, dword ptr [ebx]
// 006c65d5  0303                 add eax, dword ptr [ebx]
// 006c65d7  0303                 add eax, dword ptr [ebx]
// 006c65d9  0303                 add eax, dword ptr [ebx]
// 006c65db  0303                 add eax, dword ptr [ebx]
// 006c65dd  0303                 add eax, dword ptr [ebx]
// 006c65df  0301                 add eax, dword ptr [ecx]
// library lua-5.1.4/lstrlib.c (function _addquoted)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
