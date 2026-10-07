// roc 2007-08 00512bb0  unit: G3D::_internal::DialogTemplate  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00512bb0
//
// 00512bb0  83f80e               cmp eax, 0xe
// 00512bb3  53                   push ebx
// 00512bb4  8d1c08               lea ebx, [eax + ecx]
// 00512bb7  b146                 mov cl, 0x46
// 00512bb9  0f8268010000         jb 0x512d27
// 00512bbf  803f4a               cmp byte ptr [edi], 0x4a
// 00512bc2  0f855f010000         jne 0x512d27
// 00512bc8  384f01               cmp byte ptr [edi + 1], cl
// 00512bcb  0f8556010000         jne 0x512d27
// 00512bd1  807f0249             cmp byte ptr [edi + 2], 0x49
// 00512bd5  0f854c010000         jne 0x512d27
// 00512bdb  384f03               cmp byte ptr [edi + 3], cl
// 00512bde  0f8543010000         jne 0x512d27
// 00512be4  807f0400             cmp byte ptr [edi + 4], 0
// 00512be8  0f8539010000         jne 0x512d27
// 00512bee  c6860001000001       mov byte ptr [esi + 0x100], 1
// 00512bf5  8a5705               mov dl, byte ptr [edi + 5]
// 00512bf8  889601010000         mov byte ptr [esi + 0x101], dl
// 00512bfe  8a4706               mov al, byte ptr [edi + 6]
// 00512c01  888602010000         mov byte ptr [esi + 0x102], al
// 00512c07  8a4f07               mov cl, byte ptr [edi + 7]
// 00512c0a  888e03010000         mov byte ptr [esi + 0x103], cl
// 00512c10  0fb65708             movzx edx, byte ptr [edi + 8]
// 00512c14  660fb64709           movzx ax, byte ptr [edi + 9]
// 00512c19  66c1e208             shl dx, 8
// 00512c1d  6603d0               add dx, ax
// 00512c20  66899604010000       mov word ptr [esi + 0x104], dx
// 00512c27  660fb64f0a           movzx cx, byte ptr [edi + 0xa]
// 00512c2c  0fb6570b             movzx edx, byte ptr [edi + 0xb]
// 00512c30  66c1e108             shl cx, 8
// 00512c34  6603ca               add cx, dx
// 00512c37  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 00512c3e  66898e06010000       mov word ptr [esi + 0x106], cx
// 00512c45  742e                 je 0x512c75
// 00512c47  8b06                 mov eax, dword ptr [esi]
// 00512c49  c7401477000000       mov dword ptr [eax + 0x14], 0x77
// 00512c50  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 00512c57  8b16                 mov edx, dword ptr [esi]
// 00512c59  894a18               mov dword ptr [edx + 0x18], ecx
// 00512c5c  0fb68602010000       movzx eax, byte ptr [esi + 0x102]
// 00512c63  8b0e                 mov ecx, dword ptr [esi]
// 00512c65  89411c               mov dword ptr [ecx + 0x1c], eax
// 00512c68  8b16                 mov edx, dword ptr [esi]
// 00512c6a  8b4204               mov eax, dword ptr [edx + 4]
// 00512c6d  6aff                 push -1
// 00512c6f  56                   push esi
// 00512c70  ffd0                 call eax
// 00512c72  83c408               add esp, 8
// 00512c75  8b06                 mov eax, dword ptr [esi]
// 00512c77  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 00512c7e  83c018               add eax, 0x18
// 00512c81  8908                 mov dword ptr [eax], ecx
// 00512c83  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 00512c8a  895004               mov dword ptr [eax + 4], edx
// 00512c8d  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 00512c94  894808               mov dword ptr [eax + 8], ecx
// 00512c97  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 00512c9e  89500c               mov dword ptr [eax + 0xc], edx
// 00512ca1  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 00512ca8  894810               mov dword ptr [eax + 0x10], ecx
// 00512cab  8b16                 mov edx, dword ptr [esi]
// 00512cad  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 00512cb4  8b06                 mov eax, dword ptr [esi]
// 00512cb6  8b4804               mov ecx, dword ptr [eax + 4]
// 00512cb9  6a01                 push 1
// 00512cbb  56                   push esi
// 00512cbc  ffd1                 call ecx
// 00512cbe  8a570c               mov dl, byte ptr [edi + 0xc]
// 00512cc1  83c408               add esp, 8
// 00512cc4  0a570d               or dl, byte ptr [edi + 0xd]
// 00512cc7  7428                 je 0x512cf1
// 00512cc9  8b06                 mov eax, dword ptr [esi]
// 00512ccb  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00512cd2  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00512cd6  8b16                 mov edx, dword ptr [esi]
// 00512cd8  894a18               mov dword ptr [edx + 0x18], ecx
// 00512cdb  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 00512cdf  8b0e                 mov ecx, dword ptr [esi]
// 00512ce1  89411c               mov dword ptr [ecx + 0x1c], eax
// 00512ce4  8b16                 mov edx, dword ptr [esi]
// 00512ce6  8b4204               mov eax, dword ptr [edx + 4]
// 00512ce9  6a01                 push 1
// 00512ceb  56                   push esi
// 00512cec  ffd0                 call eax
// 00512cee  83c408               add esp, 8
// 00512cf1  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 00512cf5  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 00512cf9  0fafc1               imul eax, ecx
// 00512cfc  83eb0e               sub ebx, 0xe
// 00512cff  8d1440               lea edx, [eax + eax*2]
// 00512d02  3bda                 cmp ebx, edx
// 00512d04  0f84f6000000         je 0x512e00
// 00512d0a  8b06                 mov eax, dword ptr [esi]
// 00512d0c  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 00512d13  8b0e                 mov ecx, dword ptr [esi]
// 00512d15  895918               mov dword ptr [ecx + 0x18], ebx
// 00512d18  8b16                 mov edx, dword ptr [esi]
// 00512d1a  8b4204               mov eax, dword ptr [edx + 4]
// 00512d1d  6a01                 push 1
// 00512d1f  56                   push esi
// 00512d20  ffd0                 call eax
// 00512d22  83c408               add esp, 8
// 00512d25  5b                   pop ebx
// 00512d26  c3                   ret 
// 00512d27  83f806               cmp eax, 6
// 00512d2a  0f82b5000000         jb 0x512de5
// 00512d30  803f4a               cmp byte ptr [edi], 0x4a
// 00512d33  0f85ac000000         jne 0x512de5
// 00512d39  384f01               cmp byte ptr [edi + 1], cl
// 00512d3c  0f85a3000000         jne 0x512de5
// 00512d42  b058                 mov al, 0x58
// 00512d44  384702               cmp byte ptr [edi + 2], al
// 00512d47  0f8598000000         jne 0x512de5
// 00512d4d  384703               cmp byte ptr [edi + 3], al
// 00512d50  0f858f000000         jne 0x512de5
// 00512d56  807f0400             cmp byte ptr [edi + 4], 0
// 00512d5a  0f8585000000         jne 0x512de5
// 00512d60  0fb64705             movzx eax, byte ptr [edi + 5]
// 00512d64  83e810               sub eax, 0x10
// 00512d67  6a01                 push 1
// 00512d69  56                   push esi
// 00512d6a  745f                 je 0x512dcb
// 00512d6c  83e801               sub eax, 1
// 00512d6f  7440                 je 0x512db1
// 00512d71  83e802               sub eax, 2
// 00512d74  8b0e                 mov ecx, dword ptr [esi]
// 00512d76  7421                 je 0x512d99
// 00512d78  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 00512d7f  0fb65705             movzx edx, byte ptr [edi + 5]
// 00512d83  8b06                 mov eax, dword ptr [esi]
// 00512d85  895018               mov dword ptr [eax + 0x18], edx
// 00512d88  8b0e                 mov ecx, dword ptr [esi]
// 00512d8a  89591c               mov dword ptr [ecx + 0x1c], ebx
// 00512d8d  8b16                 mov edx, dword ptr [esi]
// 00512d8f  8b4204               mov eax, dword ptr [edx + 4]
// 00512d92  ffd0                 call eax
// 00512d94  83c408               add esp, 8
// 00512d97  5b                   pop ebx
// 00512d98  c3                   ret 
// 00512d99  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 00512da0  8b16                 mov edx, dword ptr [esi]
// 00512da2  895a18               mov dword ptr [edx + 0x18], ebx
// 00512da5  8b06                 mov eax, dword ptr [esi]
// 00512da7  8b4804               mov ecx, dword ptr [eax + 4]
// 00512daa  ffd1                 call ecx
// 00512dac  83c408               add esp, 8
// 00512daf  5b                   pop ebx
// 00512db0  c3                   ret 
// 00512db1  8b16                 mov edx, dword ptr [esi]
// 00512db3  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 00512dba  8b06                 mov eax, dword ptr [esi]
// 00512dbc  895818               mov dword ptr [eax + 0x18], ebx
// 00512dbf  8b0e                 mov ecx, dword ptr [esi]
// 00512dc1  8b5104               mov edx, dword ptr [ecx + 4]
// 00512dc4  ffd2                 call edx
// 00512dc6  83c408               add esp, 8
// 00512dc9  5b                   pop ebx
// 00512dca  c3                   ret 
// 00512dcb  8b06                 mov eax, dword ptr [esi]
// 00512dcd  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00512dd4  8b0e                 mov ecx, dword ptr [esi]
// 00512dd6  895918               mov dword ptr [ecx + 0x18], ebx
// 00512dd9  8b16                 mov edx, dword ptr [esi]
// 00512ddb  8b4204               mov eax, dword ptr [edx + 4]
// 00512dde  ffd0                 call eax
// 00512de0  83c408               add esp, 8
// 00512de3  5b                   pop ebx
// 00512de4  c3                   ret 
// 00512de5  8b0e                 mov ecx, dword ptr [esi]
// 00512de7  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 00512dee  8b16                 mov edx, dword ptr [esi]
// 00512df0  895a18               mov dword ptr [edx + 0x18], ebx
// 00512df3  8b06                 mov eax, dword ptr [esi]
// 00512df5  8b4804               mov ecx, dword ptr [eax + 4]
// 00512df8  6a01                 push 1
// 00512dfa  56                   push esi
// 00512dfb  ffd1                 call ecx
// 00512dfd  83c408               add esp, 8
// 00512e00  5b                   pop ebx
// 00512e01  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
