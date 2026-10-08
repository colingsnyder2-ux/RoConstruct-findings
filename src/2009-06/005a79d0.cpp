// from server: 100% by auto
// roc 2009-06 005a79d0  unit: seg_005a0000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a79d0
//
// 005a79d0  83ec18               sub esp, 0x18
// 005a79d3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a79d7  53                   push ebx
// 005a79d8  55                   push ebp
// 005a79d9  56                   push esi
// 005a79da  c744241407000000     mov dword ptr [esp + 0x14], 7
// 005a79e2  83c008               add eax, 8
// 005a79e5  57                   push edi
// 005a79e6  8b7014               mov esi, dword ptr [eax + 0x14]
// 005a79e9  8b50f8               mov edx, dword ptr [eax - 8]
// 005a79ec  8b7810               mov edi, dword ptr [eax + 0x10]
// 005a79ef  8d0c32               lea ecx, [edx + esi]
// 005a79f2  2bd6                 sub edx, esi
// 005a79f4  8b70fc               mov esi, dword ptr [eax - 4]
// 005a79f7  8d1c3e               lea ebx, [esi + edi]
// 005a79fa  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a79fe  8b580c               mov ebx, dword ptr [eax + 0xc]
// 005a7a01  2bf7                 sub esi, edi
// 005a7a03  8b38                 mov edi, dword ptr [eax]
// 005a7a05  8d2c3b               lea ebp, [ebx + edi]
// 005a7a08  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a7a0c  8b6808               mov ebp, dword ptr [eax + 8]
// 005a7a0f  2bfb                 sub edi, ebx
// 005a7a11  8b5804               mov ebx, dword ptr [eax + 4]
// 005a7a14  03eb                 add ebp, ebx
// 005a7a16  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7a1a  03e9                 add ebp, ecx
// 005a7a1c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7a20  2b5808               sub ebx, dword ptr [eax + 8]
// 005a7a23  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a7a27  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7a2b  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a7a2f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a7a33  03e9                 add ebp, ecx
// 005a7a35  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 005a7a39  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7a3d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a7a41  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a7a45  03e9                 add ebp, ecx
// 005a7a47  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7a4b  03ed                 add ebp, ebp
// 005a7a4d  03ed                 add ebp, ebp
// 005a7a4f  8968f8               mov dword ptr [eax - 8], ebp
// 005a7a52  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a7a56  03c9                 add ecx, ecx
// 005a7a58  03c9                 add ecx, ecx
// 005a7a5a  894808               mov dword ptr [eax + 8], ecx
// 005a7a5d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a7a61  03cd                 add ecx, ebp
// 005a7a63  69ed7e180000         imul ebp, ebp, 0x187e
// 005a7a69  69c951110000         imul ecx, ecx, 0x1151
// 005a7a6f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 005a7a76  c1fd0b               sar ebp, 0xb
// 005a7a79  8928                 mov dword ptr [eax], ebp
// 005a7a7b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7a7f  69ed213b0000         imul ebp, ebp, 0x3b21
// 005a7a85  2bcd                 sub ecx, ebp
// 005a7a87  81c100040000         add ecx, 0x400
// 005a7a8d  c1f90b               sar ecx, 0xb
// 005a7a90  894810               mov dword ptr [eax + 0x10], ecx
// 005a7a93  8d0c33               lea ecx, [ebx + esi]
// 005a7a96  8d2c17               lea ebp, [edi + edx]
// 005a7a99  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a7a9d  03e9                 add ebp, ecx
// 005a7a9f  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 005a7aa5  69eda1250000         imul ebp, ebp, 0x25a1
// 005a7aab  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a7aaf  8d2c13               lea ebp, [ebx + edx]
// 005a7ab2  69db8e090000         imul ebx, ebx, 0x98e
// 005a7ab8  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 005a7abe  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a7ac2  8d2c37               lea ebp, [edi + esi]
// 005a7ac5  69ffb3410000         imul edi, edi, 0x41b3
// 005a7acb  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 005a7ad1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a7ad5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7ad9  2be9                 sub ebp, ecx
// 005a7adb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005a7adf  69c97c0c0000         imul ecx, ecx, 0xc7c
// 005a7ae5  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7ae9  035c2410             add ebx, dword ptr [esp + 0x10]
// 005a7aed  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7af1  2be9                 sub ebp, ecx
// 005a7af3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a7af7  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 005a7afe  c1fb0b               sar ebx, 0xb
// 005a7b01  895814               mov dword ptr [eax + 0x14], ebx
// 005a7b04  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7b08  03fd                 add edi, ebp
// 005a7b0a  69f654620000         imul esi, esi, 0x6254
// 005a7b10  69d20b300000         imul edx, edx, 0x300b
// 005a7b16  03742410             add esi, dword ptr [esp + 0x10]
// 005a7b1a  03d5                 add edx, ebp
// 005a7b1c  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 005a7b23  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 005a7b2a  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 005a7b31  c1ff0b               sar edi, 0xb
// 005a7b34  c1fe0b               sar esi, 0xb
// 005a7b37  c1fa0b               sar edx, 0xb
// 005a7b3a  89780c               mov dword ptr [eax + 0xc], edi
// 005a7b3d  897004               mov dword ptr [eax + 4], esi
// 005a7b40  8950fc               mov dword ptr [eax - 4], edx
// 005a7b43  83c020               add eax, 0x20
// 005a7b46  836c241801           sub dword ptr [esp + 0x18], 1
// 005a7b4b  0f8995feffff         jns 0x5a79e6
// 005a7b51  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a7b55  c744241807000000     mov dword ptr [esp + 0x18], 7
// 005a7b5d  83c040               add eax, 0x40
// 005a7b60  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 005a7b66  8b50c0               mov edx, dword ptr [eax - 0x40]
// 005a7b69  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 005a7b6f  8d0c32               lea ecx, [edx + esi]
// 005a7b72  2bd6                 sub edx, esi
// 005a7b74  8b70e0               mov esi, dword ptr [eax - 0x20]
// 005a7b77  8d1c3e               lea ebx, [esi + edi]
// 005a7b7a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a7b7e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 005a7b81  2bf7                 sub esi, edi
// 005a7b83  8b38                 mov edi, dword ptr [eax]
// 005a7b85  8d2c3b               lea ebp, [ebx + edi]
// 005a7b88  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a7b8c  8b6840               mov ebp, dword ptr [eax + 0x40]
// 005a7b8f  2bfb                 sub edi, ebx
// 005a7b91  8b5820               mov ebx, dword ptr [eax + 0x20]
// 005a7b94  03eb                 add ebp, ebx
// 005a7b96  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7b9a  03e9                 add ebp, ecx
// 005a7b9c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7ba0  2b5840               sub ebx, dword ptr [eax + 0x40]
// 005a7ba3  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a7ba7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7bab  894c2424             mov dword ptr [esp + 0x24], ecx
// 005a7baf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a7bb3  03e9                 add ebp, ecx
// 005a7bb5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 005a7bb9  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7bbd  894c2414             mov dword ptr [esp + 0x14], ecx
// 005a7bc1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a7bc5  8d6c2902             lea ebp, [ecx + ebp + 2]
// 005a7bc9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005a7bcd  c1fd02               sar ebp, 2
// 005a7bd0  8968c0               mov dword ptr [eax - 0x40], ebp
// 005a7bd3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a7bd7  83c102               add ecx, 2
// 005a7bda  c1f902               sar ecx, 2
// 005a7bdd  894840               mov dword ptr [eax + 0x40], ecx
// 005a7be0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a7be4  03cd                 add ecx, ebp
// 005a7be6  69ed7e180000         imul ebp, ebp, 0x187e
// 005a7bec  69c951110000         imul ecx, ecx, 0x1151
// 005a7bf2  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 005a7bf9  c1fd0f               sar ebp, 0xf
// 005a7bfc  8928                 mov dword ptr [eax], ebp
// 005a7bfe  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7c02  69ed213b0000         imul ebp, ebp, 0x3b21
// 005a7c08  2bcd                 sub ecx, ebp
// 005a7c0a  81c100400000         add ecx, 0x4000
// 005a7c10  c1f90f               sar ecx, 0xf
// 005a7c13  8d2c17               lea ebp, [edi + edx]
// 005a7c16  896c2424             mov dword ptr [esp + 0x24], ebp
// 005a7c1a  898880000000         mov dword ptr [eax + 0x80], ecx
// 005a7c20  8d0c33               lea ecx, [ebx + esi]
// 005a7c23  03e9                 add ebp, ecx
// 005a7c25  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 005a7c2b  69eda1250000         imul ebp, ebp, 0x25a1
// 005a7c31  896c2414             mov dword ptr [esp + 0x14], ebp
// 005a7c35  8d2c13               lea ebp, [ebx + edx]
// 005a7c38  69db8e090000         imul ebx, ebx, 0x98e
// 005a7c3e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 005a7c44  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a7c48  8d2c37               lea ebp, [edi + esi]
// 005a7c4b  69ffb3410000         imul edi, edi, 0x41b3
// 005a7c51  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 005a7c57  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005a7c5b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005a7c5f  2be9                 sub ebp, ecx
// 005a7c61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a7c65  896c2410             mov dword ptr [esp + 0x10], ebp
// 005a7c69  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 005a7c6d  035c2410             add ebx, dword ptr [esp + 0x10]
// 005a7c71  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 005a7c77  2bcd                 sub ecx, ebp
// 005a7c79  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005a7c7d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 005a7c84  c1fb0f               sar ebx, 0xf
// 005a7c87  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 005a7c8d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7c91  03f9                 add edi, ecx
// 005a7c93  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 005a7c9a  69f654620000         imul esi, esi, 0x6254
// 005a7ca0  69d20b300000         imul edx, edx, 0x300b
// 005a7ca6  03742410             add esi, dword ptr [esp + 0x10]
// 005a7caa  03d1                 add edx, ecx
// 005a7cac  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 005a7cb3  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 005a7cba  c1ff0f               sar edi, 0xf
// 005a7cbd  c1fe0f               sar esi, 0xf
// 005a7cc0  c1fa0f               sar edx, 0xf
// 005a7cc3  897860               mov dword ptr [eax + 0x60], edi
// 005a7cc6  897020               mov dword ptr [eax + 0x20], esi
// 005a7cc9  8950e0               mov dword ptr [eax - 0x20], edx
// 005a7ccc  83c004               add eax, 4
// 005a7ccf  836c241801           sub dword ptr [esp + 0x18], 1
// 005a7cd4  0f8986feffff         jns 0x5a7b60
// 005a7cda  5f                   pop edi
// 005a7cdb  5e                   pop esi
// 005a7cdc  5d                   pop ebp
// 005a7cdd  5b                   pop ebx
// 005a7cde  83c418               add esp, 0x18
// 005a7ce1  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
