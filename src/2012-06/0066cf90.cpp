// from server: 100% by auto
// roc 2012-06 0066cf90  unit: seg_00660000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066cf90
//
// 0066cf90  83ec18               sub esp, 0x18
// 0066cf93  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066cf97  53                   push ebx
// 0066cf98  55                   push ebp
// 0066cf99  56                   push esi
// 0066cf9a  c744241407000000     mov dword ptr [esp + 0x14], 7
// 0066cfa2  83c008               add eax, 8
// 0066cfa5  57                   push edi
// 0066cfa6  8b7014               mov esi, dword ptr [eax + 0x14]
// 0066cfa9  8b50f8               mov edx, dword ptr [eax - 8]
// 0066cfac  8b7810               mov edi, dword ptr [eax + 0x10]
// 0066cfaf  8d0c32               lea ecx, [edx + esi]
// 0066cfb2  2bd6                 sub edx, esi
// 0066cfb4  8b70fc               mov esi, dword ptr [eax - 4]
// 0066cfb7  8d1c3e               lea ebx, [esi + edi]
// 0066cfba  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066cfbe  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0066cfc1  2bf7                 sub esi, edi
// 0066cfc3  8b38                 mov edi, dword ptr [eax]
// 0066cfc5  8d2c3b               lea ebp, [ebx + edi]
// 0066cfc8  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066cfcc  8b6808               mov ebp, dword ptr [eax + 8]
// 0066cfcf  2bfb                 sub edi, ebx
// 0066cfd1  8b5804               mov ebx, dword ptr [eax + 4]
// 0066cfd4  03eb                 add ebp, ebx
// 0066cfd6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066cfda  03e9                 add ebp, ecx
// 0066cfdc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066cfe0  2b5808               sub ebx, dword ptr [eax + 8]
// 0066cfe3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066cfe7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066cfeb  894c2424             mov dword ptr [esp + 0x24], ecx
// 0066cfef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066cff3  03e9                 add ebp, ecx
// 0066cff5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0066cff9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066cffd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0066d001  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066d005  03e9                 add ebp, ecx
// 0066d007  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d00b  03ed                 add ebp, ebp
// 0066d00d  03ed                 add ebp, ebp
// 0066d00f  8968f8               mov dword ptr [eax - 8], ebp
// 0066d012  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0066d016  03c9                 add ecx, ecx
// 0066d018  03c9                 add ecx, ecx
// 0066d01a  894808               mov dword ptr [eax + 8], ecx
// 0066d01d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d021  03cd                 add ecx, ebp
// 0066d023  69ed7e180000         imul ebp, ebp, 0x187e
// 0066d029  69c951110000         imul ecx, ecx, 0x1151
// 0066d02f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 0066d036  c1fd0b               sar ebp, 0xb
// 0066d039  8928                 mov dword ptr [eax], ebp
// 0066d03b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d03f  69ed213b0000         imul ebp, ebp, 0x3b21
// 0066d045  2bcd                 sub ecx, ebp
// 0066d047  81c100040000         add ecx, 0x400
// 0066d04d  c1f90b               sar ecx, 0xb
// 0066d050  894810               mov dword ptr [eax + 0x10], ecx
// 0066d053  8d0c33               lea ecx, [ebx + esi]
// 0066d056  8d2c17               lea ebp, [edi + edx]
// 0066d059  896c2424             mov dword ptr [esp + 0x24], ebp
// 0066d05d  03e9                 add ebp, ecx
// 0066d05f  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0066d065  69eda1250000         imul ebp, ebp, 0x25a1
// 0066d06b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066d06f  8d2c13               lea ebp, [ebx + edx]
// 0066d072  69db8e090000         imul ebx, ebx, 0x98e
// 0066d078  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0066d07e  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066d082  8d2c37               lea ebp, [edi + esi]
// 0066d085  69ffb3410000         imul edi, edi, 0x41b3
// 0066d08b  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0066d091  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0066d095  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d099  2be9                 sub ebp, ecx
// 0066d09b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0066d09f  69c97c0c0000         imul ecx, ecx, 0xc7c
// 0066d0a5  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066d0a9  035c2410             add ebx, dword ptr [esp + 0x10]
// 0066d0ad  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d0b1  2be9                 sub ebp, ecx
// 0066d0b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066d0b7  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 0066d0be  c1fb0b               sar ebx, 0xb
// 0066d0c1  895814               mov dword ptr [eax + 0x14], ebx
// 0066d0c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d0c8  03fd                 add edi, ebp
// 0066d0ca  69f654620000         imul esi, esi, 0x6254
// 0066d0d0  69d20b300000         imul edx, edx, 0x300b
// 0066d0d6  03742410             add esi, dword ptr [esp + 0x10]
// 0066d0da  03d5                 add edx, ebp
// 0066d0dc  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 0066d0e3  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 0066d0ea  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 0066d0f1  c1ff0b               sar edi, 0xb
// 0066d0f4  c1fe0b               sar esi, 0xb
// 0066d0f7  c1fa0b               sar edx, 0xb
// 0066d0fa  89780c               mov dword ptr [eax + 0xc], edi
// 0066d0fd  897004               mov dword ptr [eax + 4], esi
// 0066d100  8950fc               mov dword ptr [eax - 4], edx
// 0066d103  83c020               add eax, 0x20
// 0066d106  836c241801           sub dword ptr [esp + 0x18], 1
// 0066d10b  0f8995feffff         jns 0x66cfa6
// 0066d111  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0066d115  c744241807000000     mov dword ptr [esp + 0x18], 7
// 0066d11d  83c040               add eax, 0x40
// 0066d120  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 0066d126  8b50c0               mov edx, dword ptr [eax - 0x40]
// 0066d129  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 0066d12f  8d0c32               lea ecx, [edx + esi]
// 0066d132  2bd6                 sub edx, esi
// 0066d134  8b70e0               mov esi, dword ptr [eax - 0x20]
// 0066d137  8d1c3e               lea ebx, [esi + edi]
// 0066d13a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066d13e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 0066d141  2bf7                 sub esi, edi
// 0066d143  8b38                 mov edi, dword ptr [eax]
// 0066d145  8d2c3b               lea ebp, [ebx + edi]
// 0066d148  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066d14c  8b6840               mov ebp, dword ptr [eax + 0x40]
// 0066d14f  2bfb                 sub edi, ebx
// 0066d151  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0066d154  03eb                 add ebp, ebx
// 0066d156  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066d15a  03e9                 add ebp, ecx
// 0066d15c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d160  2b5840               sub ebx, dword ptr [eax + 0x40]
// 0066d163  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066d167  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d16b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0066d16f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066d173  03e9                 add ebp, ecx
// 0066d175  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0066d179  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066d17d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0066d181  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0066d185  8d6c2902             lea ebp, [ecx + ebp + 2]
// 0066d189  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0066d18d  c1fd02               sar ebp, 2
// 0066d190  8968c0               mov dword ptr [eax - 0x40], ebp
// 0066d193  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0066d197  83c102               add ecx, 2
// 0066d19a  c1f902               sar ecx, 2
// 0066d19d  894840               mov dword ptr [eax + 0x40], ecx
// 0066d1a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d1a4  03cd                 add ecx, ebp
// 0066d1a6  69ed7e180000         imul ebp, ebp, 0x187e
// 0066d1ac  69c951110000         imul ecx, ecx, 0x1151
// 0066d1b2  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 0066d1b9  c1fd0f               sar ebp, 0xf
// 0066d1bc  8928                 mov dword ptr [eax], ebp
// 0066d1be  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d1c2  69ed213b0000         imul ebp, ebp, 0x3b21
// 0066d1c8  2bcd                 sub ecx, ebp
// 0066d1ca  81c100400000         add ecx, 0x4000
// 0066d1d0  c1f90f               sar ecx, 0xf
// 0066d1d3  8d2c17               lea ebp, [edi + edx]
// 0066d1d6  896c2424             mov dword ptr [esp + 0x24], ebp
// 0066d1da  898880000000         mov dword ptr [eax + 0x80], ecx
// 0066d1e0  8d0c33               lea ecx, [ebx + esi]
// 0066d1e3  03e9                 add ebp, ecx
// 0066d1e5  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0066d1eb  69eda1250000         imul ebp, ebp, 0x25a1
// 0066d1f1  896c2414             mov dword ptr [esp + 0x14], ebp
// 0066d1f5  8d2c13               lea ebp, [ebx + edx]
// 0066d1f8  69db8e090000         imul ebx, ebx, 0x98e
// 0066d1fe  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0066d204  896c2420             mov dword ptr [esp + 0x20], ebp
// 0066d208  8d2c37               lea ebp, [edi + esi]
// 0066d20b  69ffb3410000         imul edi, edi, 0x41b3
// 0066d211  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0066d217  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0066d21b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0066d21f  2be9                 sub ebp, ecx
// 0066d221  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0066d225  896c2410             mov dword ptr [esp + 0x10], ebp
// 0066d229  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0066d22d  035c2410             add ebx, dword ptr [esp + 0x10]
// 0066d231  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 0066d237  2bcd                 sub ecx, ebp
// 0066d239  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0066d23d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 0066d244  c1fb0f               sar ebx, 0xf
// 0066d247  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0066d24d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066d251  03f9                 add edi, ecx
// 0066d253  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 0066d25a  69f654620000         imul esi, esi, 0x6254
// 0066d260  69d20b300000         imul edx, edx, 0x300b
// 0066d266  03742410             add esi, dword ptr [esp + 0x10]
// 0066d26a  03d1                 add edx, ecx
// 0066d26c  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 0066d273  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 0066d27a  c1ff0f               sar edi, 0xf
// 0066d27d  c1fe0f               sar esi, 0xf
// 0066d280  c1fa0f               sar edx, 0xf
// 0066d283  897860               mov dword ptr [eax + 0x60], edi
// 0066d286  897020               mov dword ptr [eax + 0x20], esi
// 0066d289  8950e0               mov dword ptr [eax - 0x20], edx
// 0066d28c  83c004               add eax, 4
// 0066d28f  836c241801           sub dword ptr [esp + 0x18], 1
// 0066d294  0f8986feffff         jns 0x66d120
// 0066d29a  5f                   pop edi
// 0066d29b  5e                   pop esi
// 0066d29c  5d                   pop ebp
// 0066d29d  5b                   pop ebx
// 0066d29e  83c418               add esp, 0x18
// 0066d2a1  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
