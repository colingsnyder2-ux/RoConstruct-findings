// roc 2009-12 00600120  unit: G3D::_internal::DialogTemplate  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600120
//
// 00600120  53                   push ebx
// 00600121  8d1c08               lea ebx, [eax + ecx]
// 00600124  b146                 mov cl, 0x46
// 00600126  83f80e               cmp eax, 0xe
// 00600129  0f826b010000         jb 0x60029a
// 0060012f  803f4a               cmp byte ptr [edi], 0x4a
// 00600132  0f8562010000         jne 0x60029a
// 00600138  384f01               cmp byte ptr [edi + 1], cl
// 0060013b  0f8559010000         jne 0x60029a
// 00600141  807f0249             cmp byte ptr [edi + 2], 0x49
// 00600145  0f854f010000         jne 0x60029a
// 0060014b  384f03               cmp byte ptr [edi + 3], cl
// 0060014e  0f8546010000         jne 0x60029a
// 00600154  807f0400             cmp byte ptr [edi + 4], 0
// 00600158  0f853c010000         jne 0x60029a
// 0060015e  c6860001000001       mov byte ptr [esi + 0x100], 1
// 00600165  8a5705               mov dl, byte ptr [edi + 5]
// 00600168  889601010000         mov byte ptr [esi + 0x101], dl
// 0060016e  8a4706               mov al, byte ptr [edi + 6]
// 00600171  888602010000         mov byte ptr [esi + 0x102], al
// 00600177  8a4f07               mov cl, byte ptr [edi + 7]
// 0060017a  888e03010000         mov byte ptr [esi + 0x103], cl
// 00600180  0fb65708             movzx edx, byte ptr [edi + 8]
// 00600184  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 00600188  b800010000           mov eax, 0x100
// 0060018d  660fafd0             imul dx, ax
// 00600191  6603d1               add dx, cx
// 00600194  66899604010000       mov word ptr [esi + 0x104], dx
// 0060019b  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 0060019f  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 006001a3  660fafd0             imul dx, ax
// 006001a7  6603d1               add dx, cx
// 006001aa  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 006001b1  66899606010000       mov word ptr [esi + 0x106], dx
// 006001b8  742e                 je 0x6001e8
// 006001ba  8b16                 mov edx, dword ptr [esi]
// 006001bc  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 006001c3  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 006001ca  8b0e                 mov ecx, dword ptr [esi]
// 006001cc  894118               mov dword ptr [ecx + 0x18], eax
// 006001cf  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 006001d6  8b06                 mov eax, dword ptr [esi]
// 006001d8  89501c               mov dword ptr [eax + 0x1c], edx
// 006001db  8b0e                 mov ecx, dword ptr [esi]
// 006001dd  8b5104               mov edx, dword ptr [ecx + 4]
// 006001e0  6aff                 push -1
// 006001e2  56                   push esi
// 006001e3  ffd2                 call edx
// 006001e5  83c408               add esp, 8
// 006001e8  8b06                 mov eax, dword ptr [esi]
// 006001ea  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 006001f1  83c018               add eax, 0x18
// 006001f4  8908                 mov dword ptr [eax], ecx
// 006001f6  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 006001fd  895004               mov dword ptr [eax + 4], edx
// 00600200  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 00600207  894808               mov dword ptr [eax + 8], ecx
// 0060020a  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 00600211  89500c               mov dword ptr [eax + 0xc], edx
// 00600214  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 0060021b  894810               mov dword ptr [eax + 0x10], ecx
// 0060021e  8b16                 mov edx, dword ptr [esi]
// 00600220  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 00600227  8b06                 mov eax, dword ptr [esi]
// 00600229  8b4804               mov ecx, dword ptr [eax + 4]
// 0060022c  6a01                 push 1
// 0060022e  56                   push esi
// 0060022f  ffd1                 call ecx
// 00600231  8a570c               mov dl, byte ptr [edi + 0xc]
// 00600234  83c408               add esp, 8
// 00600237  0a570d               or dl, byte ptr [edi + 0xd]
// 0060023a  7428                 je 0x600264
// 0060023c  8b06                 mov eax, dword ptr [esi]
// 0060023e  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 00600245  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 00600249  8b16                 mov edx, dword ptr [esi]
// 0060024b  894a18               mov dword ptr [edx + 0x18], ecx
// 0060024e  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 00600252  8b0e                 mov ecx, dword ptr [esi]
// 00600254  89411c               mov dword ptr [ecx + 0x1c], eax
// 00600257  8b16                 mov edx, dword ptr [esi]
// 00600259  8b4204               mov eax, dword ptr [edx + 4]
// 0060025c  6a01                 push 1
// 0060025e  56                   push esi
// 0060025f  ffd0                 call eax
// 00600261  83c408               add esp, 8
// 00600264  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 00600268  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 0060026c  0fafc1               imul eax, ecx
// 0060026f  83eb0e               sub ebx, 0xe
// 00600272  8d1440               lea edx, [eax + eax*2]
// 00600275  3bda                 cmp ebx, edx
// 00600277  0f84f6000000         je 0x600373
// 0060027d  8b06                 mov eax, dword ptr [esi]
// 0060027f  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 00600286  8b0e                 mov ecx, dword ptr [esi]
// 00600288  895918               mov dword ptr [ecx + 0x18], ebx
// 0060028b  8b16                 mov edx, dword ptr [esi]
// 0060028d  8b4204               mov eax, dword ptr [edx + 4]
// 00600290  6a01                 push 1
// 00600292  56                   push esi
// 00600293  ffd0                 call eax
// 00600295  83c408               add esp, 8
// 00600298  5b                   pop ebx
// 00600299  c3                   ret 
// 0060029a  83f806               cmp eax, 6
// 0060029d  0f82b5000000         jb 0x600358
// 006002a3  803f4a               cmp byte ptr [edi], 0x4a
// 006002a6  0f85ac000000         jne 0x600358
// 006002ac  384f01               cmp byte ptr [edi + 1], cl
// 006002af  0f85a3000000         jne 0x600358
// 006002b5  b058                 mov al, 0x58
// 006002b7  384702               cmp byte ptr [edi + 2], al
// 006002ba  0f8598000000         jne 0x600358
// 006002c0  384703               cmp byte ptr [edi + 3], al
// 006002c3  0f858f000000         jne 0x600358
// 006002c9  807f0400             cmp byte ptr [edi + 4], 0
// 006002cd  0f8585000000         jne 0x600358
// 006002d3  0fb64705             movzx eax, byte ptr [edi + 5]
// 006002d7  83e810               sub eax, 0x10
// 006002da  6a01                 push 1
// 006002dc  56                   push esi
// 006002dd  745f                 je 0x60033e
// 006002df  83e801               sub eax, 1
// 006002e2  7440                 je 0x600324
// 006002e4  83e802               sub eax, 2
// 006002e7  8b0e                 mov ecx, dword ptr [esi]
// 006002e9  7421                 je 0x60030c
// 006002eb  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 006002f2  0fb65705             movzx edx, byte ptr [edi + 5]
// 006002f6  8b06                 mov eax, dword ptr [esi]
// 006002f8  895018               mov dword ptr [eax + 0x18], edx
// 006002fb  8b0e                 mov ecx, dword ptr [esi]
// 006002fd  89591c               mov dword ptr [ecx + 0x1c], ebx
// 00600300  8b16                 mov edx, dword ptr [esi]
// 00600302  8b4204               mov eax, dword ptr [edx + 4]
// 00600305  ffd0                 call eax
// 00600307  83c408               add esp, 8
// 0060030a  5b                   pop ebx
// 0060030b  c3                   ret 
// 0060030c  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 00600313  8b16                 mov edx, dword ptr [esi]
// 00600315  895a18               mov dword ptr [edx + 0x18], ebx
// 00600318  8b06                 mov eax, dword ptr [esi]
// 0060031a  8b4804               mov ecx, dword ptr [eax + 4]
// 0060031d  ffd1                 call ecx
// 0060031f  83c408               add esp, 8
// 00600322  5b                   pop ebx
// 00600323  c3                   ret 
// 00600324  8b16                 mov edx, dword ptr [esi]
// 00600326  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 0060032d  8b06                 mov eax, dword ptr [esi]
// 0060032f  895818               mov dword ptr [eax + 0x18], ebx
// 00600332  8b0e                 mov ecx, dword ptr [esi]
// 00600334  8b5104               mov edx, dword ptr [ecx + 4]
// 00600337  ffd2                 call edx
// 00600339  83c408               add esp, 8
// 0060033c  5b                   pop ebx
// 0060033d  c3                   ret 
// 0060033e  8b06                 mov eax, dword ptr [esi]
// 00600340  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 00600347  8b0e                 mov ecx, dword ptr [esi]
// 00600349  895918               mov dword ptr [ecx + 0x18], ebx
// 0060034c  8b16                 mov edx, dword ptr [esi]
// 0060034e  8b4204               mov eax, dword ptr [edx + 4]
// 00600351  ffd0                 call eax
// 00600353  83c408               add esp, 8
// 00600356  5b                   pop ebx
// 00600357  c3                   ret 
// 00600358  8b0e                 mov ecx, dword ptr [esi]
// 0060035a  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 00600361  8b16                 mov edx, dword ptr [esi]
// 00600363  895a18               mov dword ptr [edx + 0x18], ebx
// 00600366  8b06                 mov eax, dword ptr [esi]
// 00600368  8b4804               mov ecx, dword ptr [eax + 4]
// 0060036b  6a01                 push 1
// 0060036d  56                   push esi
// 0060036e  ffd1                 call ecx
// 00600370  83c408               add esp, 8
// 00600373  5b                   pop ebx
// 00600374  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
