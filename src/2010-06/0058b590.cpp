// from server: 100% by auto
// roc 2010-06 0058b590  unit: seg_00580000  size: 786 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058b590
//
// 0058b590  83ec18               sub esp, 0x18
// 0058b593  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058b597  53                   push ebx
// 0058b598  55                   push ebp
// 0058b599  56                   push esi
// 0058b59a  c744241407000000     mov dword ptr [esp + 0x14], 7
// 0058b5a2  83c008               add eax, 8
// 0058b5a5  57                   push edi
// 0058b5a6  8b7014               mov esi, dword ptr [eax + 0x14]
// 0058b5a9  8b50f8               mov edx, dword ptr [eax - 8]
// 0058b5ac  8b7810               mov edi, dword ptr [eax + 0x10]
// 0058b5af  8d0c32               lea ecx, [edx + esi]
// 0058b5b2  2bd6                 sub edx, esi
// 0058b5b4  8b70fc               mov esi, dword ptr [eax - 4]
// 0058b5b7  8d1c3e               lea ebx, [esi + edi]
// 0058b5ba  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058b5be  8b580c               mov ebx, dword ptr [eax + 0xc]
// 0058b5c1  2bf7                 sub esi, edi
// 0058b5c3  8b38                 mov edi, dword ptr [eax]
// 0058b5c5  8d2c3b               lea ebp, [ebx + edi]
// 0058b5c8  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058b5cc  8b6808               mov ebp, dword ptr [eax + 8]
// 0058b5cf  2bfb                 sub edi, ebx
// 0058b5d1  8b5804               mov ebx, dword ptr [eax + 4]
// 0058b5d4  03eb                 add ebp, ebx
// 0058b5d6  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b5da  03e9                 add ebp, ecx
// 0058b5dc  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b5e0  2b5808               sub ebx, dword ptr [eax + 8]
// 0058b5e3  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058b5e7  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b5eb  894c2424             mov dword ptr [esp + 0x24], ecx
// 0058b5ef  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058b5f3  03e9                 add ebp, ecx
// 0058b5f5  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0058b5f9  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b5fd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058b601  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b605  03e9                 add ebp, ecx
// 0058b607  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b60b  03ed                 add ebp, ebp
// 0058b60d  03ed                 add ebp, ebp
// 0058b60f  8968f8               mov dword ptr [eax - 8], ebp
// 0058b612  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0058b616  03c9                 add ecx, ecx
// 0058b618  03c9                 add ecx, ecx
// 0058b61a  894808               mov dword ptr [eax + 8], ecx
// 0058b61d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058b621  03cd                 add ecx, ebp
// 0058b623  69ed7e180000         imul ebp, ebp, 0x187e
// 0058b629  69c951110000         imul ecx, ecx, 0x1151
// 0058b62f  8dac2900040000       lea ebp, [ecx + ebp + 0x400]
// 0058b636  c1fd0b               sar ebp, 0xb
// 0058b639  8928                 mov dword ptr [eax], ebp
// 0058b63b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b63f  69ed213b0000         imul ebp, ebp, 0x3b21
// 0058b645  2bcd                 sub ecx, ebp
// 0058b647  81c100040000         add ecx, 0x400
// 0058b64d  c1f90b               sar ecx, 0xb
// 0058b650  894810               mov dword ptr [eax + 0x10], ecx
// 0058b653  8d0c33               lea ecx, [ebx + esi]
// 0058b656  8d2c17               lea ebp, [edi + edx]
// 0058b659  896c2424             mov dword ptr [esp + 0x24], ebp
// 0058b65d  03e9                 add ebp, ecx
// 0058b65f  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0058b665  69eda1250000         imul ebp, ebp, 0x25a1
// 0058b66b  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058b66f  8d2c13               lea ebp, [ebx + edx]
// 0058b672  69db8e090000         imul ebx, ebx, 0x98e
// 0058b678  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0058b67e  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058b682  8d2c37               lea ebp, [edi + esi]
// 0058b685  69ffb3410000         imul edi, edi, 0x41b3
// 0058b68b  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0058b691  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0058b695  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b699  2be9                 sub ebp, ecx
// 0058b69b  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058b69f  69c97c0c0000         imul ecx, ecx, 0xc7c
// 0058b6a5  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b6a9  035c2410             add ebx, dword ptr [esp + 0x10]
// 0058b6ad  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b6b1  2be9                 sub ebp, ecx
// 0058b6b3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b6b7  8d9c0b00040000       lea ebx, [ebx + ecx + 0x400]
// 0058b6be  c1fb0b               sar ebx, 0xb
// 0058b6c1  895814               mov dword ptr [eax + 0x14], ebx
// 0058b6c4  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058b6c8  03fd                 add edi, ebp
// 0058b6ca  69f654620000         imul esi, esi, 0x6254
// 0058b6d0  69d20b300000         imul edx, edx, 0x300b
// 0058b6d6  03742410             add esi, dword ptr [esp + 0x10]
// 0058b6da  03d5                 add edx, ebp
// 0058b6dc  8dbc1f00040000       lea edi, [edi + ebx + 0x400]
// 0058b6e3  8db41e00040000       lea esi, [esi + ebx + 0x400]
// 0058b6ea  8d940a00040000       lea edx, [edx + ecx + 0x400]
// 0058b6f1  c1ff0b               sar edi, 0xb
// 0058b6f4  c1fe0b               sar esi, 0xb
// 0058b6f7  c1fa0b               sar edx, 0xb
// 0058b6fa  89780c               mov dword ptr [eax + 0xc], edi
// 0058b6fd  897004               mov dword ptr [eax + 4], esi
// 0058b700  8950fc               mov dword ptr [eax - 4], edx
// 0058b703  83c020               add eax, 0x20
// 0058b706  836c241801           sub dword ptr [esp + 0x18], 1
// 0058b70b  0f8995feffff         jns 0x58b5a6
// 0058b711  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0058b715  c744241807000000     mov dword ptr [esp + 0x18], 7
// 0058b71d  83c040               add eax, 0x40
// 0058b720  8bb0a0000000         mov esi, dword ptr [eax + 0xa0]
// 0058b726  8b50c0               mov edx, dword ptr [eax - 0x40]
// 0058b729  8bb880000000         mov edi, dword ptr [eax + 0x80]
// 0058b72f  8d0c32               lea ecx, [edx + esi]
// 0058b732  2bd6                 sub edx, esi
// 0058b734  8b70e0               mov esi, dword ptr [eax - 0x20]
// 0058b737  8d1c3e               lea ebx, [esi + edi]
// 0058b73a  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058b73e  8b5860               mov ebx, dword ptr [eax + 0x60]
// 0058b741  2bf7                 sub esi, edi
// 0058b743  8b38                 mov edi, dword ptr [eax]
// 0058b745  8d2c3b               lea ebp, [ebx + edi]
// 0058b748  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058b74c  8b6840               mov ebp, dword ptr [eax + 0x40]
// 0058b74f  2bfb                 sub edi, ebx
// 0058b751  8b5820               mov ebx, dword ptr [eax + 0x20]
// 0058b754  03eb                 add ebp, ebx
// 0058b756  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b75a  03e9                 add ebp, ecx
// 0058b75c  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b760  2b5840               sub ebx, dword ptr [eax + 0x40]
// 0058b763  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058b767  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b76b  894c2424             mov dword ptr [esp + 0x24], ecx
// 0058b76f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058b773  03e9                 add ebp, ecx
// 0058b775  2b4c2414             sub ecx, dword ptr [esp + 0x14]
// 0058b779  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b77d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0058b781  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0058b785  8d6c2902             lea ebp, [ecx + ebp + 2]
// 0058b789  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0058b78d  c1fd02               sar ebp, 2
// 0058b790  8968c0               mov dword ptr [eax - 0x40], ebp
// 0058b793  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0058b797  83c102               add ecx, 2
// 0058b79a  c1f902               sar ecx, 2
// 0058b79d  894840               mov dword ptr [eax + 0x40], ecx
// 0058b7a0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058b7a4  03cd                 add ecx, ebp
// 0058b7a6  69ed7e180000         imul ebp, ebp, 0x187e
// 0058b7ac  69c951110000         imul ecx, ecx, 0x1151
// 0058b7b2  8dac2900400000       lea ebp, [ecx + ebp + 0x4000]
// 0058b7b9  c1fd0f               sar ebp, 0xf
// 0058b7bc  8928                 mov dword ptr [eax], ebp
// 0058b7be  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b7c2  69ed213b0000         imul ebp, ebp, 0x3b21
// 0058b7c8  2bcd                 sub ecx, ebp
// 0058b7ca  81c100400000         add ecx, 0x4000
// 0058b7d0  c1f90f               sar ecx, 0xf
// 0058b7d3  8d2c17               lea ebp, [edi + edx]
// 0058b7d6  896c2424             mov dword ptr [esp + 0x24], ebp
// 0058b7da  898880000000         mov dword ptr [eax + 0x80], ecx
// 0058b7e0  8d0c33               lea ecx, [ebx + esi]
// 0058b7e3  03e9                 add ebp, ecx
// 0058b7e5  69c9c53e0000         imul ecx, ecx, 0x3ec5
// 0058b7eb  69eda1250000         imul ebp, ebp, 0x25a1
// 0058b7f1  896c2414             mov dword ptr [esp + 0x14], ebp
// 0058b7f5  8d2c13               lea ebp, [ebx + edx]
// 0058b7f8  69db8e090000         imul ebx, ebx, 0x98e
// 0058b7fe  69ed33e3ffff         imul ebp, ebp, 0xffffe333
// 0058b804  896c2420             mov dword ptr [esp + 0x20], ebp
// 0058b808  8d2c37               lea ebp, [edi + esi]
// 0058b80b  69ffb3410000         imul edi, edi, 0x41b3
// 0058b811  69edfdadffff         imul ebp, ebp, 0xffffadfd
// 0058b817  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0058b81b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0058b81f  2be9                 sub ebp, ecx
// 0058b821  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0058b825  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058b829  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0058b82d  035c2410             add ebx, dword ptr [esp + 0x10]
// 0058b831  69ed7c0c0000         imul ebp, ebp, 0xc7c
// 0058b837  2bcd                 sub ecx, ebp
// 0058b839  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0058b83d  8d9c2b00400000       lea ebx, [ebx + ebp + 0x4000]
// 0058b844  c1fb0f               sar ebx, 0xf
// 0058b847  8998a0000000         mov dword ptr [eax + 0xa0], ebx
// 0058b84d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058b851  03f9                 add edi, ecx
// 0058b853  8dbc1f00400000       lea edi, [edi + ebx + 0x4000]
// 0058b85a  69f654620000         imul esi, esi, 0x6254
// 0058b860  69d20b300000         imul edx, edx, 0x300b
// 0058b866  03742410             add esi, dword ptr [esp + 0x10]
// 0058b86a  03d1                 add edx, ecx
// 0058b86c  8db41e00400000       lea esi, [esi + ebx + 0x4000]
// 0058b873  8d942a00400000       lea edx, [edx + ebp + 0x4000]
// 0058b87a  c1ff0f               sar edi, 0xf
// 0058b87d  c1fe0f               sar esi, 0xf
// 0058b880  c1fa0f               sar edx, 0xf
// 0058b883  897860               mov dword ptr [eax + 0x60], edi
// 0058b886  897020               mov dword ptr [eax + 0x20], esi
// 0058b889  8950e0               mov dword ptr [eax - 0x20], edx
// 0058b88c  83c004               add eax, 4
// 0058b88f  836c241801           sub dword ptr [esp + 0x18], 1
// 0058b894  0f8986feffff         jns 0x58b720
// 0058b89a  5f                   pop edi
// 0058b89b  5e                   pop esi
// 0058b89c  5d                   pop ebp
// 0058b89d  5b                   pop ebx
// 0058b89e  83c418               add esp, 0x18
// 0058b8a1  c3                   ret 
// library jpeg-6b/jfdctint.c (function _jpeg_fdct_islow)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jfdctint.c
