// from server: 100% by auto
// roc 2011-06 00581880  unit: seg_00580000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00581880
//
// 00581880  83ec18               sub esp, 0x18
// 00581883  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00581887  53                   push ebx
// 00581888  55                   push ebp
// 00581889  56                   push esi
// 0058188a  c744241407000000     mov dword ptr [esp + 0x14], 7
// 00581892  83c008               add eax, 8
// 00581895  57                   push edi
// 00581896  8b7014               mov esi, dword ptr [eax + 0x14]
// 00581899  8b50f8               mov edx, dword ptr [eax - 8]
// 0058189c  8b7810               mov edi, dword ptr [eax + 0x10]
// 0058189f  8d0c32               lea ecx, [edx + esi]
// 005818a2  2bd6                 sub edx, esi
// 005818a4  8b70fc               mov esi, dword ptr [eax - 4]
// 005818a7  8d1c3e               lea ebx, [esi + edi]
// 005818aa  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005818ae  8b580c               mov ebx, dword ptr [eax + 0xc]
// 005818b1  2bf7                 sub esi, edi
// 005818b3  8b38                 mov edi, dword ptr [eax]
// 005818b5  8d2c3b               lea ebp, [ebx + edi]
// 005818b8  896c2414             mov dword ptr [esp + 0x14], ebp
// 005818bc  8b6808               mov ebp, dword ptr [eax + 8]
// 005818bf  2bfb                 sub edi, ebx
// 005818c1  8b5804               mov ebx, dword ptr [eax + 4]
// 005818c4  03eb                 add ebp, ebx
// 005818c6  896c2410             mov dword ptr [esp + 0x10], ebp
// 005818ca  03e9                 add ebp, ecx
// 005818cc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005818d0  2b5808               sub ebx, dword ptr [eax + 8]
// 005818d3  896c2420             mov dword ptr [esp + 0x20], ebp
// 005818d7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005818db  894c2424             mov dword ptr [esp + 0x24], ecx
// 005818df  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005818e3  03e9                 add ebp, ecx
// 005818e5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 005818e9  896c2410             mov dword ptr [esp + 0x10], ebp
// 005818ed  894c2414             mov dword ptr [esp + 0x14], ecx
// 005818f1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005818f5  03e9                 add ebp, ecx
// 005818f7  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 005818fb  03ed                 add ebp, ebp
// 005818fd  03ed                 add ebp, ebp
// 005818ff  8968f8               mov dword ptr [eax - 8], ebp
// 00581902  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00581906  03c9                 add ecx, ecx
// 00581908  03c9                 add ecx, ecx
// 0058190a  894808               mov dword ptr [eax + 8], ecx
// 0058190d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581911  03cd                 add ecx, ebp
// 00581913  69ed7e180000         imul ebp, ebp, 0x187e
// 00581919  69c951110000         imul ecx, ecx, 0x1151
// 0058191f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 00581926  c1fd0b               sar ebp, 0xb
// 00581929  8928                 mov dword ptr [eax], ebp
// 0058192b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058192f  69ed213b0000         imul ebp, ebp, 0x3b21
// 00581935  2bcd                 sub ecx, ebp
// 00581937  81c100040000         add ecx, 0x400
// 0058193d  c1f90b               sar ecx, 0xb
// 00581940  894810               mov dword ptr [eax + 0x10], ecx
// 00581943  8d0c33               lea ecx, [ebx + esi]
// 00581946  8d2c17               lea ebp, [edi + edx]
// 00581949  896c2424             mov dword ptr [esp + 0x24], ebp
// 0058194d  03e9                 add ebp, ecx
// 0058194f  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 00581955  69eda1250000         imul ebp, ebp, 0x25a1
// 0058195b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058195f  8d2c13               lea ebp, [ebx + edx]
// 00581962  69db8e090000         imul ebx, ebx, 0x98e
// 00581968  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0058196e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00581972  8d2c37               lea ebp, [edi + esi]
// 00581975  69ffb3410000         imul edi, edi, 0x41b3
// 0058197b  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 00581981  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00581985  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00581989  2be9                 sub ebp, ecx
// 0058198b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058198f  69c97c0c0000         imul ecx, ecx, 0xc7c
// 00581995  896c2410             mov dword ptr [esp + 0x10], ebp
// 00581999  035c2410             add ebx, dword ptr [esp + 0x10]
// 0058199d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005819a1  2be9                 sub ebp, ecx
// 005819a3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005819a7  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 005819ae  c1fb0b               sar ebx, 0xb
// 005819b1  895814               mov dword ptr [eax + 0x14], ebx
// 005819b4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005819b8  03fd                 add edi, ebp
// 005819ba  69f654620000         imul esi, esi, 0x6254
// 005819c0  69d20b300000         imul edx, edx, 0x300b
// 005819c6  03742410             add esi, dword ptr [esp + 0x10]
// 005819ca  03d5                 add edx, ebp
// 005819cc  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 005819d3  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 005819da  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 005819e1  c1ff0b               sar edi, 0xb
// 005819e4  c1fe0b               sar esi, 0xb
// 005819e7  c1fa0b               sar edx, 0xb
// 005819ea  89780c               mov dword ptr [eax + 0xc], edi
// 005819ed  897004               mov dword ptr [eax + 4], esi
// 005819f0  8950fc               mov dword ptr [eax - 4], edx
// 005819f3  83c020               add eax, 0x20
// 005819f6  836c241801           sub dword ptr [esp + 0x18], 1
// 005819fb  0f8995feffff         jns 0x581896
// 00581a01  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00581a05  c744241807000000     mov dword ptr [esp + 0x18], 7
// 00581a0d  83c040               add eax, 0x40
// 00581a10  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 00581a16  8b50c0               mov edx, dword ptr [eax - 0x40]
// 00581a19  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 00581a1f  8d0c32               lea ecx, [edx + esi]
// 00581a22  2bd6                 sub edx, esi
// 00581a24  8b70e0               mov esi, dword ptr [eax - 0x20]
// 00581a27  8d1c3e               lea ebx, [esi + edi]
// 00581a2a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00581a2e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 00581a31  2bf7                 sub esi, edi
// 00581a33  8b38                 mov edi, dword ptr [eax]
// 00581a35  8d2c3b               lea ebp, [ebx + edi]
// 00581a38  896c2414             mov dword ptr [esp + 0x14], ebp
// 00581a3c  8b6840               mov ebp, dword ptr [eax + 0x40]
// 00581a3f  2bfb                 sub edi, ebx
// 00581a41  8b5820               mov ebx, dword ptr [eax + 0x20]
// 00581a44  03eb                 add ebp, ebx
// 00581a46  896c2410             mov dword ptr [esp + 0x10], ebp
// 00581a4a  03e9                 add ebp, ecx
// 00581a4c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581a50  2b5840               sub ebx, dword ptr [eax + 0x40]
// 00581a53  896c2420             mov dword ptr [esp + 0x20], ebp
// 00581a57  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00581a5b  894c2424             mov dword ptr [esp + 0x24], ecx
// 00581a5f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00581a63  03e9                 add ebp, ecx
// 00581a65  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 00581a69  896c2410             mov dword ptr [esp + 0x10], ebp
// 00581a6d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00581a71  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00581a75  8d6c2902             lea ebp, [ecx + ebp + 2]
// 00581a79  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00581a7d  c1fd02               sar ebp, 2
// 00581a80  8968c0               mov dword ptr [eax - 0x40], ebp
// 00581a83  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00581a87  83c102               add ecx, 2
// 00581a8a  c1f902               sar ecx, 2
// 00581a8d  894840               mov dword ptr [eax + 0x40], ecx
// 00581a90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581a94  03cd                 add ecx, ebp
// 00581a96  69ed7e180000         imul ebp, ebp, 0x187e
// 00581a9c  69c951110000         imul ecx, ecx, 0x1151
// 00581aa2  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 00581aa9  c1fd0f               sar ebp, 0xf
// 00581aac  8928                 mov dword ptr [eax], ebp
// 00581aae  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00581ab2  69ed213b0000         imul ebp, ebp, 0x3b21
// 00581ab8  2bcd                 sub ecx, ebp
// 00581aba  81c100400000         add ecx, 0x4000
// 00581ac0  c1f90f               sar ecx, 0xf
// 00581ac3  8d2c17               lea ebp, [edi + edx]
// 00581ac6  896c2424             mov dword ptr [esp + 0x24], ebp
// 00581aca  898880000000         mov dword ptr [eax + 0x80], ecx
// 00581ad0  8d0c33               lea ecx, [ebx + esi]
// 00581ad3  03e9                 add ebp, ecx
// 00581ad5  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 00581adb  69eda1250000         imul ebp, ebp, 0x25a1
// 00581ae1  896c2414             mov dword ptr [esp + 0x14], ebp
// 00581ae5  8d2c13               lea ebp, [ebx + edx]
// 00581ae8  69db8e090000         imul ebx, ebx, 0x98e
// 00581aee  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 00581af4  896c2420             mov dword ptr [esp + 0x20], ebp
// 00581af8  8d2c37               lea ebp, [edi + esi]
// 00581afb  69ffb3410000         imul edi, edi, 0x41b3
// 00581b01  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 00581b07  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00581b0b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00581b0f  2be9                 sub ebp, ecx
// 00581b11  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00581b15  896c2410             mov dword ptr [esp + 0x10], ebp
// 00581b19  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00581b1d  035c2410             add ebx, dword ptr [esp + 0x10]
// 00581b21  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 00581b27  2bcd                 sub ecx, ebp
// 00581b29  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00581b2d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 00581b34  c1fb0f               sar ebx, 0xf
// 00581b37  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 00581b3d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581b41  03f9                 add edi, ecx
// 00581b43  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 00581b4a  69f654620000         imul esi, esi, 0x6254
// 00581b50  69d20b300000         imul edx, edx, 0x300b
// 00581b56  03742410             add esi, dword ptr [esp + 0x10]
// 00581b5a  03d1                 add edx, ecx
// 00581b5c  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 00581b63  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 00581b6a  c1ff0f               sar edi, 0xf
// 00581b6d  c1fe0f               sar esi, 0xf
// 00581b70  c1fa0f               sar edx, 0xf
// 00581b73  897860               mov dword ptr [eax + 0x60], edi
// 00581b76  897020               mov dword ptr [eax + 0x20], esi
// 00581b79  8950e0               mov dword ptr [eax - 0x20], edx
// 00581b7c  83c004               add eax, 4
// 00581b7f  836c241801           sub dword ptr [esp + 0x18], 1
// 00581b84  0f8986feffff         jns 0x581a10
// 00581b8a  5f                   pop edi
// 00581b8b  5e                   pop esi
// 00581b8c  5d                   pop ebp
// 00581b8d  5b                   pop ebx
// 00581b8e  83c418               add esp, 0x18
// 00581b91  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
