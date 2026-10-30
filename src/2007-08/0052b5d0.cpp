// from server: 100% by auto
// roc 2007-08 0052b5d0  unit: seg_00520000  size: 985 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052b5d0
//
// 0052b5d0  81ec24010000         sub esp, 0x124
// 0052b5d6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0052b5dd  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0052b5e4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0052b5e7  53                   push ebx
// 0052b5e8  55                   push ebp
// 0052b5e9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 0052b5ef  56                   push esi
// 0052b5f0  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 0052b5f7  81c580000000         add ebp, 0x80
// 0052b5fd  57                   push edi
// 0052b5fe  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052b602  8d4c2434             lea ecx, [esp + 0x34]
// 0052b606  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 0052b60e  8bff                 mov edi, edi
// 0052b610  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0052b614  6685c0               test ax, ax
// 0052b617  754f                 jne 0x52b668
// 0052b619  66394620             cmp word ptr [esi + 0x20], ax
// 0052b61d  7549                 jne 0x52b668
// 0052b61f  66394630             cmp word ptr [esi + 0x30], ax
// 0052b623  7543                 jne 0x52b668
// 0052b625  66394640             cmp word ptr [esi + 0x40], ax
// 0052b629  753d                 jne 0x52b668
// 0052b62b  66394650             cmp word ptr [esi + 0x50], ax
// 0052b62f  7537                 jne 0x52b668
// 0052b631  66394660             cmp word ptr [esi + 0x60], ax
// 0052b635  7531                 jne 0x52b668
// 0052b637  66394670             cmp word ptr [esi + 0x70], ax
// 0052b63b  752b                 jne 0x52b668
// 0052b63d  0fbf06               movsx eax, word ptr [esi]
// 0052b640  0faf02               imul eax, dword ptr [edx]
// 0052b643  8901                 mov dword ptr [ecx], eax
// 0052b645  894120               mov dword ptr [ecx + 0x20], eax
// 0052b648  894140               mov dword ptr [ecx + 0x40], eax
// 0052b64b  898180000000         mov dword ptr [ecx + 0x80], eax
// 0052b651  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0052b657  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0052b65d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 0052b663  e93e010000           jmp 0x52b7a6
// 0052b668  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0052b66c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 0052b673  0fbf3e               movsx edi, word ptr [esi]
// 0052b676  0faf3a               imul edi, dword ptr [edx]
// 0052b679  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0052b67d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 0052b684  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 0052b688  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0052b68c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b690  8d1c2f               lea ebx, [edi + ebp]
// 0052b693  2bfd                 sub edi, ebp
// 0052b695  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052b699  03e8                 add ebp, eax
// 0052b69b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0052b69f  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b6a3  69c06a010000         imul eax, eax, 0x16a
// 0052b6a9  c1f808               sar eax, 8
// 0052b6ac  2bc5                 sub eax, ebp
// 0052b6ae  89442410             mov dword ptr [esp + 0x10], eax
// 0052b6b2  8d042b               lea eax, [ebx + ebp]
// 0052b6b5  2bdd                 sub ebx, ebp
// 0052b6b7  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0052b6bb  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 0052b6c2  89442428             mov dword ptr [esp + 0x28], eax
// 0052b6c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052b6ca  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b6ce  8d1c38               lea ebx, [eax + edi]
// 0052b6d1  2bf8                 sub edi, eax
// 0052b6d3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0052b6d7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b6db  897c2430             mov dword ptr [esp + 0x30], edi
// 0052b6df  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 0052b6e3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 0052b6ea  0fbfd8               movsx ebx, ax
// 0052b6ed  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 0052b6f1  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 0052b6f5  0faf4260             imul eax, dword ptr [edx + 0x60]
// 0052b6f9  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052b6fd  8d2c07               lea ebp, [edi + eax]
// 0052b700  2bf8                 sub edi, eax
// 0052b702  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052b706  03c3                 add eax, ebx
// 0052b708  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0052b70c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052b710  03e8                 add ebp, eax
// 0052b712  2b442424             sub eax, dword ptr [esp + 0x24]
// 0052b716  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052b71a  8d2c3b               lea ebp, [ebx + edi]
// 0052b71d  69ff63fdffff         imul edi, edi, 0xfffffd63
// 0052b723  69db15010000         imul ebx, ebx, 0x115
// 0052b729  69edd9010000         imul ebp, ebp, 0x1d9
// 0052b72f  69c06a010000         imul eax, eax, 0x16a
// 0052b735  c1fd08               sar ebp, 8
// 0052b738  c1ff08               sar edi, 8
// 0052b73b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0052b73f  c1fb08               sar ebx, 8
// 0052b742  03fd                 add edi, ebp
// 0052b744  2bdd                 sub ebx, ebp
// 0052b746  c1f808               sar eax, 8
// 0052b749  2bc7                 sub eax, edi
// 0052b74b  03d8                 add ebx, eax
// 0052b74d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b751  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052b755  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b759  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052b75d  03dd                 add ebx, ebp
// 0052b75f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0052b763  8919                 mov dword ptr [ecx], ebx
// 0052b765  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 0052b76b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0052b76f  8d1c2f               lea ebx, [edi + ebp]
// 0052b772  2bef                 sub ebp, edi
// 0052b774  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052b778  895920               mov dword ptr [ecx + 0x20], ebx
// 0052b77b  8d1c38               lea ebx, [eax + edi]
// 0052b77e  2bf8                 sub edi, eax
// 0052b780  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052b784  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 0052b78a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052b78e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 0052b794  895940               mov dword ptr [ecx + 0x40], ebx
// 0052b797  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052b79b  8d1c07               lea ebx, [edi + eax]
// 0052b79e  899980000000         mov dword ptr [ecx + 0x80], ebx
// 0052b7a4  2bc7                 sub eax, edi
// 0052b7a6  894160               mov dword ptr [ecx + 0x60], eax
// 0052b7a9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b7ad  83e801               sub eax, 1
// 0052b7b0  83c602               add esi, 2
// 0052b7b3  83c204               add edx, 4
// 0052b7b6  83c104               add ecx, 4
// 0052b7b9  85c0                 test eax, eax
// 0052b7bb  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052b7bf  0f8f4bfeffff         jg 0x52b610
// 0052b7c5  33f6                 xor esi, esi
// 0052b7c7  8d542434             lea edx, [esp + 0x34]
// 0052b7cb  8974241c             mov dword ptr [esp + 0x1c], esi
// 0052b7cf  90                   nop 
// 0052b7d0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0052b7d7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0052b7da  8b4a04               mov ecx, dword ptr [edx + 4]
// 0052b7dd  03842448010000       add eax, dword ptr [esp + 0x148]
// 0052b7e4  85c9                 test ecx, ecx
// 0052b7e6  7545                 jne 0x52b82d
// 0052b7e8  394a08               cmp dword ptr [edx + 8], ecx
// 0052b7eb  7540                 jne 0x52b82d
// 0052b7ed  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0052b7f0  753b                 jne 0x52b82d
// 0052b7f2  394a10               cmp dword ptr [edx + 0x10], ecx
// 0052b7f5  7536                 jne 0x52b82d
// 0052b7f7  394a14               cmp dword ptr [edx + 0x14], ecx
// 0052b7fa  7531                 jne 0x52b82d
// 0052b7fc  394a18               cmp dword ptr [edx + 0x18], ecx
// 0052b7ff  752c                 jne 0x52b82d
// 0052b801  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 0052b804  7527                 jne 0x52b82d
// 0052b806  8b0a                 mov ecx, dword ptr [edx]
// 0052b808  c1f905               sar ecx, 5
// 0052b80b  81e1ff030000         and ecx, 0x3ff
// 0052b811  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0052b814  8808                 mov byte ptr [eax], cl
// 0052b816  884801               mov byte ptr [eax + 1], cl
// 0052b819  884802               mov byte ptr [eax + 2], cl
// 0052b81c  884804               mov byte ptr [eax + 4], cl
// 0052b81f  884805               mov byte ptr [eax + 5], cl
// 0052b822  884806               mov byte ptr [eax + 6], cl
// 0052b825  884807               mov byte ptr [eax + 7], cl
// 0052b828  e95b010000           jmp 0x52b988
// 0052b82d  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0052b830  8b0a                 mov ecx, dword ptr [edx]
// 0052b832  8d3439               lea esi, [ecx + edi]
// 0052b835  2bcf                 sub ecx, edi
// 0052b837  8b7a18               mov edi, dword ptr [edx + 0x18]
// 0052b83a  8bd9                 mov ebx, ecx
// 0052b83c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0052b83f  03f9                 add edi, ecx
// 0052b841  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 0052b844  897c2410             mov dword ptr [esp + 0x10], edi
// 0052b848  69c96a010000         imul ecx, ecx, 0x16a
// 0052b84e  c1f908               sar ecx, 8
// 0052b851  2bcf                 sub ecx, edi
// 0052b853  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052b857  8d0c37               lea ecx, [edi + esi]
// 0052b85a  2bf7                 sub esi, edi
// 0052b85c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052b860  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052b864  89742418             mov dword ptr [esp + 0x18], esi
// 0052b868  8d3419               lea esi, [ecx + ebx]
// 0052b86b  2bd9                 sub ebx, ecx
// 0052b86d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0052b870  8974242c             mov dword ptr [esp + 0x2c], esi
// 0052b874  8b7214               mov esi, dword ptr [edx + 0x14]
// 0052b877  8d3c0e               lea edi, [esi + ecx]
// 0052b87a  2bf1                 sub esi, ecx
// 0052b87c  895c2430             mov dword ptr [esp + 0x30], ebx
// 0052b880  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 0052b883  897c2424             mov dword ptr [esp + 0x24], edi
// 0052b887  8b7a04               mov edi, dword ptr [edx + 4]
// 0052b88a  8d0c3b               lea ecx, [ebx + edi]
// 0052b88d  2bfb                 sub edi, ebx
// 0052b88f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052b893  03d9                 add ebx, ecx
// 0052b895  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0052b899  895c2414             mov dword ptr [esp + 0x14], ebx
// 0052b89d  8d1c37               lea ebx, [edi + esi]
// 0052b8a0  69f663fdffff         imul esi, esi, 0xfffffd63
// 0052b8a6  69c96a010000         imul ecx, ecx, 0x16a
// 0052b8ac  69dbd9010000         imul ebx, ebx, 0x1d9
// 0052b8b2  69ff15010000         imul edi, edi, 0x115
// 0052b8b8  c1fe08               sar esi, 8
// 0052b8bb  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052b8bf  c1f908               sar ecx, 8
// 0052b8c2  c1fb08               sar ebx, 8
// 0052b8c5  03f3                 add esi, ebx
// 0052b8c7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b8cb  8bde                 mov ebx, esi
// 0052b8cd  8b742428             mov esi, dword ptr [esp + 0x28]
// 0052b8d1  2bcb                 sub ecx, ebx
// 0052b8d3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052b8d7  c1ff08               sar edi, 8
// 0052b8da  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0052b8de  03f9                 add edi, ecx
// 0052b8e0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052b8e4  03ce                 add ecx, esi
// 0052b8e6  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052b8ea  c1f905               sar ecx, 5
// 0052b8ed  81e1ff030000         and ecx, 0x3ff
// 0052b8f3  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052b8f7  c1fe05               sar esi, 5
// 0052b8fa  81e6ff030000         and esi, 0x3ff
// 0052b900  8808                 mov byte ptr [eax], cl
// 0052b902  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052b906  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0052b90a  884807               mov byte ptr [eax + 7], cl
// 0052b90d  8d0c33               lea ecx, [ebx + esi]
// 0052b910  c1f905               sar ecx, 5
// 0052b913  2bf3                 sub esi, ebx
// 0052b915  81e1ff030000         and ecx, 0x3ff
// 0052b91b  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052b91f  c1fe05               sar esi, 5
// 0052b922  81e6ff030000         and esi, 0x3ff
// 0052b928  884801               mov byte ptr [eax + 1], cl
// 0052b92b  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052b92f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052b933  884806               mov byte ptr [eax + 6], cl
// 0052b936  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052b93a  8d1c31               lea ebx, [ecx + esi]
// 0052b93d  c1fb05               sar ebx, 5
// 0052b940  81e3ff030000         and ebx, 0x3ff
// 0052b946  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 0052b949  2bf1                 sub esi, ecx
// 0052b94b  c1fe05               sar esi, 5
// 0052b94e  81e6ff030000         and esi, 0x3ff
// 0052b954  885802               mov byte ptr [eax + 2], bl
// 0052b957  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052b95b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052b95f  884805               mov byte ptr [eax + 5], cl
// 0052b962  8d0c37               lea ecx, [edi + esi]
// 0052b965  c1f905               sar ecx, 5
// 0052b968  81e1ff030000         and ecx, 0x3ff
// 0052b96e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052b972  2bf7                 sub esi, edi
// 0052b974  c1fe05               sar esi, 5
// 0052b977  81e6ff030000         and esi, 0x3ff
// 0052b97d  884804               mov byte ptr [eax + 4], cl
// 0052b980  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052b984  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052b988  83c601               add esi, 1
// 0052b98b  83c220               add edx, 0x20
// 0052b98e  83fe08               cmp esi, 8
// 0052b991  884803               mov byte ptr [eax + 3], cl
// 0052b994  8974241c             mov dword ptr [esp + 0x1c], esi
// 0052b998  0f8c32feffff         jl 0x52b7d0
// 0052b99e  5f                   pop edi
// 0052b99f  5e                   pop esi
// 0052b9a0  5d                   pop ebp
// 0052b9a1  5b                   pop ebx
// 0052b9a2  81c424010000         add esp, 0x124
// 0052b9a8  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
