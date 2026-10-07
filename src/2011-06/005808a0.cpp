// roc 2011-06 005808a0  unit: seg_00580000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005808a0
//
// 005808a0  81ec24010000         sub esp, 0x124
// 005808a6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 005808ad  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 005808b4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 005808b7  53                   push ebx
// 005808b8  55                   push ebp
// 005808b9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 005808bf  56                   push esi
// 005808c0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 005808c7  83ed80               sub ebp, -0x80
// 005808ca  57                   push edi
// 005808cb  896c2420             mov dword ptr [esp + 0x20], ebp
// 005808cf  8d4c2434             lea ecx, [esp + 0x34]
// 005808d3  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 005808db  eb03                 jmp 0x5808e0
// 005808dd  8d4900               lea ecx, [ecx]
// 005808e0  0fb74610             movzx eax, word ptr [esi + 0x10]
// 005808e4  6685c0               test ax, ax
// 005808e7  754f                 jne 0x580938
// 005808e9  66394620             cmp word ptr [esi + 0x20], ax
// 005808ed  7549                 jne 0x580938
// 005808ef  66394630             cmp word ptr [esi + 0x30], ax
// 005808f3  7543                 jne 0x580938
// 005808f5  66394640             cmp word ptr [esi + 0x40], ax
// 005808f9  753d                 jne 0x580938
// 005808fb  66394650             cmp word ptr [esi + 0x50], ax
// 005808ff  7537                 jne 0x580938
// 00580901  66394660             cmp word ptr [esi + 0x60], ax
// 00580905  7531                 jne 0x580938
// 00580907  66394670             cmp word ptr [esi + 0x70], ax
// 0058090b  752b                 jne 0x580938
// 0058090d  0fbf06               movsx eax, word ptr [esi]
// 00580910  0faf02               imul eax, dword ptr [edx]
// 00580913  8901                 mov dword ptr [ecx], eax
// 00580915  894120               mov dword ptr [ecx + 0x20], eax
// 00580918  894140               mov dword ptr [ecx + 0x40], eax
// 0058091b  898180000000         mov dword ptr [ecx + 0x80], eax
// 00580921  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 00580927  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0058092d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 00580933  e93e010000           jmp 0x580a76
// 00580938  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0058093c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 00580943  0fbf3e               movsx edi, word ptr [esi]
// 00580946  0faf3a               imul edi, dword ptr [edx]
// 00580949  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0058094d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 00580954  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 00580958  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0058095c  895c2418             mov dword ptr [esp + 0x18], ebx
// 00580960  8d1c2f               lea ebx, [edi + ebp]
// 00580963  2bfd                 sub edi, ebp
// 00580965  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00580969  03e8                 add ebp, eax
// 0058096b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0058096f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00580973  69c06a010000         imul eax, eax, 0x16a
// 00580979  c1f808               sar eax, 8
// 0058097c  2bc5                 sub eax, ebp
// 0058097e  89442410             mov dword ptr [esp + 0x10], eax
// 00580982  8d042b               lea eax, [ebx + ebp]
// 00580985  2bdd                 sub ebx, ebp
// 00580987  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0058098b  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 00580992  89442428             mov dword ptr [esp + 0x28], eax
// 00580996  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058099a  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058099e  8d1c38               lea ebx, [eax + edi]
// 005809a1  2bf8                 sub edi, eax
// 005809a3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 005809a7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005809ab  897c2430             mov dword ptr [esp + 0x30], edi
// 005809af  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 005809b3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 005809ba  0fbfd8               movsx ebx, ax
// 005809bd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 005809c1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 005809c5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 005809c9  896c2414             mov dword ptr [esp + 0x14], ebp
// 005809cd  8d2c07               lea ebp, [edi + eax]
// 005809d0  2bf8                 sub edi, eax
// 005809d2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005809d6  03c3                 add eax, ebx
// 005809d8  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 005809dc  896c2424             mov dword ptr [esp + 0x24], ebp
// 005809e0  03e8                 add ebp, eax
// 005809e2  2b442424             sub eax, dword ptr [esp + 0x24]
// 005809e6  896c2414             mov dword ptr [esp + 0x14], ebp
// 005809ea  8d2c3b               lea ebp, [ebx + edi]
// 005809ed  69ff63fdffff         imul edi, edi, 0xfffffd63
// 005809f3  69db15010000         imul ebx, ebx, 0x115
// 005809f9  69edd9010000         imul ebp, ebp, 0x1d9
// 005809ff  69c06a010000         imul eax, eax, 0x16a
// 00580a05  c1fd08               sar ebp, 8
// 00580a08  c1ff08               sar edi, 8
// 00580a0b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 00580a0f  c1fb08               sar ebx, 8
// 00580a12  03fd                 add edi, ebp
// 00580a14  2bdd                 sub ebx, ebp
// 00580a16  c1f808               sar eax, 8
// 00580a19  2bc7                 sub eax, edi
// 00580a1b  03d8                 add ebx, eax
// 00580a1d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00580a21  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00580a25  895c2410             mov dword ptr [esp + 0x10], ebx
// 00580a29  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00580a2d  03dd                 add ebx, ebp
// 00580a2f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 00580a33  8919                 mov dword ptr [ecx], ebx
// 00580a35  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 00580a3b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00580a3f  8d1c2f               lea ebx, [edi + ebp]
// 00580a42  2bef                 sub ebp, edi
// 00580a44  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00580a48  895920               mov dword ptr [ecx + 0x20], ebx
// 00580a4b  8d1c38               lea ebx, [eax + edi]
// 00580a4e  2bf8                 sub edi, eax
// 00580a50  8b442418             mov eax, dword ptr [esp + 0x18]
// 00580a54  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 00580a5a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00580a5e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 00580a64  895940               mov dword ptr [ecx + 0x40], ebx
// 00580a67  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00580a6b  8d1c07               lea ebx, [edi + eax]
// 00580a6e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 00580a74  2bc7                 sub eax, edi
// 00580a76  894160               mov dword ptr [ecx + 0x60], eax
// 00580a79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00580a7d  48                   dec eax
// 00580a7e  83c602               add esi, 2
// 00580a81  83c204               add edx, 4
// 00580a84  83c104               add ecx, 4
// 00580a87  8944241c             mov dword ptr [esp + 0x1c], eax
// 00580a8b  85c0                 test eax, eax
// 00580a8d  0f8f4dfeffff         jg 0x5808e0
// 00580a93  33f6                 xor esi, esi
// 00580a95  8d542434             lea edx, [esp + 0x34]
// 00580a99  8974241c             mov dword ptr [esp + 0x1c], esi
// 00580a9d  8d4900               lea ecx, [ecx]
// 00580aa0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 00580aa7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00580aaa  8b4a04               mov ecx, dword ptr [edx + 4]
// 00580aad  03842448010000       add eax, dword ptr [esp + 0x148]
// 00580ab4  85c9                 test ecx, ecx
// 00580ab6  7545                 jne 0x580afd
// 00580ab8  394a08               cmp dword ptr [edx + 8], ecx
// 00580abb  7540                 jne 0x580afd
// 00580abd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 00580ac0  753b                 jne 0x580afd
// 00580ac2  394a10               cmp dword ptr [edx + 0x10], ecx
// 00580ac5  7536                 jne 0x580afd
// 00580ac7  394a14               cmp dword ptr [edx + 0x14], ecx
// 00580aca  7531                 jne 0x580afd
// 00580acc  394a18               cmp dword ptr [edx + 0x18], ecx
// 00580acf  752c                 jne 0x580afd
// 00580ad1  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 00580ad4  7527                 jne 0x580afd
// 00580ad6  8b0a                 mov ecx, dword ptr [edx]
// 00580ad8  c1f905               sar ecx, 5
// 00580adb  81e1ff030000         and ecx, 0x3ff
// 00580ae1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 00580ae4  8808                 mov byte ptr [eax], cl
// 00580ae6  884801               mov byte ptr [eax + 1], cl
// 00580ae9  884802               mov byte ptr [eax + 2], cl
// 00580aec  884804               mov byte ptr [eax + 4], cl
// 00580aef  884805               mov byte ptr [eax + 5], cl
// 00580af2  884806               mov byte ptr [eax + 6], cl
// 00580af5  884807               mov byte ptr [eax + 7], cl
// 00580af8  e95b010000           jmp 0x580c58
// 00580afd  8b7a10               mov edi, dword ptr [edx + 0x10]
// 00580b00  8b0a                 mov ecx, dword ptr [edx]
// 00580b02  8d3439               lea esi, [ecx + edi]
// 00580b05  2bcf                 sub ecx, edi
// 00580b07  8b7a18               mov edi, dword ptr [edx + 0x18]
// 00580b0a  8bd9                 mov ebx, ecx
// 00580b0c  8b4a08               mov ecx, dword ptr [edx + 8]
// 00580b0f  03f9                 add edi, ecx
// 00580b11  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 00580b14  897c2410             mov dword ptr [esp + 0x10], edi
// 00580b18  69c96a010000         imul ecx, ecx, 0x16a
// 00580b1e  c1f908               sar ecx, 8
// 00580b21  2bcf                 sub ecx, edi
// 00580b23  894c2410             mov dword ptr [esp + 0x10], ecx
// 00580b27  8d0c37               lea ecx, [edi + esi]
// 00580b2a  2bf7                 sub esi, edi
// 00580b2c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00580b30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580b34  89742418             mov dword ptr [esp + 0x18], esi
// 00580b38  8d3419               lea esi, [ecx + ebx]
// 00580b3b  2bd9                 sub ebx, ecx
// 00580b3d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 00580b40  8974242c             mov dword ptr [esp + 0x2c], esi
// 00580b44  8b7214               mov esi, dword ptr [edx + 0x14]
// 00580b47  8d3c0e               lea edi, [esi + ecx]
// 00580b4a  2bf1                 sub esi, ecx
// 00580b4c  895c2430             mov dword ptr [esp + 0x30], ebx
// 00580b50  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 00580b53  897c2424             mov dword ptr [esp + 0x24], edi
// 00580b57  8b7a04               mov edi, dword ptr [edx + 4]
// 00580b5a  8d0c3b               lea ecx, [ebx + edi]
// 00580b5d  2bfb                 sub edi, ebx
// 00580b5f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00580b63  03d9                 add ebx, ecx
// 00580b65  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 00580b69  895c2414             mov dword ptr [esp + 0x14], ebx
// 00580b6d  8d1c37               lea ebx, [edi + esi]
// 00580b70  69f663fdffff         imul esi, esi, 0xfffffd63
// 00580b76  69c96a010000         imul ecx, ecx, 0x16a
// 00580b7c  69dbd9010000         imul ebx, ebx, 0x1d9
// 00580b82  69ff15010000         imul edi, edi, 0x115
// 00580b88  c1fe08               sar esi, 8
// 00580b8b  2b742414             sub esi, dword ptr [esp + 0x14]
// 00580b8f  c1f908               sar ecx, 8
// 00580b92  c1fb08               sar ebx, 8
// 00580b95  03f3                 add esi, ebx
// 00580b97  895c2410             mov dword ptr [esp + 0x10], ebx
// 00580b9b  8bde                 mov ebx, esi
// 00580b9d  8b742428             mov esi, dword ptr [esp + 0x28]
// 00580ba1  2bcb                 sub ecx, ebx
// 00580ba3  894c2420             mov dword ptr [esp + 0x20], ecx
// 00580ba7  c1ff08               sar edi, 8
// 00580baa  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 00580bae  03f9                 add edi, ecx
// 00580bb0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00580bb4  03ce                 add ecx, esi
// 00580bb6  2b742414             sub esi, dword ptr [esp + 0x14]
// 00580bba  c1f905               sar ecx, 5
// 00580bbd  81e1ff030000         and ecx, 0x3ff
// 00580bc3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00580bc7  c1fe05               sar esi, 5
// 00580bca  81e6ff030000         and esi, 0x3ff
// 00580bd0  8808                 mov byte ptr [eax], cl
// 00580bd2  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00580bd6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00580bda  884807               mov byte ptr [eax + 7], cl
// 00580bdd  8d0c33               lea ecx, [ebx + esi]
// 00580be0  c1f905               sar ecx, 5
// 00580be3  2bf3                 sub esi, ebx
// 00580be5  81e1ff030000         and ecx, 0x3ff
// 00580beb  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00580bef  c1fe05               sar esi, 5
// 00580bf2  81e6ff030000         and esi, 0x3ff
// 00580bf8  884801               mov byte ptr [eax + 1], cl
// 00580bfb  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00580bff  8b742430             mov esi, dword ptr [esp + 0x30]
// 00580c03  884806               mov byte ptr [eax + 6], cl
// 00580c06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580c0a  8d1c31               lea ebx, [ecx + esi]
// 00580c0d  c1fb05               sar ebx, 5
// 00580c10  81e3ff030000         and ebx, 0x3ff
// 00580c16  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 00580c19  2bf1                 sub esi, ecx
// 00580c1b  c1fe05               sar esi, 5
// 00580c1e  81e6ff030000         and esi, 0x3ff
// 00580c24  885802               mov byte ptr [eax + 2], bl
// 00580c27  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00580c2b  8b742418             mov esi, dword ptr [esp + 0x18]
// 00580c2f  884805               mov byte ptr [eax + 5], cl
// 00580c32  8d0c37               lea ecx, [edi + esi]
// 00580c35  c1f905               sar ecx, 5
// 00580c38  81e1ff030000         and ecx, 0x3ff
// 00580c3e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 00580c42  2bf7                 sub esi, edi
// 00580c44  c1fe05               sar esi, 5
// 00580c47  81e6ff030000         and esi, 0x3ff
// 00580c4d  884804               mov byte ptr [eax + 4], cl
// 00580c50  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 00580c54  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00580c58  46                   inc esi
// 00580c59  83c220               add edx, 0x20
// 00580c5c  83fe08               cmp esi, 8
// 00580c5f  884803               mov byte ptr [eax + 3], cl
// 00580c62  8974241c             mov dword ptr [esp + 0x1c], esi
// 00580c66  0f8c34feffff         jl 0x580aa0
// 00580c6c  5f                   pop edi
// 00580c6d  5e                   pop esi
// 00580c6e  5d                   pop ebp
// 00580c6f  5b                   pop ebx
// 00580c70  81c424010000         add esp, 0x124
// 00580c76  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
