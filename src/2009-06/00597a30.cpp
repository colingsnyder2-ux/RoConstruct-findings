// from server: 100% by auto
// roc 2009-06 00597a30  unit: seg_00590000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00597a30
//
// 00597a30  53                   push ebx
// 00597a31  56                   push esi
// 00597a32  57                   push edi
// 00597a33  8bf0                 mov esi, eax
// 00597a35  68da000000           push 0xda
// 00597a3a  e851faffff           call 0x597490
// 00597a3f  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 00597a45  83c404               add esp, 4
// 00597a48  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 00597a4c  e8affaffff           call 0x597500
// 00597a51  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597a54  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 00597a5a  8b08                 mov ecx, dword ptr [eax]
// 00597a5c  8811                 mov byte ptr [ecx], dl
// 00597a5e  ff00                 inc dword ptr [eax]
// 00597a60  83cfff               or edi, 0xffffffff
// 00597a63  017804               add dword ptr [eax + 4], edi
// 00597a66  7523                 jne 0x597a8b
// 00597a68  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597a6b  56                   push esi
// 00597a6c  ffd0                 call eax
// 00597a6e  83c404               add esp, 4
// 00597a71  84c0                 test al, al
// 00597a73  7516                 jne 0x597a8b
// 00597a75  8b0e                 mov ecx, dword ptr [esi]
// 00597a77  bb18000000           mov ebx, 0x18
// 00597a7c  895914               mov dword ptr [ecx + 0x14], ebx
// 00597a7f  8b16                 mov edx, dword ptr [esi]
// 00597a81  8b02                 mov eax, dword ptr [edx]
// 00597a83  56                   push esi
// 00597a84  ffd0                 call eax
// 00597a86  83c404               add esp, 4
// 00597a89  eb05                 jmp 0x597a90
// 00597a8b  bb18000000           mov ebx, 0x18
// 00597a90  55                   push ebp
// 00597a91  33ed                 xor ebp, ebp
// 00597a93  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 00597a99  0f8eb1000000         jle 0x597b50
// 00597a9f  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00597aa5  8b3b                 mov edi, dword ptr [ebx]
// 00597aa7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597aaa  8a17                 mov dl, byte ptr [edi]
// 00597aac  8b08                 mov ecx, dword ptr [eax]
// 00597aae  8811                 mov byte ptr [ecx], dl
// 00597ab0  ff00                 inc dword ptr [eax]
// 00597ab2  834004ff             add dword ptr [eax + 4], -1
// 00597ab6  7520                 jne 0x597ad8
// 00597ab8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597abb  56                   push esi
// 00597abc  ffd0                 call eax
// 00597abe  83c404               add esp, 4
// 00597ac1  84c0                 test al, al
// 00597ac3  7513                 jne 0x597ad8
// 00597ac5  8b0e                 mov ecx, dword ptr [esi]
// 00597ac7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597ace  8b16                 mov edx, dword ptr [esi]
// 00597ad0  8b02                 mov eax, dword ptr [edx]
// 00597ad2  56                   push esi
// 00597ad3  ffd0                 call eax
// 00597ad5  83c404               add esp, 4
// 00597ad8  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00597adf  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00597ae2  8b5718               mov edx, dword ptr [edi + 0x18]
// 00597ae5  741d                 je 0x597b04
// 00597ae7  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00597aee  7512                 jne 0x597b02
// 00597af0  33d2                 xor edx, edx
// 00597af2  399634010000         cmp dword ptr [esi + 0x134], edx
// 00597af8  740a                 je 0x597b04
// 00597afa  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 00597b00  7502                 jne 0x597b04
// 00597b02  33c9                 xor ecx, ecx
// 00597b04  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597b07  c0e104               shl cl, 4
// 00597b0a  02ca                 add cl, dl
// 00597b0c  8b10                 mov edx, dword ptr [eax]
// 00597b0e  880a                 mov byte ptr [edx], cl
// 00597b10  ff00                 inc dword ptr [eax]
// 00597b12  834004ff             add dword ptr [eax + 4], -1
// 00597b16  7520                 jne 0x597b38
// 00597b18  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597b1b  56                   push esi
// 00597b1c  ffd0                 call eax
// 00597b1e  83c404               add esp, 4
// 00597b21  84c0                 test al, al
// 00597b23  7513                 jne 0x597b38
// 00597b25  8b0e                 mov ecx, dword ptr [esi]
// 00597b27  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00597b2e  8b16                 mov edx, dword ptr [esi]
// 00597b30  8b02                 mov eax, dword ptr [edx]
// 00597b32  56                   push esi
// 00597b33  ffd0                 call eax
// 00597b35  83c404               add esp, 4
// 00597b38  45                   inc ebp
// 00597b39  83c304               add ebx, 4
// 00597b3c  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 00597b42  0f8c5dffffff         jl 0x597aa5
// 00597b48  bb18000000           mov ebx, 0x18
// 00597b4d  83cfff               or edi, 0xffffffff
// 00597b50  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597b53  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 00597b59  8b08                 mov ecx, dword ptr [eax]
// 00597b5b  8811                 mov byte ptr [ecx], dl
// 00597b5d  ff00                 inc dword ptr [eax]
// 00597b5f  017804               add dword ptr [eax + 4], edi
// 00597b62  5d                   pop ebp
// 00597b63  751c                 jne 0x597b81
// 00597b65  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597b68  56                   push esi
// 00597b69  ffd0                 call eax
// 00597b6b  83c404               add esp, 4
// 00597b6e  84c0                 test al, al
// 00597b70  750f                 jne 0x597b81
// 00597b72  8b0e                 mov ecx, dword ptr [esi]
// 00597b74  895914               mov dword ptr [ecx + 0x14], ebx
// 00597b77  8b16                 mov edx, dword ptr [esi]
// 00597b79  8b02                 mov eax, dword ptr [edx]
// 00597b7b  56                   push esi
// 00597b7c  ffd0                 call eax
// 00597b7e  83c404               add esp, 4
// 00597b81  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597b84  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 00597b8a  8b08                 mov ecx, dword ptr [eax]
// 00597b8c  8811                 mov byte ptr [ecx], dl
// 00597b8e  ff00                 inc dword ptr [eax]
// 00597b90  017804               add dword ptr [eax + 4], edi
// 00597b93  751c                 jne 0x597bb1
// 00597b95  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597b98  56                   push esi
// 00597b99  ffd0                 call eax
// 00597b9b  83c404               add esp, 4
// 00597b9e  84c0                 test al, al
// 00597ba0  750f                 jne 0x597bb1
// 00597ba2  8b0e                 mov ecx, dword ptr [esi]
// 00597ba4  895914               mov dword ptr [ecx + 0x14], ebx
// 00597ba7  8b16                 mov edx, dword ptr [esi]
// 00597ba9  8b02                 mov eax, dword ptr [edx]
// 00597bab  56                   push esi
// 00597bac  ffd0                 call eax
// 00597bae  83c404               add esp, 4
// 00597bb1  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 00597bb7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00597bba  8b10                 mov edx, dword ptr [eax]
// 00597bbc  c0e104               shl cl, 4
// 00597bbf  028e38010000         add cl, byte ptr [esi + 0x138]
// 00597bc5  880a                 mov byte ptr [edx], cl
// 00597bc7  ff00                 inc dword ptr [eax]
// 00597bc9  017804               add dword ptr [eax + 4], edi
// 00597bcc  751c                 jne 0x597bea
// 00597bce  8b400c               mov eax, dword ptr [eax + 0xc]
// 00597bd1  56                   push esi
// 00597bd2  ffd0                 call eax
// 00597bd4  83c404               add esp, 4
// 00597bd7  84c0                 test al, al
// 00597bd9  750f                 jne 0x597bea
// 00597bdb  8b0e                 mov ecx, dword ptr [esi]
// 00597bdd  895914               mov dword ptr [ecx + 0x14], ebx
// 00597be0  8b16                 mov edx, dword ptr [esi]
// 00597be2  8b02                 mov eax, dword ptr [edx]
// 00597be4  56                   push esi
// 00597be5  ffd0                 call eax
// 00597be7  83c404               add esp, 4
// 00597bea  5f                   pop edi
// 00597beb  5e                   pop esi
// 00597bec  5b                   pop ebx
// 00597bed  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
