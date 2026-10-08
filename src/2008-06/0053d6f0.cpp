// from server: 100% by auto
// roc 2008-06 0053d6f0  unit: seg_00530000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053d6f0
//
// 0053d6f0  83ec18               sub esp, 0x18
// 0053d6f3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053d6f7  53                   push ebx
// 0053d6f8  55                   push ebp
// 0053d6f9  56                   push esi
// 0053d6fa  c744241407000000     mov dword ptr [esp + 0x14], 7
// 0053d702  83c008               add eax, 8
// 0053d705  57                   push edi
// 0053d706  8b7014               mov esi, dword ptr [eax + 0x14]
// 0053d709  8b50f8               mov edx, dword ptr [eax - 8]
// 0053d70c  8b7810               mov edi, dword ptr [eax + 0x10]
// 0053d70f  8d0c32               lea ecx, [edx + esi]
// 0053d712  2bd6                 sub edx, esi
// 0053d714  8b70fc               mov esi, dword ptr [eax - 4]
// 0053d717  8d1c3e               lea ebx, [esi + edi]
// 0053d71a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053d71e  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0053d721  2bf7                 sub esi, edi
// 0053d723  8b38                 mov edi, dword ptr [eax]
// 0053d725  8d2c3b               lea ebp, [ebx + edi]
// 0053d728  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053d72c  8b6808               mov ebp, dword ptr [eax + 8]
// 0053d72f  2bfb                 sub edi, ebx
// 0053d731  8b5804               mov ebx, dword ptr [eax + 4]
// 0053d734  03eb                 add ebp, ebx
// 0053d736  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d73a  03e9                 add ebp, ecx
// 0053d73c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053d740  2b5808               sub ebx, dword ptr [eax + 8]
// 0053d743  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053d747  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d74b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0053d74f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053d753  03e9                 add ebp, ecx
// 0053d755  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0053d759  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d75d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053d761  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053d765  03e9                 add ebp, ecx
// 0053d767  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053d76b  03ed                 add ebp, ebp
// 0053d76d  03ed                 add ebp, ebp
// 0053d76f  8968f8               mov dword ptr [eax - 8], ebp
// 0053d772  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0053d776  03c9                 add ecx, ecx
// 0053d778  03c9                 add ecx, ecx
// 0053d77a  894808               mov dword ptr [eax + 8], ecx
// 0053d77d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d781  03cd                 add ecx, ebp
// 0053d783  69ed7e180000         imul ebp, ebp, 0x187e
// 0053d789  69c951110000         imul ecx, ecx, 0x1151
// 0053d78f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 0053d796  c1fd0b               sar ebp, 0xb
// 0053d799  8928                 mov dword ptr [eax], ebp
// 0053d79b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d79f  69ed213b0000         imul ebp, ebp, 0x3b21
// 0053d7a5  2bcd                 sub ecx, ebp
// 0053d7a7  81c100040000         add ecx, 0x400
// 0053d7ad  c1f90b               sar ecx, 0xb
// 0053d7b0  894810               mov dword ptr [eax + 0x10], ecx
// 0053d7b3  8d0c33               lea ecx, [ebx + esi]
// 0053d7b6  8d2c17               lea ebp, [edi + edx]
// 0053d7b9  896c2424             mov dword ptr [esp + 0x24], ebp
// 0053d7bd  03e9                 add ebp, ecx
// 0053d7bf  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0053d7c5  69eda1250000         imul ebp, ebp, 0x25a1
// 0053d7cb  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053d7cf  8d2c13               lea ebp, [ebx + edx]
// 0053d7d2  69db8e090000         imul ebx, ebx, 0x98e
// 0053d7d8  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0053d7de  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053d7e2  8d2c37               lea ebp, [edi + esi]
// 0053d7e5  69ffb3410000         imul edi, edi, 0x41b3
// 0053d7eb  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0053d7f1  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0053d7f5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d7f9  2be9                 sub ebp, ecx
// 0053d7fb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0053d7ff  69c97c0c0000         imul ecx, ecx, 0xc7c
// 0053d805  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d809  035c2410             add ebx, dword ptr [esp + 0x10]
// 0053d80d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d811  2be9                 sub ebp, ecx
// 0053d813  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053d817  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 0053d81e  c1fb0b               sar ebx, 0xb
// 0053d821  895814               mov dword ptr [eax + 0x14], ebx
// 0053d824  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053d828  03fd                 add edi, ebp
// 0053d82a  69f654620000         imul esi, esi, 0x6254
// 0053d830  69d20b300000         imul edx, edx, 0x300b
// 0053d836  03742410             add esi, dword ptr [esp + 0x10]
// 0053d83a  03d5                 add edx, ebp
// 0053d83c  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 0053d843  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 0053d84a  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 0053d851  c1ff0b               sar edi, 0xb
// 0053d854  c1fe0b               sar esi, 0xb
// 0053d857  c1fa0b               sar edx, 0xb
// 0053d85a  89780c               mov dword ptr [eax + 0xc], edi
// 0053d85d  897004               mov dword ptr [eax + 4], esi
// 0053d860  8950fc               mov dword ptr [eax - 4], edx
// 0053d863  83c020               add eax, 0x20
// 0053d866  836c241801           sub dword ptr [esp + 0x18], 1
// 0053d86b  0f8995feffff         jns 0x53d706
// 0053d871  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053d875  c744241807000000     mov dword ptr [esp + 0x18], 7
// 0053d87d  83c040               add eax, 0x40
// 0053d880  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 0053d886  8b50c0               mov edx, dword ptr [eax - 0x40]
// 0053d889  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 0053d88f  8d0c32               lea ecx, [edx + esi]
// 0053d892  2bd6                 sub edx, esi
// 0053d894  8b70e0               mov esi, dword ptr [eax - 0x20]
// 0053d897  8d1c3e               lea ebx, [esi + edi]
// 0053d89a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053d89e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 0053d8a1  2bf7                 sub esi, edi
// 0053d8a3  8b38                 mov edi, dword ptr [eax]
// 0053d8a5  8d2c3b               lea ebp, [ebx + edi]
// 0053d8a8  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053d8ac  8b6840               mov ebp, dword ptr [eax + 0x40]
// 0053d8af  2bfb                 sub edi, ebx
// 0053d8b1  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0053d8b4  03eb                 add ebp, ebx
// 0053d8b6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d8ba  03e9                 add ebp, ecx
// 0053d8bc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053d8c0  2b5840               sub ebx, dword ptr [eax + 0x40]
// 0053d8c3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053d8c7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d8cb  894c2424             mov dword ptr [esp + 0x24], ecx
// 0053d8cf  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0053d8d3  03e9                 add ebp, ecx
// 0053d8d5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0053d8d9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d8dd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0053d8e1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053d8e5  8d6c2902             lea ebp, [ecx + ebp + 2]
// 0053d8e9  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0053d8ed  c1fd02               sar ebp, 2
// 0053d8f0  8968c0               mov dword ptr [eax - 0x40], ebp
// 0053d8f3  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0053d8f7  83c102               add ecx, 2
// 0053d8fa  c1f902               sar ecx, 2
// 0053d8fd  894840               mov dword ptr [eax + 0x40], ecx
// 0053d900  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d904  03cd                 add ecx, ebp
// 0053d906  69ed7e180000         imul ebp, ebp, 0x187e
// 0053d90c  69c951110000         imul ecx, ecx, 0x1151
// 0053d912  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 0053d919  c1fd0f               sar ebp, 0xf
// 0053d91c  8928                 mov dword ptr [eax], ebp
// 0053d91e  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d922  69ed213b0000         imul ebp, ebp, 0x3b21
// 0053d928  2bcd                 sub ecx, ebp
// 0053d92a  81c100400000         add ecx, 0x4000
// 0053d930  c1f90f               sar ecx, 0xf
// 0053d933  8d2c17               lea ebp, [edi + edx]
// 0053d936  896c2424             mov dword ptr [esp + 0x24], ebp
// 0053d93a  898880000000         mov dword ptr [eax + 0x80], ecx
// 0053d940  8d0c33               lea ecx, [ebx + esi]
// 0053d943  03e9                 add ebp, ecx
// 0053d945  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0053d94b  69eda1250000         imul ebp, ebp, 0x25a1
// 0053d951  896c2414             mov dword ptr [esp + 0x14], ebp
// 0053d955  8d2c13               lea ebp, [ebx + edx]
// 0053d958  69db8e090000         imul ebx, ebx, 0x98e
// 0053d95e  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0053d964  896c2420             mov dword ptr [esp + 0x20], ebp
// 0053d968  8d2c37               lea ebp, [edi + esi]
// 0053d96b  69ffb3410000         imul edi, edi, 0x41b3
// 0053d971  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0053d977  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0053d97b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0053d97f  2be9                 sub ebp, ecx
// 0053d981  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0053d985  896c2410             mov dword ptr [esp + 0x10], ebp
// 0053d989  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0053d98d  035c2410             add ebx, dword ptr [esp + 0x10]
// 0053d991  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 0053d997  2bcd                 sub ecx, ebp
// 0053d999  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0053d99d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 0053d9a4  c1fb0f               sar ebx, 0xf
// 0053d9a7  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0053d9ad  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053d9b1  03f9                 add edi, ecx
// 0053d9b3  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 0053d9ba  69f654620000         imul esi, esi, 0x6254
// 0053d9c0  69d20b300000         imul edx, edx, 0x300b
// 0053d9c6  03742410             add esi, dword ptr [esp + 0x10]
// 0053d9ca  03d1                 add edx, ecx
// 0053d9cc  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 0053d9d3  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 0053d9da  c1ff0f               sar edi, 0xf
// 0053d9dd  c1fe0f               sar esi, 0xf
// 0053d9e0  c1fa0f               sar edx, 0xf
// 0053d9e3  897860               mov dword ptr [eax + 0x60], edi
// 0053d9e6  897020               mov dword ptr [eax + 0x20], esi
// 0053d9e9  8950e0               mov dword ptr [eax - 0x20], edx
// 0053d9ec  83c004               add eax, 4
// 0053d9ef  836c241801           sub dword ptr [esp + 0x18], 1
// 0053d9f4  0f8986feffff         jns 0x53d880
// 0053d9fa  5f                   pop edi
// 0053d9fb  5e                   pop esi
// 0053d9fc  5d                   pop ebp
// 0053d9fd  5b                   pop ebx
// 0053d9fe  83c418               add esp, 0x18
// 0053da01  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
