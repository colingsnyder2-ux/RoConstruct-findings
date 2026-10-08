// roc 2007-03 005072e0  unit: seg_00500000  size: 594 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005072e0
//
// 005072e0  83f80e               cmp eax, 0xe
// 005072e3  53                   push ebx
// 005072e4  8d1c08               lea ebx, [eax + ecx]
// 005072e7  b146                 mov cl, 0x46
// 005072e9  0f8268010000         jb 0x507457
// 005072ef  803f4a               cmp byte ptr [edi], 0x4a
// 005072f2  0f855f010000         jne 0x507457
// 005072f8  384f01               cmp byte ptr [edi + 1], cl
// 005072fb  0f8556010000         jne 0x507457
// 00507301  807f0249             cmp byte ptr [edi + 2], 0x49
// 00507305  0f854c010000         jne 0x507457
// 0050730b  384f03               cmp byte ptr [edi + 3], cl
// 0050730e  0f8543010000         jne 0x507457
// 00507314  807f0400             cmp byte ptr [edi + 4], 0
// 00507318  0f8539010000         jne 0x507457
// 0050731e  c6860001000001       mov byte ptr [esi + 0x100], 1
// 00507325  8a5705               mov dl, byte ptr [edi + 5]
// 00507328  889601010000         mov byte ptr [esi + 0x101], dl
// 0050732e  8a4706               mov al, byte ptr [edi + 6]
// 00507331  888602010000         mov byte ptr [esi + 0x102], al
// 00507337  8a4f07               mov cl, byte ptr [edi + 7]
// 0050733a  888e03010000         mov byte ptr [esi + 0x103], cl
// 00507340  0fb65708             movzx edx, byte ptr [edi + 8]
// 00507344  660fb64709           movzx ax, byte ptr [edi + 9]
// 00507349  66c1e208             shl dx, 8
// 0050734d  6603d0               add dx, ax
// 00507350  66899604010000       mov word ptr [esi + 0x104], dx
// 00507357  660fb64f0a           movzx cx, byte ptr [edi + 0xa]
// 0050735c  0fb6570b             movzx edx, byte ptr [edi + 0xb]
// 00507360  66c1e108             shl cx, 8
// 00507364  6603ca               add cx, dx
// 00507367  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 0050736e  66898e06010000       mov word ptr [esi + 0x106], cx
// 00507375  742e                 je 0x5073a5
// 00507377  8b06                 mov eax, dword ptr [esi]
// 00507379  c7401477000000       mov dword ptr [eax + 0x14], 0x77
// 00507380  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 00507387  8b16                 mov edx, dword ptr [esi]
// 00507389  894a18               mov dword ptr [edx + 0x18], ecx
// 0050738c  0fb68602010000       movzx eax, byte ptr [esi + 0x102]
// 00507393  8b0e                 mov ecx, dword ptr [esi]
// 00507395  89411c               mov dword ptr [ecx + 0x1c], eax
// 00507398  8b16                 mov edx, dword ptr [esi]
// 0050739a  8b4204               mov eax, dword ptr [edx + 4]
// 0050739d  6aff                 push -1
// 0050739f  56                   push esi
// 005073a0  ffd0                 call eax
// 005073a2  83c408               add esp, 8
// 005073a5  8b06                 mov eax, dword ptr [esi]
// 005073a7  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 005073ae  83c018               add eax, 0x18
// 005073b1  8908                 mov dword ptr [eax], ecx
// 005073b3  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 005073ba  895004               mov dword ptr [eax + 4], edx
// 005073bd  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 005073c4  894808               mov dword ptr [eax + 8], ecx
// 005073c7  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 005073ce  89500c               mov dword ptr [eax + 0xc], edx
// 005073d1  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 005073d8  894810               mov dword ptr [eax + 0x10], ecx
// 005073db  8b16                 mov edx, dword ptr [esi]
// 005073dd  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 005073e4  8b06                 mov eax, dword ptr [esi]
// 005073e6  8b4804               mov ecx, dword ptr [eax + 4]
// 005073e9  6a01                 push 1
// 005073eb  56                   push esi
// 005073ec  ffd1                 call ecx
// 005073ee  8a570c               mov dl, byte ptr [edi + 0xc]
// 005073f1  83c408               add esp, 8
// 005073f4  0a570d               or dl, byte ptr [edi + 0xd]
// 005073f7  7428                 je 0x507421
// 005073f9  8b06                 mov eax, dword ptr [esi]
// 005073fb  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00507402  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00507406  8b16                 mov edx, dword ptr [esi]
// 00507408  894a18               mov dword ptr [edx + 0x18], ecx
// 0050740b  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 0050740f  8b0e                 mov ecx, dword ptr [esi]
// 00507411  89411c               mov dword ptr [ecx + 0x1c], eax
// 00507414  8b16                 mov edx, dword ptr [esi]
// 00507416  8b4204               mov eax, dword ptr [edx + 4]
// 00507419  6a01                 push 1
// 0050741b  56                   push esi
// 0050741c  ffd0                 call eax
// 0050741e  83c408               add esp, 8
// 00507421  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 00507425  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 00507429  0fafc1               imul eax, ecx
// 0050742c  83eb0e               sub ebx, 0xe
// 0050742f  8d1440               lea edx, [eax + eax*2]
// 00507432  3bda                 cmp ebx, edx
// 00507434  0f84f6000000         je 0x507530
// 0050743a  8b06                 mov eax, dword ptr [esi]
// 0050743c  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 00507443  8b0e                 mov ecx, dword ptr [esi]
// 00507445  895918               mov dword ptr [ecx + 0x18], ebx
// 00507448  8b16                 mov edx, dword ptr [esi]
// 0050744a  8b4204               mov eax, dword ptr [edx + 4]
// 0050744d  6a01                 push 1
// 0050744f  56                   push esi
// 00507450  ffd0                 call eax
// 00507452  83c408               add esp, 8
// 00507455  5b                   pop ebx
// 00507456  c3                   ret 
// 00507457  83f806               cmp eax, 6
// 0050745a  0f82b5000000         jb 0x507515
// 00507460  803f4a               cmp byte ptr [edi], 0x4a
// 00507463  0f85ac000000         jne 0x507515
// 00507469  384f01               cmp byte ptr [edi + 1], cl
// 0050746c  0f85a3000000         jne 0x507515
// 00507472  b058                 mov al, 0x58
// 00507474  384702               cmp byte ptr [edi + 2], al
// 00507477  0f8598000000         jne 0x507515
// 0050747d  384703               cmp byte ptr [edi + 3], al
// 00507480  0f858f000000         jne 0x507515
// 00507486  807f0400             cmp byte ptr [edi + 4], 0
// 0050748a  0f8585000000         jne 0x507515
// 00507490  0fb64705             movzx eax, byte ptr [edi + 5]
// 00507494  83e810               sub eax, 0x10
// 00507497  6a01                 push 1
// 00507499  56                   push esi
// 0050749a  745f                 je 0x5074fb
// 0050749c  83e801               sub eax, 1
// 0050749f  7440                 je 0x5074e1
// 005074a1  83e802               sub eax, 2
// 005074a4  8b0e                 mov ecx, dword ptr [esi]
// 005074a6  7421                 je 0x5074c9
// 005074a8  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 005074af  0fb65705             movzx edx, byte ptr [edi + 5]
// 005074b3  8b06                 mov eax, dword ptr [esi]
// 005074b5  895018               mov dword ptr [eax + 0x18], edx
// 005074b8  8b0e                 mov ecx, dword ptr [esi]
// 005074ba  89591c               mov dword ptr [ecx + 0x1c], ebx
// 005074bd  8b16                 mov edx, dword ptr [esi]
// 005074bf  8b4204               mov eax, dword ptr [edx + 4]
// 005074c2  ffd0                 call eax
// 005074c4  83c408               add esp, 8
// 005074c7  5b                   pop ebx
// 005074c8  c3                   ret 
// 005074c9  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 005074d0  8b16                 mov edx, dword ptr [esi]
// 005074d2  895a18               mov dword ptr [edx + 0x18], ebx
// 005074d5  8b06                 mov eax, dword ptr [esi]
// 005074d7  8b4804               mov ecx, dword ptr [eax + 4]
// 005074da  ffd1                 call ecx
// 005074dc  83c408               add esp, 8
// 005074df  5b                   pop ebx
// 005074e0  c3                   ret 
// 005074e1  8b16                 mov edx, dword ptr [esi]
// 005074e3  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 005074ea  8b06                 mov eax, dword ptr [esi]
// 005074ec  895818               mov dword ptr [eax + 0x18], ebx
// 005074ef  8b0e                 mov ecx, dword ptr [esi]
// 005074f1  8b5104               mov edx, dword ptr [ecx + 4]
// 005074f4  ffd2                 call edx
// 005074f6  83c408               add esp, 8
// 005074f9  5b                   pop ebx
// 005074fa  c3                   ret 
// 005074fb  8b06                 mov eax, dword ptr [esi]
// 005074fd  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00507504  8b0e                 mov ecx, dword ptr [esi]
// 00507506  895918               mov dword ptr [ecx + 0x18], ebx
// 00507509  8b16                 mov edx, dword ptr [esi]
// 0050750b  8b4204               mov eax, dword ptr [edx + 4]
// 0050750e  ffd0                 call eax
// 00507510  83c408               add esp, 8
// 00507513  5b                   pop ebx
// 00507514  c3                   ret 
// 00507515  8b0e                 mov ecx, dword ptr [esi]
// 00507517  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 0050751e  8b16                 mov edx, dword ptr [esi]
// 00507520  895a18               mov dword ptr [edx + 0x18], ebx
// 00507523  8b06                 mov eax, dword ptr [esi]
// 00507525  8b4804               mov ecx, dword ptr [eax + 4]
// 00507528  6a01                 push 1
// 0050752a  56                   push esi
// 0050752b  ffd1                 call ecx
// 0050752d  83c408               add esp, 8
// 00507530  5b                   pop ebx
// 00507531  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
