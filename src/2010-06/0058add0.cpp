// roc 2010-06 0058add0  unit: seg_00580000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0058add0
//
// 0058add0  81ec98000000         sub esp, 0x98
// 0058add6  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0058addd  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0058ade4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0058ade7  53                   push ebx
// 0058ade8  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0058adee  55                   push ebp
// 0058adef  56                   push esi
// 0058adf0  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0058adf7  83eb80               sub ebx, -0x80
// 0058adfa  8bc2                 mov eax, edx
// 0058adfc  83c660               add esi, 0x60
// 0058adff  2bc2                 sub eax, edx
// 0058ae01  57                   push edi
// 0058ae02  bf08000000           mov edi, 8
// 0058ae07  8d440448             lea eax, [esp + eax + 0x48]
// 0058ae0b  895c2424             mov dword ptr [esp + 0x24], ebx
// 0058ae0f  897c2418             mov dword ptr [esp + 0x18], edi
// 0058ae13  89442420             mov dword ptr [esp + 0x20], eax
// 0058ae17  83ff04               cmp edi, 4
// 0058ae1a  0f843a010000         je 0x58af5a
// 0058ae20  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 0058ae24  6685c9               test cx, cx
// 0058ae27  7538                 jne 0x58ae61
// 0058ae29  66394ec0             cmp word ptr [esi - 0x40], cx
// 0058ae2d  7532                 jne 0x58ae61
// 0058ae2f  66394ed0             cmp word ptr [esi - 0x30], cx
// 0058ae33  752c                 jne 0x58ae61
// 0058ae35  66394ef0             cmp word ptr [esi - 0x10], cx
// 0058ae39  7526                 jne 0x58ae61
// 0058ae3b  66390e               cmp word ptr [esi], cx
// 0058ae3e  7521                 jne 0x58ae61
// 0058ae40  66394e10             cmp word ptr [esi + 0x10], cx
// 0058ae44  751b                 jne 0x58ae61
// 0058ae46  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0058ae4a  0faf0a               imul ecx, dword ptr [edx]
// 0058ae4d  03c9                 add ecx, ecx
// 0058ae4f  03c9                 add ecx, ecx
// 0058ae51  8948e0               mov dword ptr [eax - 0x20], ecx
// 0058ae54  8908                 mov dword ptr [eax], ecx
// 0058ae56  894820               mov dword ptr [eax + 0x20], ecx
// 0058ae59  894840               mov dword ptr [eax + 0x40], ecx
// 0058ae5c  e9f9000000           jmp 0x58af5a
// 0058ae61  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 0058ae65  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 0058ae69  0fbf3e               movsx edi, word ptr [esi]
// 0058ae6c  69c9213b0000         imul ecx, ecx, 0x3b21
// 0058ae72  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 0058ae79  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0058ae7d  69ff7e180000         imul edi, edi, 0x187e
// 0058ae83  0faf02               imul eax, dword ptr [edx]
// 0058ae86  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0058ae8a  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0058ae8e  2bcf                 sub ecx, edi
// 0058ae90  c1e00e               shl eax, 0xe
// 0058ae93  8d3c01               lea edi, [ecx + eax]
// 0058ae96  2bc1                 sub eax, ecx
// 0058ae98  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0058ae9c  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 0058aea3  8be8                 mov ebp, eax
// 0058aea5  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 0058aea9  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 0058aeb0  89442414             mov dword ptr [esp + 0x14], eax
// 0058aeb4  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 0058aeb8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058aebc  69db87450000         imul ebx, ebx, 0x4587
// 0058aec2  98                   cwde 
// 0058aec3  0faf4220             imul eax, dword ptr [edx + 0x20]
// 0058aec7  894c2410             mov dword ptr [esp + 0x10], ecx
// 0058aecb  69c9752e0000         imul ecx, ecx, 0x2e75
// 0058aed1  2bcb                 sub ecx, ebx
// 0058aed3  8bd8                 mov ebx, eax
// 0058aed5  69c003520000         imul eax, eax, 0x5203
// 0058aedb  69dbf9210000         imul ebx, ebx, 0x21f9
// 0058aee1  03cb                 add ecx, ebx
// 0058aee3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058aee7  69dbc2060000         imul ebx, ebx, 0x6c2
// 0058aeed  2bcb                 sub ecx, ebx
// 0058aeef  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058aef3  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0058aef9  03c3                 add eax, ebx
// 0058aefb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058aeff  69db3e130000         imul ebx, ebx, 0x133e
// 0058af05  2bc3                 sub eax, ebx
// 0058af07  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058af0b  69db50100000         imul ebx, ebx, 0x1050
// 0058af11  2bc3                 sub eax, ebx
// 0058af13  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0058af1a  89442410             mov dword ptr [esp + 0x10], eax
// 0058af1e  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0058af22  8b442420             mov eax, dword ptr [esp + 0x20]
// 0058af26  81c700080000         add edi, 0x800
// 0058af2c  c1ff0c               sar edi, 0xc
// 0058af2f  897840               mov dword ptr [eax + 0x40], edi
// 0058af32  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 0058af39  2be9                 sub ebp, ecx
// 0058af3b  c1fb0c               sar ebx, 0xc
// 0058af3e  c1ff0c               sar edi, 0xc
// 0058af41  81c500080000         add ebp, 0x800
// 0058af47  c1fd0c               sar ebp, 0xc
// 0058af4a  8958e0               mov dword ptr [eax - 0x20], ebx
// 0058af4d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058af51  8938                 mov dword ptr [eax], edi
// 0058af53  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0058af57  896820               mov dword ptr [eax + 0x20], ebp
// 0058af5a  4f                   dec edi
// 0058af5b  83c004               add eax, 4
// 0058af5e  83c602               add esi, 2
// 0058af61  83c204               add edx, 4
// 0058af64  89442420             mov dword ptr [esp + 0x20], eax
// 0058af68  897c2418             mov dword ptr [esp + 0x18], edi
// 0058af6c  85ff                 test edi, edi
// 0058af6e  0f8fa3feffff         jg 0x58ae17
// 0058af74  33f6                 xor esi, esi
// 0058af76  8d4c2428             lea ecx, [esp + 0x28]
// 0058af7a  89742418             mov dword ptr [esp + 0x18], esi
// 0058af7e  8bff                 mov edi, edi
// 0058af80  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0058af87  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0058af8a  8b5104               mov edx, dword ptr [ecx + 4]
// 0058af8d  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 0058af94  85d2                 test edx, edx
// 0058af96  7537                 jne 0x58afcf
// 0058af98  395108               cmp dword ptr [ecx + 8], edx
// 0058af9b  7532                 jne 0x58afcf
// 0058af9d  39510c               cmp dword ptr [ecx + 0xc], edx
// 0058afa0  752d                 jne 0x58afcf
// 0058afa2  395114               cmp dword ptr [ecx + 0x14], edx
// 0058afa5  7528                 jne 0x58afcf
// 0058afa7  395118               cmp dword ptr [ecx + 0x18], edx
// 0058afaa  7523                 jne 0x58afcf
// 0058afac  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0058afaf  751e                 jne 0x58afcf
// 0058afb1  8b01                 mov eax, dword ptr [ecx]
// 0058afb3  83c010               add eax, 0x10
// 0058afb6  c1f805               sar eax, 5
// 0058afb9  25ff030000           and eax, 0x3ff
// 0058afbe  8a0418               mov al, byte ptr [eax + ebx]
// 0058afc1  884500               mov byte ptr [ebp], al
// 0058afc4  884501               mov byte ptr [ebp + 1], al
// 0058afc7  884503               mov byte ptr [ebp + 3], al
// 0058afca  e9e9000000           jmp 0x58b0b8
// 0058afcf  8b4108               mov eax, dword ptr [ecx + 8]
// 0058afd2  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0058afd5  69c0213b0000         imul eax, eax, 0x3b21
// 0058afdb  8b39                 mov edi, dword ptr [ecx]
// 0058afdd  69f67e180000         imul esi, esi, 0x187e
// 0058afe3  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0058afe6  2bc6                 sub eax, esi
// 0058afe8  c1e70e               shl edi, 0xe
// 0058afeb  8d3438               lea esi, [eax + edi]
// 0058afee  2bf8                 sub edi, eax
// 0058aff0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0058aff3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0058aff7  69db87450000         imul ebx, ebx, 0x4587
// 0058affd  89442414             mov dword ptr [esp + 0x14], eax
// 0058b001  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0058b004  89442410             mov dword ptr [esp + 0x10], eax
// 0058b008  69c0752e0000         imul eax, eax, 0x2e75
// 0058b00e  2bc3                 sub eax, ebx
// 0058b010  8bda                 mov ebx, edx
// 0058b012  69d203520000         imul edx, edx, 0x5203
// 0058b018  69dbf9210000         imul ebx, ebx, 0x21f9
// 0058b01e  03c3                 add eax, ebx
// 0058b020  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058b024  69dbc2060000         imul ebx, ebx, 0x6c2
// 0058b02a  2bc3                 sub eax, ebx
// 0058b02c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0058b030  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0058b036  03d3                 add edx, ebx
// 0058b038  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058b03c  69db3e130000         imul ebx, ebx, 0x133e
// 0058b042  2bd3                 sub edx, ebx
// 0058b044  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0058b048  69db50100000         imul ebx, ebx, 0x1050
// 0058b04e  2bd3                 sub edx, ebx
// 0058b050  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0058b054  89542410             mov dword ptr [esp + 0x10], edx
// 0058b058  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0058b05f  2b742410             sub esi, dword ptr [esp + 0x10]
// 0058b063  c1fa13               sar edx, 0x13
// 0058b066  81e2ff030000         and edx, 0x3ff
// 0058b06c  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0058b070  81c600000400         add esi, 0x40000
// 0058b076  885500               mov byte ptr [ebp], dl
// 0058b079  c1fe13               sar esi, 0x13
// 0058b07c  81e6ff030000         and esi, 0x3ff
// 0058b082  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 0058b086  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058b08a  885503               mov byte ptr [ebp + 3], dl
// 0058b08d  8d940700000400       lea edx, [edi + eax + 0x40000]
// 0058b094  c1fa13               sar edx, 0x13
// 0058b097  2bf8                 sub edi, eax
// 0058b099  81e2ff030000         and edx, 0x3ff
// 0058b09f  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0058b0a3  81c700000400         add edi, 0x40000
// 0058b0a9  c1ff13               sar edi, 0x13
// 0058b0ac  81e7ff030000         and edi, 0x3ff
// 0058b0b2  885501               mov byte ptr [ebp + 1], dl
// 0058b0b5  8a041f               mov al, byte ptr [edi + ebx]
// 0058b0b8  46                   inc esi
// 0058b0b9  83c120               add ecx, 0x20
// 0058b0bc  83fe04               cmp esi, 4
// 0058b0bf  884502               mov byte ptr [ebp + 2], al
// 0058b0c2  89742418             mov dword ptr [esp + 0x18], esi
// 0058b0c6  0f8cb4feffff         jl 0x58af80
// 0058b0cc  5f                   pop edi
// 0058b0cd  5e                   pop esi
// 0058b0ce  5d                   pop ebp
// 0058b0cf  5b                   pop ebx
// 0058b0d0  81c498000000         add esp, 0x98
// 0058b0d6  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
