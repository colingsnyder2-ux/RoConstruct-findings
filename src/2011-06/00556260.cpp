// from server: 100% by auto
// roc 2011-06 00556260  unit: G3D::LineSegment  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556260
//
// 00556260  53                   push ebx
// 00556261  8d1c08               lea ebx, [eax + ecx]
// 00556264  b146                 mov cl, 0x46
// 00556266  83f80e               cmp eax, 0xe
// 00556269  0f826b010000         jb 0x5563da
// 0055626f  803f4a               cmp byte ptr [edi], 0x4a
// 00556272  0f8562010000         jne 0x5563da
// 00556278  384f01               cmp byte ptr [edi + 1], cl
// 0055627b  0f8559010000         jne 0x5563da
// 00556281  807f0249             cmp byte ptr [edi + 2], 0x49
// 00556285  0f854f010000         jne 0x5563da
// 0055628b  384f03               cmp byte ptr [edi + 3], cl
// 0055628e  0f8546010000         jne 0x5563da
// 00556294  807f0400             cmp byte ptr [edi + 4], 0
// 00556298  0f853c010000         jne 0x5563da
// 0055629e  c6860001000001       mov byte ptr [esi + 0x100], 1
// 005562a5  8a5705               mov dl, byte ptr [edi + 5]
// 005562a8  889601010000         mov byte ptr [esi + 0x101], dl
// 005562ae  8a4706               mov al, byte ptr [edi + 6]
// 005562b1  888602010000         mov byte ptr [esi + 0x102], al
// 005562b7  8a4f07               mov cl, byte ptr [edi + 7]
// 005562ba  888e03010000         mov byte ptr [esi + 0x103], cl
// 005562c0  0fb65708             movzx edx, byte ptr [edi + 8]
// 005562c4  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 005562c8  b800010000           mov eax, 0x100
// 005562cd  660fafd0             imul dx, ax
// 005562d1  6603d1               add dx, cx
// 005562d4  66899604010000       mov word ptr [esi + 0x104], dx
// 005562db  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 005562df  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 005562e3  660fafd0             imul dx, ax
// 005562e7  6603d1               add dx, cx
// 005562ea  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 005562f1  66899606010000       mov word ptr [esi + 0x106], dx
// 005562f8  742e                 je 0x556328
// 005562fa  8b16                 mov edx, dword ptr [esi]
// 005562fc  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 00556303  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 0055630a  8b0e                 mov ecx, dword ptr [esi]
// 0055630c  894118               mov dword ptr [ecx + 0x18], eax
// 0055630f  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 00556316  8b06                 mov eax, dword ptr [esi]
// 00556318  89501c               mov dword ptr [eax + 0x1c], edx
// 0055631b  8b0e                 mov ecx, dword ptr [esi]
// 0055631d  8b5104               mov edx, dword ptr [ecx + 4]
// 00556320  6aff                 push -1
// 00556322  56                   push esi
// 00556323  ffd2                 call edx
// 00556325  83c408               add esp, 8
// 00556328  8b06                 mov eax, dword ptr [esi]
// 0055632a  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 00556331  83c018               add eax, 0x18
// 00556334  8908                 mov dword ptr [eax], ecx
// 00556336  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 0055633d  895004               mov dword ptr [eax + 4], edx
// 00556340  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 00556347  894808               mov dword ptr [eax + 8], ecx
// 0055634a  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 00556351  89500c               mov dword ptr [eax + 0xc], edx
// 00556354  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 0055635b  894810               mov dword ptr [eax + 0x10], ecx
// 0055635e  8b16                 mov edx, dword ptr [esi]
// 00556360  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 00556367  8b06                 mov eax, dword ptr [esi]
// 00556369  8b4804               mov ecx, dword ptr [eax + 4]
// 0055636c  6a01                 push 1
// 0055636e  56                   push esi
// 0055636f  ffd1                 call ecx
// 00556371  8a570c               mov dl, byte ptr [edi + 0xc]
// 00556374  83c408               add esp, 8
// 00556377  0a570d               or dl, byte ptr [edi + 0xd]
// 0055637a  7428                 je 0x5563a4
// 0055637c  8b06                 mov eax, dword ptr [esi]
// 0055637e  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00556385  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00556389  8b16                 mov edx, dword ptr [esi]
// 0055638b  894a18               mov dword ptr [edx + 0x18], ecx
// 0055638e  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 00556392  8b0e                 mov ecx, dword ptr [esi]
// 00556394  89411c               mov dword ptr [ecx + 0x1c], eax
// 00556397  8b16                 mov edx, dword ptr [esi]
// 00556399  8b4204               mov eax, dword ptr [edx + 4]
// 0055639c  6a01                 push 1
// 0055639e  56                   push esi
// 0055639f  ffd0                 call eax
// 005563a1  83c408               add esp, 8
// 005563a4  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 005563a8  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 005563ac  0fafc1               imul eax, ecx
// 005563af  83eb0e               sub ebx, 0xe
// 005563b2  8d1440               lea edx, [eax + eax*2]
// 005563b5  3bda                 cmp ebx, edx
// 005563b7  0f84f6000000         je 0x5564b3
// 005563bd  8b06                 mov eax, dword ptr [esi]
// 005563bf  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 005563c6  8b0e                 mov ecx, dword ptr [esi]
// 005563c8  895918               mov dword ptr [ecx + 0x18], ebx
// 005563cb  8b16                 mov edx, dword ptr [esi]
// 005563cd  8b4204               mov eax, dword ptr [edx + 4]
// 005563d0  6a01                 push 1
// 005563d2  56                   push esi
// 005563d3  ffd0                 call eax
// 005563d5  83c408               add esp, 8
// 005563d8  5b                   pop ebx
// 005563d9  c3                   ret 
// 005563da  83f806               cmp eax, 6
// 005563dd  0f82b5000000         jb 0x556498
// 005563e3  803f4a               cmp byte ptr [edi], 0x4a
// 005563e6  0f85ac000000         jne 0x556498
// 005563ec  384f01               cmp byte ptr [edi + 1], cl
// 005563ef  0f85a3000000         jne 0x556498
// 005563f5  b058                 mov al, 0x58
// 005563f7  384702               cmp byte ptr [edi + 2], al
// 005563fa  0f8598000000         jne 0x556498
// 00556400  384703               cmp byte ptr [edi + 3], al
// 00556403  0f858f000000         jne 0x556498
// 00556409  807f0400             cmp byte ptr [edi + 4], 0
// 0055640d  0f8585000000         jne 0x556498
// 00556413  0fb64705             movzx eax, byte ptr [edi + 5]
// 00556417  83e810               sub eax, 0x10
// 0055641a  6a01                 push 1
// 0055641c  56                   push esi
// 0055641d  745f                 je 0x55647e
// 0055641f  83e801               sub eax, 1
// 00556422  7440                 je 0x556464
// 00556424  83e802               sub eax, 2
// 00556427  8b0e                 mov ecx, dword ptr [esi]
// 00556429  7421                 je 0x55644c
// 0055642b  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 00556432  0fb65705             movzx edx, byte ptr [edi + 5]
// 00556436  8b06                 mov eax, dword ptr [esi]
// 00556438  895018               mov dword ptr [eax + 0x18], edx
// 0055643b  8b0e                 mov ecx, dword ptr [esi]
// 0055643d  89591c               mov dword ptr [ecx + 0x1c], ebx
// 00556440  8b16                 mov edx, dword ptr [esi]
// 00556442  8b4204               mov eax, dword ptr [edx + 4]
// 00556445  ffd0                 call eax
// 00556447  83c408               add esp, 8
// 0055644a  5b                   pop ebx
// 0055644b  c3                   ret 
// 0055644c  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 00556453  8b16                 mov edx, dword ptr [esi]
// 00556455  895a18               mov dword ptr [edx + 0x18], ebx
// 00556458  8b06                 mov eax, dword ptr [esi]
// 0055645a  8b4804               mov ecx, dword ptr [eax + 4]
// 0055645d  ffd1                 call ecx
// 0055645f  83c408               add esp, 8
// 00556462  5b                   pop ebx
// 00556463  c3                   ret 
// 00556464  8b16                 mov edx, dword ptr [esi]
// 00556466  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 0055646d  8b06                 mov eax, dword ptr [esi]
// 0055646f  895818               mov dword ptr [eax + 0x18], ebx
// 00556472  8b0e                 mov ecx, dword ptr [esi]
// 00556474  8b5104               mov edx, dword ptr [ecx + 4]
// 00556477  ffd2                 call edx
// 00556479  83c408               add esp, 8
// 0055647c  5b                   pop ebx
// 0055647d  c3                   ret 
// 0055647e  8b06                 mov eax, dword ptr [esi]
// 00556480  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00556487  8b0e                 mov ecx, dword ptr [esi]
// 00556489  895918               mov dword ptr [ecx + 0x18], ebx
// 0055648c  8b16                 mov edx, dword ptr [esi]
// 0055648e  8b4204               mov eax, dword ptr [edx + 4]
// 00556491  ffd0                 call eax
// 00556493  83c408               add esp, 8
// 00556496  5b                   pop ebx
// 00556497  c3                   ret 
// 00556498  8b0e                 mov ecx, dword ptr [esi]
// 0055649a  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 005564a1  8b16                 mov edx, dword ptr [esi]
// 005564a3  895a18               mov dword ptr [edx + 0x18], ebx
// 005564a6  8b06                 mov eax, dword ptr [esi]
// 005564a8  8b4804               mov ecx, dword ptr [eax + 4]
// 005564ab  6a01                 push 1
// 005564ad  56                   push esi
// 005564ae  ffd1                 call ecx
// 005564b0  83c408               add esp, 8
// 005564b3  5b                   pop ebx
// 005564b4  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
