// roc 2007-03 0052c8e0  unit: seg_00520000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052c8e0
//
// 0052c8e0  83ec18               sub esp, 0x18
// 0052c8e3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052c8e7  53                   push ebx
// 0052c8e8  55                   push ebp
// 0052c8e9  56                   push esi
// 0052c8ea  c744241407000000     mov dword ptr [esp + 0x14], 7
// 0052c8f2  83c008               add eax, 8
// 0052c8f5  57                   push edi
// 0052c8f6  8b7014               mov esi, dword ptr [eax + 0x14]
// 0052c8f9  8b50f8               mov edx, dword ptr [eax - 8]
// 0052c8fc  8b7810               mov edi, dword ptr [eax + 0x10]
// 0052c8ff  8d0c32               lea ecx, [edx + esi]
// 0052c902  2bd6                 sub edx, esi
// 0052c904  8b70fc               mov esi, dword ptr [eax - 4]
// 0052c907  8d1c3e               lea ebx, [esi + edi]
// 0052c90a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052c90e  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0052c911  2bf7                 sub esi, edi
// 0052c913  8b38                 mov edi, dword ptr [eax]
// 0052c915  8d2c3b               lea ebp, [ebx + edi]
// 0052c918  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052c91c  8b6808               mov ebp, dword ptr [eax + 8]
// 0052c91f  2bfb                 sub edi, ebx
// 0052c921  8b5804               mov ebx, dword ptr [eax + 4]
// 0052c924  03eb                 add ebp, ebx
// 0052c926  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052c92a  03e9                 add ebp, ecx
// 0052c92c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052c930  2b5808               sub ebx, dword ptr [eax + 8]
// 0052c933  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052c937  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052c93b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052c93f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052c943  03e9                 add ebp, ecx
// 0052c945  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0052c949  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052c94d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052c951  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052c955  03e9                 add ebp, ecx
// 0052c957  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052c95b  03ed                 add ebp, ebp
// 0052c95d  03ed                 add ebp, ebp
// 0052c95f  8968f8               mov dword ptr [eax - 8], ebp
// 0052c962  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0052c966  03c9                 add ecx, ecx
// 0052c968  03c9                 add ecx, ecx
// 0052c96a  894808               mov dword ptr [eax + 8], ecx
// 0052c96d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052c971  03cd                 add ecx, ebp
// 0052c973  69ed7e180000         imul ebp, ebp, 0x187e
// 0052c979  69c951110000         imul ecx, ecx, 0x1151
// 0052c97f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 0052c986  c1fd0b               sar ebp, 0xb
// 0052c989  8928                 mov dword ptr [eax], ebp
// 0052c98b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052c98f  69ed213b0000         imul ebp, ebp, 0x3b21
// 0052c995  2bcd                 sub ecx, ebp
// 0052c997  81c100040000         add ecx, 0x400
// 0052c99d  c1f90b               sar ecx, 0xb
// 0052c9a0  894810               mov dword ptr [eax + 0x10], ecx
// 0052c9a3  8d0c33               lea ecx, [ebx + esi]
// 0052c9a6  8d2c17               lea ebp, [edi + edx]
// 0052c9a9  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052c9ad  03e9                 add ebp, ecx
// 0052c9af  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0052c9b5  69eda1250000         imul ebp, ebp, 0x25a1
// 0052c9bb  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052c9bf  8d2c13               lea ebp, [ebx + edx]
// 0052c9c2  69db8e090000         imul ebx, ebx, 0x98e
// 0052c9c8  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0052c9ce  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052c9d2  8d2c37               lea ebp, [edi + esi]
// 0052c9d5  69ffb3410000         imul edi, edi, 0x41b3
// 0052c9db  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0052c9e1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0052c9e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052c9e9  2be9                 sub ebp, ecx
// 0052c9eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0052c9ef  69c97c0c0000         imul ecx, ecx, 0xc7c
// 0052c9f5  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052c9f9  035c2410             add ebx, dword ptr [esp + 0x10]
// 0052c9fd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052ca01  2be9                 sub ebp, ecx
// 0052ca03  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052ca07  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 0052ca0e  c1fb0b               sar ebx, 0xb
// 0052ca11  895814               mov dword ptr [eax + 0x14], ebx
// 0052ca14  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052ca18  03fd                 add edi, ebp
// 0052ca1a  69f654620000         imul esi, esi, 0x6254
// 0052ca20  69d20b300000         imul edx, edx, 0x300b
// 0052ca26  03742410             add esi, dword ptr [esp + 0x10]
// 0052ca2a  03d5                 add edx, ebp
// 0052ca2c  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 0052ca33  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 0052ca3a  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 0052ca41  c1ff0b               sar edi, 0xb
// 0052ca44  c1fe0b               sar esi, 0xb
// 0052ca47  c1fa0b               sar edx, 0xb
// 0052ca4a  89780c               mov dword ptr [eax + 0xc], edi
// 0052ca4d  897004               mov dword ptr [eax + 4], esi
// 0052ca50  8950fc               mov dword ptr [eax - 4], edx
// 0052ca53  83c020               add eax, 0x20
// 0052ca56  836c241801           sub dword ptr [esp + 0x18], 1
// 0052ca5b  0f8995feffff         jns 0x52c8f6
// 0052ca61  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0052ca65  c744241807000000     mov dword ptr [esp + 0x18], 7
// 0052ca6d  83c040               add eax, 0x40
// 0052ca70  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 0052ca76  8b50c0               mov edx, dword ptr [eax - 0x40]
// 0052ca79  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 0052ca7f  8d0c32               lea ecx, [edx + esi]
// 0052ca82  2bd6                 sub edx, esi
// 0052ca84  8b70e0               mov esi, dword ptr [eax - 0x20]
// 0052ca87  8d1c3e               lea ebx, [esi + edi]
// 0052ca8a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052ca8e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 0052ca91  2bf7                 sub esi, edi
// 0052ca93  8b38                 mov edi, dword ptr [eax]
// 0052ca95  8d2c3b               lea ebp, [ebx + edi]
// 0052ca98  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052ca9c  8b6840               mov ebp, dword ptr [eax + 0x40]
// 0052ca9f  2bfb                 sub edi, ebx
// 0052caa1  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0052caa4  03eb                 add ebp, ebx
// 0052caa6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052caaa  03e9                 add ebp, ecx
// 0052caac  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052cab0  2b5840               sub ebx, dword ptr [eax + 0x40]
// 0052cab3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052cab7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052cabb  894c2424             mov dword ptr [esp + 0x24], ecx
// 0052cabf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052cac3  03e9                 add ebp, ecx
// 0052cac5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0052cac9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052cacd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052cad1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0052cad5  8d6c2902             lea ebp, [ecx + ebp + 2]
// 0052cad9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0052cadd  c1fd02               sar ebp, 2
// 0052cae0  8968c0               mov dword ptr [eax - 0x40], ebp
// 0052cae3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0052cae7  83c102               add ecx, 2
// 0052caea  c1f902               sar ecx, 2
// 0052caed  894840               mov dword ptr [eax + 0x40], ecx
// 0052caf0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052caf4  03cd                 add ecx, ebp
// 0052caf6  69ed7e180000         imul ebp, ebp, 0x187e
// 0052cafc  69c951110000         imul ecx, ecx, 0x1151
// 0052cb02  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 0052cb09  c1fd0f               sar ebp, 0xf
// 0052cb0c  8928                 mov dword ptr [eax], ebp
// 0052cb0e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052cb12  69ed213b0000         imul ebp, ebp, 0x3b21
// 0052cb18  2bcd                 sub ecx, ebp
// 0052cb1a  81c100400000         add ecx, 0x4000
// 0052cb20  c1f90f               sar ecx, 0xf
// 0052cb23  8d2c17               lea ebp, [edi + edx]
// 0052cb26  896c2424             mov dword ptr [esp + 0x24], ebp
// 0052cb2a  898880000000         mov dword ptr [eax + 0x80], ecx
// 0052cb30  8d0c33               lea ecx, [ebx + esi]
// 0052cb33  03e9                 add ebp, ecx
// 0052cb35  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0052cb3b  69eda1250000         imul ebp, ebp, 0x25a1
// 0052cb41  896c2414             mov dword ptr [esp + 0x14], ebp
// 0052cb45  8d2c13               lea ebp, [ebx + edx]
// 0052cb48  69db8e090000         imul ebx, ebx, 0x98e
// 0052cb4e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0052cb54  896c2420             mov dword ptr [esp + 0x20], ebp
// 0052cb58  8d2c37               lea ebp, [edi + esi]
// 0052cb5b  69ffb3410000         imul edi, edi, 0x41b3
// 0052cb61  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0052cb67  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0052cb6b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0052cb6f  2be9                 sub ebp, ecx
// 0052cb71  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0052cb75  896c2410             mov dword ptr [esp + 0x10], ebp
// 0052cb79  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0052cb7d  035c2410             add ebx, dword ptr [esp + 0x10]
// 0052cb81  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 0052cb87  2bcd                 sub ecx, ebp
// 0052cb89  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0052cb8d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 0052cb94  c1fb0f               sar ebx, 0xf
// 0052cb97  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0052cb9d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052cba1  03f9                 add edi, ecx
// 0052cba3  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 0052cbaa  69f654620000         imul esi, esi, 0x6254
// 0052cbb0  69d20b300000         imul edx, edx, 0x300b
// 0052cbb6  03742410             add esi, dword ptr [esp + 0x10]
// 0052cbba  03d1                 add edx, ecx
// 0052cbbc  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 0052cbc3  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 0052cbca  c1ff0f               sar edi, 0xf
// 0052cbcd  c1fe0f               sar esi, 0xf
// 0052cbd0  c1fa0f               sar edx, 0xf
// 0052cbd3  897860               mov dword ptr [eax + 0x60], edi
// 0052cbd6  897020               mov dword ptr [eax + 0x20], esi
// 0052cbd9  8950e0               mov dword ptr [eax - 0x20], edx
// 0052cbdc  83c004               add eax, 4
// 0052cbdf  836c241801           sub dword ptr [esp + 0x18], 1
// 0052cbe4  0f8986feffff         jns 0x52ca70
// 0052cbea  5f                   pop edi
// 0052cbeb  5e                   pop esi
// 0052cbec  5d                   pop ebp
// 0052cbed  5b                   pop ebx
// 0052cbee  83c418               add esp, 0x18
// 0052cbf1  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
