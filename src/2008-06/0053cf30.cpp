// from server: 100% by auto
// roc 2008-06 0053cf30  unit: seg_00530000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053cf30
//
// 0053cf30  81ec98000000         sub esp, 0x98
// 0053cf36  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0053cf3d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0053cf44  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0053cf47  53                   push ebx
// 0053cf48  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0053cf4e  55                   push ebp
// 0053cf4f  56                   push esi
// 0053cf50  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0053cf57  83eb80               sub ebx, -0x80
// 0053cf5a  8bc2                 mov eax, edx
// 0053cf5c  83c660               add esi, 0x60
// 0053cf5f  2bc2                 sub eax, edx
// 0053cf61  57                   push edi
// 0053cf62  bf08000000           mov edi, 8
// 0053cf67  8d440448             lea eax, [esp + eax + 0x48]
// 0053cf6b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0053cf6f  897c2418             mov dword ptr [esp + 0x18], edi
// 0053cf73  89442420             mov dword ptr [esp + 0x20], eax
// 0053cf77  83ff04               cmp edi, 4
// 0053cf7a  0f843a010000         je 0x53d0ba
// 0053cf80  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 0053cf84  6685c9               test cx, cx
// 0053cf87  7538                 jne 0x53cfc1
// 0053cf89  66394ec0             cmp word ptr [esi - 0x40], cx
// 0053cf8d  7532                 jne 0x53cfc1
// 0053cf8f  66394ed0             cmp word ptr [esi - 0x30], cx
// 0053cf93  752c                 jne 0x53cfc1
// 0053cf95  66394ef0             cmp word ptr [esi - 0x10], cx
// 0053cf99  7526                 jne 0x53cfc1
// 0053cf9b  66390e               cmp word ptr [esi], cx
// 0053cf9e  7521                 jne 0x53cfc1
// 0053cfa0  66394e10             cmp word ptr [esi + 0x10], cx
// 0053cfa4  751b                 jne 0x53cfc1
// 0053cfa6  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0053cfaa  0faf0a               imul ecx, dword ptr [edx]
// 0053cfad  03c9                 add ecx, ecx
// 0053cfaf  03c9                 add ecx, ecx
// 0053cfb1  8948e0               mov dword ptr [eax - 0x20], ecx
// 0053cfb4  8908                 mov dword ptr [eax], ecx
// 0053cfb6  894820               mov dword ptr [eax + 0x20], ecx
// 0053cfb9  894840               mov dword ptr [eax + 0x40], ecx
// 0053cfbc  e9f9000000           jmp 0x53d0ba
// 0053cfc1  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 0053cfc5  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 0053cfc9  0fbf3e               movsx edi, word ptr [esi]
// 0053cfcc  69c9213b0000         imul ecx, ecx, 0x3b21
// 0053cfd2  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 0053cfd9  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0053cfdd  69ff7e180000         imul edi, edi, 0x187e
// 0053cfe3  0faf02               imul eax, dword ptr [edx]
// 0053cfe6  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0053cfea  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0053cfee  2bcf                 sub ecx, edi
// 0053cff0  c1e00e               shl eax, 0xe
// 0053cff3  8d3c01               lea edi, [ecx + eax]
// 0053cff6  2bc1                 sub eax, ecx
// 0053cff8  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0053cffc  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 0053d003  8be8                 mov ebp, eax
// 0053d005  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 0053d009  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 0053d010  89442414             mov dword ptr [esp + 0x14], eax
// 0053d014  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 0053d018  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053d01c  69db87450000         imul ebx, ebx, 0x4587
// 0053d022  98                   cwde 
// 0053d023  0faf4220             imul eax, dword ptr [edx + 0x20]
// 0053d027  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053d02b  69c9752e0000         imul ecx, ecx, 0x2e75
// 0053d031  2bcb                 sub ecx, ebx
// 0053d033  8bd8                 mov ebx, eax
// 0053d035  69c003520000         imul eax, eax, 0x5203
// 0053d03b  69dbf9210000         imul ebx, ebx, 0x21f9
// 0053d041  03cb                 add ecx, ebx
// 0053d043  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053d047  69dbc2060000         imul ebx, ebx, 0x6c2
// 0053d04d  2bcb                 sub ecx, ebx
// 0053d04f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053d053  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0053d059  03c3                 add eax, ebx
// 0053d05b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053d05f  69db3e130000         imul ebx, ebx, 0x133e
// 0053d065  2bc3                 sub eax, ebx
// 0053d067  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053d06b  69db50100000         imul ebx, ebx, 0x1050
// 0053d071  2bc3                 sub eax, ebx
// 0053d073  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0053d07a  89442410             mov dword ptr [esp + 0x10], eax
// 0053d07e  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0053d082  8b442420             mov eax, dword ptr [esp + 0x20]
// 0053d086  81c700080000         add edi, 0x800
// 0053d08c  c1ff0c               sar edi, 0xc
// 0053d08f  897840               mov dword ptr [eax + 0x40], edi
// 0053d092  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 0053d099  2be9                 sub ebp, ecx
// 0053d09b  c1fb0c               sar ebx, 0xc
// 0053d09e  c1ff0c               sar edi, 0xc
// 0053d0a1  81c500080000         add ebp, 0x800
// 0053d0a7  c1fd0c               sar ebp, 0xc
// 0053d0aa  8958e0               mov dword ptr [eax - 0x20], ebx
// 0053d0ad  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053d0b1  8938                 mov dword ptr [eax], edi
// 0053d0b3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053d0b7  896820               mov dword ptr [eax + 0x20], ebp
// 0053d0ba  4f                   dec edi
// 0053d0bb  83c004               add eax, 4
// 0053d0be  83c602               add esi, 2
// 0053d0c1  83c204               add edx, 4
// 0053d0c4  89442420             mov dword ptr [esp + 0x20], eax
// 0053d0c8  897c2418             mov dword ptr [esp + 0x18], edi
// 0053d0cc  85ff                 test edi, edi
// 0053d0ce  0f8fa3feffff         jg 0x53cf77
// 0053d0d4  33f6                 xor esi, esi
// 0053d0d6  8d4c2428             lea ecx, [esp + 0x28]
// 0053d0da  89742418             mov dword ptr [esp + 0x18], esi
// 0053d0de  8bff                 mov edi, edi
// 0053d0e0  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0053d0e7  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0053d0ea  8b5104               mov edx, dword ptr [ecx + 4]
// 0053d0ed  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 0053d0f4  85d2                 test edx, edx
// 0053d0f6  7537                 jne 0x53d12f
// 0053d0f8  395108               cmp dword ptr [ecx + 8], edx
// 0053d0fb  7532                 jne 0x53d12f
// 0053d0fd  39510c               cmp dword ptr [ecx + 0xc], edx
// 0053d100  752d                 jne 0x53d12f
// 0053d102  395114               cmp dword ptr [ecx + 0x14], edx
// 0053d105  7528                 jne 0x53d12f
// 0053d107  395118               cmp dword ptr [ecx + 0x18], edx
// 0053d10a  7523                 jne 0x53d12f
// 0053d10c  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0053d10f  751e                 jne 0x53d12f
// 0053d111  8b01                 mov eax, dword ptr [ecx]
// 0053d113  83c010               add eax, 0x10
// 0053d116  c1f805               sar eax, 5
// 0053d119  25ff030000           and eax, 0x3ff
// 0053d11e  8a0418               mov al, byte ptr [eax + ebx]
// 0053d121  884500               mov byte ptr [ebp], al
// 0053d124  884501               mov byte ptr [ebp + 1], al
// 0053d127  884503               mov byte ptr [ebp + 3], al
// 0053d12a  e9e9000000           jmp 0x53d218
// 0053d12f  8b4108               mov eax, dword ptr [ecx + 8]
// 0053d132  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0053d135  69c0213b0000         imul eax, eax, 0x3b21
// 0053d13b  8b39                 mov edi, dword ptr [ecx]
// 0053d13d  69f67e180000         imul esi, esi, 0x187e
// 0053d143  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0053d146  2bc6                 sub eax, esi
// 0053d148  c1e70e               shl edi, 0xe
// 0053d14b  8d3438               lea esi, [eax + edi]
// 0053d14e  2bf8                 sub edi, eax
// 0053d150  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0053d153  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0053d157  69db87450000         imul ebx, ebx, 0x4587
// 0053d15d  89442414             mov dword ptr [esp + 0x14], eax
// 0053d161  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0053d164  89442410             mov dword ptr [esp + 0x10], eax
// 0053d168  69c0752e0000         imul eax, eax, 0x2e75
// 0053d16e  2bc3                 sub eax, ebx
// 0053d170  8bda                 mov ebx, edx
// 0053d172  69d203520000         imul edx, edx, 0x5203
// 0053d178  69dbf9210000         imul ebx, ebx, 0x21f9
// 0053d17e  03c3                 add eax, ebx
// 0053d180  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053d184  69dbc2060000         imul ebx, ebx, 0x6c2
// 0053d18a  2bc3                 sub eax, ebx
// 0053d18c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0053d190  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0053d196  03d3                 add edx, ebx
// 0053d198  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0053d19c  69db3e130000         imul ebx, ebx, 0x133e
// 0053d1a2  2bd3                 sub edx, ebx
// 0053d1a4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0053d1a8  69db50100000         imul ebx, ebx, 0x1050
// 0053d1ae  2bd3                 sub edx, ebx
// 0053d1b0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0053d1b4  89542410             mov dword ptr [esp + 0x10], edx
// 0053d1b8  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0053d1bf  2b742410             sub esi, dword ptr [esp + 0x10]
// 0053d1c3  c1fa13               sar edx, 0x13
// 0053d1c6  81e2ff030000         and edx, 0x3ff
// 0053d1cc  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0053d1d0  81c600000400         add esi, 0x40000
// 0053d1d6  885500               mov byte ptr [ebp], dl
// 0053d1d9  c1fe13               sar esi, 0x13
// 0053d1dc  81e6ff030000         and esi, 0x3ff
// 0053d1e2  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 0053d1e6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0053d1ea  885503               mov byte ptr [ebp + 3], dl
// 0053d1ed  8d940700000400       lea edx, [edi + eax + 0x40000]
// 0053d1f4  c1fa13               sar edx, 0x13
// 0053d1f7  2bf8                 sub edi, eax
// 0053d1f9  81e2ff030000         and edx, 0x3ff
// 0053d1ff  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0053d203  81c700000400         add edi, 0x40000
// 0053d209  c1ff13               sar edi, 0x13
// 0053d20c  81e7ff030000         and edi, 0x3ff
// 0053d212  885501               mov byte ptr [ebp + 1], dl
// 0053d215  8a041f               mov al, byte ptr [edi + ebx]
// 0053d218  46                   inc esi
// 0053d219  83c120               add ecx, 0x20
// 0053d21c  83fe04               cmp esi, 4
// 0053d21f  884502               mov byte ptr [ebp + 2], al
// 0053d222  89742418             mov dword ptr [esp + 0x18], esi
// 0053d226  0f8cb4feffff         jl 0x53d0e0
// 0053d22c  5f                   pop edi
// 0053d22d  5e                   pop esi
// 0053d22e  5d                   pop ebp
// 0053d22f  5b                   pop ebx
// 0053d230  81c498000000         add esp, 0x98
// 0053d236  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
