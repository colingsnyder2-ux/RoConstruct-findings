// roc 2009-12 00629a30  unit: seg_00620000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00629a30
//
// 00629a30  83ec18               sub esp, 0x18
// 00629a33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00629a37  53                   push ebx
// 00629a38  55                   push ebp
// 00629a39  56                   push esi
// 00629a3a  c744241407000000     mov dword ptr [esp + 0x14], 7
// 00629a42  83c008               add eax, 8
// 00629a45  57                   push edi
// 00629a46  8b7014               mov esi, dword ptr [eax + 0x14]
// 00629a49  8b50f8               mov edx, dword ptr [eax - 8]
// 00629a4c  8b7810               mov edi, dword ptr [eax + 0x10]
// 00629a4f  8d0c32               lea ecx, [edx + esi]
// 00629a52  2bd6                 sub edx, esi
// 00629a54  8b70fc               mov esi, dword ptr [eax - 4]
// 00629a57  8d1c3e               lea ebx, [esi + edi]
// 00629a5a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00629a5e  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00629a61  2bf7                 sub esi, edi
// 00629a63  8b38                 mov edi, dword ptr [eax]
// 00629a65  8d2c3b               lea ebp, [ebx + edi]
// 00629a68  896c2414             mov dword ptr [esp + 0x14], ebp
// 00629a6c  8b6808               mov ebp, dword ptr [eax + 8]
// 00629a6f  2bfb                 sub edi, ebx
// 00629a71  8b5804               mov ebx, dword ptr [eax + 4]
// 00629a74  03eb                 add ebp, ebx
// 00629a76  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629a7a  03e9                 add ebp, ecx
// 00629a7c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629a80  2b5808               sub ebx, dword ptr [eax + 8]
// 00629a83  896c2420             mov dword ptr [esp + 0x20], ebp
// 00629a87  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629a8b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00629a8f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00629a93  03e9                 add ebp, ecx
// 00629a95  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00629a99  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629a9d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00629aa1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00629aa5  03e9                 add ebp, ecx
// 00629aa7  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629aab  03ed                 add ebp, ebp
// 00629aad  03ed                 add ebp, ebp
// 00629aaf  8968f8               mov dword ptr [eax - 8], ebp
// 00629ab2  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00629ab6  03c9                 add ecx, ecx
// 00629ab8  03c9                 add ecx, ecx
// 00629aba  894808               mov dword ptr [eax + 8], ecx
// 00629abd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00629ac1  03cd                 add ecx, ebp
// 00629ac3  69ed7e180000         imul ebp, ebp, 0x187e
// 00629ac9  69c951110000         imul ecx, ecx, 0x1151
// 00629acf  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 00629ad6  c1fd0b               sar ebp, 0xb
// 00629ad9  8928                 mov dword ptr [eax], ebp
// 00629adb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629adf  69ed213b0000         imul ebp, ebp, 0x3b21
// 00629ae5  2bcd                 sub ecx, ebp
// 00629ae7  81c100040000         add ecx, 0x400
// 00629aed  c1f90b               sar ecx, 0xb
// 00629af0  894810               mov dword ptr [eax + 0x10], ecx
// 00629af3  8d0c33               lea ecx, [ebx + esi]
// 00629af6  8d2c17               lea ebp, [edi + edx]
// 00629af9  896c2424             mov dword ptr [esp + 0x24], ebp
// 00629afd  03e9                 add ebp, ecx
// 00629aff  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 00629b05  69eda1250000         imul ebp, ebp, 0x25a1
// 00629b0b  896c2414             mov dword ptr [esp + 0x14], ebp
// 00629b0f  8d2c13               lea ebp, [ebx + edx]
// 00629b12  69db8e090000         imul ebx, ebx, 0x98e
// 00629b18  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 00629b1e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00629b22  8d2c37               lea ebp, [edi + esi]
// 00629b25  69ffb3410000         imul edi, edi, 0x41b3
// 00629b2b  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 00629b31  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00629b35  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629b39  2be9                 sub ebp, ecx
// 00629b3b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00629b3f  69c97c0c0000         imul ecx, ecx, 0xc7c
// 00629b45  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629b49  035c2410             add ebx, dword ptr [esp + 0x10]
// 00629b4d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629b51  2be9                 sub ebp, ecx
// 00629b53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00629b57  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 00629b5e  c1fb0b               sar ebx, 0xb
// 00629b61  895814               mov dword ptr [eax + 0x14], ebx
// 00629b64  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629b68  03fd                 add edi, ebp
// 00629b6a  69f654620000         imul esi, esi, 0x6254
// 00629b70  69d20b300000         imul edx, edx, 0x300b
// 00629b76  03742410             add esi, dword ptr [esp + 0x10]
// 00629b7a  03d5                 add edx, ebp
// 00629b7c  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 00629b83  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 00629b8a  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 00629b91  c1ff0b               sar edi, 0xb
// 00629b94  c1fe0b               sar esi, 0xb
// 00629b97  c1fa0b               sar edx, 0xb
// 00629b9a  89780c               mov dword ptr [eax + 0xc], edi
// 00629b9d  897004               mov dword ptr [eax + 4], esi
// 00629ba0  8950fc               mov dword ptr [eax - 4], edx
// 00629ba3  83c020               add eax, 0x20
// 00629ba6  836c241801           sub dword ptr [esp + 0x18], 1
// 00629bab  0f8995feffff         jns 0x629a46
// 00629bb1  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00629bb5  c744241807000000     mov dword ptr [esp + 0x18], 7
// 00629bbd  83c040               add eax, 0x40
// 00629bc0  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 00629bc6  8b50c0               mov edx, dword ptr [eax - 0x40]
// 00629bc9  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 00629bcf  8d0c32               lea ecx, [edx + esi]
// 00629bd2  2bd6                 sub edx, esi
// 00629bd4  8b70e0               mov esi, dword ptr [eax - 0x20]
// 00629bd7  8d1c3e               lea ebx, [esi + edi]
// 00629bda  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00629bde  8b5860               mov ebx, dword ptr [eax + 0x60]
// 00629be1  2bf7                 sub esi, edi
// 00629be3  8b38                 mov edi, dword ptr [eax]
// 00629be5  8d2c3b               lea ebp, [ebx + edi]
// 00629be8  896c2414             mov dword ptr [esp + 0x14], ebp
// 00629bec  8b6840               mov ebp, dword ptr [eax + 0x40]
// 00629bef  2bfb                 sub edi, ebx
// 00629bf1  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00629bf4  03eb                 add ebp, ebx
// 00629bf6  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629bfa  03e9                 add ebp, ecx
// 00629bfc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629c00  2b5840               sub ebx, dword ptr [eax + 0x40]
// 00629c03  896c2420             mov dword ptr [esp + 0x20], ebp
// 00629c07  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629c0b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00629c0f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00629c13  03e9                 add ebp, ecx
// 00629c15  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00629c19  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629c1d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00629c21  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00629c25  8d6c2902             lea ebp, [ecx + ebp + 2]
// 00629c29  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00629c2d  c1fd02               sar ebp, 2
// 00629c30  8968c0               mov dword ptr [eax - 0x40], ebp
// 00629c33  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00629c37  83c102               add ecx, 2
// 00629c3a  c1f902               sar ecx, 2
// 00629c3d  894840               mov dword ptr [eax + 0x40], ecx
// 00629c40  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00629c44  03cd                 add ecx, ebp
// 00629c46  69ed7e180000         imul ebp, ebp, 0x187e
// 00629c4c  69c951110000         imul ecx, ecx, 0x1151
// 00629c52  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 00629c59  c1fd0f               sar ebp, 0xf
// 00629c5c  8928                 mov dword ptr [eax], ebp
// 00629c5e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629c62  69ed213b0000         imul ebp, ebp, 0x3b21
// 00629c68  2bcd                 sub ecx, ebp
// 00629c6a  81c100400000         add ecx, 0x4000
// 00629c70  c1f90f               sar ecx, 0xf
// 00629c73  8d2c17               lea ebp, [edi + edx]
// 00629c76  896c2424             mov dword ptr [esp + 0x24], ebp
// 00629c7a  898880000000         mov dword ptr [eax + 0x80], ecx
// 00629c80  8d0c33               lea ecx, [ebx + esi]
// 00629c83  03e9                 add ebp, ecx
// 00629c85  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 00629c8b  69eda1250000         imul ebp, ebp, 0x25a1
// 00629c91  896c2414             mov dword ptr [esp + 0x14], ebp
// 00629c95  8d2c13               lea ebp, [ebx + edx]
// 00629c98  69db8e090000         imul ebx, ebx, 0x98e
// 00629c9e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 00629ca4  896c2420             mov dword ptr [esp + 0x20], ebp
// 00629ca8  8d2c37               lea ebp, [edi + esi]
// 00629cab  69ffb3410000         imul edi, edi, 0x41b3
// 00629cb1  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 00629cb7  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00629cbb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00629cbf  2be9                 sub ebp, ecx
// 00629cc1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00629cc5  896c2410             mov dword ptr [esp + 0x10], ebp
// 00629cc9  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00629ccd  035c2410             add ebx, dword ptr [esp + 0x10]
// 00629cd1  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 00629cd7  2bcd                 sub ecx, ebp
// 00629cd9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00629cdd  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 00629ce4  c1fb0f               sar ebx, 0xf
// 00629ce7  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00629ced  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629cf1  03f9                 add edi, ecx
// 00629cf3  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 00629cfa  69f654620000         imul esi, esi, 0x6254
// 00629d00  69d20b300000         imul edx, edx, 0x300b
// 00629d06  03742410             add esi, dword ptr [esp + 0x10]
// 00629d0a  03d1                 add edx, ecx
// 00629d0c  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 00629d13  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 00629d1a  c1ff0f               sar edi, 0xf
// 00629d1d  c1fe0f               sar esi, 0xf
// 00629d20  c1fa0f               sar edx, 0xf
// 00629d23  897860               mov dword ptr [eax + 0x60], edi
// 00629d26  897020               mov dword ptr [eax + 0x20], esi
// 00629d29  8950e0               mov dword ptr [eax - 0x20], edx
// 00629d2c  83c004               add eax, 4
// 00629d2f  836c241801           sub dword ptr [esp + 0x18], 1
// 00629d34  0f8986feffff         jns 0x629bc0
// 00629d3a  5f                   pop edi
// 00629d3b  5e                   pop esi
// 00629d3c  5d                   pop ebp
// 00629d3d  5b                   pop ebx
// 00629d3e  83c418               add esp, 0x18
// 00629d41  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
