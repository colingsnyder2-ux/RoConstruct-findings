// from server: 100% by auto
// roc 2007-08 0052bf00  unit: seg_00520000  size: 793 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052bf00
//
// 0052bf00  81ec98000000         sub esp, 0x98
// 0052bf06  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 0052bf0d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 0052bf14  8b5150               mov edx, dword ptr [ecx + 0x50]
// 0052bf17  53                   push ebx
// 0052bf18  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 0052bf1e  55                   push ebp
// 0052bf1f  56                   push esi
// 0052bf20  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 0052bf27  81c380000000         add ebx, 0x80
// 0052bf2d  8bc2                 mov eax, edx
// 0052bf2f  83c660               add esi, 0x60
// 0052bf32  2bc2                 sub eax, edx
// 0052bf34  57                   push edi
// 0052bf35  bf08000000           mov edi, 8
// 0052bf3a  8d440448             lea eax, [esp + eax + 0x48]
// 0052bf3e  895c2424             mov dword ptr [esp + 0x24], ebx
// 0052bf42  897c2418             mov dword ptr [esp + 0x18], edi
// 0052bf46  89442420             mov dword ptr [esp + 0x20], eax
// 0052bf4a  8d9b00000000         lea ebx, [ebx]
// 0052bf50  83ff04               cmp edi, 4
// 0052bf53  0f843c010000         je 0x52c095
// 0052bf59  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 0052bf5d  6685c9               test cx, cx
// 0052bf60  7538                 jne 0x52bf9a
// 0052bf62  66394ec0             cmp word ptr [esi - 0x40], cx
// 0052bf66  7532                 jne 0x52bf9a
// 0052bf68  66394ed0             cmp word ptr [esi - 0x30], cx
// 0052bf6c  752c                 jne 0x52bf9a
// 0052bf6e  66394ef0             cmp word ptr [esi - 0x10], cx
// 0052bf72  7526                 jne 0x52bf9a
// 0052bf74  66390e               cmp word ptr [esi], cx
// 0052bf77  7521                 jne 0x52bf9a
// 0052bf79  66394e10             cmp word ptr [esi + 0x10], cx
// 0052bf7d  751b                 jne 0x52bf9a
// 0052bf7f  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0052bf83  0faf0a               imul ecx, dword ptr [edx]
// 0052bf86  03c9                 add ecx, ecx
// 0052bf88  03c9                 add ecx, ecx
// 0052bf8a  8948e0               mov dword ptr [eax - 0x20], ecx
// 0052bf8d  8908                 mov dword ptr [eax], ecx
// 0052bf8f  894820               mov dword ptr [eax + 0x20], ecx
// 0052bf92  894840               mov dword ptr [eax + 0x40], ecx
// 0052bf95  e9fb000000           jmp 0x52c095
// 0052bf9a  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 0052bf9e  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 0052bfa2  0fbf3e               movsx edi, word ptr [esi]
// 0052bfa5  69c9213b0000         imul ecx, ecx, 0x3b21
// 0052bfab  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 0052bfb2  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0052bfb6  69ff7e180000         imul edi, edi, 0x187e
// 0052bfbc  0faf02               imul eax, dword ptr [edx]
// 0052bfbf  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0052bfc3  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0052bfc7  2bcf                 sub ecx, edi
// 0052bfc9  c1e00e               shl eax, 0xe
// 0052bfcc  8d3c01               lea edi, [ecx + eax]
// 0052bfcf  2bc1                 sub eax, ecx
// 0052bfd1  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0052bfd5  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 0052bfdc  8be8                 mov ebp, eax
// 0052bfde  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 0052bfe2  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 0052bfe9  89442414             mov dword ptr [esp + 0x14], eax
// 0052bfed  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 0052bff1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052bff5  69db87450000         imul ebx, ebx, 0x4587
// 0052bffb  0fbfc0               movsx eax, ax
// 0052bffe  0faf4220             imul eax, dword ptr [edx + 0x20]
// 0052c002  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052c006  69c9752e0000         imul ecx, ecx, 0x2e75
// 0052c00c  2bcb                 sub ecx, ebx
// 0052c00e  8bd8                 mov ebx, eax
// 0052c010  69c003520000         imul eax, eax, 0x5203
// 0052c016  69dbf9210000         imul ebx, ebx, 0x21f9
// 0052c01c  03cb                 add ecx, ebx
// 0052c01e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c022  69dbc2060000         imul ebx, ebx, 0x6c2
// 0052c028  2bcb                 sub ecx, ebx
// 0052c02a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052c02e  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0052c034  03c3                 add eax, ebx
// 0052c036  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052c03a  69db3e130000         imul ebx, ebx, 0x133e
// 0052c040  2bc3                 sub eax, ebx
// 0052c042  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c046  69db50100000         imul ebx, ebx, 0x1050
// 0052c04c  2bc3                 sub eax, ebx
// 0052c04e  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0052c055  89442410             mov dword ptr [esp + 0x10], eax
// 0052c059  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 0052c05d  8b442420             mov eax, dword ptr [esp + 0x20]
// 0052c061  81c700080000         add edi, 0x800
// 0052c067  c1ff0c               sar edi, 0xc
// 0052c06a  897840               mov dword ptr [eax + 0x40], edi
// 0052c06d  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 0052c074  2be9                 sub ebp, ecx
// 0052c076  c1fb0c               sar ebx, 0xc
// 0052c079  c1ff0c               sar edi, 0xc
// 0052c07c  81c500080000         add ebp, 0x800
// 0052c082  c1fd0c               sar ebp, 0xc
// 0052c085  8958e0               mov dword ptr [eax - 0x20], ebx
// 0052c088  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052c08c  8938                 mov dword ptr [eax], edi
// 0052c08e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0052c092  896820               mov dword ptr [eax + 0x20], ebp
// 0052c095  83ef01               sub edi, 1
// 0052c098  83c004               add eax, 4
// 0052c09b  83c602               add esi, 2
// 0052c09e  83c204               add edx, 4
// 0052c0a1  85ff                 test edi, edi
// 0052c0a3  89442420             mov dword ptr [esp + 0x20], eax
// 0052c0a7  897c2418             mov dword ptr [esp + 0x18], edi
// 0052c0ab  0f8f9ffeffff         jg 0x52bf50
// 0052c0b1  33f6                 xor esi, esi
// 0052c0b3  8d4c2428             lea ecx, [esp + 0x28]
// 0052c0b7  89742418             mov dword ptr [esp + 0x18], esi
// 0052c0bb  eb03                 jmp 0x52c0c0
// 0052c0bd  8d4900               lea ecx, [ecx]
// 0052c0c0  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 0052c0c7  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0052c0ca  8b5104               mov edx, dword ptr [ecx + 4]
// 0052c0cd  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 0052c0d4  85d2                 test edx, edx
// 0052c0d6  7537                 jne 0x52c10f
// 0052c0d8  395108               cmp dword ptr [ecx + 8], edx
// 0052c0db  7532                 jne 0x52c10f
// 0052c0dd  39510c               cmp dword ptr [ecx + 0xc], edx
// 0052c0e0  752d                 jne 0x52c10f
// 0052c0e2  395114               cmp dword ptr [ecx + 0x14], edx
// 0052c0e5  7528                 jne 0x52c10f
// 0052c0e7  395118               cmp dword ptr [ecx + 0x18], edx
// 0052c0ea  7523                 jne 0x52c10f
// 0052c0ec  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0052c0ef  751e                 jne 0x52c10f
// 0052c0f1  8b01                 mov eax, dword ptr [ecx]
// 0052c0f3  83c010               add eax, 0x10
// 0052c0f6  c1f805               sar eax, 5
// 0052c0f9  25ff030000           and eax, 0x3ff
// 0052c0fe  8a0418               mov al, byte ptr [eax + ebx]
// 0052c101  884500               mov byte ptr [ebp], al
// 0052c104  884501               mov byte ptr [ebp + 1], al
// 0052c107  884503               mov byte ptr [ebp + 3], al
// 0052c10a  e9e9000000           jmp 0x52c1f8
// 0052c10f  8b4108               mov eax, dword ptr [ecx + 8]
// 0052c112  8b7118               mov esi, dword ptr [ecx + 0x18]
// 0052c115  69c0213b0000         imul eax, eax, 0x3b21
// 0052c11b  8b39                 mov edi, dword ptr [ecx]
// 0052c11d  69f67e180000         imul esi, esi, 0x187e
// 0052c123  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0052c126  2bc6                 sub eax, esi
// 0052c128  c1e70e               shl edi, 0xe
// 0052c12b  8d3438               lea esi, [eax + edi]
// 0052c12e  2bf8                 sub edi, eax
// 0052c130  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052c133  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0052c137  69db87450000         imul ebx, ebx, 0x4587
// 0052c13d  89442414             mov dword ptr [esp + 0x14], eax
// 0052c141  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0052c144  89442410             mov dword ptr [esp + 0x10], eax
// 0052c148  69c0752e0000         imul eax, eax, 0x2e75
// 0052c14e  2bc3                 sub eax, ebx
// 0052c150  8bda                 mov ebx, edx
// 0052c152  69d203520000         imul edx, edx, 0x5203
// 0052c158  69dbf9210000         imul ebx, ebx, 0x21f9
// 0052c15e  03c3                 add eax, ebx
// 0052c160  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c164  69dbc2060000         imul ebx, ebx, 0x6c2
// 0052c16a  2bc3                 sub eax, ebx
// 0052c16c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052c170  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 0052c176  03d3                 add edx, ebx
// 0052c178  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0052c17c  69db3e130000         imul ebx, ebx, 0x133e
// 0052c182  2bd3                 sub edx, ebx
// 0052c184  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0052c188  69db50100000         imul ebx, ebx, 0x1050
// 0052c18e  2bd3                 sub edx, ebx
// 0052c190  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0052c194  89542410             mov dword ptr [esp + 0x10], edx
// 0052c198  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0052c19f  2b742410             sub esi, dword ptr [esp + 0x10]
// 0052c1a3  c1fa13               sar edx, 0x13
// 0052c1a6  81e2ff030000         and edx, 0x3ff
// 0052c1ac  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0052c1b0  81c600000400         add esi, 0x40000
// 0052c1b6  885500               mov byte ptr [ebp], dl
// 0052c1b9  c1fe13               sar esi, 0x13
// 0052c1bc  81e6ff030000         and esi, 0x3ff
// 0052c1c2  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 0052c1c6  8b742418             mov esi, dword ptr [esp + 0x18]
// 0052c1ca  885503               mov byte ptr [ebp + 3], dl
// 0052c1cd  8d940700000400       lea edx, [edi + eax + 0x40000]
// 0052c1d4  c1fa13               sar edx, 0x13
// 0052c1d7  2bf8                 sub edi, eax
// 0052c1d9  81e2ff030000         and edx, 0x3ff
// 0052c1df  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 0052c1e3  81c700000400         add edi, 0x40000
// 0052c1e9  c1ff13               sar edi, 0x13
// 0052c1ec  81e7ff030000         and edi, 0x3ff
// 0052c1f2  885501               mov byte ptr [ebp + 1], dl
// 0052c1f5  8a041f               mov al, byte ptr [edi + ebx]
// 0052c1f8  83c601               add esi, 1
// 0052c1fb  83c120               add ecx, 0x20
// 0052c1fe  83fe04               cmp esi, 4
// 0052c201  884502               mov byte ptr [ebp + 2], al
// 0052c204  89742418             mov dword ptr [esp + 0x18], esi
// 0052c208  0f8cb2feffff         jl 0x52c0c0
// 0052c20e  5f                   pop edi
// 0052c20f  5e                   pop esi
// 0052c210  5d                   pop ebp
// 0052c211  5b                   pop ebx
// 0052c212  81c498000000         add esp, 0x98
// 0052c218  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
