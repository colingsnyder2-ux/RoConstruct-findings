// roc 2012-06 0066bfb0  unit: seg_00660000  size: 983 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066bfb0
//
// 0066bfb0  81ec24010000         sub esp, 0x124
// 0066bfb6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0066bfbd  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0066bfc4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0066bfc7  53                   push ebx
// 0066bfc8  55                   push ebp
// 0066bfc9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 0066bfcf  56                   push esi
// 0066bfd0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 0066bfd7  83ed80               sub ebp, -0x80
// 0066bfda  57                   push edi
// 0066bfdb  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066bfdf  8d4c2434             lea ecx, [esp + 0x34]
// 0066bfe3  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 0066bfeb  eb03                 jmp 0x66bff0
// 0066bfed  8d4900               lea ecx, [ecx]
// 0066bff0  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0066bff4  6685c0               test ax, ax
// 0066bff7  754f                 jne 0x66c048
// 0066bff9  66394620             cmp word ptr [esi + 0x20], ax
// 0066bffd  7549                 jne 0x66c048
// 0066bfff  66394630             cmp word ptr [esi + 0x30], ax
// 0066c003  7543                 jne 0x66c048
// 0066c005  66394640             cmp word ptr [esi + 0x40], ax
// 0066c009  753d                 jne 0x66c048
// 0066c00b  66394650             cmp word ptr [esi + 0x50], ax
// 0066c00f  7537                 jne 0x66c048
// 0066c011  66394660             cmp word ptr [esi + 0x60], ax
// 0066c015  7531                 jne 0x66c048
// 0066c017  66394670             cmp word ptr [esi + 0x70], ax
// 0066c01b  752b                 jne 0x66c048
// 0066c01d  0fbf06               movsx eax, word ptr [esi]
// 0066c020  0faf02               imul eax, dword ptr [edx]
// 0066c023  8901                 mov dword ptr [ecx], eax
// 0066c025  894120               mov dword ptr [ecx + 0x20], eax
// 0066c028  894140               mov dword ptr [ecx + 0x40], eax
// 0066c02b  898180000000         mov dword ptr [ecx + 0x80], eax
// 0066c031  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0066c037  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0066c03d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 0066c043  e93e010000           jmp 0x66c186
// 0066c048  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0066c04c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 0066c053  0fbf3e               movsx edi, word ptr [esi]
// 0066c056  0faf3a               imul edi, dword ptr [edx]
// 0066c059  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0066c05d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 0066c064  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 0066c068  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0066c06c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066c070  8d1c2f               lea ebx, [edi + ebp]
// 0066c073  2bfd                 sub edi, ebp
// 0066c075  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0066c079  03e8                 add ebp, eax
// 0066c07b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0066c07f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066c083  69c06a010000         imul eax, eax, 0x16a
// 0066c089  c1f808               sar eax, 8
// 0066c08c  2bc5                 sub eax, ebp
// 0066c08e  89442410             mov dword ptr [esp + 0x10], eax
// 0066c092  8d042b               lea eax, [ebx + ebp]
// 0066c095  2bdd                 sub ebx, ebp
// 0066c097  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0066c09b  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 0066c0a2  89442428             mov dword ptr [esp + 0x28], eax
// 0066c0a6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0066c0aa  895c2418             mov dword ptr [esp + 0x18], ebx
// 0066c0ae  8d1c38               lea ebx, [eax + edi]
// 0066c0b1  2bf8                 sub edi, eax
// 0066c0b3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0066c0b7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0066c0bb  897c2430             mov dword ptr [esp + 0x30], edi
// 0066c0bf  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 0066c0c3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 0066c0ca  0fbfd8               movsx ebx, ax
// 0066c0cd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 0066c0d1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 0066c0d5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 0066c0d9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066c0dd  8d2c07               lea ebp, [edi + eax]
// 0066c0e0  2bf8                 sub edi, eax
// 0066c0e2  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066c0e6  03c3                 add eax, ebx
// 0066c0e8  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0066c0ec  896c2424             mov dword ptr [esp + 0x24], ebp
// 0066c0f0  03e8                 add ebp, eax
// 0066c0f2  2b442424             sub eax, dword ptr [esp + 0x24]
// 0066c0f6  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066c0fa  8d2c3b               lea ebp, [ebx + edi]
// 0066c0fd  69ff63fdffff         imul edi, edi, 0xfffffd63
// 0066c103  69db15010000         imul ebx, ebx, 0x115
// 0066c109  69edd9010000         imul ebp, ebp, 0x1d9
// 0066c10f  69c06a010000         imul eax, eax, 0x16a
// 0066c115  c1fd08               sar ebp, 8
// 0066c118  c1ff08               sar edi, 8
// 0066c11b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0066c11f  c1fb08               sar ebx, 8
// 0066c122  03fd                 add edi, ebp
// 0066c124  2bdd                 sub ebx, ebp
// 0066c126  c1f808               sar eax, 8
// 0066c129  2bc7                 sub eax, edi
// 0066c12b  03d8                 add ebx, eax
// 0066c12d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066c131  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0066c135  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066c139  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066c13d  03dd                 add ebx, ebp
// 0066c13f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0066c143  8919                 mov dword ptr [ecx], ebx
// 0066c145  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 0066c14b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0066c14f  8d1c2f               lea ebx, [edi + ebp]
// 0066c152  2bef                 sub ebp, edi
// 0066c154  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0066c158  895920               mov dword ptr [ecx + 0x20], ebx
// 0066c15b  8d1c38               lea ebx, [eax + edi]
// 0066c15e  2bf8                 sub edi, eax
// 0066c160  8b442418             mov eax, dword ptr [esp + 0x18]
// 0066c164  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 0066c16a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c16e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 0066c174  895940               mov dword ptr [ecx + 0x40], ebx
// 0066c177  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0066c17b  8d1c07               lea ebx, [edi + eax]
// 0066c17e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 0066c184  2bc7                 sub eax, edi
// 0066c186  894160               mov dword ptr [ecx + 0x60], eax
// 0066c189  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066c18d  48                   dec eax
// 0066c18e  83c602               add esi, 2
// 0066c191  83c204               add edx, 4
// 0066c194  83c104               add ecx, 4
// 0066c197  8944241c             mov dword ptr [esp + 0x1c], eax
// 0066c19b  85c0                 test eax, eax
// 0066c19d  0f8f4dfeffff         jg 0x66bff0
// 0066c1a3  33f6                 xor esi, esi
// 0066c1a5  8d542434             lea edx, [esp + 0x34]
// 0066c1a9  8974241c             mov dword ptr [esp + 0x1c], esi
// 0066c1ad  8d4900               lea ecx, [ecx]
// 0066c1b0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0066c1b7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0066c1ba  8b4a04               mov ecx, dword ptr [edx + 4]
// 0066c1bd  03842448010000       add eax, dword ptr [esp + 0x148]
// 0066c1c4  85c9                 test ecx, ecx
// 0066c1c6  7545                 jne 0x66c20d
// 0066c1c8  394a08               cmp dword ptr [edx + 8], ecx
// 0066c1cb  7540                 jne 0x66c20d
// 0066c1cd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0066c1d0  753b                 jne 0x66c20d
// 0066c1d2  394a10               cmp dword ptr [edx + 0x10], ecx
// 0066c1d5  7536                 jne 0x66c20d
// 0066c1d7  394a14               cmp dword ptr [edx + 0x14], ecx
// 0066c1da  7531                 jne 0x66c20d
// 0066c1dc  394a18               cmp dword ptr [edx + 0x18], ecx
// 0066c1df  752c                 jne 0x66c20d
// 0066c1e1  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 0066c1e4  7527                 jne 0x66c20d
// 0066c1e6  8b0a                 mov ecx, dword ptr [edx]
// 0066c1e8  c1f905               sar ecx, 5
// 0066c1eb  81e1ff030000         and ecx, 0x3ff
// 0066c1f1  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0066c1f4  8808                 mov byte ptr [eax], cl
// 0066c1f6  884801               mov byte ptr [eax + 1], cl
// 0066c1f9  884802               mov byte ptr [eax + 2], cl
// 0066c1fc  884804               mov byte ptr [eax + 4], cl
// 0066c1ff  884805               mov byte ptr [eax + 5], cl
// 0066c202  884806               mov byte ptr [eax + 6], cl
// 0066c205  884807               mov byte ptr [eax + 7], cl
// 0066c208  e95b010000           jmp 0x66c368
// 0066c20d  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0066c210  8b0a                 mov ecx, dword ptr [edx]
// 0066c212  8d3439               lea esi, [ecx + edi]
// 0066c215  2bcf                 sub ecx, edi
// 0066c217  8b7a18               mov edi, dword ptr [edx + 0x18]
// 0066c21a  8bd9                 mov ebx, ecx
// 0066c21c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0066c21f  03f9                 add edi, ecx
// 0066c221  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 0066c224  897c2410             mov dword ptr [esp + 0x10], edi
// 0066c228  69c96a010000         imul ecx, ecx, 0x16a
// 0066c22e  c1f908               sar ecx, 8
// 0066c231  2bcf                 sub ecx, edi
// 0066c233  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066c237  8d0c37               lea ecx, [edi + esi]
// 0066c23a  2bf7                 sub esi, edi
// 0066c23c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0066c240  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066c244  89742418             mov dword ptr [esp + 0x18], esi
// 0066c248  8d3419               lea esi, [ecx + ebx]
// 0066c24b  2bd9                 sub ebx, ecx
// 0066c24d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0066c250  8974242c             mov dword ptr [esp + 0x2c], esi
// 0066c254  8b7214               mov esi, dword ptr [edx + 0x14]
// 0066c257  8d3c0e               lea edi, [esi + ecx]
// 0066c25a  2bf1                 sub esi, ecx
// 0066c25c  895c2430             mov dword ptr [esp + 0x30], ebx
// 0066c260  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 0066c263  897c2424             mov dword ptr [esp + 0x24], edi
// 0066c267  8b7a04               mov edi, dword ptr [edx + 4]
// 0066c26a  8d0c3b               lea ecx, [ebx + edi]
// 0066c26d  2bfb                 sub edi, ebx
// 0066c26f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066c273  03d9                 add ebx, ecx
// 0066c275  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0066c279  895c2414             mov dword ptr [esp + 0x14], ebx
// 0066c27d  8d1c37               lea ebx, [edi + esi]
// 0066c280  69f663fdffff         imul esi, esi, 0xfffffd63
// 0066c286  69c96a010000         imul ecx, ecx, 0x16a
// 0066c28c  69dbd9010000         imul ebx, ebx, 0x1d9
// 0066c292  69ff15010000         imul edi, edi, 0x115
// 0066c298  c1fe08               sar esi, 8
// 0066c29b  2b742414             sub esi, dword ptr [esp + 0x14]
// 0066c29f  c1f908               sar ecx, 8
// 0066c2a2  c1fb08               sar ebx, 8
// 0066c2a5  03f3                 add esi, ebx
// 0066c2a7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0066c2ab  8bde                 mov ebx, esi
// 0066c2ad  8b742428             mov esi, dword ptr [esp + 0x28]
// 0066c2b1  2bcb                 sub ecx, ebx
// 0066c2b3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0066c2b7  c1ff08               sar edi, 8
// 0066c2ba  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0066c2be  03f9                 add edi, ecx
// 0066c2c0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066c2c4  03ce                 add ecx, esi
// 0066c2c6  2b742414             sub esi, dword ptr [esp + 0x14]
// 0066c2ca  c1f905               sar ecx, 5
// 0066c2cd  81e1ff030000         and ecx, 0x3ff
// 0066c2d3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0066c2d7  c1fe05               sar esi, 5
// 0066c2da  81e6ff030000         and esi, 0x3ff
// 0066c2e0  8808                 mov byte ptr [eax], cl
// 0066c2e2  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0066c2e6  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0066c2ea  884807               mov byte ptr [eax + 7], cl
// 0066c2ed  8d0c33               lea ecx, [ebx + esi]
// 0066c2f0  c1f905               sar ecx, 5
// 0066c2f3  2bf3                 sub esi, ebx
// 0066c2f5  81e1ff030000         and ecx, 0x3ff
// 0066c2fb  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0066c2ff  c1fe05               sar esi, 5
// 0066c302  81e6ff030000         and esi, 0x3ff
// 0066c308  884801               mov byte ptr [eax + 1], cl
// 0066c30b  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0066c30f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0066c313  884806               mov byte ptr [eax + 6], cl
// 0066c316  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066c31a  8d1c31               lea ebx, [ecx + esi]
// 0066c31d  c1fb05               sar ebx, 5
// 0066c320  81e3ff030000         and ebx, 0x3ff
// 0066c326  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 0066c329  2bf1                 sub esi, ecx
// 0066c32b  c1fe05               sar esi, 5
// 0066c32e  81e6ff030000         and esi, 0x3ff
// 0066c334  885802               mov byte ptr [eax + 2], bl
// 0066c337  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0066c33b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0066c33f  884805               mov byte ptr [eax + 5], cl
// 0066c342  8d0c37               lea ecx, [edi + esi]
// 0066c345  c1f905               sar ecx, 5
// 0066c348  81e1ff030000         and ecx, 0x3ff
// 0066c34e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0066c352  2bf7                 sub esi, edi
// 0066c354  c1fe05               sar esi, 5
// 0066c357  81e6ff030000         and esi, 0x3ff
// 0066c35d  884804               mov byte ptr [eax + 4], cl
// 0066c360  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0066c364  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066c368  46                   inc esi
// 0066c369  83c220               add edx, 0x20
// 0066c36c  83fe08               cmp esi, 8
// 0066c36f  884803               mov byte ptr [eax + 3], cl
// 0066c372  8974241c             mov dword ptr [esp + 0x1c], esi
// 0066c376  0f8c34feffff         jl 0x66c1b0
// 0066c37c  5f                   pop edi
// 0066c37d  5e                   pop esi
// 0066c37e  5d                   pop ebp
// 0066c37f  5b                   pop ebx
// 0066c380  81c424010000         add esp, 0x124
// 0066c386  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
