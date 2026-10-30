// from server: 100% by auto
// roc 2011-06 0056a110  unit: seg_00560000  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a110
//
// 0056a110  53                   push ebx
// 0056a111  55                   push ebp
// 0056a112  56                   push esi
// 0056a113  57                   push edi
// 0056a114  8bf0                 mov esi, eax
// 0056a116  68e0000000           push 0xe0
// 0056a11b  e890f8ffff           call 0x5699b0
// 0056a120  83c404               add esp, 4
// 0056a123  bb10000000           mov ebx, 0x10
// 0056a128  e8f3f8ffff           call 0x569a20
// 0056a12d  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a130  8b08                 mov ecx, dword ptr [eax]
// 0056a132  c6014a               mov byte ptr [ecx], 0x4a
// 0056a135  ff00                 inc dword ptr [eax]
// 0056a137  83cfff               or edi, 0xffffffff
// 0056a13a  017804               add dword ptr [eax + 4], edi
// 0056a13d  8d6b08               lea ebp, [ebx + 8]
// 0056a140  751c                 jne 0x56a15e
// 0056a142  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a145  56                   push esi
// 0056a146  ffd2                 call edx
// 0056a148  83c404               add esp, 4
// 0056a14b  84c0                 test al, al
// 0056a14d  750f                 jne 0x56a15e
// 0056a14f  8b06                 mov eax, dword ptr [esi]
// 0056a151  896814               mov dword ptr [eax + 0x14], ebp
// 0056a154  8b0e                 mov ecx, dword ptr [esi]
// 0056a156  8b11                 mov edx, dword ptr [ecx]
// 0056a158  56                   push esi
// 0056a159  ffd2                 call edx
// 0056a15b  83c404               add esp, 4
// 0056a15e  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a161  8b08                 mov ecx, dword ptr [eax]
// 0056a163  c60146               mov byte ptr [ecx], 0x46
// 0056a166  ff00                 inc dword ptr [eax]
// 0056a168  017804               add dword ptr [eax + 4], edi
// 0056a16b  751c                 jne 0x56a189
// 0056a16d  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a170  56                   push esi
// 0056a171  ffd2                 call edx
// 0056a173  83c404               add esp, 4
// 0056a176  84c0                 test al, al
// 0056a178  750f                 jne 0x56a189
// 0056a17a  8b06                 mov eax, dword ptr [esi]
// 0056a17c  896814               mov dword ptr [eax + 0x14], ebp
// 0056a17f  8b0e                 mov ecx, dword ptr [esi]
// 0056a181  8b11                 mov edx, dword ptr [ecx]
// 0056a183  56                   push esi
// 0056a184  ffd2                 call edx
// 0056a186  83c404               add esp, 4
// 0056a189  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a18c  8b08                 mov ecx, dword ptr [eax]
// 0056a18e  c60149               mov byte ptr [ecx], 0x49
// 0056a191  ff00                 inc dword ptr [eax]
// 0056a193  017804               add dword ptr [eax + 4], edi
// 0056a196  751c                 jne 0x56a1b4
// 0056a198  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a19b  56                   push esi
// 0056a19c  ffd2                 call edx
// 0056a19e  83c404               add esp, 4
// 0056a1a1  84c0                 test al, al
// 0056a1a3  750f                 jne 0x56a1b4
// 0056a1a5  8b06                 mov eax, dword ptr [esi]
// 0056a1a7  896814               mov dword ptr [eax + 0x14], ebp
// 0056a1aa  8b0e                 mov ecx, dword ptr [esi]
// 0056a1ac  8b11                 mov edx, dword ptr [ecx]
// 0056a1ae  56                   push esi
// 0056a1af  ffd2                 call edx
// 0056a1b1  83c404               add esp, 4
// 0056a1b4  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a1b7  8b08                 mov ecx, dword ptr [eax]
// 0056a1b9  c60146               mov byte ptr [ecx], 0x46
// 0056a1bc  ff00                 inc dword ptr [eax]
// 0056a1be  017804               add dword ptr [eax + 4], edi
// 0056a1c1  751c                 jne 0x56a1df
// 0056a1c3  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a1c6  56                   push esi
// 0056a1c7  ffd2                 call edx
// 0056a1c9  83c404               add esp, 4
// 0056a1cc  84c0                 test al, al
// 0056a1ce  750f                 jne 0x56a1df
// 0056a1d0  8b06                 mov eax, dword ptr [esi]
// 0056a1d2  896814               mov dword ptr [eax + 0x14], ebp
// 0056a1d5  8b0e                 mov ecx, dword ptr [esi]
// 0056a1d7  8b11                 mov edx, dword ptr [ecx]
// 0056a1d9  56                   push esi
// 0056a1da  ffd2                 call edx
// 0056a1dc  83c404               add esp, 4
// 0056a1df  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a1e2  8b08                 mov ecx, dword ptr [eax]
// 0056a1e4  c60100               mov byte ptr [ecx], 0
// 0056a1e7  ff00                 inc dword ptr [eax]
// 0056a1e9  017804               add dword ptr [eax + 4], edi
// 0056a1ec  751c                 jne 0x56a20a
// 0056a1ee  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a1f1  56                   push esi
// 0056a1f2  ffd2                 call edx
// 0056a1f4  83c404               add esp, 4
// 0056a1f7  84c0                 test al, al
// 0056a1f9  750f                 jne 0x56a20a
// 0056a1fb  8b06                 mov eax, dword ptr [esi]
// 0056a1fd  896814               mov dword ptr [eax + 0x14], ebp
// 0056a200  8b0e                 mov ecx, dword ptr [esi]
// 0056a202  8b11                 mov edx, dword ptr [ecx]
// 0056a204  56                   push esi
// 0056a205  ffd2                 call edx
// 0056a207  83c404               add esp, 4
// 0056a20a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a20d  8a96c5000000         mov dl, byte ptr [esi + 0xc5]
// 0056a213  8b08                 mov ecx, dword ptr [eax]
// 0056a215  8811                 mov byte ptr [ecx], dl
// 0056a217  ff00                 inc dword ptr [eax]
// 0056a219  017804               add dword ptr [eax + 4], edi
// 0056a21c  751c                 jne 0x56a23a
// 0056a21e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a221  56                   push esi
// 0056a222  ffd0                 call eax
// 0056a224  83c404               add esp, 4
// 0056a227  84c0                 test al, al
// 0056a229  750f                 jne 0x56a23a
// 0056a22b  8b0e                 mov ecx, dword ptr [esi]
// 0056a22d  896914               mov dword ptr [ecx + 0x14], ebp
// 0056a230  8b16                 mov edx, dword ptr [esi]
// 0056a232  8b02                 mov eax, dword ptr [edx]
// 0056a234  56                   push esi
// 0056a235  ffd0                 call eax
// 0056a237  83c404               add esp, 4
// 0056a23a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a23d  8a96c6000000         mov dl, byte ptr [esi + 0xc6]
// 0056a243  8b08                 mov ecx, dword ptr [eax]
// 0056a245  8811                 mov byte ptr [ecx], dl
// 0056a247  ff00                 inc dword ptr [eax]
// 0056a249  017804               add dword ptr [eax + 4], edi
// 0056a24c  751c                 jne 0x56a26a
// 0056a24e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a251  56                   push esi
// 0056a252  ffd0                 call eax
// 0056a254  83c404               add esp, 4
// 0056a257  84c0                 test al, al
// 0056a259  750f                 jne 0x56a26a
// 0056a25b  8b0e                 mov ecx, dword ptr [esi]
// 0056a25d  896914               mov dword ptr [ecx + 0x14], ebp
// 0056a260  8b16                 mov edx, dword ptr [esi]
// 0056a262  8b02                 mov eax, dword ptr [edx]
// 0056a264  56                   push esi
// 0056a265  ffd0                 call eax
// 0056a267  83c404               add esp, 4
// 0056a26a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a26d  8a96c7000000         mov dl, byte ptr [esi + 0xc7]
// 0056a273  8b08                 mov ecx, dword ptr [eax]
// 0056a275  8811                 mov byte ptr [ecx], dl
// 0056a277  ff00                 inc dword ptr [eax]
// 0056a279  017804               add dword ptr [eax + 4], edi
// 0056a27c  751c                 jne 0x56a29a
// 0056a27e  8b400c               mov eax, dword ptr [eax + 0xc]
// 0056a281  56                   push esi
// 0056a282  ffd0                 call eax
// 0056a284  83c404               add esp, 4
// 0056a287  84c0                 test al, al
// 0056a289  750f                 jne 0x56a29a
// 0056a28b  8b0e                 mov ecx, dword ptr [esi]
// 0056a28d  896914               mov dword ptr [ecx + 0x14], ebp
// 0056a290  8b16                 mov edx, dword ptr [esi]
// 0056a292  8b02                 mov eax, dword ptr [edx]
// 0056a294  56                   push esi
// 0056a295  ffd0                 call eax
// 0056a297  83c404               add esp, 4
// 0056a29a  0fb79ec8000000       movzx ebx, word ptr [esi + 0xc8]
// 0056a2a1  e87af7ffff           call 0x569a20
// 0056a2a6  0fb79eca000000       movzx ebx, word ptr [esi + 0xca]
// 0056a2ad  e86ef7ffff           call 0x569a20
// 0056a2b2  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a2b5  8b08                 mov ecx, dword ptr [eax]
// 0056a2b7  c60100               mov byte ptr [ecx], 0
// 0056a2ba  ff00                 inc dword ptr [eax]
// 0056a2bc  017804               add dword ptr [eax + 4], edi
// 0056a2bf  751c                 jne 0x56a2dd
// 0056a2c1  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a2c4  56                   push esi
// 0056a2c5  ffd2                 call edx
// 0056a2c7  83c404               add esp, 4
// 0056a2ca  84c0                 test al, al
// 0056a2cc  750f                 jne 0x56a2dd
// 0056a2ce  8b06                 mov eax, dword ptr [esi]
// 0056a2d0  896814               mov dword ptr [eax + 0x14], ebp
// 0056a2d3  8b0e                 mov ecx, dword ptr [esi]
// 0056a2d5  8b11                 mov edx, dword ptr [ecx]
// 0056a2d7  56                   push esi
// 0056a2d8  ffd2                 call edx
// 0056a2da  83c404               add esp, 4
// 0056a2dd  8b4618               mov eax, dword ptr [esi + 0x18]
// 0056a2e0  8b08                 mov ecx, dword ptr [eax]
// 0056a2e2  c60100               mov byte ptr [ecx], 0
// 0056a2e5  ff00                 inc dword ptr [eax]
// 0056a2e7  017804               add dword ptr [eax + 4], edi
// 0056a2ea  751c                 jne 0x56a308
// 0056a2ec  8b500c               mov edx, dword ptr [eax + 0xc]
// 0056a2ef  56                   push esi
// 0056a2f0  ffd2                 call edx
// 0056a2f2  83c404               add esp, 4
// 0056a2f5  84c0                 test al, al
// 0056a2f7  750f                 jne 0x56a308
// 0056a2f9  8b06                 mov eax, dword ptr [esi]
// 0056a2fb  896814               mov dword ptr [eax + 0x14], ebp
// 0056a2fe  8b0e                 mov ecx, dword ptr [esi]
// 0056a300  8b11                 mov edx, dword ptr [ecx]
// 0056a302  56                   push esi
// 0056a303  ffd2                 call edx
// 0056a305  83c404               add esp, 4
// 0056a308  5f                   pop edi
// 0056a309  5e                   pop esi
// 0056a30a  5d                   pop ebp
// 0056a30b  5b                   pop ebx
// 0056a30c  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_jfif_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
