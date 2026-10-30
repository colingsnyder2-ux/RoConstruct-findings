// roc 2009-12 00619a60  unit: seg_00610000  size: 446 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00619a60
//
// 00619a60  53                   push ebx
// 00619a61  56                   push esi
// 00619a62  57                   push edi
// 00619a63  8bf0                 mov esi, eax
// 00619a65  68da000000           push 0xda
// 00619a6a  e851faffff           call 0x6194c0
// 00619a6f  8b9ee4000000         mov ebx, dword ptr [esi + 0xe4]
// 00619a75  83c404               add esp, 4
// 00619a78  8d5c1b06             lea ebx, [ebx + ebx + 6]
// 00619a7c  e8affaffff           call 0x619530
// 00619a81  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619a84  8a96e4000000         mov dl, byte ptr [esi + 0xe4]
// 00619a8a  8b08                 mov ecx, dword ptr [eax]
// 00619a8c  8811                 mov byte ptr [ecx], dl
// 00619a8e  ff00                 inc dword ptr [eax]
// 00619a90  83cfff               or edi, 0xffffffff
// 00619a93  017804               add dword ptr [eax + 4], edi
// 00619a96  7523                 jne 0x619abb
// 00619a98  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619a9b  56                   push esi
// 00619a9c  ffd0                 call eax
// 00619a9e  83c404               add esp, 4
// 00619aa1  84c0                 test al, al
// 00619aa3  7516                 jne 0x619abb
// 00619aa5  8b0e                 mov ecx, dword ptr [esi]
// 00619aa7  bb18000000           mov ebx, 0x18
// 00619aac  895914               mov dword ptr [ecx + 0x14], ebx
// 00619aaf  8b16                 mov edx, dword ptr [esi]
// 00619ab1  8b02                 mov eax, dword ptr [edx]
// 00619ab3  56                   push esi
// 00619ab4  ffd0                 call eax
// 00619ab6  83c404               add esp, 4
// 00619ab9  eb05                 jmp 0x619ac0
// 00619abb  bb18000000           mov ebx, 0x18
// 00619ac0  55                   push ebp
// 00619ac1  33ed                 xor ebp, ebp
// 00619ac3  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 00619ac9  0f8eb1000000         jle 0x619b80
// 00619acf  8d9ee8000000         lea ebx, [esi + 0xe8]
// 00619ad5  8b3b                 mov edi, dword ptr [ebx]
// 00619ad7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619ada  8a17                 mov dl, byte ptr [edi]
// 00619adc  8b08                 mov ecx, dword ptr [eax]
// 00619ade  8811                 mov byte ptr [ecx], dl
// 00619ae0  ff00                 inc dword ptr [eax]
// 00619ae2  834004ff             add dword ptr [eax + 4], -1
// 00619ae6  7520                 jne 0x619b08
// 00619ae8  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619aeb  56                   push esi
// 00619aec  ffd0                 call eax
// 00619aee  83c404               add esp, 4
// 00619af1  84c0                 test al, al
// 00619af3  7513                 jne 0x619b08
// 00619af5  8b0e                 mov ecx, dword ptr [esi]
// 00619af7  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619afe  8b16                 mov edx, dword ptr [esi]
// 00619b00  8b02                 mov eax, dword ptr [edx]
// 00619b02  56                   push esi
// 00619b03  ffd0                 call eax
// 00619b05  83c404               add esp, 4
// 00619b08  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00619b0f  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00619b12  8b5718               mov edx, dword ptr [edi + 0x18]
// 00619b15  741d                 je 0x619b34
// 00619b17  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 00619b1e  7512                 jne 0x619b32
// 00619b20  33d2                 xor edx, edx
// 00619b22  399634010000         cmp dword ptr [esi + 0x134], edx
// 00619b28  740a                 je 0x619b34
// 00619b2a  3896b1000000         cmp byte ptr [esi + 0xb1], dl
// 00619b30  7502                 jne 0x619b34
// 00619b32  33c9                 xor ecx, ecx
// 00619b34  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619b37  c0e104               shl cl, 4
// 00619b3a  02ca                 add cl, dl
// 00619b3c  8b10                 mov edx, dword ptr [eax]
// 00619b3e  880a                 mov byte ptr [edx], cl
// 00619b40  ff00                 inc dword ptr [eax]
// 00619b42  834004ff             add dword ptr [eax + 4], -1
// 00619b46  7520                 jne 0x619b68
// 00619b48  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619b4b  56                   push esi
// 00619b4c  ffd0                 call eax
// 00619b4e  83c404               add esp, 4
// 00619b51  84c0                 test al, al
// 00619b53  7513                 jne 0x619b68
// 00619b55  8b0e                 mov ecx, dword ptr [esi]
// 00619b57  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00619b5e  8b16                 mov edx, dword ptr [esi]
// 00619b60  8b02                 mov eax, dword ptr [edx]
// 00619b62  56                   push esi
// 00619b63  ffd0                 call eax
// 00619b65  83c404               add esp, 4
// 00619b68  45                   inc ebp
// 00619b69  83c304               add ebx, 4
// 00619b6c  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 00619b72  0f8c5dffffff         jl 0x619ad5
// 00619b78  bb18000000           mov ebx, 0x18
// 00619b7d  83cfff               or edi, 0xffffffff
// 00619b80  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619b83  8a962c010000         mov dl, byte ptr [esi + 0x12c]
// 00619b89  8b08                 mov ecx, dword ptr [eax]
// 00619b8b  8811                 mov byte ptr [ecx], dl
// 00619b8d  ff00                 inc dword ptr [eax]
// 00619b8f  017804               add dword ptr [eax + 4], edi
// 00619b92  5d                   pop ebp
// 00619b93  751c                 jne 0x619bb1
// 00619b95  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619b98  56                   push esi
// 00619b99  ffd0                 call eax
// 00619b9b  83c404               add esp, 4
// 00619b9e  84c0                 test al, al
// 00619ba0  750f                 jne 0x619bb1
// 00619ba2  8b0e                 mov ecx, dword ptr [esi]
// 00619ba4  895914               mov dword ptr [ecx + 0x14], ebx
// 00619ba7  8b16                 mov edx, dword ptr [esi]
// 00619ba9  8b02                 mov eax, dword ptr [edx]
// 00619bab  56                   push esi
// 00619bac  ffd0                 call eax
// 00619bae  83c404               add esp, 4
// 00619bb1  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619bb4  8a9630010000         mov dl, byte ptr [esi + 0x130]
// 00619bba  8b08                 mov ecx, dword ptr [eax]
// 00619bbc  8811                 mov byte ptr [ecx], dl
// 00619bbe  ff00                 inc dword ptr [eax]
// 00619bc0  017804               add dword ptr [eax + 4], edi
// 00619bc3  751c                 jne 0x619be1
// 00619bc5  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619bc8  56                   push esi
// 00619bc9  ffd0                 call eax
// 00619bcb  83c404               add esp, 4
// 00619bce  84c0                 test al, al
// 00619bd0  750f                 jne 0x619be1
// 00619bd2  8b0e                 mov ecx, dword ptr [esi]
// 00619bd4  895914               mov dword ptr [ecx + 0x14], ebx
// 00619bd7  8b16                 mov edx, dword ptr [esi]
// 00619bd9  8b02                 mov eax, dword ptr [edx]
// 00619bdb  56                   push esi
// 00619bdc  ffd0                 call eax
// 00619bde  83c404               add esp, 4
// 00619be1  8a8e34010000         mov cl, byte ptr [esi + 0x134]
// 00619be7  8b4618               mov eax, dword ptr [esi + 0x18]
// 00619bea  8b10                 mov edx, dword ptr [eax]
// 00619bec  c0e104               shl cl, 4
// 00619bef  028e38010000         add cl, byte ptr [esi + 0x138]
// 00619bf5  880a                 mov byte ptr [edx], cl
// 00619bf7  ff00                 inc dword ptr [eax]
// 00619bf9  017804               add dword ptr [eax + 4], edi
// 00619bfc  751c                 jne 0x619c1a
// 00619bfe  8b400c               mov eax, dword ptr [eax + 0xc]
// 00619c01  56                   push esi
// 00619c02  ffd0                 call eax
// 00619c04  83c404               add esp, 4
// 00619c07  84c0                 test al, al
// 00619c09  750f                 jne 0x619c1a
// 00619c0b  8b0e                 mov ecx, dword ptr [esi]
// 00619c0d  895914               mov dword ptr [ecx + 0x14], ebx
// 00619c10  8b16                 mov edx, dword ptr [esi]
// 00619c12  8b02                 mov eax, dword ptr [edx]
// 00619c14  56                   push esi
// 00619c15  ffd0                 call eax
// 00619c17  83c404               add esp, 4
// 00619c1a  5f                   pop edi
// 00619c1b  5e                   pop esi
// 00619c1c  5b                   pop ebx
// 00619c1d  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_sos)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
