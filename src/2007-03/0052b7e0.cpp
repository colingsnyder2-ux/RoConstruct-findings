// roc 2007-03 0052b7e0  unit: seg_00520000  size: 985 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052b7e0
//
// 0052b7e0  81ec24010000         sub esp, 0x124
// 0052b7e6  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0052b7ed  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0052b7f4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0052b7f7  53                   push ebx
// 0052b7f8  55                   push ebp
// 0052b7f9  8ba820010000         mov ebp, dword ptr [eax + 0x120]
// 0052b7ff  56                   push esi
// 0052b800  8bb4243c010000       mov esi, dword ptr [esp + 0x13c]
// 0052b807  81c580000000         add ebp, 0x80
// 0052b80d  57                   push edi
// 0052b80e  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052b812  8d4c2434             lea ecx, [esp + 0x34]
// 0052b816  c744241c08000000     mov dword ptr [esp + 0x1c], 8
// 0052b81e  8bff                 mov edi, edi
// 0052b820  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0052b824  6685c0               test ax, ax
// 0052b827  754f                 jne 0x52b878
// 0052b829  66394620             cmp word ptr [esi + 0x20], ax
// 0052b82d  7549                 jne 0x52b878
// 0052b82f  66394630             cmp word ptr [esi + 0x30], ax
// 0052b833  7543                 jne 0x52b878
// 0052b835  66394640             cmp word ptr [esi + 0x40], ax
// 0052b839  753d                 jne 0x52b878
// 0052b83b  66394650             cmp word ptr [esi + 0x50], ax
// 0052b83f  7537                 jne 0x52b878
// 0052b841  66394660             cmp word ptr [esi + 0x60], ax
// 0052b845  7531                 jne 0x52b878
// 0052b847  66394670             cmp word ptr [esi + 0x70], ax
// 0052b84b  752b                 jne 0x52b878
// 0052b84d  0fbf06               movsx eax, word ptr [esi]
// 0052b850  0faf02               imul eax, dword ptr [edx]
// 0052b853  8901                 mov dword ptr [ecx], eax
// 0052b855  894120               mov dword ptr [ecx + 0x20], eax
// 0052b858  894140               mov dword ptr [ecx + 0x40], eax
// 0052b85b  898180000000         mov dword ptr [ecx + 0x80], eax
// 0052b861  8981a0000000         mov dword ptr [ecx + 0xa0], eax
// 0052b867  8981c0000000         mov dword ptr [ecx + 0xc0], eax
// 0052b86d  8981e0000000         mov dword ptr [ecx + 0xe0], eax
// 0052b873  e93e010000           jmp 0x52b9b6
// 0052b878  0fbf5e60             movsx ebx, word ptr [esi + 0x60]
// 0052b87c  0faf9ac0000000       imul ebx, dword ptr [edx + 0xc0]
// 0052b883  0fbf3e               movsx edi, word ptr [esi]
// 0052b886  0faf3a               imul edi, dword ptr [edx]
// 0052b889  0fbf6e40             movsx ebp, word ptr [esi + 0x40]
// 0052b88d  0fafaa80000000       imul ebp, dword ptr [edx + 0x80]
// 0052b894  0fbf4620             movsx eax, word ptr [esi + 0x20]
// 0052b898  0faf4240             imul eax, dword ptr [edx + 0x40]
// 0052b89c  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b8a0  8d1c2f               lea ebx, [edi + ebp]
// 0052b8a3  2bfd                 sub edi, ebp
// 0052b8a5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0052b8a9  03e8                 add ebp, eax
// 0052b8ab  2b442418             sub eax, dword ptr [esp + 0x18]
// 0052b8af  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b8b3  69c06a010000         imul eax, eax, 0x16a
// 0052b8b9  c1f808               sar eax, 8
// 0052b8bc  2bc5                 sub eax, ebp
// 0052b8be  89442410             mov dword ptr [esp + 0x10], eax
// 0052b8c2  8d042b               lea eax, [ebx + ebp]
// 0052b8c5  2bdd                 sub ebx, ebp
// 0052b8c7  0fbf6e70             movsx ebp, word ptr [esi + 0x70]
// 0052b8cb  0fafaae0000000       imul ebp, dword ptr [edx + 0xe0]
// 0052b8d2  89442428             mov dword ptr [esp + 0x28], eax
// 0052b8d6  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052b8da  895c2418             mov dword ptr [esp + 0x18], ebx
// 0052b8de  8d1c38               lea ebx, [eax + edi]
// 0052b8e1  2bf8                 sub edi, eax
// 0052b8e3  0fb74610             movzx eax, word ptr [esi + 0x10]
// 0052b8e7  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0052b8eb  897c2430             mov dword ptr [esp + 0x30], edi
// 0052b8ef  0fbf7e50             movsx edi, word ptr [esi + 0x50]
// 0052b8f3  0fafbaa0000000       imul edi, dword ptr [edx + 0xa0]
// 0052b8fa  0fbfd8               movsx ebx, ax
// 0052b8fd  0faf5a20             imul ebx, dword ptr [edx + 0x20]
// 0052b901  0fbf4630             movsx eax, word ptr [esi + 0x30]
// 0052b905  0faf4260             imul eax, dword ptr [edx + 0x60]
// 0052b909  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052b90d  8d2c07               lea ebp, [edi + eax]
// 0052b910  2bf8                 sub edi, eax
// 0052b912  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052b916  03c3                 add eax, ebx
// 0052b918  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 0052b91c  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052b920  03e8                 add ebp, eax
// 0052b922  2b442424             sub eax, dword ptr [esp + 0x24]
// 0052b926  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052b92a  8d2c3b               lea ebp, [ebx + edi]
// 0052b92d  69ff63fdffff         imul edi, edi, 0xfffffd63
// 0052b933  69db15010000         imul ebx, ebx, 0x115
// 0052b939  69edd9010000         imul ebp, ebp, 0x1d9
// 0052b93f  69c06a010000         imul eax, eax, 0x16a
// 0052b945  c1fd08               sar ebp, 8
// 0052b948  c1ff08               sar edi, 8
// 0052b94b  2b7c2414             sub edi, dword ptr [esp + 0x14]
// 0052b94f  c1fb08               sar ebx, 8
// 0052b952  03fd                 add edi, ebp
// 0052b954  2bdd                 sub ebx, ebp
// 0052b956  c1f808               sar eax, 8
// 0052b959  2bc7                 sub eax, edi
// 0052b95b  03d8                 add ebx, eax
// 0052b95d  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052b961  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0052b965  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052b969  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052b96d  03dd                 add ebx, ebp
// 0052b96f  2b6c2414             sub ebp, dword ptr [esp + 0x14]
// 0052b973  8919                 mov dword ptr [ecx], ebx
// 0052b975  89a9e0000000         mov dword ptr [ecx + 0xe0], ebp
// 0052b97b  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0052b97f  8d1c2f               lea ebx, [edi + ebp]
// 0052b982  2bef                 sub ebp, edi
// 0052b984  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0052b988  895920               mov dword ptr [ecx + 0x20], ebx
// 0052b98b  8d1c38               lea ebx, [eax + edi]
// 0052b98e  2bf8                 sub edi, eax
// 0052b990  8b442418             mov eax, dword ptr [esp + 0x18]
// 0052b994  89b9a0000000         mov dword ptr [ecx + 0xa0], edi
// 0052b99a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0052b99e  89a9c0000000         mov dword ptr [ecx + 0xc0], ebp
// 0052b9a4  895940               mov dword ptr [ecx + 0x40], ebx
// 0052b9a7  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052b9ab  8d1c07               lea ebx, [edi + eax]
// 0052b9ae  899980000000         mov dword ptr [ecx + 0x80], ebx
// 0052b9b4  2bc7                 sub eax, edi
// 0052b9b6  894160               mov dword ptr [ecx + 0x60], eax
// 0052b9b9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052b9bd  83e801               sub eax, 1
// 0052b9c0  83c602               add esi, 2
// 0052b9c3  83c204               add edx, 4
// 0052b9c6  83c104               add ecx, 4
// 0052b9c9  85c0                 test eax, eax
// 0052b9cb  8944241c             mov dword ptr [esp + 0x1c], eax
// 0052b9cf  0f8f4bfeffff         jg 0x52b820
// 0052b9d5  33f6                 xor esi, esi
// 0052b9d7  8d542434             lea edx, [esp + 0x34]
// 0052b9db  8974241c             mov dword ptr [esp + 0x1c], esi
// 0052b9df  90                   nop 
// 0052b9e0  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 0052b9e7  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 0052b9ea  8b4a04               mov ecx, dword ptr [edx + 4]
// 0052b9ed  03842448010000       add eax, dword ptr [esp + 0x148]
// 0052b9f4  85c9                 test ecx, ecx
// 0052b9f6  7545                 jne 0x52ba3d
// 0052b9f8  394a08               cmp dword ptr [edx + 8], ecx
// 0052b9fb  7540                 jne 0x52ba3d
// 0052b9fd  394a0c               cmp dword ptr [edx + 0xc], ecx
// 0052ba00  753b                 jne 0x52ba3d
// 0052ba02  394a10               cmp dword ptr [edx + 0x10], ecx
// 0052ba05  7536                 jne 0x52ba3d
// 0052ba07  394a14               cmp dword ptr [edx + 0x14], ecx
// 0052ba0a  7531                 jne 0x52ba3d
// 0052ba0c  394a18               cmp dword ptr [edx + 0x18], ecx
// 0052ba0f  752c                 jne 0x52ba3d
// 0052ba11  394a1c               cmp dword ptr [edx + 0x1c], ecx
// 0052ba14  7527                 jne 0x52ba3d
// 0052ba16  8b0a                 mov ecx, dword ptr [edx]
// 0052ba18  c1f905               sar ecx, 5
// 0052ba1b  81e1ff030000         and ecx, 0x3ff
// 0052ba21  8a0c29               mov cl, byte ptr [ecx + ebp]
// 0052ba24  8808                 mov byte ptr [eax], cl
// 0052ba26  884801               mov byte ptr [eax + 1], cl
// 0052ba29  884802               mov byte ptr [eax + 2], cl
// 0052ba2c  884804               mov byte ptr [eax + 4], cl
// 0052ba2f  884805               mov byte ptr [eax + 5], cl
// 0052ba32  884806               mov byte ptr [eax + 6], cl
// 0052ba35  884807               mov byte ptr [eax + 7], cl
// 0052ba38  e95b010000           jmp 0x52bb98
// 0052ba3d  8b7a10               mov edi, dword ptr [edx + 0x10]
// 0052ba40  8b0a                 mov ecx, dword ptr [edx]
// 0052ba42  8d3439               lea esi, [ecx + edi]
// 0052ba45  2bcf                 sub ecx, edi
// 0052ba47  8b7a18               mov edi, dword ptr [edx + 0x18]
// 0052ba4a  8bd9                 mov ebx, ecx
// 0052ba4c  8b4a08               mov ecx, dword ptr [edx + 8]
// 0052ba4f  03f9                 add edi, ecx
// 0052ba51  2b4a18               sub ecx, dword ptr [edx + 0x18]
// 0052ba54  897c2410             mov dword ptr [esp + 0x10], edi
// 0052ba58  69c96a010000         imul ecx, ecx, 0x16a
// 0052ba5e  c1f908               sar ecx, 8
// 0052ba61  2bcf                 sub ecx, edi
// 0052ba63  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052ba67  8d0c37               lea ecx, [edi + esi]
// 0052ba6a  2bf7                 sub esi, edi
// 0052ba6c  894c2428             mov dword ptr [esp + 0x28], ecx
// 0052ba70  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052ba74  89742418             mov dword ptr [esp + 0x18], esi
// 0052ba78  8d3419               lea esi, [ecx + ebx]
// 0052ba7b  2bd9                 sub ebx, ecx
// 0052ba7d  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0052ba80  8974242c             mov dword ptr [esp + 0x2c], esi
// 0052ba84  8b7214               mov esi, dword ptr [edx + 0x14]
// 0052ba87  8d3c0e               lea edi, [esi + ecx]
// 0052ba8a  2bf1                 sub esi, ecx
// 0052ba8c  895c2430             mov dword ptr [esp + 0x30], ebx
// 0052ba90  8b5a1c               mov ebx, dword ptr [edx + 0x1c]
// 0052ba93  897c2424             mov dword ptr [esp + 0x24], edi
// 0052ba97  8b7a04               mov edi, dword ptr [edx + 4]
// 0052ba9a  8d0c3b               lea ecx, [ebx + edi]
// 0052ba9d  2bfb                 sub edi, ebx
// 0052ba9f  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052baa3  03d9                 add ebx, ecx
// 0052baa5  2b4c2424             sub ecx, dword ptr [esp + 0x24]
// 0052baa9  895c2414             mov dword ptr [esp + 0x14], ebx
// 0052baad  8d1c37               lea ebx, [edi + esi]
// 0052bab0  69f663fdffff         imul esi, esi, 0xfffffd63
// 0052bab6  69c96a010000         imul ecx, ecx, 0x16a
// 0052babc  69dbd9010000         imul ebx, ebx, 0x1d9
// 0052bac2  69ff15010000         imul edi, edi, 0x115
// 0052bac8  c1fe08               sar esi, 8
// 0052bacb  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052bacf  c1f908               sar ecx, 8
// 0052bad2  c1fb08               sar ebx, 8
// 0052bad5  03f3                 add esi, ebx
// 0052bad7  895c2410             mov dword ptr [esp + 0x10], ebx
// 0052badb  8bde                 mov ebx, esi
// 0052badd  8b742428             mov esi, dword ptr [esp + 0x28]
// 0052bae1  2bcb                 sub ecx, ebx
// 0052bae3  894c2420             mov dword ptr [esp + 0x20], ecx
// 0052bae7  c1ff08               sar edi, 8
// 0052baea  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0052baee  03f9                 add edi, ecx
// 0052baf0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052baf4  03ce                 add ecx, esi
// 0052baf6  2b742414             sub esi, dword ptr [esp + 0x14]
// 0052bafa  c1f905               sar ecx, 5
// 0052bafd  81e1ff030000         and ecx, 0x3ff
// 0052bb03  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052bb07  c1fe05               sar esi, 5
// 0052bb0a  81e6ff030000         and esi, 0x3ff
// 0052bb10  8808                 mov byte ptr [eax], cl
// 0052bb12  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052bb16  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0052bb1a  884807               mov byte ptr [eax + 7], cl
// 0052bb1d  8d0c33               lea ecx, [ebx + esi]
// 0052bb20  c1f905               sar ecx, 5
// 0052bb23  2bf3                 sub esi, ebx
// 0052bb25  81e1ff030000         and ecx, 0x3ff
// 0052bb2b  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052bb2f  c1fe05               sar esi, 5
// 0052bb32  81e6ff030000         and esi, 0x3ff
// 0052bb38  884801               mov byte ptr [eax + 1], cl
// 0052bb3b  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052bb3f  8b742430             mov esi, dword ptr [esp + 0x30]
// 0052bb43  884806               mov byte ptr [eax + 6], cl
// 0052bb46  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052bb4a  8d1c31               lea ebx, [ecx + esi]
// 0052bb4d  c1fb05               sar ebx, 5
// 0052bb50  81e3ff030000         and ebx, 0x3ff
// 0052bb56  8a1c2b               mov bl, byte ptr [ebx + ebp]
// 0052bb59  2bf1                 sub esi, ecx
// 0052bb5b  c1fe05               sar esi, 5
// 0052bb5e  81e6ff030000         and esi, 0x3ff
// 0052bb64  885802               mov byte ptr [eax + 2], bl
// 0052bb67  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052bb6b  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052bb6f  884805               mov byte ptr [eax + 5], cl
// 0052bb72  8d0c37               lea ecx, [edi + esi]
// 0052bb75  c1f905               sar ecx, 5
// 0052bb78  81e1ff030000         and ecx, 0x3ff
// 0052bb7e  0fb60c29             movzx ecx, byte ptr [ecx + ebp]
// 0052bb82  2bf7                 sub esi, edi
// 0052bb84  c1fe05               sar esi, 5
// 0052bb87  81e6ff030000         and esi, 0x3ff
// 0052bb8d  884804               mov byte ptr [eax + 4], cl
// 0052bb90  0fb60c2e             movzx ecx, byte ptr [esi + ebp]
// 0052bb94  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0052bb98  83c601               add esi, 1
// 0052bb9b  83c220               add edx, 0x20
// 0052bb9e  83fe08               cmp esi, 8
// 0052bba1  884803               mov byte ptr [eax + 3], cl
// 0052bba4  8974241c             mov dword ptr [esp + 0x1c], esi
// 0052bba8  0f8c32feffff         jl 0x52b9e0
// 0052bbae  5f                   pop edi
// 0052bbaf  5e                   pop esi
// 0052bbb0  5d                   pop ebp
// 0052bbb1  5b                   pop ebx
// 0052bbb2  81c424010000         add esp, 0x124
// 0052bbb8  c3                   ret 
// library jpeg-6b/jidctfst.c (function _jpeg_idct_ifast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctfst.c
