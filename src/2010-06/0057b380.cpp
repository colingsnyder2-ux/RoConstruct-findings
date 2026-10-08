// from server: 100% by auto
// roc 2010-06 0057b380  unit: seg_00570000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057b380
//
// 0057b380  53                   push ebx
// 0057b381  56                   push esi
// 0057b382  57                   push edi
// 0057b383  8bf0                 mov esi, eax
// 0057b385  68da000000           push 0xda
// 0057b38a  e851faffff           call 0x57ade0
// 0057b38f  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 0057b395  83c404               add esp, 4
// 0057b398  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 0057b39c  e8affaffff           call 0x57ae50
// 0057b3a1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b3a4  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 0057b3aa  8b08                 mov ecx, dword ptr [eax]
// 0057b3ac  8811                 mov byte ptr [ecx], dl
// 0057b3ae  ff00                 inc dword ptr [eax]
// 0057b3b0  83cfff               or edi, 0xffffffff
// 0057b3b3  017804               add dword ptr [eax + 4], edi
// 0057b3b6  7523                 jne 0x57b3db
// 0057b3b8  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b3bb  56                   push esi
// 0057b3bc  ffd0                 call eax
// 0057b3be  83c404               add esp, 4
// 0057b3c1  84c0                 test al, al
// 0057b3c3  7516                 jne 0x57b3db
// 0057b3c5  8b0e                 mov ecx, dword ptr [esi]
// 0057b3c7  bb18000000           mov ebx, 0x18
// 0057b3cc  895914               mov dword ptr [ecx + 0x14], ebx
// 0057b3cf  8b16                 mov edx, dword ptr [esi]
// 0057b3d1  8b02                 mov eax, dword ptr [edx]
// 0057b3d3  56                   push esi
// 0057b3d4  ffd0                 call eax
// 0057b3d6  83c404               add esp, 4
// 0057b3d9  eb05                 jmp 0x57b3e0
// 0057b3db  bb18000000           mov ebx, 0x18
// 0057b3e0  55                   push ebp
// 0057b3e1  33ed                 xor ebp, ebp
// 0057b3e3  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0057b3e9  0f8eb1000000         jle 0x57b4a0
// 0057b3ef  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0057b3f5  8b3b                 mov edi, dword ptr [ebx]
// 0057b3f7  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b3fa  8a17                 mov dl, byte ptr [edi]
// 0057b3fc  8b08                 mov ecx, dword ptr [eax]
// 0057b3fe  8811                 mov byte ptr [ecx], dl
// 0057b400  ff00                 inc dword ptr [eax]
// 0057b402  834004ff             add dword ptr [eax + 4], -1
// 0057b406  7520                 jne 0x57b428
// 0057b408  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b40b  56                   push esi
// 0057b40c  ffd0                 call eax
// 0057b40e  83c404               add esp, 4
// 0057b411  84c0                 test al, al
// 0057b413  7513                 jne 0x57b428
// 0057b415  8b0e                 mov ecx, dword ptr [esi]
// 0057b417  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b41e  8b16                 mov edx, dword ptr [esi]
// 0057b420  8b02                 mov eax, dword ptr [edx]
// 0057b422  56                   push esi
// 0057b423  ffd0                 call eax
// 0057b425  83c404               add esp, 4
// 0057b428  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0057b42f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0057b432  8b5718               mov edx, dword ptr [edi + 0x18]
// 0057b435  741d                 je 0x57b454
// 0057b437  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0057b43e  7512                 jne 0x57b452
// 0057b440  33d2                 xor edx, edx
// 0057b442  399634010000         cmp dword ptr [esi + 0x134], edx
// 0057b448  740a                 je 0x57b454
// 0057b44a  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 0057b450  7502                 jne 0x57b454
// 0057b452  33c9                 xor ecx, ecx
// 0057b454  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b457  c0e104               shl cl, 4
// 0057b45a  02ca                 add cl, dl
// 0057b45c  8b10                 mov edx, dword ptr [eax]
// 0057b45e  880a                 mov byte ptr [edx], cl
// 0057b460  ff00                 inc dword ptr [eax]
// 0057b462  834004ff             add dword ptr [eax + 4], -1
// 0057b466  7520                 jne 0x57b488
// 0057b468  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b46b  56                   push esi
// 0057b46c  ffd0                 call eax
// 0057b46e  83c404               add esp, 4
// 0057b471  84c0                 test al, al
// 0057b473  7513                 jne 0x57b488
// 0057b475  8b0e                 mov ecx, dword ptr [esi]
// 0057b477  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 0057b47e  8b16                 mov edx, dword ptr [esi]
// 0057b480  8b02                 mov eax, dword ptr [edx]
// 0057b482  56                   push esi
// 0057b483  ffd0                 call eax
// 0057b485  83c404               add esp, 4
// 0057b488  45                   inc ebp
// 0057b489  83c304               add ebx, 4
// 0057b48c  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0057b492  0f8c5dffffff         jl 0x57b3f5
// 0057b498  bb18000000           mov ebx, 0x18
// 0057b49d  83cfff               or edi, 0xffffffff
// 0057b4a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b4a3  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 0057b4a9  8b08                 mov ecx, dword ptr [eax]
// 0057b4ab  8811                 mov byte ptr [ecx], dl
// 0057b4ad  ff00                 inc dword ptr [eax]
// 0057b4af  017804               add dword ptr [eax + 4], edi
// 0057b4b2  5d                   pop ebp
// 0057b4b3  751c                 jne 0x57b4d1
// 0057b4b5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b4b8  56                   push esi
// 0057b4b9  ffd0                 call eax
// 0057b4bb  83c404               add esp, 4
// 0057b4be  84c0                 test al, al
// 0057b4c0  750f                 jne 0x57b4d1
// 0057b4c2  8b0e                 mov ecx, dword ptr [esi]
// 0057b4c4  895914               mov dword ptr [ecx + 0x14], ebx
// 0057b4c7  8b16                 mov edx, dword ptr [esi]
// 0057b4c9  8b02                 mov eax, dword ptr [edx]
// 0057b4cb  56                   push esi
// 0057b4cc  ffd0                 call eax
// 0057b4ce  83c404               add esp, 4
// 0057b4d1  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b4d4  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 0057b4da  8b08                 mov ecx, dword ptr [eax]
// 0057b4dc  8811                 mov byte ptr [ecx], dl
// 0057b4de  ff00                 inc dword ptr [eax]
// 0057b4e0  017804               add dword ptr [eax + 4], edi
// 0057b4e3  751c                 jne 0x57b501
// 0057b4e5  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b4e8  56                   push esi
// 0057b4e9  ffd0                 call eax
// 0057b4eb  83c404               add esp, 4
// 0057b4ee  84c0                 test al, al
// 0057b4f0  750f                 jne 0x57b501
// 0057b4f2  8b0e                 mov ecx, dword ptr [esi]
// 0057b4f4  895914               mov dword ptr [ecx + 0x14], ebx
// 0057b4f7  8b16                 mov edx, dword ptr [esi]
// 0057b4f9  8b02                 mov eax, dword ptr [edx]
// 0057b4fb  56                   push esi
// 0057b4fc  ffd0                 call eax
// 0057b4fe  83c404               add esp, 4
// 0057b501  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 0057b507  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057b50a  8b10                 mov edx, dword ptr [eax]
// 0057b50c  c0e104               shl cl, 4
// 0057b50f  028e38010000         add cl, byte ptr [esi + 0x138]
// 0057b515  880a                 mov byte ptr [edx], cl
// 0057b517  ff00                 inc dword ptr [eax]
// 0057b519  017804               add dword ptr [eax + 4], edi
// 0057b51c  751c                 jne 0x57b53a
// 0057b51e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0057b521  56                   push esi
// 0057b522  ffd0                 call eax
// 0057b524  83c404               add esp, 4
// 0057b527  84c0                 test al, al
// 0057b529  750f                 jne 0x57b53a
// 0057b52b  8b0e                 mov ecx, dword ptr [esi]
// 0057b52d  895914               mov dword ptr [ecx + 0x14], ebx
// 0057b530  8b16                 mov edx, dword ptr [esi]
// 0057b532  8b02                 mov eax, dword ptr [edx]
// 0057b534  56                   push esi
// 0057b535  ffd0                 call eax
// 0057b537  83c404               add esp, 4
// 0057b53a  5f                   pop edi
// 0057b53b  5e                   pop esi
// 0057b53c  5b                   pop ebx
// 0057b53d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
