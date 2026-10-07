// roc 2012-06 0066c7d0  unit: seg_00660000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066c7d0
//
// 0066c7d0  81ec98000000         sub esp, 0x98
// 0066c7d6  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0066c7dd  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0066c7e4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0066c7e7  53                   push ebx
// 0066c7e8  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0066c7ee  55                   push ebp
// 0066c7ef  56                   push esi
// 0066c7f0  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0066c7f7  83eb80               sub ebx, -0x80
// 0066c7fa  8bc2                 mov eax, edx
// 0066c7fc  83c660               add esi, 0x60
// 0066c7ff  2bc2                 sub eax, edx
// 0066c801  57                   push edi
// 0066c802  bf08000000           mov edi, 8
// 0066c807  8d440448             lea eax, [esp + eax + 0x48]
// 0066c80b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0066c80f  897c2418             mov dword ptr [esp + 0x18], edi
// 0066c813  89442420             mov dword ptr [esp + 0x20], eax
// 0066c817  83ff04               cmp edi, 4
// 0066c81a  0f843a010000         je 0x66c95a
// 0066c820  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 0066c824  6685c9               test cx, cx
// 0066c827  7538                 jne 0x66c861
// 0066c829  66394ec0             cmp word ptr [esi - 0x40], cx
// 0066c82d  7532                 jne 0x66c861
// 0066c82f  66394ed0             cmp word ptr [esi - 0x30], cx
// 0066c833  752c                 jne 0x66c861
// 0066c835  66394ef0             cmp word ptr [esi - 0x10], cx
// 0066c839  7526                 jne 0x66c861
// 0066c83b  66390e               cmp word ptr [esi], cx
// 0066c83e  7521                 jne 0x66c861
// 0066c840  66394e10             cmp word ptr [esi + 0x10], cx
// 0066c844  751b                 jne 0x66c861
// 0066c846  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0066c84a  0faf0a               imul ecx, dword ptr [edx]
// 0066c84d  03c9                 add ecx, ecx
// 0066c84f  03c9                 add ecx, ecx
// 0066c851  8948e0               mov dword ptr [eax - 0x20], ecx
// 0066c854  8908                 mov dword ptr [eax], ecx
// 0066c856  894820               mov dword ptr [eax + 0x20], ecx
// 0066c859  894840               mov dword ptr [eax + 0x40], ecx
// 0066c85c  e9f9000000           jmp 0x66c95a
// 0066c861  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 0066c865  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 0066c869  0fbf3e               movsx edi, word ptr [esi]
// 0066c86c  69c9213b0000         imul ecx, ecx, 0x3b21
// 0066c872  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 0066c879  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0066c87d  69ff7e180000         imul edi, edi, 0x187e
// 0066c883  0faf02               imul eax, dword ptr [edx]
// 0066c886  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0066c88a  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0066c88e  2bcf                 sub ecx, edi
// 0066c890  c1e00e               shl eax, 0xe
// 0066c893  8d3c01               lea edi, [ecx + eax]
// 0066c896  2bc1                 sub eax, ecx
// 0066c898  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0066c89c  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 0066c8a3  8be8                 mov ebp, eax
// 0066c8a5  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 0066c8a9  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 0066c8b0  89442414             mov dword ptr [esp + 0x14], eax
// 0066c8b4  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 0066c8b8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066c8bc  69db87450000         imul ebx, ebx, 0x4587
// 0066c8c2  98                   cwde 
// 0066c8c3  0faf4220             imul eax, dword ptr [edx + 0x20]
// 0066c8c7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0066c8cb  69c9752e0000         imul ecx, ecx, 0x2e75
// 0066c8d1  2bcb                 sub ecx, ebx
// 0066c8d3  8bd8                 mov ebx, eax
// 0066c8d5  69c003520000         imul eax, eax, 0x5203
// 0066c8db  69dbf9210000         imul ebx, ebx, 0x21f9
// 0066c8e1  03cb                 add ecx, ebx
// 0066c8e3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066c8e7  69dbc2060000         imul ebx, ebx, 0x6c2
// 0066c8ed  2bcb                 sub ecx, ebx
// 0066c8ef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066c8f3  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0066c8f9  03c3                 add eax, ebx
// 0066c8fb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066c8ff  69db3e130000         imul ebx, ebx, 0x133e
// 0066c905  2bc3                 sub eax, ebx
// 0066c907  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066c90b  69db50100000         imul ebx, ebx, 0x1050
// 0066c911  2bc3                 sub eax, ebx
// 0066c913  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0066c91a  89442410             mov dword ptr [esp + 0x10], eax
// 0066c91e  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0066c922  8b442420             mov eax, dword ptr [esp + 0x20]
// 0066c926  81c700080000         add edi, 0x800
// 0066c92c  c1ff0c               sar edi, 0xc
// 0066c92f  897840               mov dword ptr [eax + 0x40], edi
// 0066c932  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 0066c939  2be9                 sub ebp, ecx
// 0066c93b  c1fb0c               sar ebx, 0xc
// 0066c93e  c1ff0c               sar edi, 0xc
// 0066c941  81c500080000         add ebp, 0x800
// 0066c947  c1fd0c               sar ebp, 0xc
// 0066c94a  8958e0               mov dword ptr [eax - 0x20], ebx
// 0066c94d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066c951  8938                 mov dword ptr [eax], edi
// 0066c953  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0066c957  896820               mov dword ptr [eax + 0x20], ebp
// 0066c95a  4f                   dec edi
// 0066c95b  83c004               add eax, 4
// 0066c95e  83c602               add esi, 2
// 0066c961  83c204               add edx, 4
// 0066c964  89442420             mov dword ptr [esp + 0x20], eax
// 0066c968  897c2418             mov dword ptr [esp + 0x18], edi
// 0066c96c  85ff                 test edi, edi
// 0066c96e  0f8fa3feffff         jg 0x66c817
// 0066c974  33f6                 xor esi, esi
// 0066c976  8d4c2428             lea ecx, [esp + 0x28]
// 0066c97a  89742418             mov dword ptr [esp + 0x18], esi
// 0066c97e  8bff                 mov edi, edi
// 0066c980  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0066c987  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0066c98a  8b5104               mov edx, dword ptr [ecx + 4]
// 0066c98d  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 0066c994  85d2                 test edx, edx
// 0066c996  7537                 jne 0x66c9cf
// 0066c998  395108               cmp dword ptr [ecx + 8], edx
// 0066c99b  7532                 jne 0x66c9cf
// 0066c99d  39510c               cmp dword ptr [ecx + 0xc], edx
// 0066c9a0  752d                 jne 0x66c9cf
// 0066c9a2  395114               cmp dword ptr [ecx + 0x14], edx
// 0066c9a5  7528                 jne 0x66c9cf
// 0066c9a7  395118               cmp dword ptr [ecx + 0x18], edx
// 0066c9aa  7523                 jne 0x66c9cf
// 0066c9ac  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0066c9af  751e                 jne 0x66c9cf
// 0066c9b1  8b01                 mov eax, dword ptr [ecx]
// 0066c9b3  83c010               add eax, 0x10
// 0066c9b6  c1f805               sar eax, 5
// 0066c9b9  25ff030000           and eax, 0x3ff
// 0066c9be  8a0418               mov al, byte ptr [eax + ebx]
// 0066c9c1  884500               mov byte ptr [ebp], al
// 0066c9c4  884501               mov byte ptr [ebp + 1], al
// 0066c9c7  884503               mov byte ptr [ebp + 3], al
// 0066c9ca  e9e9000000           jmp 0x66cab8
// 0066c9cf  8b4108               mov eax, dword ptr [ecx + 8]
// 0066c9d2  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0066c9d5  69c0213b0000         imul eax, eax, 0x3b21
// 0066c9db  8b39                 mov edi, dword ptr [ecx]
// 0066c9dd  69f67e180000         imul esi, esi, 0x187e
// 0066c9e3  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0066c9e6  2bc6                 sub eax, esi
// 0066c9e8  c1e70e               shl edi, 0xe
// 0066c9eb  8d3438               lea esi, [eax + edi]
// 0066c9ee  2bf8                 sub edi, eax
// 0066c9f0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0066c9f3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0066c9f7  69db87450000         imul ebx, ebx, 0x4587
// 0066c9fd  89442414             mov dword ptr [esp + 0x14], eax
// 0066ca01  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0066ca04  89442410             mov dword ptr [esp + 0x10], eax
// 0066ca08  69c0752e0000         imul eax, eax, 0x2e75
// 0066ca0e  2bc3                 sub eax, ebx
// 0066ca10  8bda                 mov ebx, edx
// 0066ca12  69d203520000         imul edx, edx, 0x5203
// 0066ca18  69dbf9210000         imul ebx, ebx, 0x21f9
// 0066ca1e  03c3                 add eax, ebx
// 0066ca20  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066ca24  69dbc2060000         imul ebx, ebx, 0x6c2
// 0066ca2a  2bc3                 sub eax, ebx
// 0066ca2c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0066ca30  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0066ca36  03d3                 add edx, ebx
// 0066ca38  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066ca3c  69db3e130000         imul ebx, ebx, 0x133e
// 0066ca42  2bd3                 sub edx, ebx
// 0066ca44  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0066ca48  69db50100000         imul ebx, ebx, 0x1050
// 0066ca4e  2bd3                 sub edx, ebx
// 0066ca50  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0066ca54  89542410             mov dword ptr [esp + 0x10], edx
// 0066ca58  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0066ca5f  2b742410             sub esi, dword ptr [esp + 0x10]
// 0066ca63  c1fa13               sar edx, 0x13
// 0066ca66  81e2ff030000         and edx, 0x3ff
// 0066ca6c  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0066ca70  81c600000400         add esi, 0x40000
// 0066ca76  885500               mov byte ptr [ebp], dl
// 0066ca79  c1fe13               sar esi, 0x13
// 0066ca7c  81e6ff030000         and esi, 0x3ff
// 0066ca82  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 0066ca86  8b742418             mov esi, dword ptr [esp + 0x18]
// 0066ca8a  885503               mov byte ptr [ebp + 3], dl
// 0066ca8d  8d940700000400       lea edx, [edi + eax + 0x40000]
// 0066ca94  c1fa13               sar edx, 0x13
// 0066ca97  2bf8                 sub edi, eax
// 0066ca99  81e2ff030000         and edx, 0x3ff
// 0066ca9f  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0066caa3  81c700000400         add edi, 0x40000
// 0066caa9  c1ff13               sar edi, 0x13
// 0066caac  81e7ff030000         and edi, 0x3ff
// 0066cab2  885501               mov byte ptr [ebp + 1], dl
// 0066cab5  8a041f               mov al, byte ptr [edi + ebx]
// 0066cab8  46                   inc esi
// 0066cab9  83c120               add ecx, 0x20
// 0066cabc  83fe04               cmp esi, 4
// 0066cabf  884502               mov byte ptr [ebp + 2], al
// 0066cac2  89742418             mov dword ptr [esp + 0x18], esi
// 0066cac6  0f8cb4feffff         jl 0x66c980
// 0066cacc  5f                   pop edi
// 0066cacd  5e                   pop esi
// 0066cace  5d                   pop ebp
// 0066cacf  5b                   pop ebx
// 0066cad0  81c498000000         add esp, 0x98
// 0066cad6  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
