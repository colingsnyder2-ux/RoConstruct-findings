// from server: 100% by auto
// roc 2008-06 0053c7c0  unit: seg_00530000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053c7c0
//
// 0053c7c0  81ec24010000         sub esp, 0x124
// 0053c7c6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0053c7cd  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0053c7d4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0053c7d7  53                   push ebx
// 0053c7d8  55                   push ebp
// 0053c7d9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 0053c7df  56                   push esi
// 0053c7e0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 0053c7e7  83ed80               sub ebp, -0x80
// 0053c7ea  57                   push edi
// 0053c7eb  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053c7ef  8d4c2434             lea ecx, [esp + 0x34]
// 0053c7f3  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 0053c7fb  eb03                 jmp 0x53c800
// 0053c7fd  8d4900               lea ecx, [ecx]
// 0053c800  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0053c804  6685c0               test ax, ax
// 0053c807  754f                 jne 0x53c858
// 0053c809  66394620             cmp word ptr [esi + 0x20], ax
// 0053c80d  7549                 jne 0x53c858
// 0053c80f  66394630             cmp word ptr [esi + 0x30], ax
// 0053c813  7543                 jne 0x53c858
// 0053c815  66394640             cmp word ptr [esi + 0x40], ax
// 0053c819  753d                 jne 0x53c858
// 0053c81b  66394650             cmp word ptr [esi + 0x50], ax
// 0053c81f  7537                 jne 0x53c858
// 0053c821  66394660             cmp word ptr [esi + 0x60], ax
// 0053c825  7531                 jne 0x53c858
// 0053c827  66394670             cmp word ptr [esi + 0x70], ax
// 0053c82b  752b                 jne 0x53c858
// 0053c82d  0fbf06               movsx eax, word ptr [esi]
// 0053c830  0faf02               imul eax, dword ptr [edx]
// 0053c833  8901                 mov dword ptr [ecx], eax
// 0053c835  894120               mov dword ptr [ecx + 0x20], eax
// 0053c838  894140               mov dword ptr [ecx + 0x40], eax
// 0053c83b  898180000000         mov dword ptr [ecx + 0x80], eax
// 0053c841  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0053c847  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0053c84d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 0053c853  e93e010000           jmp 0x53c996
// 0053c858  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0053c85c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 0053c863  0fbf3e               movsx edi, word ptr [esi]
// 0053c866  0faf3a               imul edi, dword ptr [edx]
// 0053c869  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0053c86d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 0053c874  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 0053c878  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0053c87c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053c880  8d1c2f               lea ebx, [edi + ebp]
// 0053c883  2bfd                 sub edi, ebp
// 0053c885  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053c889  03e8                 add ebp, eax
// 0053c88b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0053c88f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053c893  69c06a010000         imul eax, eax, 0x16a
// 0053c899  c1f808               sar eax, 8
// 0053c89c  2bc5                 sub eax, ebp
// 0053c89e  89442410             mov dword ptr [esp + 0x10], eax
// 0053c8a2  8d042b               lea eax, [ebx + ebp]
// 0053c8a5  2bdd                 sub ebx, ebp
// 0053c8a7  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0053c8ab  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 0053c8b2  89442428             mov dword ptr [esp + 0x28], eax
// 0053c8b6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053c8ba  895c2418             mov dword ptr [esp + 0x18], ebx
// 0053c8be  8d1c38               lea ebx, [eax + edi]
// 0053c8c1  2bf8                 sub edi, eax
// 0053c8c3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0053c8c7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0053c8cb  897c2430             mov dword ptr [esp + 0x30], edi
// 0053c8cf  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 0053c8d3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 0053c8da  0fbfd8               movsx ebx, ax
// 0053c8dd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 0053c8e1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 0053c8e5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 0053c8e9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053c8ed  8d2c07               lea ebp, [edi + eax]
// 0053c8f0  2bf8                 sub edi, eax
// 0053c8f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0053c8f6  03c3                 add eax, ebx
// 0053c8f8  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0053c8fc  896c2424             mov dword ptr [esp + 0x24], ebp
// 0053c900  03e8                 add ebp, eax
// 0053c902  2b442424             sub eax, dword ptr [esp + 0x24]
// 0053c906  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053c90a  8d2c3b               lea ebp, [ebx + edi]
// 0053c90d  69ff63fdffff         imul edi, edi, 0xfffffd63
// 0053c913  69db15010000         imul ebx, ebx, 0x115
// 0053c919  69edd9010000         imul ebp, ebp, 0x1d9
// 0053c91f  69c06a010000         imul eax, eax, 0x16a
// 0053c925  c1fd08               sar ebp, 8
// 0053c928  c1ff08               sar edi, 8
// 0053c92b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0053c92f  c1fb08               sar ebx, 8
// 0053c932  03fd                 add edi, ebp
// 0053c934  2bdd                 sub ebx, ebp
// 0053c936  c1f808               sar eax, 8
// 0053c939  2bc7                 sub eax, edi
// 0053c93b  03d8                 add ebx, eax
// 0053c93d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053c941  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0053c945  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053c949  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053c94d  03dd                 add ebx, ebp
// 0053c94f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0053c953  8919                 mov dword ptr [ecx], ebx
// 0053c955  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 0053c95b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0053c95f  8d1c2f               lea ebx, [edi + ebp]
// 0053c962  2bef                 sub ebp, edi
// 0053c964  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0053c968  895920               mov dword ptr [ecx + 0x20], ebx
// 0053c96b  8d1c38               lea ebx, [eax + edi]
// 0053c96e  2bf8                 sub edi, eax
// 0053c970  8b442418             mov eax, dword ptr [esp + 0x18]
// 0053c974  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 0053c97a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0053c97e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 0053c984  895940               mov dword ptr [ecx + 0x40], ebx
// 0053c987  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053c98b  8d1c07               lea ebx, [edi + eax]
// 0053c98e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 0053c994  2bc7                 sub eax, edi
// 0053c996  894160               mov dword ptr [ecx + 0x60], eax
// 0053c999  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053c99d  48                   dec eax
// 0053c99e  83c602               add esi, 2
// 0053c9a1  83c204               add edx, 4
// 0053c9a4  83c104               add ecx, 4
// 0053c9a7  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053c9ab  85c0                 test eax, eax
// 0053c9ad  0f8f4dfeffff         jg 0x53c800
// 0053c9b3  33f6                 xor esi, esi
// 0053c9b5  8d542434             lea edx, [esp + 0x34]
// 0053c9b9  8974241c             mov dword ptr [esp + 0x1c], esi
// 0053c9bd  8d4900               lea ecx, [ecx]
// 0053c9c0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0053c9c7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0053c9ca  8b4a04               mov ecx, dword ptr [edx + 4]
// 0053c9cd  03842448010000       add eax, dword ptr [esp + 0x148]
// 0053c9d4  85c9                 test ecx, ecx
// 0053c9d6  7545                 jne 0x53ca1d
// 0053c9d8  394a08               cmp dword ptr [edx + 8], ecx
// 0053c9db  7540                 jne 0x53ca1d
// 0053c9dd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0053c9e0  753b                 jne 0x53ca1d
// 0053c9e2  394a10               cmp dword ptr [edx + 0x10], ecx
// 0053c9e5  7536                 jne 0x53ca1d
// 0053c9e7  394a14               cmp dword ptr [edx + 0x14], ecx
// 0053c9ea  7531                 jne 0x53ca1d
// 0053c9ec  394a18               cmp dword ptr [edx + 0x18], ecx
// 0053c9ef  752c                 jne 0x53ca1d
// 0053c9f1  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 0053c9f4  7527                 jne 0x53ca1d
// 0053c9f6  8b0a                 mov ecx, dword ptr [edx]
// 0053c9f8  c1f905               sar ecx, 5
// 0053c9fb  81e1ff030000         and ecx, 0x3ff
// 0053ca01  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0053ca04  8808                 mov byte ptr [eax], cl
// 0053ca06  884801               mov byte ptr [eax + 1], cl
// 0053ca09  884802               mov byte ptr [eax + 2], cl
// 0053ca0c  884804               mov byte ptr [eax + 4], cl
// 0053ca0f  884805               mov byte ptr [eax + 5], cl
// 0053ca12  884806               mov byte ptr [eax + 6], cl
// 0053ca15  884807               mov byte ptr [eax + 7], cl
// 0053ca18  e95b010000           jmp 0x53cb78
// 0053ca1d  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0053ca20  8b0a                 mov ecx, dword ptr [edx]
// 0053ca22  8d3439               lea esi, [ecx + edi]
// 0053ca25  2bcf                 sub ecx, edi
// 0053ca27  8b7a18               mov edi, dword ptr [edx + 0x18]
// 0053ca2a  8bd9                 mov ebx, ecx
// 0053ca2c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0053ca2f  03f9                 add edi, ecx
// 0053ca31  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 0053ca34  897c2410             mov dword ptr [esp + 0x10], edi
// 0053ca38  69c96a010000         imul ecx, ecx, 0x16a
// 0053ca3e  c1f908               sar ecx, 8
// 0053ca41  2bcf                 sub ecx, edi
// 0053ca43  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053ca47  8d0c37               lea ecx, [edi + esi]
// 0053ca4a  2bf7                 sub esi, edi
// 0053ca4c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053ca50  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ca54  89742418             mov dword ptr [esp + 0x18], esi
// 0053ca58  8d3419               lea esi, [ecx + ebx]
// 0053ca5b  2bd9                 sub ebx, ecx
// 0053ca5d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0053ca60  8974242c             mov dword ptr [esp + 0x2c], esi
// 0053ca64  8b7214               mov esi, dword ptr [edx + 0x14]
// 0053ca67  8d3c0e               lea edi, [esi + ecx]
// 0053ca6a  2bf1                 sub esi, ecx
// 0053ca6c  895c2430             mov dword ptr [esp + 0x30], ebx
// 0053ca70  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 0053ca73  897c2424             mov dword ptr [esp + 0x24], edi
// 0053ca77  8b7a04               mov edi, dword ptr [edx + 4]
// 0053ca7a  8d0c3b               lea ecx, [ebx + edi]
// 0053ca7d  2bfb                 sub edi, ebx
// 0053ca7f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053ca83  03d9                 add ebx, ecx
// 0053ca85  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0053ca89  895c2414             mov dword ptr [esp + 0x14], ebx
// 0053ca8d  8d1c37               lea ebx, [edi + esi]
// 0053ca90  69f663fdffff         imul esi, esi, 0xfffffd63
// 0053ca96  69c96a010000         imul ecx, ecx, 0x16a
// 0053ca9c  69dbd9010000         imul ebx, ebx, 0x1d9
// 0053caa2  69ff15010000         imul edi, edi, 0x115
// 0053caa8  c1fe08               sar esi, 8
// 0053caab  2b742414             sub esi, dword ptr [esp + 0x14]
// 0053caaf  c1f908               sar ecx, 8
// 0053cab2  c1fb08               sar ebx, 8
// 0053cab5  03f3                 add esi, ebx
// 0053cab7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0053cabb  8bde                 mov ebx, esi
// 0053cabd  8b742428             mov esi, dword ptr [esp + 0x28]
// 0053cac1  2bcb                 sub ecx, ebx
// 0053cac3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053cac7  c1ff08               sar edi, 8
// 0053caca  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0053cace  03f9                 add edi, ecx
// 0053cad0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053cad4  03ce                 add ecx, esi
// 0053cad6  2b742414             sub esi, dword ptr [esp + 0x14]
// 0053cada  c1f905               sar ecx, 5
// 0053cadd  81e1ff030000         and ecx, 0x3ff
// 0053cae3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0053cae7  c1fe05               sar esi, 5
// 0053caea  81e6ff030000         and esi, 0x3ff
// 0053caf0  8808                 mov byte ptr [eax], cl
// 0053caf2  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0053caf6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0053cafa  884807               mov byte ptr [eax + 7], cl
// 0053cafd  8d0c33               lea ecx, [ebx + esi]
// 0053cb00  c1f905               sar ecx, 5
// 0053cb03  2bf3                 sub esi, ebx
// 0053cb05  81e1ff030000         and ecx, 0x3ff
// 0053cb0b  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0053cb0f  c1fe05               sar esi, 5
// 0053cb12  81e6ff030000         and esi, 0x3ff
// 0053cb18  884801               mov byte ptr [eax + 1], cl
// 0053cb1b  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0053cb1f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0053cb23  884806               mov byte ptr [eax + 6], cl
// 0053cb26  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053cb2a  8d1c31               lea ebx, [ecx + esi]
// 0053cb2d  c1fb05               sar ebx, 5
// 0053cb30  81e3ff030000         and ebx, 0x3ff
// 0053cb36  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 0053cb39  2bf1                 sub esi, ecx
// 0053cb3b  c1fe05               sar esi, 5
// 0053cb3e  81e6ff030000         and esi, 0x3ff
// 0053cb44  885802               mov byte ptr [eax + 2], bl
// 0053cb47  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0053cb4b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053cb4f  884805               mov byte ptr [eax + 5], cl
// 0053cb52  8d0c37               lea ecx, [edi + esi]
// 0053cb55  c1f905               sar ecx, 5
// 0053cb58  81e1ff030000         and ecx, 0x3ff
// 0053cb5e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0053cb62  2bf7                 sub esi, edi
// 0053cb64  c1fe05               sar esi, 5
// 0053cb67  81e6ff030000         and esi, 0x3ff
// 0053cb6d  884804               mov byte ptr [eax + 4], cl
// 0053cb70  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0053cb74  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0053cb78  46                   inc esi
// 0053cb79  83c220               add edx, 0x20
// 0053cb7c  83fe08               cmp esi, 8
// 0053cb7f  884803               mov byte ptr [eax + 3], cl
// 0053cb82  8974241c             mov dword ptr [esp + 0x1c], esi
// 0053cb86  0f8c34feffff         jl 0x53c9c0
// 0053cb8c  5f                   pop edi
// 0053cb8d  5e                   pop esi
// 0053cb8e  5d                   pop ebp
// 0053cb8f  5b                   pop ebx
// 0053cb90  81c424010000         add esp, 0x124
// 0053cb96  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
