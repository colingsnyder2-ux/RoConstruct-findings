// roc 2012-06 006430e0  unit: seg_00640000  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006430e0
//
// 006430e0  53                   push ebx
// 006430e1  8d1c08               lea ebx, [eax + ecx]
// 006430e4  b146                 mov cl, 0x46
// 006430e6  83f80e               cmp eax, 0xe
// 006430e9  0f826b010000         jb 0x64325a
// 006430ef  803f4a               cmp byte ptr [edi], 0x4a
// 006430f2  0f8562010000         jne 0x64325a
// 006430f8  384f01               cmp byte ptr [edi + 1], cl
// 006430fb  0f8559010000         jne 0x64325a
// 00643101  807f0249             cmp byte ptr [edi + 2], 0x49
// 00643105  0f854f010000         jne 0x64325a
// 0064310b  384f03               cmp byte ptr [edi + 3], cl
// 0064310e  0f8546010000         jne 0x64325a
// 00643114  807f0400             cmp byte ptr [edi + 4], 0
// 00643118  0f853c010000         jne 0x64325a
// 0064311e  c6860001000001       mov byte ptr [esi + 0x100], 1
// 00643125  8a5705               mov dl, byte ptr [edi + 5]
// 00643128  889601010000         mov byte ptr [esi + 0x101], dl
// 0064312e  8a4706               mov al, byte ptr [edi + 6]
// 00643131  888602010000         mov byte ptr [esi + 0x102], al
// 00643137  8a4f07               mov cl, byte ptr [edi + 7]
// 0064313a  888e03010000         mov byte ptr [esi + 0x103], cl
// 00643140  0fb65708             movzx edx, byte ptr [edi + 8]
// 00643144  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 00643148  b800010000           mov eax, 0x100
// 0064314d  660fafd0             imul dx, ax
// 00643151  6603d1               add dx, cx
// 00643154  66899604010000       mov word ptr [esi + 0x104], dx
// 0064315b  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 0064315f  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 00643163  660fafd0             imul dx, ax
// 00643167  6603d1               add dx, cx
// 0064316a  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 00643171  66899606010000       mov word ptr [esi + 0x106], dx
// 00643178  742e                 je 0x6431a8
// 0064317a  8b16                 mov edx, dword ptr [esi]
// 0064317c  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 00643183  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 0064318a  8b0e                 mov ecx, dword ptr [esi]
// 0064318c  894118               mov dword ptr [ecx + 0x18], eax
// 0064318f  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 00643196  8b06                 mov eax, dword ptr [esi]
// 00643198  89501c               mov dword ptr [eax + 0x1c], edx
// 0064319b  8b0e                 mov ecx, dword ptr [esi]
// 0064319d  8b5104               mov edx, dword ptr [ecx + 4]
// 006431a0  6aff                 push -1
// 006431a2  56                   push esi
// 006431a3  ffd2                 call edx
// 006431a5  83c408               add esp, 8
// 006431a8  8b06                 mov eax, dword ptr [esi]
// 006431aa  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 006431b1  83c018               add eax, 0x18
// 006431b4  8908                 mov dword ptr [eax], ecx
// 006431b6  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 006431bd  895004               mov dword ptr [eax + 4], edx
// 006431c0  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 006431c7  894808               mov dword ptr [eax + 8], ecx
// 006431ca  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 006431d1  89500c               mov dword ptr [eax + 0xc], edx
// 006431d4  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 006431db  894810               mov dword ptr [eax + 0x10], ecx
// 006431de  8b16                 mov edx, dword ptr [esi]
// 006431e0  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 006431e7  8b06                 mov eax, dword ptr [esi]
// 006431e9  8b4804               mov ecx, dword ptr [eax + 4]
// 006431ec  6a01                 push 1
// 006431ee  56                   push esi
// 006431ef  ffd1                 call ecx
// 006431f1  8a570c               mov dl, byte ptr [edi + 0xc]
// 006431f4  83c408               add esp, 8
// 006431f7  0a570d               or dl, byte ptr [edi + 0xd]
// 006431fa  7428                 je 0x643224
// 006431fc  8b06                 mov eax, dword ptr [esi]
// 006431fe  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00643205  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00643209  8b16                 mov edx, dword ptr [esi]
// 0064320b  894a18               mov dword ptr [edx + 0x18], ecx
// 0064320e  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 00643212  8b0e                 mov ecx, dword ptr [esi]
// 00643214  89411c               mov dword ptr [ecx + 0x1c], eax
// 00643217  8b16                 mov edx, dword ptr [esi]
// 00643219  8b4204               mov eax, dword ptr [edx + 4]
// 0064321c  6a01                 push 1
// 0064321e  56                   push esi
// 0064321f  ffd0                 call eax
// 00643221  83c408               add esp, 8
// 00643224  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 00643228  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 0064322c  0fafc1               imul eax, ecx
// 0064322f  83eb0e               sub ebx, 0xe
// 00643232  8d1440               lea edx, [eax + eax*2]
// 00643235  3bda                 cmp ebx, edx
// 00643237  0f84f6000000         je 0x643333
// 0064323d  8b06                 mov eax, dword ptr [esi]
// 0064323f  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 00643246  8b0e                 mov ecx, dword ptr [esi]
// 00643248  895918               mov dword ptr [ecx + 0x18], ebx
// 0064324b  8b16                 mov edx, dword ptr [esi]
// 0064324d  8b4204               mov eax, dword ptr [edx + 4]
// 00643250  6a01                 push 1
// 00643252  56                   push esi
// 00643253  ffd0                 call eax
// 00643255  83c408               add esp, 8
// 00643258  5b                   pop ebx
// 00643259  c3                   ret 
// 0064325a  83f806               cmp eax, 6
// 0064325d  0f82b5000000         jb 0x643318
// 00643263  803f4a               cmp byte ptr [edi], 0x4a
// 00643266  0f85ac000000         jne 0x643318
// 0064326c  384f01               cmp byte ptr [edi + 1], cl
// 0064326f  0f85a3000000         jne 0x643318
// 00643275  b058                 mov al, 0x58
// 00643277  384702               cmp byte ptr [edi + 2], al
// 0064327a  0f8598000000         jne 0x643318
// 00643280  384703               cmp byte ptr [edi + 3], al
// 00643283  0f858f000000         jne 0x643318
// 00643289  807f0400             cmp byte ptr [edi + 4], 0
// 0064328d  0f8585000000         jne 0x643318
// 00643293  0fb64705             movzx eax, byte ptr [edi + 5]
// 00643297  83e810               sub eax, 0x10
// 0064329a  6a01                 push 1
// 0064329c  56                   push esi
// 0064329d  745f                 je 0x6432fe
// 0064329f  83e801               sub eax, 1
// 006432a2  7440                 je 0x6432e4
// 006432a4  83e802               sub eax, 2
// 006432a7  8b0e                 mov ecx, dword ptr [esi]
// 006432a9  7421                 je 0x6432cc
// 006432ab  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 006432b2  0fb65705             movzx edx, byte ptr [edi + 5]
// 006432b6  8b06                 mov eax, dword ptr [esi]
// 006432b8  895018               mov dword ptr [eax + 0x18], edx
// 006432bb  8b0e                 mov ecx, dword ptr [esi]
// 006432bd  89591c               mov dword ptr [ecx + 0x1c], ebx
// 006432c0  8b16                 mov edx, dword ptr [esi]
// 006432c2  8b4204               mov eax, dword ptr [edx + 4]
// 006432c5  ffd0                 call eax
// 006432c7  83c408               add esp, 8
// 006432ca  5b                   pop ebx
// 006432cb  c3                   ret 
// 006432cc  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 006432d3  8b16                 mov edx, dword ptr [esi]
// 006432d5  895a18               mov dword ptr [edx + 0x18], ebx
// 006432d8  8b06                 mov eax, dword ptr [esi]
// 006432da  8b4804               mov ecx, dword ptr [eax + 4]
// 006432dd  ffd1                 call ecx
// 006432df  83c408               add esp, 8
// 006432e2  5b                   pop ebx
// 006432e3  c3                   ret 
// 006432e4  8b16                 mov edx, dword ptr [esi]
// 006432e6  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 006432ed  8b06                 mov eax, dword ptr [esi]
// 006432ef  895818               mov dword ptr [eax + 0x18], ebx
// 006432f2  8b0e                 mov ecx, dword ptr [esi]
// 006432f4  8b5104               mov edx, dword ptr [ecx + 4]
// 006432f7  ffd2                 call edx
// 006432f9  83c408               add esp, 8
// 006432fc  5b                   pop ebx
// 006432fd  c3                   ret 
// 006432fe  8b06                 mov eax, dword ptr [esi]
// 00643300  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00643307  8b0e                 mov ecx, dword ptr [esi]
// 00643309  895918               mov dword ptr [ecx + 0x18], ebx
// 0064330c  8b16                 mov edx, dword ptr [esi]
// 0064330e  8b4204               mov eax, dword ptr [edx + 4]
// 00643311  ffd0                 call eax
// 00643313  83c408               add esp, 8
// 00643316  5b                   pop ebx
// 00643317  c3                   ret 
// 00643318  8b0e                 mov ecx, dword ptr [esi]
// 0064331a  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 00643321  8b16                 mov edx, dword ptr [esi]
// 00643323  895a18               mov dword ptr [edx + 0x18], ebx
// 00643326  8b06                 mov eax, dword ptr [esi]
// 00643328  8b4804               mov ecx, dword ptr [eax + 4]
// 0064332b  6a01                 push 1
// 0064332d  56                   push esi
// 0064332e  ffd1                 call ecx
// 00643330  83c408               add esp, 8
// 00643333  5b                   pop ebx
// 00643334  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
