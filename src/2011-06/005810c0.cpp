// from server: 100% by auto
// roc 2011-06 005810c0  unit: seg_00580000  size: 775 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005810c0
//
// 005810c0  81ec98000000         sub esp, 0x98
// 005810c6  8b84249c000000       mov eax, dword ptr [esp + 0x9c]
// 005810cd  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 005810d4  8b5150               mov edx, dword ptr [ecx + 0x50]
// 005810d7  53                   push ebx
// 005810d8  8b9820010000         mov ebx, dword ptr [eax + 0x120]
// 005810de  55                   push ebp
// 005810df  56                   push esi
// 005810e0  8bb424b0000000       mov esi, dword ptr [esp + 0xb0]
// 005810e7  83eb80               sub ebx, -0x80
// 005810ea  8bc2                 mov eax, edx
// 005810ec  83c660               add esi, 0x60
// 005810ef  2bc2                 sub eax, edx
// 005810f1  57                   push edi
// 005810f2  bf08000000           mov edi, 8
// 005810f7  8d440448             lea eax, [esp + eax + 0x48]
// 005810fb  895c2424             mov dword ptr [esp + 0x24], ebx
// 005810ff  897c2418             mov dword ptr [esp + 0x18], edi
// 00581103  89442420             mov dword ptr [esp + 0x20], eax
// 00581107  83ff04               cmp edi, 4
// 0058110a  0f843a010000         je 0x58124a
// 00581110  0fb74eb0             movzx ecx, word ptr [esi - 0x50]
// 00581114  6685c9               test cx, cx
// 00581117  7538                 jne 0x581151
// 00581119  66394ec0             cmp word ptr [esi - 0x40], cx
// 0058111d  7532                 jne 0x581151
// 0058111f  66394ed0             cmp word ptr [esi - 0x30], cx
// 00581123  752c                 jne 0x581151
// 00581125  66394ef0             cmp word ptr [esi - 0x10], cx
// 00581129  7526                 jne 0x581151
// 0058112b  66390e               cmp word ptr [esi], cx
// 0058112e  7521                 jne 0x581151
// 00581130  66394e10             cmp word ptr [esi + 0x10], cx
// 00581134  751b                 jne 0x581151
// 00581136  0fbf4ea0             movsx ecx, word ptr [esi - 0x60]
// 0058113a  0faf0a               imul ecx, dword ptr [edx]
// 0058113d  03c9                 add ecx, ecx
// 0058113f  03c9                 add ecx, ecx
// 00581141  8948e0               mov dword ptr [eax - 0x20], ecx
// 00581144  8908                 mov dword ptr [eax], ecx
// 00581146  894820               mov dword ptr [eax + 0x20], ecx
// 00581149  894840               mov dword ptr [eax + 0x40], ecx
// 0058114c  e9f9000000           jmp 0x58124a
// 00581151  0fbf4ec0             movsx ecx, word ptr [esi - 0x40]
// 00581155  0faf4a40             imul ecx, dword ptr [edx + 0x40]
// 00581159  0fbf3e               movsx edi, word ptr [esi]
// 0058115c  69c9213b0000         imul ecx, ecx, 0x3b21
// 00581162  0fafbac0000000       imul edi, dword ptr [edx + 0xc0]
// 00581169  0fbf46a0             movsx eax, word ptr [esi - 0x60]
// 0058116d  69ff7e180000         imul edi, edi, 0x187e
// 00581173  0faf02               imul eax, dword ptr [edx]
// 00581176  0fbf5ed0             movsx ebx, word ptr [esi - 0x30]
// 0058117a  0faf5a60             imul ebx, dword ptr [edx + 0x60]
// 0058117e  2bcf                 sub ecx, edi
// 00581180  c1e00e               shl eax, 0xe
// 00581183  8d3c01               lea edi, [ecx + eax]
// 00581186  2bc1                 sub eax, ecx
// 00581188  0fbf4ef0             movsx ecx, word ptr [esi - 0x10]
// 0058118c  0faf8aa0000000       imul ecx, dword ptr [edx + 0xa0]
// 00581193  8be8                 mov ebp, eax
// 00581195  0fbf4610             movsx eax, word ptr [esi + 0x10]
// 00581199  0faf82e0000000       imul eax, dword ptr [edx + 0xe0]
// 005811a0  89442414             mov dword ptr [esp + 0x14], eax
// 005811a4  0fb746b0             movzx eax, word ptr [esi - 0x50]
// 005811a8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005811ac  69db87450000         imul ebx, ebx, 0x4587
// 005811b2  98                   cwde 
// 005811b3  0faf4220             imul eax, dword ptr [edx + 0x20]
// 005811b7  894c2410             mov dword ptr [esp + 0x10], ecx
// 005811bb  69c9752e0000         imul ecx, ecx, 0x2e75
// 005811c1  2bcb                 sub ecx, ebx
// 005811c3  8bd8                 mov ebx, eax
// 005811c5  69c003520000         imul eax, eax, 0x5203
// 005811cb  69dbf9210000         imul ebx, ebx, 0x21f9
// 005811d1  03cb                 add ecx, ebx
// 005811d3  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005811d7  69dbc2060000         imul ebx, ebx, 0x6c2
// 005811dd  2bcb                 sub ecx, ebx
// 005811df  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005811e3  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 005811e9  03c3                 add eax, ebx
// 005811eb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005811ef  69db3e130000         imul ebx, ebx, 0x133e
// 005811f5  2bc3                 sub eax, ebx
// 005811f7  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005811fb  69db50100000         imul ebx, ebx, 0x1050
// 00581201  2bc3                 sub eax, ebx
// 00581203  8d9c0700080000       lea ebx, [edi + eax + 0x800]
// 0058120a  89442410             mov dword ptr [esp + 0x10], eax
// 0058120e  2b7c2410             sub edi, dword ptr [esp + 0x10]
// 00581212  8b442420             mov eax, dword ptr [esp + 0x20]
// 00581216  81c700080000         add edi, 0x800
// 0058121c  c1ff0c               sar edi, 0xc
// 0058121f  897840               mov dword ptr [eax + 0x40], edi
// 00581222  8dbc2900080000       lea edi, [ecx + ebp + 0x800]
// 00581229  2be9                 sub ebp, ecx
// 0058122b  c1fb0c               sar ebx, 0xc
// 0058122e  c1ff0c               sar edi, 0xc
// 00581231  81c500080000         add ebp, 0x800
// 00581237  c1fd0c               sar ebp, 0xc
// 0058123a  8958e0               mov dword ptr [eax - 0x20], ebx
// 0058123d  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00581241  8938                 mov dword ptr [eax], edi
// 00581243  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00581247  896820               mov dword ptr [eax + 0x20], ebp
// 0058124a  4f                   dec edi
// 0058124b  83c004               add eax, 4
// 0058124e  83c602               add esi, 2
// 00581251  83c204               add edx, 4
// 00581254  89442420             mov dword ptr [esp + 0x20], eax
// 00581258  897c2418             mov dword ptr [esp + 0x18], edi
// 0058125c  85ff                 test edi, edi
// 0058125e  0f8fa3feffff         jg 0x581107
// 00581264  33f6                 xor esi, esi
// 00581266  8d4c2428             lea ecx, [esp + 0x28]
// 0058126a  89742418             mov dword ptr [esp + 0x18], esi
// 0058126e  8bff                 mov edi, edi
// 00581270  8b9424b8000000       mov edx, dword ptr [esp + 0xb8]
// 00581277  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 0058127a  8b5104               mov edx, dword ptr [ecx + 4]
// 0058127d  03ac24bc000000       add ebp, dword ptr [esp + 0xbc]
// 00581284  85d2                 test edx, edx
// 00581286  7537                 jne 0x5812bf
// 00581288  395108               cmp dword ptr [ecx + 8], edx
// 0058128b  7532                 jne 0x5812bf
// 0058128d  39510c               cmp dword ptr [ecx + 0xc], edx
// 00581290  752d                 jne 0x5812bf
// 00581292  395114               cmp dword ptr [ecx + 0x14], edx
// 00581295  7528                 jne 0x5812bf
// 00581297  395118               cmp dword ptr [ecx + 0x18], edx
// 0058129a  7523                 jne 0x5812bf
// 0058129c  39511c               cmp dword ptr [ecx + 0x1c], edx
// 0058129f  751e                 jne 0x5812bf
// 005812a1  8b01                 mov eax, dword ptr [ecx]
// 005812a3  83c010               add eax, 0x10
// 005812a6  c1f805               sar eax, 5
// 005812a9  25ff030000           and eax, 0x3ff
// 005812ae  8a0418               mov al, byte ptr [eax + ebx]
// 005812b1  884500               mov byte ptr [ebp], al
// 005812b4  884501               mov byte ptr [ebp + 1], al
// 005812b7  884503               mov byte ptr [ebp + 3], al
// 005812ba  e9e9000000           jmp 0x5813a8
// 005812bf  8b4108               mov eax, dword ptr [ecx + 8]
// 005812c2  8b7118               mov esi, dword ptr [ecx + 0x18]
// 005812c5  69c0213b0000         imul eax, eax, 0x3b21
// 005812cb  8b39                 mov edi, dword ptr [ecx]
// 005812cd  69f67e180000         imul esi, esi, 0x187e
// 005812d3  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 005812d6  2bc6                 sub eax, esi
// 005812d8  c1e70e               shl edi, 0xe
// 005812db  8d3438               lea esi, [eax + edi]
// 005812de  2bf8                 sub edi, eax
// 005812e0  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 005812e3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005812e7  69db87450000         imul ebx, ebx, 0x4587
// 005812ed  89442414             mov dword ptr [esp + 0x14], eax
// 005812f1  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005812f4  89442410             mov dword ptr [esp + 0x10], eax
// 005812f8  69c0752e0000         imul eax, eax, 0x2e75
// 005812fe  2bc3                 sub eax, ebx
// 00581300  8bda                 mov ebx, edx
// 00581302  69d203520000         imul edx, edx, 0x5203
// 00581308  69dbf9210000         imul ebx, ebx, 0x21f9
// 0058130e  03c3                 add eax, ebx
// 00581310  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00581314  69dbc2060000         imul ebx, ebx, 0x6c2
// 0058131a  2bc3                 sub eax, ebx
// 0058131c  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00581320  69dbcd1c0000         imul ebx, ebx, 0x1ccd
// 00581326  03d3                 add edx, ebx
// 00581328  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0058132c  69db3e130000         imul ebx, ebx, 0x133e
// 00581332  2bd3                 sub edx, ebx
// 00581334  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00581338  69db50100000         imul ebx, ebx, 0x1050
// 0058133e  2bd3                 sub edx, ebx
// 00581340  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00581344  89542410             mov dword ptr [esp + 0x10], edx
// 00581348  8d941600000400       lea edx, [esi + edx + 0x40000]
// 0058134f  2b742410             sub esi, dword ptr [esp + 0x10]
// 00581353  c1fa13               sar edx, 0x13
// 00581356  81e2ff030000         and edx, 0x3ff
// 0058135c  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00581360  81c600000400         add esi, 0x40000
// 00581366  885500               mov byte ptr [ebp], dl
// 00581369  c1fe13               sar esi, 0x13
// 0058136c  81e6ff030000         and esi, 0x3ff
// 00581372  0fb6141e             movzx edx, byte ptr [esi + ebx]
// 00581376  8b742418             mov esi, dword ptr [esp + 0x18]
// 0058137a  885503               mov byte ptr [ebp + 3], dl
// 0058137d  8d940700000400       lea edx, [edi + eax + 0x40000]
// 00581384  c1fa13               sar edx, 0x13
// 00581387  2bf8                 sub edi, eax
// 00581389  81e2ff030000         and edx, 0x3ff
// 0058138f  0fb6141a             movzx edx, byte ptr [edx + ebx]
// 00581393  81c700000400         add edi, 0x40000
// 00581399  c1ff13               sar edi, 0x13
// 0058139c  81e7ff030000         and edi, 0x3ff
// 005813a2  885501               mov byte ptr [ebp + 1], dl
// 005813a5  8a041f               mov al, byte ptr [edi + ebx]
// 005813a8  46                   inc esi
// 005813a9  83c120               add ecx, 0x20
// 005813ac  83fe04               cmp esi, 4
// 005813af  884502               mov byte ptr [ebp + 2], al
// 005813b2  89742418             mov dword ptr [esp + 0x18], esi
// 005813b6  0f8cb4feffff         jl 0x581270
// 005813bc  5f                   pop edi
// 005813bd  5e                   pop esi
// 005813be  5d                   pop ebp
// 005813bf  5b                   pop ebx
// 005813c0  81c498000000         add esp, 0x98
// 005813c6  c3                   ret 
// library jpeg-6b/jidctred.c (function _jpeg_idct_4x4)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jidctred.c
