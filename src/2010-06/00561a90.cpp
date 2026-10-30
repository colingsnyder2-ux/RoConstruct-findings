// from server: 100% by auto
// roc 2010-06 00561a90  unit: G3D::_internal::DialogTemplate  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00561a90
//
// 00561a90  53                   push ebx
// 00561a91  8d1c08               lea ebx, [eax + ecx]
// 00561a94  b146                 mov cl, 0x46
// 00561a96  83f80e               cmp eax, 0xe
// 00561a99  0f826b010000         jb 0x561c0a
// 00561a9f  803f4a               cmp byte ptr [edi], 0x4a
// 00561aa2  0f8562010000         jne 0x561c0a
// 00561aa8  384f01               cmp byte ptr [edi + 1], cl
// 00561aab  0f8559010000         jne 0x561c0a
// 00561ab1  807f0249             cmp byte ptr [edi + 2], 0x49
// 00561ab5  0f854f010000         jne 0x561c0a
// 00561abb  384f03               cmp byte ptr [edi + 3], cl
// 00561abe  0f8546010000         jne 0x561c0a
// 00561ac4  807f0400             cmp byte ptr [edi + 4], 0
// 00561ac8  0f853c010000         jne 0x561c0a
// 00561ace  c6860001000001       mov byte ptr [esi + 0x100], 1
// 00561ad5  8a5705               mov dl, byte ptr [edi + 5]
// 00561ad8  889601010000         mov byte ptr [esi + 0x101], dl
// 00561ade  8a4706               mov al, byte ptr [edi + 6]
// 00561ae1  888602010000         mov byte ptr [esi + 0x102], al
// 00561ae7  8a4f07               mov cl, byte ptr [edi + 7]
// 00561aea  888e03010000         mov byte ptr [esi + 0x103], cl
// 00561af0  0fb65708             movzx edx, byte ptr [edi + 8]
// 00561af4  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 00561af8  b800010000           mov eax, 0x100
// 00561afd  660fafd0             imul dx, ax
// 00561b01  6603d1               add dx, cx
// 00561b04  66899604010000       mov word ptr [esi + 0x104], dx
// 00561b0b  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 00561b0f  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 00561b13  660fafd0             imul dx, ax
// 00561b17  6603d1               add dx, cx
// 00561b1a  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 00561b21  66899606010000       mov word ptr [esi + 0x106], dx
// 00561b28  742e                 je 0x561b58
// 00561b2a  8b16                 mov edx, dword ptr [esi]
// 00561b2c  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 00561b33  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 00561b3a  8b0e                 mov ecx, dword ptr [esi]
// 00561b3c  894118               mov dword ptr [ecx + 0x18], eax
// 00561b3f  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 00561b46  8b06                 mov eax, dword ptr [esi]
// 00561b48  89501c               mov dword ptr [eax + 0x1c], edx
// 00561b4b  8b0e                 mov ecx, dword ptr [esi]
// 00561b4d  8b5104               mov edx, dword ptr [ecx + 4]
// 00561b50  6aff                 push -1
// 00561b52  56                   push esi
// 00561b53  ffd2                 call edx
// 00561b55  83c408               add esp, 8
// 00561b58  8b06                 mov eax, dword ptr [esi]
// 00561b5a  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 00561b61  83c018               add eax, 0x18
// 00561b64  8908                 mov dword ptr [eax], ecx
// 00561b66  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 00561b6d  895004               mov dword ptr [eax + 4], edx
// 00561b70  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 00561b77  894808               mov dword ptr [eax + 8], ecx
// 00561b7a  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 00561b81  89500c               mov dword ptr [eax + 0xc], edx
// 00561b84  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 00561b8b  894810               mov dword ptr [eax + 0x10], ecx
// 00561b8e  8b16                 mov edx, dword ptr [esi]
// 00561b90  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 00561b97  8b06                 mov eax, dword ptr [esi]
// 00561b99  8b4804               mov ecx, dword ptr [eax + 4]
// 00561b9c  6a01                 push 1
// 00561b9e  56                   push esi
// 00561b9f  ffd1                 call ecx
// 00561ba1  8a570c               mov dl, byte ptr [edi + 0xc]
// 00561ba4  83c408               add esp, 8
// 00561ba7  0a570d               or dl, byte ptr [edi + 0xd]
// 00561baa  7428                 je 0x561bd4
// 00561bac  8b06                 mov eax, dword ptr [esi]
// 00561bae  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00561bb5  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00561bb9  8b16                 mov edx, dword ptr [esi]
// 00561bbb  894a18               mov dword ptr [edx + 0x18], ecx
// 00561bbe  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 00561bc2  8b0e                 mov ecx, dword ptr [esi]
// 00561bc4  89411c               mov dword ptr [ecx + 0x1c], eax
// 00561bc7  8b16                 mov edx, dword ptr [esi]
// 00561bc9  8b4204               mov eax, dword ptr [edx + 4]
// 00561bcc  6a01                 push 1
// 00561bce  56                   push esi
// 00561bcf  ffd0                 call eax
// 00561bd1  83c408               add esp, 8
// 00561bd4  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 00561bd8  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 00561bdc  0fafc1               imul eax, ecx
// 00561bdf  83eb0e               sub ebx, 0xe
// 00561be2  8d1440               lea edx, [eax + eax*2]
// 00561be5  3bda                 cmp ebx, edx
// 00561be7  0f84f6000000         je 0x561ce3
// 00561bed  8b06                 mov eax, dword ptr [esi]
// 00561bef  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 00561bf6  8b0e                 mov ecx, dword ptr [esi]
// 00561bf8  895918               mov dword ptr [ecx + 0x18], ebx
// 00561bfb  8b16                 mov edx, dword ptr [esi]
// 00561bfd  8b4204               mov eax, dword ptr [edx + 4]
// 00561c00  6a01                 push 1
// 00561c02  56                   push esi
// 00561c03  ffd0                 call eax
// 00561c05  83c408               add esp, 8
// 00561c08  5b                   pop ebx
// 00561c09  c3                   ret 
// 00561c0a  83f806               cmp eax, 6
// 00561c0d  0f82b5000000         jb 0x561cc8
// 00561c13  803f4a               cmp byte ptr [edi], 0x4a
// 00561c16  0f85ac000000         jne 0x561cc8
// 00561c1c  384f01               cmp byte ptr [edi + 1], cl
// 00561c1f  0f85a3000000         jne 0x561cc8
// 00561c25  b058                 mov al, 0x58
// 00561c27  384702               cmp byte ptr [edi + 2], al
// 00561c2a  0f8598000000         jne 0x561cc8
// 00561c30  384703               cmp byte ptr [edi + 3], al
// 00561c33  0f858f000000         jne 0x561cc8
// 00561c39  807f0400             cmp byte ptr [edi + 4], 0
// 00561c3d  0f8585000000         jne 0x561cc8
// 00561c43  0fb64705             movzx eax, byte ptr [edi + 5]
// 00561c47  83e810               sub eax, 0x10
// 00561c4a  6a01                 push 1
// 00561c4c  56                   push esi
// 00561c4d  745f                 je 0x561cae
// 00561c4f  83e801               sub eax, 1
// 00561c52  7440                 je 0x561c94
// 00561c54  83e802               sub eax, 2
// 00561c57  8b0e                 mov ecx, dword ptr [esi]
// 00561c59  7421                 je 0x561c7c
// 00561c5b  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 00561c62  0fb65705             movzx edx, byte ptr [edi + 5]
// 00561c66  8b06                 mov eax, dword ptr [esi]
// 00561c68  895018               mov dword ptr [eax + 0x18], edx
// 00561c6b  8b0e                 mov ecx, dword ptr [esi]
// 00561c6d  89591c               mov dword ptr [ecx + 0x1c], ebx
// 00561c70  8b16                 mov edx, dword ptr [esi]
// 00561c72  8b4204               mov eax, dword ptr [edx + 4]
// 00561c75  ffd0                 call eax
// 00561c77  83c408               add esp, 8
// 00561c7a  5b                   pop ebx
// 00561c7b  c3                   ret 
// 00561c7c  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 00561c83  8b16                 mov edx, dword ptr [esi]
// 00561c85  895a18               mov dword ptr [edx + 0x18], ebx
// 00561c88  8b06                 mov eax, dword ptr [esi]
// 00561c8a  8b4804               mov ecx, dword ptr [eax + 4]
// 00561c8d  ffd1                 call ecx
// 00561c8f  83c408               add esp, 8
// 00561c92  5b                   pop ebx
// 00561c93  c3                   ret 
// 00561c94  8b16                 mov edx, dword ptr [esi]
// 00561c96  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 00561c9d  8b06                 mov eax, dword ptr [esi]
// 00561c9f  895818               mov dword ptr [eax + 0x18], ebx
// 00561ca2  8b0e                 mov ecx, dword ptr [esi]
// 00561ca4  8b5104               mov edx, dword ptr [ecx + 4]
// 00561ca7  ffd2                 call edx
// 00561ca9  83c408               add esp, 8
// 00561cac  5b                   pop ebx
// 00561cad  c3                   ret 
// 00561cae  8b06                 mov eax, dword ptr [esi]
// 00561cb0  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00561cb7  8b0e                 mov ecx, dword ptr [esi]
// 00561cb9  895918               mov dword ptr [ecx + 0x18], ebx
// 00561cbc  8b16                 mov edx, dword ptr [esi]
// 00561cbe  8b4204               mov eax, dword ptr [edx + 4]
// 00561cc1  ffd0                 call eax
// 00561cc3  83c408               add esp, 8
// 00561cc6  5b                   pop ebx
// 00561cc7  c3                   ret 
// 00561cc8  8b0e                 mov ecx, dword ptr [esi]
// 00561cca  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 00561cd1  8b16                 mov edx, dword ptr [esi]
// 00561cd3  895a18               mov dword ptr [edx + 0x18], ebx
// 00561cd6  8b06                 mov eax, dword ptr [esi]
// 00561cd8  8b4804               mov ecx, dword ptr [eax + 4]
// 00561cdb  6a01                 push 1
// 00561cdd  56                   push esi
// 00561cde  ffd1                 call ecx
// 00561ce0  83c408               add esp, 8
// 00561ce3  5b                   pop ebx
// 00561ce4  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
