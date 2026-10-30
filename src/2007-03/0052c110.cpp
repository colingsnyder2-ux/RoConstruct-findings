// roc 2007-03 0052c110  unit: seg_00520000  size: 793 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052c110
//
// 0052c110  81ec98000000         sub esp, 0x98
// 0052c116  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0052c11d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0052c124  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0052c127  53                   push ebx
// 0052c128  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0052c12e  55                   push ebp
// 0052c12f  56                   push esi
// 0052c130  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0052c137  81c380000000         add ebx, 0x80
// 0052c13d  8bc2                 mov eax, edx
// 0052c13f  83c660               add esi, 0x60
// 0052c142  2bc2                 sub eax, edx
// 0052c144  57                   push edi
// 0052c145  bf08000000           mov edi, 8
// 0052c14a  8d440448             lea eax, [esp + eax + 0x48]
// 0052c14e  895c2424             mov dword ptr [esp + 0x24], ebx
// 0052c152  897c2418             mov dword ptr [esp + 0x18], edi
// 0052c156  89442420             mov dword ptr [esp + 0x20], eax
// 0052c15a  8d9b00000000         lea ebx, [ebx]
// 0052c160  83ff04               cmp edi, 4
// 0052c163  0f843c010000         je 0x52c2a5
// 0052c169  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 0052c16d  6685c9               test cx, cx
// 0052c170  7538                 jne 0x52c1aa
// 0052c172  66394ec0             cmp word ptr [esi - 0x40], cx
// 0052c176  7532                 jne 0x52c1aa
// 0052c178  66394ed0             cmp word ptr [esi - 0x30], cx
// 0052c17c  752c                 jne 0x52c1aa
// 0052c17e  66394ef0             cmp word ptr [esi - 0x10], cx
// 0052c182  7526                 jne 0x52c1aa
// 0052c184  66390e               cmp word ptr [esi], cx
// 0052c187  7521                 jne 0x52c1aa
// 0052c189  66394e10             cmp word ptr [esi + 0x10], cx
// 0052c18d  751b                 jne 0x52c1aa
// 0052c18f  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0052c193  0faf0a               imul ecx, dword ptr [edx]
// 0052c196  03c9                 add ecx, ecx
// 0052c198  03c9                 add ecx, ecx
// 0052c19a  8948e0               mov dword ptr [eax - 0x20], ecx
// 0052c19d  8908                 mov dword ptr [eax], ecx
// 0052c19f  894820               mov dword ptr [eax + 0x20], ecx
// 0052c1a2  894840               mov dword ptr [eax + 0x40], ecx
// 0052c1a5  e9fb000000           jmp 0x52c2a5
// 0052c1aa  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 0052c1ae  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 0052c1b2  0fbf3e               movsx edi, word ptr [esi]
// 0052c1b5  69c9213b0000         imul ecx, ecx, 0x3b21
// 0052c1bb  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 0052c1c2  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0052c1c6  69ff7e180000         imul edi, edi, 0x187e
// 0052c1cc  0faf02               imul eax, dword ptr [edx]
// 0052c1cf  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0052c1d3  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0052c1d7  2bcf                 sub ecx, edi
// 0052c1d9  c1e00e               shl eax, 0xe
// 0052c1dc  8d3c01               lea edi, [ecx + eax]
// 0052c1df  2bc1                 sub eax, ecx
// 0052c1e1  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0052c1e5  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 0052c1ec  8be8                 mov ebp, eax
// 0052c1ee  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 0052c1f2  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 0052c1f9  89442414             mov dword ptr [esp + 0x14], eax
// 0052c1fd  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 0052c201  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052c205  69db87450000         imul ebx, ebx, 0x4587
// 0052c20b  0fbfc0               movsx eax, ax
// 0052c20e  0faf4220             imul eax, dword ptr [edx + 0x20]
// 0052c212  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052c216  69c9752e0000         imul ecx, ecx, 0x2e75
// 0052c21c  2bcb                 sub ecx, ebx
// 0052c21e  8bd8                 mov ebx, eax
// 0052c220  69c003520000         imul eax, eax, 0x5203
// 0052c226  69dbf9210000         imul ebx, ebx, 0x21f9
// 0052c22c  03cb                 add ecx, ebx
// 0052c22e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c232  69dbc2060000         imul ebx, ebx, 0x6c2
// 0052c238  2bcb                 sub ecx, ebx
// 0052c23a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052c23e  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0052c244  03c3                 add eax, ebx
// 0052c246  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052c24a  69db3e130000         imul ebx, ebx, 0x133e
// 0052c250  2bc3                 sub eax, ebx
// 0052c252  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c256  69db50100000         imul ebx, ebx, 0x1050
// 0052c25c  2bc3                 sub eax, ebx
// 0052c25e  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0052c265  89442410             mov dword ptr [esp + 0x10], eax
// 0052c269  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0052c26d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052c271  81c700080000         add edi, 0x800
// 0052c277  c1ff0c               sar edi, 0xc
// 0052c27a  897840               mov dword ptr [eax + 0x40], edi
// 0052c27d  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 0052c284  2be9                 sub ebp, ecx
// 0052c286  c1fb0c               sar ebx, 0xc
// 0052c289  c1ff0c               sar edi, 0xc
// 0052c28c  81c500080000         add ebp, 0x800
// 0052c292  c1fd0c               sar ebp, 0xc
// 0052c295  8958e0               mov dword ptr [eax - 0x20], ebx
// 0052c298  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052c29c  8938                 mov dword ptr [eax], edi
// 0052c29e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052c2a2  896820               mov dword ptr [eax + 0x20], ebp
// 0052c2a5  83ef01               sub edi, 1
// 0052c2a8  83c004               add eax, 4
// 0052c2ab  83c602               add esi, 2
// 0052c2ae  83c204               add edx, 4
// 0052c2b1  85ff                 test edi, edi
// 0052c2b3  89442420             mov dword ptr [esp + 0x20], eax
// 0052c2b7  897c2418             mov dword ptr [esp + 0x18], edi
// 0052c2bb  0f8f9ffeffff         jg 0x52c160
// 0052c2c1  33f6                 xor esi, esi
// 0052c2c3  8d4c2428             lea ecx, [esp + 0x28]
// 0052c2c7  89742418             mov dword ptr [esp + 0x18], esi
// 0052c2cb  eb03                 jmp 0x52c2d0
// 0052c2cd  8d4900               lea ecx, [ecx]
// 0052c2d0  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0052c2d7  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0052c2da  8b5104               mov edx, dword ptr [ecx + 4]
// 0052c2dd  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 0052c2e4  85d2                 test edx, edx
// 0052c2e6  7537                 jne 0x52c31f
// 0052c2e8  395108               cmp dword ptr [ecx + 8], edx
// 0052c2eb  7532                 jne 0x52c31f
// 0052c2ed  39510c               cmp dword ptr [ecx + 0xc], edx
// 0052c2f0  752d                 jne 0x52c31f
// 0052c2f2  395114               cmp dword ptr [ecx + 0x14], edx
// 0052c2f5  7528                 jne 0x52c31f
// 0052c2f7  395118               cmp dword ptr [ecx + 0x18], edx
// 0052c2fa  7523                 jne 0x52c31f
// 0052c2fc  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0052c2ff  751e                 jne 0x52c31f
// 0052c301  8b01                 mov eax, dword ptr [ecx]
// 0052c303  83c010               add eax, 0x10
// 0052c306  c1f805               sar eax, 5
// 0052c309  25ff030000           and eax, 0x3ff
// 0052c30e  8a0418               mov al, byte ptr [eax + ebx]
// 0052c311  884500               mov byte ptr [ebp], al
// 0052c314  884501               mov byte ptr [ebp + 1], al
// 0052c317  884503               mov byte ptr [ebp + 3], al
// 0052c31a  e9e9000000           jmp 0x52c408
// 0052c31f  8b4108               mov eax, dword ptr [ecx + 8]
// 0052c322  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0052c325  69c0213b0000         imul eax, eax, 0x3b21
// 0052c32b  8b39                 mov edi, dword ptr [ecx]
// 0052c32d  69f67e180000         imul esi, esi, 0x187e
// 0052c333  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0052c336  2bc6                 sub eax, esi
// 0052c338  c1e70e               shl edi, 0xe
// 0052c33b  8d3438               lea esi, [eax + edi]
// 0052c33e  2bf8                 sub edi, eax
// 0052c340  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052c343  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052c347  69db87450000         imul ebx, ebx, 0x4587
// 0052c34d  89442414             mov dword ptr [esp + 0x14], eax
// 0052c351  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0052c354  89442410             mov dword ptr [esp + 0x10], eax
// 0052c358  69c0752e0000         imul eax, eax, 0x2e75
// 0052c35e  2bc3                 sub eax, ebx
// 0052c360  8bda                 mov ebx, edx
// 0052c362  69d203520000         imul edx, edx, 0x5203
// 0052c368  69dbf9210000         imul ebx, ebx, 0x21f9
// 0052c36e  03c3                 add eax, ebx
// 0052c370  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c374  69dbc2060000         imul ebx, ebx, 0x6c2
// 0052c37a  2bc3                 sub eax, ebx
// 0052c37c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052c380  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0052c386  03d3                 add edx, ebx
// 0052c388  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052c38c  69db3e130000         imul ebx, ebx, 0x133e
// 0052c392  2bd3                 sub edx, ebx
// 0052c394  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c398  69db50100000         imul ebx, ebx, 0x1050
// 0052c39e  2bd3                 sub edx, ebx
// 0052c3a0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052c3a4  89542410             mov dword ptr [esp + 0x10], edx
// 0052c3a8  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0052c3af  2b742410             sub esi, dword ptr [esp + 0x10]
// 0052c3b3  c1fa13               sar edx, 0x13
// 0052c3b6  81e2ff030000         and edx, 0x3ff
// 0052c3bc  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0052c3c0  81c600000400         add esi, 0x40000
// 0052c3c6  885500               mov byte ptr [ebp], dl
// 0052c3c9  c1fe13               sar esi, 0x13
// 0052c3cc  81e6ff030000         and esi, 0x3ff
// 0052c3d2  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 0052c3d6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052c3da  885503               mov byte ptr [ebp + 3], dl
// 0052c3dd  8d940700000400       lea edx, [edi + eax + 0x40000]
// 0052c3e4  c1fa13               sar edx, 0x13
// 0052c3e7  2bf8                 sub edi, eax
// 0052c3e9  81e2ff030000         and edx, 0x3ff
// 0052c3ef  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0052c3f3  81c700000400         add edi, 0x40000
// 0052c3f9  c1ff13               sar edi, 0x13
// 0052c3fc  81e7ff030000         and edi, 0x3ff
// 0052c402  885501               mov byte ptr [ebp + 1], dl
// 0052c405  8a041f               mov al, byte ptr [edi + ebx]
// 0052c408  83c601               add esi, 1
// 0052c40b  83c120               add ecx, 0x20
// 0052c40e  83fe04               cmp esi, 4
// 0052c411  884502               mov byte ptr [ebp + 2], al
// 0052c414  89742418             mov dword ptr [esp + 0x18], esi
// 0052c418  0f8cb2feffff         jl 0x52c2d0
// 0052c41e  5f                   pop edi
// 0052c41f  5e                   pop esi
// 0052c420  5d                   pop ebp
// 0052c421  5b                   pop ebx
// 0052c422  81c498000000         add esp, 0x98
// 0052c428  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
