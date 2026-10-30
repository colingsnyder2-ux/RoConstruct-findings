// roc 2009-12 00628a50  unit: seg_00620000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00628a50
//
// 00628a50  81ec24010000         sub esp, 0x124
// 00628a56  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 00628a5d  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 00628a64  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00628a67  53                   push ebx
// 00628a68  55                   push ebp
// 00628a69  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 00628a6f  56                   push esi
// 00628a70  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 00628a77  83ed80               sub ebp, -0x80
// 00628a7a  57                   push edi
// 00628a7b  896c2420             mov dword ptr [esp + 0x20], ebp
// 00628a7f  8d4c2434             lea ecx, [esp + 0x34]
// 00628a83  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 00628a8b  eb03                 jmp 0x628a90
// 00628a8d  8d4900               lea ecx, [ecx]
// 00628a90  0fb74610             movzx eax, word ptr [esi + 0x10]
// 00628a94  6685c0               test ax, ax
// 00628a97  754f                 jne 0x628ae8
// 00628a99  66394620             cmp word ptr [esi + 0x20], ax
// 00628a9d  7549                 jne 0x628ae8
// 00628a9f  66394630             cmp word ptr [esi + 0x30], ax
// 00628aa3  7543                 jne 0x628ae8
// 00628aa5  66394640             cmp word ptr [esi + 0x40], ax
// 00628aa9  753d                 jne 0x628ae8
// 00628aab  66394650             cmp word ptr [esi + 0x50], ax
// 00628aaf  7537                 jne 0x628ae8
// 00628ab1  66394660             cmp word ptr [esi + 0x60], ax
// 00628ab5  7531                 jne 0x628ae8
// 00628ab7  66394670             cmp word ptr [esi + 0x70], ax
// 00628abb  752b                 jne 0x628ae8
// 00628abd  0fbf06               movsx eax, word ptr [esi]
// 00628ac0  0faf02               imul eax, dword ptr [edx]
// 00628ac3  8901                 mov dword ptr [ecx], eax
// 00628ac5  894120               mov dword ptr [ecx + 0x20], eax
// 00628ac8  894140               mov dword ptr [ecx + 0x40], eax
// 00628acb  898180000000         mov dword ptr [ecx + 0x80], eax
// 00628ad1  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00628ad7  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 00628add  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 00628ae3  e93e010000           jmp 0x628c26
// 00628ae8  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 00628aec  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 00628af3  0fbf3e               movsx edi, word ptr [esi]
// 00628af6  0faf3a               imul edi, dword ptr [edx]
// 00628af9  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 00628afd  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 00628b04  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 00628b08  0faf4240             imul eax, dword ptr [edx + 0x40]
// 00628b0c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00628b10  8d1c2f               lea ebx, [edi + ebp]
// 00628b13  2bfd                 sub edi, ebp
// 00628b15  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00628b19  03e8                 add ebp, eax
// 00628b1b  2b442418             sub eax, dword ptr [esp + 0x18]
// 00628b1f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00628b23  69c06a010000         imul eax, eax, 0x16a
// 00628b29  c1f808               sar eax, 8
// 00628b2c  2bc5                 sub eax, ebp
// 00628b2e  89442410             mov dword ptr [esp + 0x10], eax
// 00628b32  8d042b               lea eax, [ebx + ebp]
// 00628b35  2bdd                 sub ebx, ebp
// 00628b37  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 00628b3b  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 00628b42  89442428             mov dword ptr [esp + 0x28], eax
// 00628b46  8b442410             mov eax, dword ptr [esp + 0x10]
// 00628b4a  895c2418             mov dword ptr [esp + 0x18], ebx
// 00628b4e  8d1c38               lea ebx, [eax + edi]
// 00628b51  2bf8                 sub edi, eax
// 00628b53  0fb74610             movzx eax, word ptr [esi + 0x10]
// 00628b57  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00628b5b  897c2430             mov dword ptr [esp + 0x30], edi
// 00628b5f  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 00628b63  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 00628b6a  0fbfd8               movsx ebx, ax
// 00628b6d  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 00628b71  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 00628b75  0faf4260             imul eax, dword ptr [edx + 0x60]
// 00628b79  896c2414             mov dword ptr [esp + 0x14], ebp
// 00628b7d  8d2c07               lea ebp, [edi + eax]
// 00628b80  2bf8                 sub edi, eax
// 00628b82  8b442414             mov eax, dword ptr [esp + 0x14]
// 00628b86  03c3                 add eax, ebx
// 00628b88  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00628b8c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00628b90  03e8                 add ebp, eax
// 00628b92  2b442424             sub eax, dword ptr [esp + 0x24]
// 00628b96  896c2414             mov dword ptr [esp + 0x14], ebp
// 00628b9a  8d2c3b               lea ebp, [ebx + edi]
// 00628b9d  69ff63fdffff         imul edi, edi, 0xfffffd63
// 00628ba3  69db15010000         imul ebx, ebx, 0x115
// 00628ba9  69edd9010000         imul ebp, ebp, 0x1d9
// 00628baf  69c06a010000         imul eax, eax, 0x16a
// 00628bb5  c1fd08               sar ebp, 8
// 00628bb8  c1ff08               sar edi, 8
// 00628bbb  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00628bbf  c1fb08               sar ebx, 8
// 00628bc2  03fd                 add edi, ebp
// 00628bc4  2bdd                 sub ebx, ebp
// 00628bc6  c1f808               sar eax, 8
// 00628bc9  2bc7                 sub eax, edi
// 00628bcb  03d8                 add ebx, eax
// 00628bcd  896c2410             mov dword ptr [esp + 0x10], ebp
// 00628bd1  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00628bd5  895c2410             mov dword ptr [esp + 0x10], ebx
// 00628bd9  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00628bdd  03dd                 add ebx, ebp
// 00628bdf  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 00628be3  8919                 mov dword ptr [ecx], ebx
// 00628be5  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 00628beb  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00628bef  8d1c2f               lea ebx, [edi + ebp]
// 00628bf2  2bef                 sub ebp, edi
// 00628bf4  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00628bf8  895920               mov dword ptr [ecx + 0x20], ebx
// 00628bfb  8d1c38               lea ebx, [eax + edi]
// 00628bfe  2bf8                 sub edi, eax
// 00628c00  8b442418             mov eax, dword ptr [esp + 0x18]
// 00628c04  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 00628c0a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00628c0e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 00628c14  895940               mov dword ptr [ecx + 0x40], ebx
// 00628c17  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00628c1b  8d1c07               lea ebx, [edi + eax]
// 00628c1e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 00628c24  2bc7                 sub eax, edi
// 00628c26  894160               mov dword ptr [ecx + 0x60], eax
// 00628c29  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00628c2d  48                   dec eax
// 00628c2e  83c602               add esi, 2
// 00628c31  83c204               add edx, 4
// 00628c34  83c104               add ecx, 4
// 00628c37  8944241c             mov dword ptr [esp + 0x1c], eax
// 00628c3b  85c0                 test eax, eax
// 00628c3d  0f8f4dfeffff         jg 0x628a90
// 00628c43  33f6                 xor esi, esi
// 00628c45  8d542434             lea edx, [esp + 0x34]
// 00628c49  8974241c             mov dword ptr [esp + 0x1c], esi
// 00628c4d  8d4900               lea ecx, [ecx]
// 00628c50  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 00628c57  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00628c5a  8b4a04               mov ecx, dword ptr [edx + 4]
// 00628c5d  03842448010000       add eax, dword ptr [esp + 0x148]
// 00628c64  85c9                 test ecx, ecx
// 00628c66  7545                 jne 0x628cad
// 00628c68  394a08               cmp dword ptr [edx + 8], ecx
// 00628c6b  7540                 jne 0x628cad
// 00628c6d  394a0c               cmp dword ptr [edx + 0xc], ecx
// 00628c70  753b                 jne 0x628cad
// 00628c72  394a10               cmp dword ptr [edx + 0x10], ecx
// 00628c75  7536                 jne 0x628cad
// 00628c77  394a14               cmp dword ptr [edx + 0x14], ecx
// 00628c7a  7531                 jne 0x628cad
// 00628c7c  394a18               cmp dword ptr [edx + 0x18], ecx
// 00628c7f  752c                 jne 0x628cad
// 00628c81  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 00628c84  7527                 jne 0x628cad
// 00628c86  8b0a                 mov ecx, dword ptr [edx]
// 00628c88  c1f905               sar ecx, 5
// 00628c8b  81e1ff030000         and ecx, 0x3ff
// 00628c91  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00628c94  8808                 mov byte ptr [eax], cl
// 00628c96  884801               mov byte ptr [eax + 1], cl
// 00628c99  884802               mov byte ptr [eax + 2], cl
// 00628c9c  884804               mov byte ptr [eax + 4], cl
// 00628c9f  884805               mov byte ptr [eax + 5], cl
// 00628ca2  884806               mov byte ptr [eax + 6], cl
// 00628ca5  884807               mov byte ptr [eax + 7], cl
// 00628ca8  e95b010000           jmp 0x628e08
// 00628cad  8b7a10               mov edi, dword ptr [edx + 0x10]
// 00628cb0  8b0a                 mov ecx, dword ptr [edx]
// 00628cb2  8d3439               lea esi, [ecx + edi]
// 00628cb5  2bcf                 sub ecx, edi
// 00628cb7  8b7a18               mov edi, dword ptr [edx + 0x18]
// 00628cba  8bd9                 mov ebx, ecx
// 00628cbc  8b4a08               mov ecx, dword ptr [edx + 8]
// 00628cbf  03f9                 add edi, ecx
// 00628cc1  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 00628cc4  897c2410             mov dword ptr [esp + 0x10], edi
// 00628cc8  69c96a010000         imul ecx, ecx, 0x16a
// 00628cce  c1f908               sar ecx, 8
// 00628cd1  2bcf                 sub ecx, edi
// 00628cd3  894c2410             mov dword ptr [esp + 0x10], ecx
// 00628cd7  8d0c37               lea ecx, [edi + esi]
// 00628cda  2bf7                 sub esi, edi
// 00628cdc  894c2428             mov dword ptr [esp + 0x28], ecx
// 00628ce0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00628ce4  89742418             mov dword ptr [esp + 0x18], esi
// 00628ce8  8d3419               lea esi, [ecx + ebx]
// 00628ceb  2bd9                 sub ebx, ecx
// 00628ced  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00628cf0  8974242c             mov dword ptr [esp + 0x2c], esi
// 00628cf4  8b7214               mov esi, dword ptr [edx + 0x14]
// 00628cf7  8d3c0e               lea edi, [esi + ecx]
// 00628cfa  2bf1                 sub esi, ecx
// 00628cfc  895c2430             mov dword ptr [esp + 0x30], ebx
// 00628d00  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 00628d03  897c2424             mov dword ptr [esp + 0x24], edi
// 00628d07  8b7a04               mov edi, dword ptr [edx + 4]
// 00628d0a  8d0c3b               lea ecx, [ebx + edi]
// 00628d0d  2bfb                 sub edi, ebx
// 00628d0f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00628d13  03d9                 add ebx, ecx
// 00628d15  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00628d19  895c2414             mov dword ptr [esp + 0x14], ebx
// 00628d1d  8d1c37               lea ebx, [edi + esi]
// 00628d20  69f663fdffff         imul esi, esi, 0xfffffd63
// 00628d26  69c96a010000         imul ecx, ecx, 0x16a
// 00628d2c  69dbd9010000         imul ebx, ebx, 0x1d9
// 00628d32  69ff15010000         imul edi, edi, 0x115
// 00628d38  c1fe08               sar esi, 8
// 00628d3b  2b742414             sub esi, dword ptr [esp + 0x14]
// 00628d3f  c1f908               sar ecx, 8
// 00628d42  c1fb08               sar ebx, 8
// 00628d45  03f3                 add esi, ebx
// 00628d47  895c2410             mov dword ptr [esp + 0x10], ebx
// 00628d4b  8bde                 mov ebx, esi
// 00628d4d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00628d51  2bcb                 sub ecx, ebx
// 00628d53  894c2420             mov dword ptr [esp + 0x20], ecx
// 00628d57  c1ff08               sar edi, 8
// 00628d5a  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 00628d5e  03f9                 add edi, ecx
// 00628d60  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00628d64  03ce                 add ecx, esi
// 00628d66  2b742414             sub esi, dword ptr [esp + 0x14]
// 00628d6a  c1f905               sar ecx, 5
// 00628d6d  81e1ff030000         and ecx, 0x3ff
// 00628d73  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00628d77  c1fe05               sar esi, 5
// 00628d7a  81e6ff030000         and esi, 0x3ff
// 00628d80  8808                 mov byte ptr [eax], cl
// 00628d82  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00628d86  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00628d8a  884807               mov byte ptr [eax + 7], cl
// 00628d8d  8d0c33               lea ecx, [ebx + esi]
// 00628d90  c1f905               sar ecx, 5
// 00628d93  2bf3                 sub esi, ebx
// 00628d95  81e1ff030000         and ecx, 0x3ff
// 00628d9b  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00628d9f  c1fe05               sar esi, 5
// 00628da2  81e6ff030000         and esi, 0x3ff
// 00628da8  884801               mov byte ptr [eax + 1], cl
// 00628dab  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00628daf  8b742430             mov esi, dword ptr [esp + 0x30]
// 00628db3  884806               mov byte ptr [eax + 6], cl
// 00628db6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00628dba  8d1c31               lea ebx, [ecx + esi]
// 00628dbd  c1fb05               sar ebx, 5
// 00628dc0  81e3ff030000         and ebx, 0x3ff
// 00628dc6  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 00628dc9  2bf1                 sub esi, ecx
// 00628dcb  c1fe05               sar esi, 5
// 00628dce  81e6ff030000         and esi, 0x3ff
// 00628dd4  885802               mov byte ptr [eax + 2], bl
// 00628dd7  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00628ddb  8b742418             mov esi, dword ptr [esp + 0x18]
// 00628ddf  884805               mov byte ptr [eax + 5], cl
// 00628de2  8d0c37               lea ecx, [edi + esi]
// 00628de5  c1f905               sar ecx, 5
// 00628de8  81e1ff030000         and ecx, 0x3ff
// 00628dee  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00628df2  2bf7                 sub esi, edi
// 00628df4  c1fe05               sar esi, 5
// 00628df7  81e6ff030000         and esi, 0x3ff
// 00628dfd  884804               mov byte ptr [eax + 4], cl
// 00628e00  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00628e04  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00628e08  46                   inc esi
// 00628e09  83c220               add edx, 0x20
// 00628e0c  83fe08               cmp esi, 8
// 00628e0f  884803               mov byte ptr [eax + 3], cl
// 00628e12  8974241c             mov dword ptr [esp + 0x1c], esi
// 00628e16  0f8c34feffff         jl 0x628c50
// 00628e1c  5f                   pop edi
// 00628e1d  5e                   pop esi
// 00628e1e  5d                   pop ebp
// 00628e1f  5b                   pop ebx
// 00628e20  81c424010000         add esp, 0x124
// 00628e26  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
