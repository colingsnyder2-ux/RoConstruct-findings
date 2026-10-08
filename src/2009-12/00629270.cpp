// roc 2009-12 00629270  unit: seg_00620000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00629270
//
// 00629270  81ec98000000         sub esp, 0x98
// 00629276  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0062927d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00629284  8b5150               mov edx, dword ptr [ecx + 0x50]
// 00629287  53                   push ebx
// 00629288  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0062928e  55                   push ebp
// 0062928f  56                   push esi
// 00629290  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 00629297  83eb80               sub ebx, -0x80
// 0062929a  8bc2                 mov eax, edx
// 0062929c  83c660               add esi, 0x60
// 0062929f  2bc2                 sub eax, edx
// 006292a1  57                   push edi
// 006292a2  bf08000000           mov edi, 8
// 006292a7  8d440448             lea eax, [esp + eax + 0x48]
// 006292ab  895c2424             mov dword ptr [esp + 0x24], ebx
// 006292af  897c2418             mov dword ptr [esp + 0x18], edi
// 006292b3  89442420             mov dword ptr [esp + 0x20], eax
// 006292b7  83ff04               cmp edi, 4
// 006292ba  0f843a010000         je 0x6293fa
// 006292c0  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 006292c4  6685c9               test cx, cx
// 006292c7  7538                 jne 0x629301
// 006292c9  66394ec0             cmp word ptr [esi - 0x40], cx
// 006292cd  7532                 jne 0x629301
// 006292cf  66394ed0             cmp word ptr [esi - 0x30], cx
// 006292d3  752c                 jne 0x629301
// 006292d5  66394ef0             cmp word ptr [esi - 0x10], cx
// 006292d9  7526                 jne 0x629301
// 006292db  66390e               cmp word ptr [esi], cx
// 006292de  7521                 jne 0x629301
// 006292e0  66394e10             cmp word ptr [esi + 0x10], cx
// 006292e4  751b                 jne 0x629301
// 006292e6  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 006292ea  0faf0a               imul ecx, dword ptr [edx]
// 006292ed  03c9                 add ecx, ecx
// 006292ef  03c9                 add ecx, ecx
// 006292f1  8948e0               mov dword ptr [eax - 0x20], ecx
// 006292f4  8908                 mov dword ptr [eax], ecx
// 006292f6  894820               mov dword ptr [eax + 0x20], ecx
// 006292f9  894840               mov dword ptr [eax + 0x40], ecx
// 006292fc  e9f9000000           jmp 0x6293fa
// 00629301  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 00629305  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 00629309  0fbf3e               movsx edi, word ptr [esi]
// 0062930c  69c9213b0000         imul ecx, ecx, 0x3b21
// 00629312  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 00629319  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0062931d  69ff7e180000         imul edi, edi, 0x187e
// 00629323  0faf02               imul eax, dword ptr [edx]
// 00629326  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0062932a  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0062932e  2bcf                 sub ecx, edi
// 00629330  c1e00e               shl eax, 0xe
// 00629333  8d3c01               lea edi, [ecx + eax]
// 00629336  2bc1                 sub eax, ecx
// 00629338  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0062933c  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 00629343  8be8                 mov ebp, eax
// 00629345  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 00629349  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 00629350  89442414             mov dword ptr [esp + 0x14], eax
// 00629354  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 00629358  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0062935c  69db87450000         imul ebx, ebx, 0x4587
// 00629362  98                   cwde 
// 00629363  0faf4220             imul eax, dword ptr [edx + 0x20]
// 00629367  894c2410             mov dword ptr [esp + 0x10], ecx
// 0062936b  69c9752e0000         imul ecx, ecx, 0x2e75
// 00629371  2bcb                 sub ecx, ebx
// 00629373  8bd8                 mov ebx, eax
// 00629375  69c003520000         imul eax, eax, 0x5203
// 0062937b  69dbf9210000         imul ebx, ebx, 0x21f9
// 00629381  03cb                 add ecx, ebx
// 00629383  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00629387  69dbc2060000         imul ebx, ebx, 0x6c2
// 0062938d  2bcb                 sub ecx, ebx
// 0062938f  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00629393  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 00629399  03c3                 add eax, ebx
// 0062939b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0062939f  69db3e130000         imul ebx, ebx, 0x133e
// 006293a5  2bc3                 sub eax, ebx
// 006293a7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006293ab  69db50100000         imul ebx, ebx, 0x1050
// 006293b1  2bc3                 sub eax, ebx
// 006293b3  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 006293ba  89442410             mov dword ptr [esp + 0x10], eax
// 006293be  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 006293c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 006293c6  81c700080000         add edi, 0x800
// 006293cc  c1ff0c               sar edi, 0xc
// 006293cf  897840               mov dword ptr [eax + 0x40], edi
// 006293d2  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 006293d9  2be9                 sub ebp, ecx
// 006293db  c1fb0c               sar ebx, 0xc
// 006293de  c1ff0c               sar edi, 0xc
// 006293e1  81c500080000         add ebp, 0x800
// 006293e7  c1fd0c               sar ebp, 0xc
// 006293ea  8958e0               mov dword ptr [eax - 0x20], ebx
// 006293ed  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006293f1  8938                 mov dword ptr [eax], edi
// 006293f3  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006293f7  896820               mov dword ptr [eax + 0x20], ebp
// 006293fa  4f                   dec edi
// 006293fb  83c004               add eax, 4
// 006293fe  83c602               add esi, 2
// 00629401  83c204               add edx, 4
// 00629404  89442420             mov dword ptr [esp + 0x20], eax
// 00629408  897c2418             mov dword ptr [esp + 0x18], edi
// 0062940c  85ff                 test edi, edi
// 0062940e  0f8fa3feffff         jg 0x6292b7
// 00629414  33f6                 xor esi, esi
// 00629416  8d4c2428             lea ecx, [esp + 0x28]
// 0062941a  89742418             mov dword ptr [esp + 0x18], esi
// 0062941e  8bff                 mov edi, edi
// 00629420  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00629427  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0062942a  8b5104               mov edx, dword ptr [ecx + 4]
// 0062942d  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 00629434  85d2                 test edx, edx
// 00629436  7537                 jne 0x62946f
// 00629438  395108               cmp dword ptr [ecx + 8], edx
// 0062943b  7532                 jne 0x62946f
// 0062943d  39510c               cmp dword ptr [ecx + 0xc], edx
// 00629440  752d                 jne 0x62946f
// 00629442  395114               cmp dword ptr [ecx + 0x14], edx
// 00629445  7528                 jne 0x62946f
// 00629447  395118               cmp dword ptr [ecx + 0x18], edx
// 0062944a  7523                 jne 0x62946f
// 0062944c  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0062944f  751e                 jne 0x62946f
// 00629451  8b01                 mov eax, dword ptr [ecx]
// 00629453  83c010               add eax, 0x10
// 00629456  c1f805               sar eax, 5
// 00629459  25ff030000           and eax, 0x3ff
// 0062945e  8a0418               mov al, byte ptr [eax + ebx]
// 00629461  884500               mov byte ptr [ebp], al
// 00629464  884501               mov byte ptr [ebp + 1], al
// 00629467  884503               mov byte ptr [ebp + 3], al
// 0062946a  e9e9000000           jmp 0x629558
// 0062946f  8b4108               mov eax, dword ptr [ecx + 8]
// 00629472  8b7118               mov esi, dword ptr [ecx + 0x18]
// 00629475  69c0213b0000         imul eax, eax, 0x3b21
// 0062947b  8b39                 mov edi, dword ptr [ecx]
// 0062947d  69f67e180000         imul esi, esi, 0x187e
// 00629483  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 00629486  2bc6                 sub eax, esi
// 00629488  c1e70e               shl edi, 0xe
// 0062948b  8d3438               lea esi, [eax + edi]
// 0062948e  2bf8                 sub edi, eax
// 00629490  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00629493  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00629497  69db87450000         imul ebx, ebx, 0x4587
// 0062949d  89442414             mov dword ptr [esp + 0x14], eax
// 006294a1  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006294a4  89442410             mov dword ptr [esp + 0x10], eax
// 006294a8  69c0752e0000         imul eax, eax, 0x2e75
// 006294ae  2bc3                 sub eax, ebx
// 006294b0  8bda                 mov ebx, edx
// 006294b2  69d203520000         imul edx, edx, 0x5203
// 006294b8  69dbf9210000         imul ebx, ebx, 0x21f9
// 006294be  03c3                 add eax, ebx
// 006294c0  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006294c4  69dbc2060000         imul ebx, ebx, 0x6c2
// 006294ca  2bc3                 sub eax, ebx
// 006294cc  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006294d0  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 006294d6  03d3                 add edx, ebx
// 006294d8  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006294dc  69db3e130000         imul ebx, ebx, 0x133e
// 006294e2  2bd3                 sub edx, ebx
// 006294e4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006294e8  69db50100000         imul ebx, ebx, 0x1050
// 006294ee  2bd3                 sub edx, ebx
// 006294f0  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 006294f4  89542410             mov dword ptr [esp + 0x10], edx
// 006294f8  8d941600000400       lea edx, [esi + edx + 0x40000]
// 006294ff  2b742410             sub esi, dword ptr [esp + 0x10]
// 00629503  c1fa13               sar edx, 0x13
// 00629506  81e2ff030000         and edx, 0x3ff
// 0062950c  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00629510  81c600000400         add esi, 0x40000
// 00629516  885500               mov byte ptr [ebp], dl
// 00629519  c1fe13               sar esi, 0x13
// 0062951c  81e6ff030000         and esi, 0x3ff
// 00629522  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 00629526  8b742418             mov esi, dword ptr [esp + 0x18]
// 0062952a  885503               mov byte ptr [ebp + 3], dl
// 0062952d  8d940700000400       lea edx, [edi + eax + 0x40000]
// 00629534  c1fa13               sar edx, 0x13
// 00629537  2bf8                 sub edi, eax
// 00629539  81e2ff030000         and edx, 0x3ff
// 0062953f  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00629543  81c700000400         add edi, 0x40000
// 00629549  c1ff13               sar edi, 0x13
// 0062954c  81e7ff030000         and edi, 0x3ff
// 00629552  885501               mov byte ptr [ebp + 1], dl
// 00629555  8a041f               mov al, byte ptr [edi + ebx]
// 00629558  46                   inc esi
// 00629559  83c120               add ecx, 0x20
// 0062955c  83fe04               cmp esi, 4
// 0062955f  884502               mov byte ptr [ebp + 2], al
// 00629562  89742418             mov dword ptr [esp + 0x18], esi
// 00629566  0f8cb4feffff         jl 0x629420
// 0062956c  5f                   pop edi
// 0062956d  5e                   pop esi
// 0062956e  5d                   pop ebp
// 0062956f  5b                   pop ebx
// 00629570  81c498000000         add esp, 0x98
// 00629576  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
