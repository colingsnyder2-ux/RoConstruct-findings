// roc 2010-06 0058a5b0  unit: seg_00580000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058a5b0
//
// 0058a5b0  81ec24010000         sub esp, 0x124
// 0058a5b6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0058a5bd  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0058a5c4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0058a5c7  53                   push ebx
// 0058a5c8  55                   push ebp
// 0058a5c9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 0058a5cf  56                   push esi
// 0058a5d0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 0058a5d7  83ed80               sub ebp, -0x80
// 0058a5da  57                   push edi
// 0058a5db  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058a5df  8d4c2434             lea ecx, [esp + 0x34]
// 0058a5e3  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 0058a5eb  eb03                 jmp 0x58a5f0
// 0058a5ed  8d4900               lea ecx, [ecx]
// 0058a5f0  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0058a5f4  6685c0               test ax, ax
// 0058a5f7  754f                 jne 0x58a648
// 0058a5f9  66394620             cmp word ptr [esi + 0x20], ax
// 0058a5fd  7549                 jne 0x58a648
// 0058a5ff  66394630             cmp word ptr [esi + 0x30], ax
// 0058a603  7543                 jne 0x58a648
// 0058a605  66394640             cmp word ptr [esi + 0x40], ax
// 0058a609  753d                 jne 0x58a648
// 0058a60b  66394650             cmp word ptr [esi + 0x50], ax
// 0058a60f  7537                 jne 0x58a648
// 0058a611  66394660             cmp word ptr [esi + 0x60], ax
// 0058a615  7531                 jne 0x58a648
// 0058a617  66394670             cmp word ptr [esi + 0x70], ax
// 0058a61b  752b                 jne 0x58a648
// 0058a61d  0fbf06               movsx eax, word ptr [esi]
// 0058a620  0faf02               imul eax, dword ptr [edx]
// 0058a623  8901                 mov dword ptr [ecx], eax
// 0058a625  894120               mov dword ptr [ecx + 0x20], eax
// 0058a628  894140               mov dword ptr [ecx + 0x40], eax
// 0058a62b  898180000000         mov dword ptr [ecx + 0x80], eax
// 0058a631  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0058a637  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0058a63d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 0058a643  e93e010000           jmp 0x58a786
// 0058a648  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0058a64c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 0058a653  0fbf3e               movsx edi, word ptr [esi]
// 0058a656  0faf3a               imul edi, dword ptr [edx]
// 0058a659  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0058a65d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 0058a664  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 0058a668  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0058a66c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058a670  8d1c2f               lea ebx, [edi + ebp]
// 0058a673  2bfd                 sub edi, ebp
// 0058a675  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0058a679  03e8                 add ebp, eax
// 0058a67b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0058a67f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058a683  69c06a010000         imul eax, eax, 0x16a
// 0058a689  c1f808               sar eax, 8
// 0058a68c  2bc5                 sub eax, ebp
// 0058a68e  89442410             mov dword ptr [esp + 0x10], eax
// 0058a692  8d042b               lea eax, [ebx + ebp]
// 0058a695  2bdd                 sub ebx, ebp
// 0058a697  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0058a69b  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 0058a6a2  89442428             mov dword ptr [esp + 0x28], eax
// 0058a6a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058a6aa  895c2418             mov dword ptr [esp + 0x18], ebx
// 0058a6ae  8d1c38               lea ebx, [eax + edi]
// 0058a6b1  2bf8                 sub edi, eax
// 0058a6b3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0058a6b7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0058a6bb  897c2430             mov dword ptr [esp + 0x30], edi
// 0058a6bf  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 0058a6c3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 0058a6ca  0fbfd8               movsx ebx, ax
// 0058a6cd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 0058a6d1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 0058a6d5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 0058a6d9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058a6dd  8d2c07               lea ebp, [edi + eax]
// 0058a6e0  2bf8                 sub edi, eax
// 0058a6e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0058a6e6  03c3                 add eax, ebx
// 0058a6e8  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0058a6ec  896c2424             mov dword ptr [esp + 0x24], ebp
// 0058a6f0  03e8                 add ebp, eax
// 0058a6f2  2b442424             sub eax, dword ptr [esp + 0x24]
// 0058a6f6  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058a6fa  8d2c3b               lea ebp, [ebx + edi]
// 0058a6fd  69ff63fdffff         imul edi, edi, 0xfffffd63
// 0058a703  69db15010000         imul ebx, ebx, 0x115
// 0058a709  69edd9010000         imul ebp, ebp, 0x1d9
// 0058a70f  69c06a010000         imul eax, eax, 0x16a
// 0058a715  c1fd08               sar ebp, 8
// 0058a718  c1ff08               sar edi, 8
// 0058a71b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0058a71f  c1fb08               sar ebx, 8
// 0058a722  03fd                 add edi, ebp
// 0058a724  2bdd                 sub ebx, ebp
// 0058a726  c1f808               sar eax, 8
// 0058a729  2bc7                 sub eax, edi
// 0058a72b  03d8                 add ebx, eax
// 0058a72d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058a731  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0058a735  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a739  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058a73d  03dd                 add ebx, ebp
// 0058a73f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0058a743  8919                 mov dword ptr [ecx], ebx
// 0058a745  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 0058a74b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0058a74f  8d1c2f               lea ebx, [edi + ebp]
// 0058a752  2bef                 sub ebp, edi
// 0058a754  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0058a758  895920               mov dword ptr [ecx + 0x20], ebx
// 0058a75b  8d1c38               lea ebx, [eax + edi]
// 0058a75e  2bf8                 sub edi, eax
// 0058a760  8b442418             mov eax, dword ptr [esp + 0x18]
// 0058a764  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 0058a76a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0058a76e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 0058a774  895940               mov dword ptr [ecx + 0x40], ebx
// 0058a777  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058a77b  8d1c07               lea ebx, [edi + eax]
// 0058a77e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 0058a784  2bc7                 sub eax, edi
// 0058a786  894160               mov dword ptr [ecx + 0x60], eax
// 0058a789  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058a78d  48                   dec eax
// 0058a78e  83c602               add esi, 2
// 0058a791  83c204               add edx, 4
// 0058a794  83c104               add ecx, 4
// 0058a797  8944241c             mov dword ptr [esp + 0x1c], eax
// 0058a79b  85c0                 test eax, eax
// 0058a79d  0f8f4dfeffff         jg 0x58a5f0
// 0058a7a3  33f6                 xor esi, esi
// 0058a7a5  8d542434             lea edx, [esp + 0x34]
// 0058a7a9  8974241c             mov dword ptr [esp + 0x1c], esi
// 0058a7ad  8d4900               lea ecx, [ecx]
// 0058a7b0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0058a7b7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0058a7ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 0058a7bd  03842448010000       add eax, dword ptr [esp + 0x148]
// 0058a7c4  85c9                 test ecx, ecx
// 0058a7c6  7545                 jne 0x58a80d
// 0058a7c8  394a08               cmp dword ptr [edx + 8], ecx
// 0058a7cb  7540                 jne 0x58a80d
// 0058a7cd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0058a7d0  753b                 jne 0x58a80d
// 0058a7d2  394a10               cmp dword ptr [edx + 0x10], ecx
// 0058a7d5  7536                 jne 0x58a80d
// 0058a7d7  394a14               cmp dword ptr [edx + 0x14], ecx
// 0058a7da  7531                 jne 0x58a80d
// 0058a7dc  394a18               cmp dword ptr [edx + 0x18], ecx
// 0058a7df  752c                 jne 0x58a80d
// 0058a7e1  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 0058a7e4  7527                 jne 0x58a80d
// 0058a7e6  8b0a                 mov ecx, dword ptr [edx]
// 0058a7e8  c1f905               sar ecx, 5
// 0058a7eb  81e1ff030000         and ecx, 0x3ff
// 0058a7f1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0058a7f4  8808                 mov byte ptr [eax], cl
// 0058a7f6  884801               mov byte ptr [eax + 1], cl
// 0058a7f9  884802               mov byte ptr [eax + 2], cl
// 0058a7fc  884804               mov byte ptr [eax + 4], cl
// 0058a7ff  884805               mov byte ptr [eax + 5], cl
// 0058a802  884806               mov byte ptr [eax + 6], cl
// 0058a805  884807               mov byte ptr [eax + 7], cl
// 0058a808  e95b010000           jmp 0x58a968
// 0058a80d  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0058a810  8b0a                 mov ecx, dword ptr [edx]
// 0058a812  8d3439               lea esi, [ecx + edi]
// 0058a815  2bcf                 sub ecx, edi
// 0058a817  8b7a18               mov edi, dword ptr [edx + 0x18]
// 0058a81a  8bd9                 mov ebx, ecx
// 0058a81c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0058a81f  03f9                 add edi, ecx
// 0058a821  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 0058a824  897c2410             mov dword ptr [esp + 0x10], edi
// 0058a828  69c96a010000         imul ecx, ecx, 0x16a
// 0058a82e  c1f908               sar ecx, 8
// 0058a831  2bcf                 sub ecx, edi
// 0058a833  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058a837  8d0c37               lea ecx, [edi + esi]
// 0058a83a  2bf7                 sub esi, edi
// 0058a83c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0058a840  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058a844  89742418             mov dword ptr [esp + 0x18], esi
// 0058a848  8d3419               lea esi, [ecx + ebx]
// 0058a84b  2bd9                 sub ebx, ecx
// 0058a84d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0058a850  8974242c             mov dword ptr [esp + 0x2c], esi
// 0058a854  8b7214               mov esi, dword ptr [edx + 0x14]
// 0058a857  8d3c0e               lea edi, [esi + ecx]
// 0058a85a  2bf1                 sub esi, ecx
// 0058a85c  895c2430             mov dword ptr [esp + 0x30], ebx
// 0058a860  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 0058a863  897c2424             mov dword ptr [esp + 0x24], edi
// 0058a867  8b7a04               mov edi, dword ptr [edx + 4]
// 0058a86a  8d0c3b               lea ecx, [ebx + edi]
// 0058a86d  2bfb                 sub edi, ebx
// 0058a86f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058a873  03d9                 add ebx, ecx
// 0058a875  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0058a879  895c2414             mov dword ptr [esp + 0x14], ebx
// 0058a87d  8d1c37               lea ebx, [edi + esi]
// 0058a880  69f663fdffff         imul esi, esi, 0xfffffd63
// 0058a886  69c96a010000         imul ecx, ecx, 0x16a
// 0058a88c  69dbd9010000         imul ebx, ebx, 0x1d9
// 0058a892  69ff15010000         imul edi, edi, 0x115
// 0058a898  c1fe08               sar esi, 8
// 0058a89b  2b742414             sub esi, dword ptr [esp + 0x14]
// 0058a89f  c1f908               sar ecx, 8
// 0058a8a2  c1fb08               sar ebx, 8
// 0058a8a5  03f3                 add esi, ebx
// 0058a8a7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058a8ab  8bde                 mov ebx, esi
// 0058a8ad  8b742428             mov esi, dword ptr [esp + 0x28]
// 0058a8b1  2bcb                 sub ecx, ebx
// 0058a8b3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0058a8b7  c1ff08               sar edi, 8
// 0058a8ba  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0058a8be  03f9                 add edi, ecx
// 0058a8c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058a8c4  03ce                 add ecx, esi
// 0058a8c6  2b742414             sub esi, dword ptr [esp + 0x14]
// 0058a8ca  c1f905               sar ecx, 5
// 0058a8cd  81e1ff030000         and ecx, 0x3ff
// 0058a8d3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0058a8d7  c1fe05               sar esi, 5
// 0058a8da  81e6ff030000         and esi, 0x3ff
// 0058a8e0  8808                 mov byte ptr [eax], cl
// 0058a8e2  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0058a8e6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0058a8ea  884807               mov byte ptr [eax + 7], cl
// 0058a8ed  8d0c33               lea ecx, [ebx + esi]
// 0058a8f0  c1f905               sar ecx, 5
// 0058a8f3  2bf3                 sub esi, ebx
// 0058a8f5  81e1ff030000         and ecx, 0x3ff
// 0058a8fb  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0058a8ff  c1fe05               sar esi, 5
// 0058a902  81e6ff030000         and esi, 0x3ff
// 0058a908  884801               mov byte ptr [eax + 1], cl
// 0058a90b  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0058a90f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0058a913  884806               mov byte ptr [eax + 6], cl
// 0058a916  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058a91a  8d1c31               lea ebx, [ecx + esi]
// 0058a91d  c1fb05               sar ebx, 5
// 0058a920  81e3ff030000         and ebx, 0x3ff
// 0058a926  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 0058a929  2bf1                 sub esi, ecx
// 0058a92b  c1fe05               sar esi, 5
// 0058a92e  81e6ff030000         and esi, 0x3ff
// 0058a934  885802               mov byte ptr [eax + 2], bl
// 0058a937  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0058a93b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058a93f  884805               mov byte ptr [eax + 5], cl
// 0058a942  8d0c37               lea ecx, [edi + esi]
// 0058a945  c1f905               sar ecx, 5
// 0058a948  81e1ff030000         and ecx, 0x3ff
// 0058a94e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0058a952  2bf7                 sub esi, edi
// 0058a954  c1fe05               sar esi, 5
// 0058a957  81e6ff030000         and esi, 0x3ff
// 0058a95d  884804               mov byte ptr [eax + 4], cl
// 0058a960  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0058a964  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058a968  46                   inc esi
// 0058a969  83c220               add edx, 0x20
// 0058a96c  83fe08               cmp esi, 8
// 0058a96f  884803               mov byte ptr [eax + 3], cl
// 0058a972  8974241c             mov dword ptr [esp + 0x1c], esi
// 0058a976  0f8c34feffff         jl 0x58a7b0
// 0058a97c  5f                   pop edi
// 0058a97d  5e                   pop esi
// 0058a97e  5d                   pop ebp
// 0058a97f  5b                   pop ebx
// 0058a980  81c424010000         add esp, 0x124
// 0058a986  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
