// from server: 100% by auto
// roc 2009-06 005a7210  unit: seg_005a0000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a7210
//
// 005a7210  81ec98000000         sub esp, 0x98
// 005a7216  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005a721d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 005a7224  8b5150               mov edx, dword ptr [ecx + 0x50]
// 005a7227  53                   push ebx
// 005a7228  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 005a722e  55                   push ebp
// 005a722f  56                   push esi
// 005a7230  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005a7237  83eb80               sub ebx, -0x80
// 005a723a  8bc2                 mov eax, edx
// 005a723c  83c660               add esi, 0x60
// 005a723f  2bc2                 sub eax, edx
// 005a7241  57                   push edi
// 005a7242  bf08000000           mov edi, 8
// 005a7247  8d440448             lea eax, [esp + eax + 0x48]
// 005a724b  895c2424             mov dword ptr [esp + 0x24], ebx
// 005a724f  897c2418             mov dword ptr [esp + 0x18], edi
// 005a7253  89442420             mov dword ptr [esp + 0x20], eax
// 005a7257  83ff04               cmp edi, 4
// 005a725a  0f843a010000         je 0x5a739a
// 005a7260  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 005a7264  6685c9               test cx, cx
// 005a7267  7538                 jne 0x5a72a1
// 005a7269  66394ec0             cmp word ptr [esi - 0x40], cx
// 005a726d  7532                 jne 0x5a72a1
// 005a726f  66394ed0             cmp word ptr [esi - 0x30], cx
// 005a7273  752c                 jne 0x5a72a1
// 005a7275  66394ef0             cmp word ptr [esi - 0x10], cx
// 005a7279  7526                 jne 0x5a72a1
// 005a727b  66390e               cmp word ptr [esi], cx
// 005a727e  7521                 jne 0x5a72a1
// 005a7280  66394e10             cmp word ptr [esi + 0x10], cx
// 005a7284  751b                 jne 0x5a72a1
// 005a7286  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 005a728a  0faf0a               imul ecx, dword ptr [edx]
// 005a728d  03c9                 add ecx, ecx
// 005a728f  03c9                 add ecx, ecx
// 005a7291  8948e0               mov dword ptr [eax - 0x20], ecx
// 005a7294  8908                 mov dword ptr [eax], ecx
// 005a7296  894820               mov dword ptr [eax + 0x20], ecx
// 005a7299  894840               mov dword ptr [eax + 0x40], ecx
// 005a729c  e9f9000000           jmp 0x5a739a
// 005a72a1  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 005a72a5  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 005a72a9  0fbf3e               movsx edi, word ptr [esi]
// 005a72ac  69c9213b0000         imul ecx, ecx, 0x3b21
// 005a72b2  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 005a72b9  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 005a72bd  69ff7e180000         imul edi, edi, 0x187e
// 005a72c3  0faf02               imul eax, dword ptr [edx]
// 005a72c6  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 005a72ca  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 005a72ce  2bcf                 sub ecx, edi
// 005a72d0  c1e00e               shl eax, 0xe
// 005a72d3  8d3c01               lea edi, [ecx + eax]
// 005a72d6  2bc1                 sub eax, ecx
// 005a72d8  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 005a72dc  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 005a72e3  8be8                 mov ebp, eax
// 005a72e5  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 005a72e9  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 005a72f0  89442414             mov dword ptr [esp + 0x14], eax
// 005a72f4  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 005a72f8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a72fc  69db87450000         imul ebx, ebx, 0x4587
// 005a7302  98                   cwde 
// 005a7303  0faf4220             imul eax, dword ptr [edx + 0x20]
// 005a7307  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a730b  69c9752e0000         imul ecx, ecx, 0x2e75
// 005a7311  2bcb                 sub ecx, ebx
// 005a7313  8bd8                 mov ebx, eax
// 005a7315  69c003520000         imul eax, eax, 0x5203
// 005a731b  69dbf9210000         imul ebx, ebx, 0x21f9
// 005a7321  03cb                 add ecx, ebx
// 005a7323  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a7327  69dbc2060000         imul ebx, ebx, 0x6c2
// 005a732d  2bcb                 sub ecx, ebx
// 005a732f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7333  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 005a7339  03c3                 add eax, ebx
// 005a733b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a733f  69db3e130000         imul ebx, ebx, 0x133e
// 005a7345  2bc3                 sub eax, ebx
// 005a7347  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a734b  69db50100000         imul ebx, ebx, 0x1050
// 005a7351  2bc3                 sub eax, ebx
// 005a7353  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 005a735a  89442410             mov dword ptr [esp + 0x10], eax
// 005a735e  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 005a7362  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a7366  81c700080000         add edi, 0x800
// 005a736c  c1ff0c               sar edi, 0xc
// 005a736f  897840               mov dword ptr [eax + 0x40], edi
// 005a7372  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 005a7379  2be9                 sub ebp, ecx
// 005a737b  c1fb0c               sar ebx, 0xc
// 005a737e  c1ff0c               sar edi, 0xc
// 005a7381  81c500080000         add ebp, 0x800
// 005a7387  c1fd0c               sar ebp, 0xc
// 005a738a  8958e0               mov dword ptr [eax - 0x20], ebx
// 005a738d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a7391  8938                 mov dword ptr [eax], edi
// 005a7393  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005a7397  896820               mov dword ptr [eax + 0x20], ebp
// 005a739a  4f                   dec edi
// 005a739b  83c004               add eax, 4
// 005a739e  83c602               add esi, 2
// 005a73a1  83c204               add edx, 4
// 005a73a4  89442420             mov dword ptr [esp + 0x20], eax
// 005a73a8  897c2418             mov dword ptr [esp + 0x18], edi
// 005a73ac  85ff                 test edi, edi
// 005a73ae  0f8fa3feffff         jg 0x5a7257
// 005a73b4  33f6                 xor esi, esi
// 005a73b6  8d4c2428             lea ecx, [esp + 0x28]
// 005a73ba  89742418             mov dword ptr [esp + 0x18], esi
// 005a73be  8bff                 mov edi, edi
// 005a73c0  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 005a73c7  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 005a73ca  8b5104               mov edx, dword ptr [ecx + 4]
// 005a73cd  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 005a73d4  85d2                 test edx, edx
// 005a73d6  7537                 jne 0x5a740f
// 005a73d8  395108               cmp dword ptr [ecx + 8], edx
// 005a73db  7532                 jne 0x5a740f
// 005a73dd  39510c               cmp dword ptr [ecx + 0xc], edx
// 005a73e0  752d                 jne 0x5a740f
// 005a73e2  395114               cmp dword ptr [ecx + 0x14], edx
// 005a73e5  7528                 jne 0x5a740f
// 005a73e7  395118               cmp dword ptr [ecx + 0x18], edx
// 005a73ea  7523                 jne 0x5a740f
// 005a73ec  39511c               cmp dword ptr [ecx + 0x1c], edx
// 005a73ef  751e                 jne 0x5a740f
// 005a73f1  8b01                 mov eax, dword ptr [ecx]
// 005a73f3  83c010               add eax, 0x10
// 005a73f6  c1f805               sar eax, 5
// 005a73f9  25ff030000           and eax, 0x3ff
// 005a73fe  8a0418               mov al, byte ptr [eax + ebx]
// 005a7401  884500               mov byte ptr [ebp], al
// 005a7404  884501               mov byte ptr [ebp + 1], al
// 005a7407  884503               mov byte ptr [ebp + 3], al
// 005a740a  e9e9000000           jmp 0x5a74f8
// 005a740f  8b4108               mov eax, dword ptr [ecx + 8]
// 005a7412  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005a7415  69c0213b0000         imul eax, eax, 0x3b21
// 005a741b  8b39                 mov edi, dword ptr [ecx]
// 005a741d  69f67e180000         imul esi, esi, 0x187e
// 005a7423  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 005a7426  2bc6                 sub eax, esi
// 005a7428  c1e70e               shl edi, 0xe
// 005a742b  8d3438               lea esi, [eax + edi]
// 005a742e  2bf8                 sub edi, eax
// 005a7430  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005a7433  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005a7437  69db87450000         imul ebx, ebx, 0x4587
// 005a743d  89442414             mov dword ptr [esp + 0x14], eax
// 005a7441  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005a7444  89442410             mov dword ptr [esp + 0x10], eax
// 005a7448  69c0752e0000         imul eax, eax, 0x2e75
// 005a744e  2bc3                 sub eax, ebx
// 005a7450  8bda                 mov ebx, edx
// 005a7452  69d203520000         imul edx, edx, 0x5203
// 005a7458  69dbf9210000         imul ebx, ebx, 0x21f9
// 005a745e  03c3                 add eax, ebx
// 005a7460  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a7464  69dbc2060000         imul ebx, ebx, 0x6c2
// 005a746a  2bc3                 sub eax, ebx
// 005a746c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005a7470  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 005a7476  03d3                 add edx, ebx
// 005a7478  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005a747c  69db3e130000         imul ebx, ebx, 0x133e
// 005a7482  2bd3                 sub edx, ebx
// 005a7484  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005a7488  69db50100000         imul ebx, ebx, 0x1050
// 005a748e  2bd3                 sub edx, ebx
// 005a7490  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 005a7494  89542410             mov dword ptr [esp + 0x10], edx
// 005a7498  8d941600000400       lea edx, [esi + edx + 0x40000]
// 005a749f  2b742410             sub esi, dword ptr [esp + 0x10]
// 005a74a3  c1fa13               sar edx, 0x13
// 005a74a6  81e2ff030000         and edx, 0x3ff
// 005a74ac  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 005a74b0  81c600000400         add esi, 0x40000
// 005a74b6  885500               mov byte ptr [ebp], dl
// 005a74b9  c1fe13               sar esi, 0x13
// 005a74bc  81e6ff030000         and esi, 0x3ff
// 005a74c2  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 005a74c6  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a74ca  885503               mov byte ptr [ebp + 3], dl
// 005a74cd  8d940700000400       lea edx, [edi + eax + 0x40000]
// 005a74d4  c1fa13               sar edx, 0x13
// 005a74d7  2bf8                 sub edi, eax
// 005a74d9  81e2ff030000         and edx, 0x3ff
// 005a74df  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 005a74e3  81c700000400         add edi, 0x40000
// 005a74e9  c1ff13               sar edi, 0x13
// 005a74ec  81e7ff030000         and edi, 0x3ff
// 005a74f2  885501               mov byte ptr [ebp + 1], dl
// 005a74f5  8a041f               mov al, byte ptr [edi + ebx]
// 005a74f8  46                   inc esi
// 005a74f9  83c120               add ecx, 0x20
// 005a74fc  83fe04               cmp esi, 4
// 005a74ff  884502               mov byte ptr [ebp + 2], al
// 005a7502  89742418             mov dword ptr [esp + 0x18], esi
// 005a7506  0f8cb4feffff         jl 0x5a73c0
// 005a750c  5f                   pop edi
// 005a750d  5e                   pop esi
// 005a750e  5d                   pop ebp
// 005a750f  5b                   pop ebx
// 005a7510  81c498000000         add esp, 0x98
// 005a7516  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
