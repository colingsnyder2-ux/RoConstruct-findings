// roc 2009-06 005a6aa0  unit: seg_005a0000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a6aa0
//
// 005a6aa0  81ec24010000         sub esp, 0x124
// 005a6aa6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 005a6aad  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 005a6ab4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 005a6ab7  53                   push ebx
// 005a6ab8  55                   push ebp
// 005a6ab9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 005a6abf  56                   push esi
// 005a6ac0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 005a6ac7  83ed80               sub ebp, -0x80
// 005a6aca  57                   push edi
// 005a6acb  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a6acf  8d4c2434             lea ecx, [esp + 0x34]
// 005a6ad3  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 005a6adb  eb03                 jmp 0x5a6ae0
// 005a6add  8d4900               lea ecx, [ecx]
// 005a6ae0  0fb74610             movzx eax, word ptr [esi + 0x10]
// 005a6ae4  6685c0               test ax, ax
// 005a6ae7  754f                 jne 0x5a6b38
// 005a6ae9  66394620             cmp word ptr [esi + 0x20], ax
// 005a6aed  7549                 jne 0x5a6b38
// 005a6aef  66394630             cmp word ptr [esi + 0x30], ax
// 005a6af3  7543                 jne 0x5a6b38
// 005a6af5  66394640             cmp word ptr [esi + 0x40], ax
// 005a6af9  753d                 jne 0x5a6b38
// 005a6afb  66394650             cmp word ptr [esi + 0x50], ax
// 005a6aff  7537                 jne 0x5a6b38
// 005a6b01  66394660             cmp word ptr [esi + 0x60], ax
// 005a6b05  7531                 jne 0x5a6b38
// 005a6b07  66394670             cmp word ptr [esi + 0x70], ax
// 005a6b0b  752b                 jne 0x5a6b38
// 005a6b0d  0fbf06               movsx eax, word ptr [esi]
// 005a6b10  0faf02               imul eax, dword ptr [edx]
// 005a6b13  8901                 mov dword ptr [ecx], eax
// 005a6b15  894120               mov dword ptr [ecx + 0x20], eax
// 005a6b18  894140               mov dword ptr [ecx + 0x40], eax
// 005a6b1b  898180000000         mov dword ptr [ecx + 0x80], eax
// 005a6b21  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 005a6b27  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 005a6b2d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 005a6b33  e93e010000           jmp 0x5a6c76
// 005a6b38  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 005a6b3c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 005a6b43  0fbf3e               movsx edi, word ptr [esi]
// 005a6b46  0faf3a               imul edi, dword ptr [edx]
// 005a6b49  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 005a6b4d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 005a6b54  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 005a6b58  0faf4240             imul eax, dword ptr [edx + 0x40]
// 005a6b5c  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a6b60  8d1c2f               lea ebx, [edi + ebp]
// 005a6b63  2bfd                 sub edi, ebp
// 005a6b65  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a6b69  03e8                 add ebp, eax
// 005a6b6b  2b442418             sub eax, dword ptr [esp + 0x18]
// 005a6b6f  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a6b73  69c06a010000         imul eax, eax, 0x16a
// 005a6b79  c1f808               sar eax, 8
// 005a6b7c  2bc5                 sub eax, ebp
// 005a6b7e  89442410             mov dword ptr [esp + 0x10], eax
// 005a6b82  8d042b               lea eax, [ebx + ebp]
// 005a6b85  2bdd                 sub ebx, ebp
// 005a6b87  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 005a6b8b  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 005a6b92  89442428             mov dword ptr [esp + 0x28], eax
// 005a6b96  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a6b9a  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a6b9e  8d1c38               lea ebx, [eax + edi]
// 005a6ba1  2bf8                 sub edi, eax
// 005a6ba3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 005a6ba7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 005a6bab  897c2430             mov dword ptr [esp + 0x30], edi
// 005a6baf  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 005a6bb3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 005a6bba  0fbfd8               movsx ebx, ax
// 005a6bbd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 005a6bc1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 005a6bc5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 005a6bc9  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a6bcd  8d2c07               lea ebp, [edi + eax]
// 005a6bd0  2bf8                 sub edi, eax
// 005a6bd2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a6bd6  03c3                 add eax, ebx
// 005a6bd8  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 005a6bdc  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a6be0  03e8                 add ebp, eax
// 005a6be2  2b442424             sub eax, dword ptr [esp + 0x24]
// 005a6be6  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a6bea  8d2c3b               lea ebp, [ebx + edi]
// 005a6bed  69ff63fdffff         imul edi, edi, 0xfffffd63
// 005a6bf3  69db15010000         imul ebx, ebx, 0x115
// 005a6bf9  69edd9010000         imul ebp, ebp, 0x1d9
// 005a6bff  69c06a010000         imul eax, eax, 0x16a
// 005a6c05  c1fd08               sar ebp, 8
// 005a6c08  c1ff08               sar edi, 8
// 005a6c0b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 005a6c0f  c1fb08               sar ebx, 8
// 005a6c12  03fd                 add edi, ebp
// 005a6c14  2bdd                 sub ebx, ebp
// 005a6c16  c1f808               sar eax, 8
// 005a6c19  2bc7                 sub eax, edi
// 005a6c1b  03d8                 add ebx, eax
// 005a6c1d  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a6c21  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 005a6c25  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a6c29  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a6c2d  03dd                 add ebx, ebp
// 005a6c2f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 005a6c33  8919                 mov dword ptr [ecx], ebx
// 005a6c35  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 005a6c3b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 005a6c3f  8d1c2f               lea ebx, [edi + ebp]
// 005a6c42  2bef                 sub ebp, edi
// 005a6c44  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005a6c48  895920               mov dword ptr [ecx + 0x20], ebx
// 005a6c4b  8d1c38               lea ebx, [eax + edi]
// 005a6c4e  2bf8                 sub edi, eax
// 005a6c50  8b442418             mov eax, dword ptr [esp + 0x18]
// 005a6c54  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 005a6c5a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005a6c5e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 005a6c64  895940               mov dword ptr [ecx + 0x40], ebx
// 005a6c67  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a6c6b  8d1c07               lea ebx, [edi + eax]
// 005a6c6e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 005a6c74  2bc7                 sub eax, edi
// 005a6c76  894160               mov dword ptr [ecx + 0x60], eax
// 005a6c79  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a6c7d  48                   dec eax
// 005a6c7e  83c602               add esi, 2
// 005a6c81  83c204               add edx, 4
// 005a6c84  83c104               add ecx, 4
// 005a6c87  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a6c8b  85c0                 test eax, eax
// 005a6c8d  0f8f4dfeffff         jg 0x5a6ae0
// 005a6c93  33f6                 xor esi, esi
// 005a6c95  8d542434             lea edx, [esp + 0x34]
// 005a6c99  8974241c             mov dword ptr [esp + 0x1c], esi
// 005a6c9d  8d4900               lea ecx, [ecx]
// 005a6ca0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 005a6ca7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 005a6caa  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a6cad  03842448010000       add eax, dword ptr [esp + 0x148]
// 005a6cb4  85c9                 test ecx, ecx
// 005a6cb6  7545                 jne 0x5a6cfd
// 005a6cb8  394a08               cmp dword ptr [edx + 8], ecx
// 005a6cbb  7540                 jne 0x5a6cfd
// 005a6cbd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 005a6cc0  753b                 jne 0x5a6cfd
// 005a6cc2  394a10               cmp dword ptr [edx + 0x10], ecx
// 005a6cc5  7536                 jne 0x5a6cfd
// 005a6cc7  394a14               cmp dword ptr [edx + 0x14], ecx
// 005a6cca  7531                 jne 0x5a6cfd
// 005a6ccc  394a18               cmp dword ptr [edx + 0x18], ecx
// 005a6ccf  752c                 jne 0x5a6cfd
// 005a6cd1  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 005a6cd4  7527                 jne 0x5a6cfd
// 005a6cd6  8b0a                 mov ecx, dword ptr [edx]
// 005a6cd8  c1f905               sar ecx, 5
// 005a6cdb  81e1ff030000         and ecx, 0x3ff
// 005a6ce1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 005a6ce4  8808                 mov byte ptr [eax], cl
// 005a6ce6  884801               mov byte ptr [eax + 1], cl
// 005a6ce9  884802               mov byte ptr [eax + 2], cl
// 005a6cec  884804               mov byte ptr [eax + 4], cl
// 005a6cef  884805               mov byte ptr [eax + 5], cl
// 005a6cf2  884806               mov byte ptr [eax + 6], cl
// 005a6cf5  884807               mov byte ptr [eax + 7], cl
// 005a6cf8  e95b010000           jmp 0x5a6e58
// 005a6cfd  8b7a10               mov edi, dword ptr [edx + 0x10]
// 005a6d00  8b0a                 mov ecx, dword ptr [edx]
// 005a6d02  8d3439               lea esi, [ecx + edi]
// 005a6d05  2bcf                 sub ecx, edi
// 005a6d07  8b7a18               mov edi, dword ptr [edx + 0x18]
// 005a6d0a  8bd9                 mov ebx, ecx
// 005a6d0c  8b4a08               mov ecx, dword ptr [edx + 8]
// 005a6d0f  03f9                 add edi, ecx
// 005a6d11  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 005a6d14  897c2410             mov dword ptr [esp + 0x10], edi
// 005a6d18  69c96a010000         imul ecx, ecx, 0x16a
// 005a6d1e  c1f908               sar ecx, 8
// 005a6d21  2bcf                 sub ecx, edi
// 005a6d23  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a6d27  8d0c37               lea ecx, [edi + esi]
// 005a6d2a  2bf7                 sub esi, edi
// 005a6d2c  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a6d30  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a6d34  89742418             mov dword ptr [esp + 0x18], esi
// 005a6d38  8d3419               lea esi, [ecx + ebx]
// 005a6d3b  2bd9                 sub ebx, ecx
// 005a6d3d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 005a6d40  8974242c             mov dword ptr [esp + 0x2c], esi
// 005a6d44  8b7214               mov esi, dword ptr [edx + 0x14]
// 005a6d47  8d3c0e               lea edi, [esi + ecx]
// 005a6d4a  2bf1                 sub esi, ecx
// 005a6d4c  895c2430             mov dword ptr [esp + 0x30], ebx
// 005a6d50  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 005a6d53  897c2424             mov dword ptr [esp + 0x24], edi
// 005a6d57  8b7a04               mov edi, dword ptr [edx + 4]
// 005a6d5a  8d0c3b               lea ecx, [ebx + edi]
// 005a6d5d  2bfb                 sub edi, ebx
// 005a6d5f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a6d63  03d9                 add ebx, ecx
// 005a6d65  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 005a6d69  895c2414             mov dword ptr [esp + 0x14], ebx
// 005a6d6d  8d1c37               lea ebx, [edi + esi]
// 005a6d70  69f663fdffff         imul esi, esi, 0xfffffd63
// 005a6d76  69c96a010000         imul ecx, ecx, 0x16a
// 005a6d7c  69dbd9010000         imul ebx, ebx, 0x1d9
// 005a6d82  69ff15010000         imul edi, edi, 0x115
// 005a6d88  c1fe08               sar esi, 8
// 005a6d8b  2b742414             sub esi, dword ptr [esp + 0x14]
// 005a6d8f  c1f908               sar ecx, 8
// 005a6d92  c1fb08               sar ebx, 8
// 005a6d95  03f3                 add esi, ebx
// 005a6d97  895c2410             mov dword ptr [esp + 0x10], ebx
// 005a6d9b  8bde                 mov ebx, esi
// 005a6d9d  8b742428             mov esi, dword ptr [esp + 0x28]
// 005a6da1  2bcb                 sub ecx, ebx
// 005a6da3  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a6da7  c1ff08               sar edi, 8
// 005a6daa  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 005a6dae  03f9                 add edi, ecx
// 005a6db0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a6db4  03ce                 add ecx, esi
// 005a6db6  2b742414             sub esi, dword ptr [esp + 0x14]
// 005a6dba  c1f905               sar ecx, 5
// 005a6dbd  81e1ff030000         and ecx, 0x3ff
// 005a6dc3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005a6dc7  c1fe05               sar esi, 5
// 005a6dca  81e6ff030000         and esi, 0x3ff
// 005a6dd0  8808                 mov byte ptr [eax], cl
// 005a6dd2  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 005a6dd6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005a6dda  884807               mov byte ptr [eax + 7], cl
// 005a6ddd  8d0c33               lea ecx, [ebx + esi]
// 005a6de0  c1f905               sar ecx, 5
// 005a6de3  2bf3                 sub esi, ebx
// 005a6de5  81e1ff030000         and ecx, 0x3ff
// 005a6deb  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005a6def  c1fe05               sar esi, 5
// 005a6df2  81e6ff030000         and esi, 0x3ff
// 005a6df8  884801               mov byte ptr [eax + 1], cl
// 005a6dfb  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 005a6dff  8b742430             mov esi, dword ptr [esp + 0x30]
// 005a6e03  884806               mov byte ptr [eax + 6], cl
// 005a6e06  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a6e0a  8d1c31               lea ebx, [ecx + esi]
// 005a6e0d  c1fb05               sar ebx, 5
// 005a6e10  81e3ff030000         and ebx, 0x3ff
// 005a6e16  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 005a6e19  2bf1                 sub esi, ecx
// 005a6e1b  c1fe05               sar esi, 5
// 005a6e1e  81e6ff030000         and esi, 0x3ff
// 005a6e24  885802               mov byte ptr [eax + 2], bl
// 005a6e27  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 005a6e2b  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a6e2f  884805               mov byte ptr [eax + 5], cl
// 005a6e32  8d0c37               lea ecx, [edi + esi]
// 005a6e35  c1f905               sar ecx, 5
// 005a6e38  81e1ff030000         and ecx, 0x3ff
// 005a6e3e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 005a6e42  2bf7                 sub esi, edi
// 005a6e44  c1fe05               sar esi, 5
// 005a6e47  81e6ff030000         and esi, 0x3ff
// 005a6e4d  884804               mov byte ptr [eax + 4], cl
// 005a6e50  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 005a6e54  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005a6e58  46                   inc esi
// 005a6e59  83c220               add edx, 0x20
// 005a6e5c  83fe08               cmp esi, 8
// 005a6e5f  884803               mov byte ptr [eax + 3], cl
// 005a6e62  8974241c             mov dword ptr [esp + 0x1c], esi
// 005a6e66  0f8c34feffff         jl 0x5a6ca0
// 005a6e6c  5f                   pop edi
// 005a6e6d  5e                   pop esi
// 005a6e6e  5d                   pop ebp
// 005a6e6f  5b                   pop ebx
// 005a6e70  81c424010000         add esp, 0x124
// 005a6e76  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
