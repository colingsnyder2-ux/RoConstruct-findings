// from server: 100% by auto
// roc 2009-06 0057e340  unit: G3D::_internal::DialogTemplate  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057e340
//
// 0057e340  53                   push ebx
// 0057e341  8d1c08               lea ebx, [eax + ecx]
// 0057e344  b146                 mov cl, 0x46
// 0057e346  83f80e               cmp eax, 0xe
// 0057e349  0f826b010000         jb 0x57e4ba
// 0057e34f  803f4a               cmp byte ptr [edi], 0x4a
// 0057e352  0f8562010000         jne 0x57e4ba
// 0057e358  384f01               cmp byte ptr [edi + 1], cl
// 0057e35b  0f8559010000         jne 0x57e4ba
// 0057e361  807f0249             cmp byte ptr [edi + 2], 0x49
// 0057e365  0f854f010000         jne 0x57e4ba
// 0057e36b  384f03               cmp byte ptr [edi + 3], cl
// 0057e36e  0f8546010000         jne 0x57e4ba
// 0057e374  807f0400             cmp byte ptr [edi + 4], 0
// 0057e378  0f853c010000         jne 0x57e4ba
// 0057e37e  c6860001000001       mov byte ptr [esi + 0x100], 1
// 0057e385  8a5705               mov dl, byte ptr [edi + 5]
// 0057e388  889601010000         mov byte ptr [esi + 0x101], dl
// 0057e38e  8a4706               mov al, byte ptr [edi + 6]
// 0057e391  888602010000         mov byte ptr [esi + 0x102], al
// 0057e397  8a4f07               mov cl, byte ptr [edi + 7]
// 0057e39a  888e03010000         mov byte ptr [esi + 0x103], cl
// 0057e3a0  0fb65708             movzx edx, byte ptr [edi + 8]
// 0057e3a4  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 0057e3a8  b800010000           mov eax, 0x100
// 0057e3ad  660fafd0             imul dx, ax
// 0057e3b1  6603d1               add dx, cx
// 0057e3b4  66899604010000       mov word ptr [esi + 0x104], dx
// 0057e3bb  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 0057e3bf  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 0057e3c3  660fafd0             imul dx, ax
// 0057e3c7  6603d1               add dx, cx
// 0057e3ca  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 0057e3d1  66899606010000       mov word ptr [esi + 0x106], dx
// 0057e3d8  742e                 je 0x57e408
// 0057e3da  8b16                 mov edx, dword ptr [esi]
// 0057e3dc  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 0057e3e3  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 0057e3ea  8b0e                 mov ecx, dword ptr [esi]
// 0057e3ec  894118               mov dword ptr [ecx + 0x18], eax
// 0057e3ef  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 0057e3f6  8b06                 mov eax, dword ptr [esi]
// 0057e3f8  89501c               mov dword ptr [eax + 0x1c], edx
// 0057e3fb  8b0e                 mov ecx, dword ptr [esi]
// 0057e3fd  8b5104               mov edx, dword ptr [ecx + 4]
// 0057e400  6aff                 push -1
// 0057e402  56                   push esi
// 0057e403  ffd2                 call edx
// 0057e405  83c408               add esp, 8
// 0057e408  8b06                 mov eax, dword ptr [esi]
// 0057e40a  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 0057e411  83c018               add eax, 0x18
// 0057e414  8908                 mov dword ptr [eax], ecx
// 0057e416  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 0057e41d  895004               mov dword ptr [eax + 4], edx
// 0057e420  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 0057e427  894808               mov dword ptr [eax + 8], ecx
// 0057e42a  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 0057e431  89500c               mov dword ptr [eax + 0xc], edx
// 0057e434  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 0057e43b  894810               mov dword ptr [eax + 0x10], ecx
// 0057e43e  8b16                 mov edx, dword ptr [esi]
// 0057e440  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 0057e447  8b06                 mov eax, dword ptr [esi]
// 0057e449  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e44c  6a01                 push 1
// 0057e44e  56                   push esi
// 0057e44f  ffd1                 call ecx
// 0057e451  8a570c               mov dl, byte ptr [edi + 0xc]
// 0057e454  83c408               add esp, 8
// 0057e457  0a570d               or dl, byte ptr [edi + 0xd]
// 0057e45a  7428                 je 0x57e484
// 0057e45c  8b06                 mov eax, dword ptr [esi]
// 0057e45e  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 0057e465  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 0057e469  8b16                 mov edx, dword ptr [esi]
// 0057e46b  894a18               mov dword ptr [edx + 0x18], ecx
// 0057e46e  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 0057e472  8b0e                 mov ecx, dword ptr [esi]
// 0057e474  89411c               mov dword ptr [ecx + 0x1c], eax
// 0057e477  8b16                 mov edx, dword ptr [esi]
// 0057e479  8b4204               mov eax, dword ptr [edx + 4]
// 0057e47c  6a01                 push 1
// 0057e47e  56                   push esi
// 0057e47f  ffd0                 call eax
// 0057e481  83c408               add esp, 8
// 0057e484  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 0057e488  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 0057e48c  0fafc1               imul eax, ecx
// 0057e48f  83eb0e               sub ebx, 0xe
// 0057e492  8d1440               lea edx, [eax + eax*2]
// 0057e495  3bda                 cmp ebx, edx
// 0057e497  0f84f6000000         je 0x57e593
// 0057e49d  8b06                 mov eax, dword ptr [esi]
// 0057e49f  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 0057e4a6  8b0e                 mov ecx, dword ptr [esi]
// 0057e4a8  895918               mov dword ptr [ecx + 0x18], ebx
// 0057e4ab  8b16                 mov edx, dword ptr [esi]
// 0057e4ad  8b4204               mov eax, dword ptr [edx + 4]
// 0057e4b0  6a01                 push 1
// 0057e4b2  56                   push esi
// 0057e4b3  ffd0                 call eax
// 0057e4b5  83c408               add esp, 8
// 0057e4b8  5b                   pop ebx
// 0057e4b9  c3                   ret 
// 0057e4ba  83f806               cmp eax, 6
// 0057e4bd  0f82b5000000         jb 0x57e578
// 0057e4c3  803f4a               cmp byte ptr [edi], 0x4a
// 0057e4c6  0f85ac000000         jne 0x57e578
// 0057e4cc  384f01               cmp byte ptr [edi + 1], cl
// 0057e4cf  0f85a3000000         jne 0x57e578
// 0057e4d5  b058                 mov al, 0x58
// 0057e4d7  384702               cmp byte ptr [edi + 2], al
// 0057e4da  0f8598000000         jne 0x57e578
// 0057e4e0  384703               cmp byte ptr [edi + 3], al
// 0057e4e3  0f858f000000         jne 0x57e578
// 0057e4e9  807f0400             cmp byte ptr [edi + 4], 0
// 0057e4ed  0f8585000000         jne 0x57e578
// 0057e4f3  0fb64705             movzx eax, byte ptr [edi + 5]
// 0057e4f7  83e810               sub eax, 0x10
// 0057e4fa  6a01                 push 1
// 0057e4fc  56                   push esi
// 0057e4fd  745f                 je 0x57e55e
// 0057e4ff  83e801               sub eax, 1
// 0057e502  7440                 je 0x57e544
// 0057e504  83e802               sub eax, 2
// 0057e507  8b0e                 mov ecx, dword ptr [esi]
// 0057e509  7421                 je 0x57e52c
// 0057e50b  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 0057e512  0fb65705             movzx edx, byte ptr [edi + 5]
// 0057e516  8b06                 mov eax, dword ptr [esi]
// 0057e518  895018               mov dword ptr [eax + 0x18], edx
// 0057e51b  8b0e                 mov ecx, dword ptr [esi]
// 0057e51d  89591c               mov dword ptr [ecx + 0x1c], ebx
// 0057e520  8b16                 mov edx, dword ptr [esi]
// 0057e522  8b4204               mov eax, dword ptr [edx + 4]
// 0057e525  ffd0                 call eax
// 0057e527  83c408               add esp, 8
// 0057e52a  5b                   pop ebx
// 0057e52b  c3                   ret 
// 0057e52c  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 0057e533  8b16                 mov edx, dword ptr [esi]
// 0057e535  895a18               mov dword ptr [edx + 0x18], ebx
// 0057e538  8b06                 mov eax, dword ptr [esi]
// 0057e53a  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e53d  ffd1                 call ecx
// 0057e53f  83c408               add esp, 8
// 0057e542  5b                   pop ebx
// 0057e543  c3                   ret 
// 0057e544  8b16                 mov edx, dword ptr [esi]
// 0057e546  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 0057e54d  8b06                 mov eax, dword ptr [esi]
// 0057e54f  895818               mov dword ptr [eax + 0x18], ebx
// 0057e552  8b0e                 mov ecx, dword ptr [esi]
// 0057e554  8b5104               mov edx, dword ptr [ecx + 4]
// 0057e557  ffd2                 call edx
// 0057e559  83c408               add esp, 8
// 0057e55c  5b                   pop ebx
// 0057e55d  c3                   ret 
// 0057e55e  8b06                 mov eax, dword ptr [esi]
// 0057e560  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 0057e567  8b0e                 mov ecx, dword ptr [esi]
// 0057e569  895918               mov dword ptr [ecx + 0x18], ebx
// 0057e56c  8b16                 mov edx, dword ptr [esi]
// 0057e56e  8b4204               mov eax, dword ptr [edx + 4]
// 0057e571  ffd0                 call eax
// 0057e573  83c408               add esp, 8
// 0057e576  5b                   pop ebx
// 0057e577  c3                   ret 
// 0057e578  8b0e                 mov ecx, dword ptr [esi]
// 0057e57a  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 0057e581  8b16                 mov edx, dword ptr [esi]
// 0057e583  895a18               mov dword ptr [edx + 0x18], ebx
// 0057e586  8b06                 mov eax, dword ptr [esi]
// 0057e588  8b4804               mov ecx, dword ptr [eax + 4]
// 0057e58b  6a01                 push 1
// 0057e58d  56                   push esi
// 0057e58e  ffd1                 call ecx
// 0057e590  83c408               add esp, 8
// 0057e593  5b                   pop ebx
// 0057e594  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
