// from server: 100% by auto
// roc 2008-06 0051a9a0  unit: G3D::_internal::DialogTemplate  size: 597 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051a9a0
//
// 0051a9a0  53                   push ebx
// 0051a9a1  8d1c08               lea ebx, [eax + ecx]
// 0051a9a4  b146                 mov cl, 0x46
// 0051a9a6  83f80e               cmp eax, 0xe
// 0051a9a9  0f826b010000         jb 0x51ab1a
// 0051a9af  803f4a               cmp byte ptr [edi], 0x4a
// 0051a9b2  0f8562010000         jne 0x51ab1a
// 0051a9b8  384f01               cmp byte ptr [edi + 1], cl
// 0051a9bb  0f8559010000         jne 0x51ab1a
// 0051a9c1  807f0249             cmp byte ptr [edi + 2], 0x49
// 0051a9c5  0f854f010000         jne 0x51ab1a
// 0051a9cb  384f03               cmp byte ptr [edi + 3], cl
// 0051a9ce  0f8546010000         jne 0x51ab1a
// 0051a9d4  807f0400             cmp byte ptr [edi + 4], 0
// 0051a9d8  0f853c010000         jne 0x51ab1a
// 0051a9de  c6860001000001       mov byte ptr [esi + 0x100], 1
// 0051a9e5  8a5705               mov dl, byte ptr [edi + 5]
// 0051a9e8  889601010000         mov byte ptr [esi + 0x101], dl
// 0051a9ee  8a4706               mov al, byte ptr [edi + 6]
// 0051a9f1  888602010000         mov byte ptr [esi + 0x102], al
// 0051a9f7  8a4f07               mov cl, byte ptr [edi + 7]
// 0051a9fa  888e03010000         mov byte ptr [esi + 0x103], cl
// 0051aa00  0fb65708             movzx edx, byte ptr [edi + 8]
// 0051aa04  0fb64f09             movzx ecx, byte ptr [edi + 9]
// 0051aa08  b800010000           mov eax, 0x100
// 0051aa0d  660fafd0             imul dx, ax
// 0051aa11  6603d1               add dx, cx
// 0051aa14  66899604010000       mov word ptr [esi + 0x104], dx
// 0051aa1b  0fb6570a             movzx edx, byte ptr [edi + 0xa]
// 0051aa1f  0fb64f0b             movzx ecx, byte ptr [edi + 0xb]
// 0051aa23  660fafd0             imul dx, ax
// 0051aa27  6603d1               add dx, cx
// 0051aa2a  80be0101000001       cmp byte ptr [esi + 0x101], 1
// 0051aa31  66899606010000       mov word ptr [esi + 0x106], dx
// 0051aa38  742e                 je 0x51aa68
// 0051aa3a  8b16                 mov edx, dword ptr [esi]
// 0051aa3c  c7421477000000       mov dword ptr [edx + 0x14], 0x77
// 0051aa43  0fb68601010000       movzx eax, byte ptr [esi + 0x101]
// 0051aa4a  8b0e                 mov ecx, dword ptr [esi]
// 0051aa4c  894118               mov dword ptr [ecx + 0x18], eax
// 0051aa4f  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 0051aa56  8b06                 mov eax, dword ptr [esi]
// 0051aa58  89501c               mov dword ptr [eax + 0x1c], edx
// 0051aa5b  8b0e                 mov ecx, dword ptr [esi]
// 0051aa5d  8b5104               mov edx, dword ptr [ecx + 4]
// 0051aa60  6aff                 push -1
// 0051aa62  56                   push esi
// 0051aa63  ffd2                 call edx
// 0051aa65  83c408               add esp, 8
// 0051aa68  8b06                 mov eax, dword ptr [esi]
// 0051aa6a  0fb68e01010000       movzx ecx, byte ptr [esi + 0x101]
// 0051aa71  83c018               add eax, 0x18
// 0051aa74  8908                 mov dword ptr [eax], ecx
// 0051aa76  0fb69602010000       movzx edx, byte ptr [esi + 0x102]
// 0051aa7d  895004               mov dword ptr [eax + 4], edx
// 0051aa80  0fb78e04010000       movzx ecx, word ptr [esi + 0x104]
// 0051aa87  894808               mov dword ptr [eax + 8], ecx
// 0051aa8a  0fb79606010000       movzx edx, word ptr [esi + 0x106]
// 0051aa91  89500c               mov dword ptr [eax + 0xc], edx
// 0051aa94  0fb68e03010000       movzx ecx, byte ptr [esi + 0x103]
// 0051aa9b  894810               mov dword ptr [eax + 0x10], ecx
// 0051aa9e  8b16                 mov edx, dword ptr [esi]
// 0051aaa0  c7421457000000       mov dword ptr [edx + 0x14], 0x57
// 0051aaa7  8b06                 mov eax, dword ptr [esi]
// 0051aaa9  8b4804               mov ecx, dword ptr [eax + 4]
// 0051aaac  6a01                 push 1
// 0051aaae  56                   push esi
// 0051aaaf  ffd1                 call ecx
// 0051aab1  8a570c               mov dl, byte ptr [edi + 0xc]
// 0051aab4  83c408               add esp, 8
// 0051aab7  0a570d               or dl, byte ptr [edi + 0xd]
// 0051aaba  7428                 je 0x51aae4
// 0051aabc  8b06                 mov eax, dword ptr [esi]
// 0051aabe  c740145a000000       mov dword ptr [eax + 0x14], 0x5a
// 0051aac5  0fb64f0c             movzx ecx, byte ptr [edi + 0xc]
// 0051aac9  8b16                 mov edx, dword ptr [esi]
// 0051aacb  894a18               mov dword ptr [edx + 0x18], ecx
// 0051aace  0fb6470d             movzx eax, byte ptr [edi + 0xd]
// 0051aad2  8b0e                 mov ecx, dword ptr [esi]
// 0051aad4  89411c               mov dword ptr [ecx + 0x1c], eax
// 0051aad7  8b16                 mov edx, dword ptr [esi]
// 0051aad9  8b4204               mov eax, dword ptr [edx + 4]
// 0051aadc  6a01                 push 1
// 0051aade  56                   push esi
// 0051aadf  ffd0                 call eax
// 0051aae1  83c408               add esp, 8
// 0051aae4  0fb6470c             movzx eax, byte ptr [edi + 0xc]
// 0051aae8  0fb64f0d             movzx ecx, byte ptr [edi + 0xd]
// 0051aaec  0fafc1               imul eax, ecx
// 0051aaef  83eb0e               sub ebx, 0xe
// 0051aaf2  8d1440               lea edx, [eax + eax*2]
// 0051aaf5  3bda                 cmp ebx, edx
// 0051aaf7  0f84f6000000         je 0x51abf3
// 0051aafd  8b06                 mov eax, dword ptr [esi]
// 0051aaff  c7401458000000       mov dword ptr [eax + 0x14], 0x58
// 0051ab06  8b0e                 mov ecx, dword ptr [esi]
// 0051ab08  895918               mov dword ptr [ecx + 0x18], ebx
// 0051ab0b  8b16                 mov edx, dword ptr [esi]
// 0051ab0d  8b4204               mov eax, dword ptr [edx + 4]
// 0051ab10  6a01                 push 1
// 0051ab12  56                   push esi
// 0051ab13  ffd0                 call eax
// 0051ab15  83c408               add esp, 8
// 0051ab18  5b                   pop ebx
// 0051ab19  c3                   ret 
// 0051ab1a  83f806               cmp eax, 6
// 0051ab1d  0f82b5000000         jb 0x51abd8
// 0051ab23  803f4a               cmp byte ptr [edi], 0x4a
// 0051ab26  0f85ac000000         jne 0x51abd8
// 0051ab2c  384f01               cmp byte ptr [edi + 1], cl
// 0051ab2f  0f85a3000000         jne 0x51abd8
// 0051ab35  b058                 mov al, 0x58
// 0051ab37  384702               cmp byte ptr [edi + 2], al
// 0051ab3a  0f8598000000         jne 0x51abd8
// 0051ab40  384703               cmp byte ptr [edi + 3], al
// 0051ab43  0f858f000000         jne 0x51abd8
// 0051ab49  807f0400             cmp byte ptr [edi + 4], 0
// 0051ab4d  0f8585000000         jne 0x51abd8
// 0051ab53  0fb64705             movzx eax, byte ptr [edi + 5]
// 0051ab57  83e810               sub eax, 0x10
// 0051ab5a  6a01                 push 1
// 0051ab5c  56                   push esi
// 0051ab5d  745f                 je 0x51abbe
// 0051ab5f  83e801               sub eax, 1
// 0051ab62  7440                 je 0x51aba4
// 0051ab64  83e802               sub eax, 2
// 0051ab67  8b0e                 mov ecx, dword ptr [esi]
// 0051ab69  7421                 je 0x51ab8c
// 0051ab6b  c7411459000000       mov dword ptr [ecx + 0x14], 0x59
// 0051ab72  0fb65705             movzx edx, byte ptr [edi + 5]
// 0051ab76  8b06                 mov eax, dword ptr [esi]
// 0051ab78  895018               mov dword ptr [eax + 0x18], edx
// 0051ab7b  8b0e                 mov ecx, dword ptr [esi]
// 0051ab7d  89591c               mov dword ptr [ecx + 0x1c], ebx
// 0051ab80  8b16                 mov edx, dword ptr [esi]
// 0051ab82  8b4204               mov eax, dword ptr [edx + 4]
// 0051ab85  ffd0                 call eax
// 0051ab87  83c408               add esp, 8
// 0051ab8a  5b                   pop ebx
// 0051ab8b  c3                   ret 
// 0051ab8c  c741146e000000       mov dword ptr [ecx + 0x14], 0x6e
// 0051ab93  8b16                 mov edx, dword ptr [esi]
// 0051ab95  895a18               mov dword ptr [edx + 0x18], ebx
// 0051ab98  8b06                 mov eax, dword ptr [esi]
// 0051ab9a  8b4804               mov ecx, dword ptr [eax + 4]
// 0051ab9d  ffd1                 call ecx
// 0051ab9f  83c408               add esp, 8
// 0051aba2  5b                   pop ebx
// 0051aba3  c3                   ret 
// 0051aba4  8b16                 mov edx, dword ptr [esi]
// 0051aba6  c742146d000000       mov dword ptr [edx + 0x14], 0x6d
// 0051abad  8b06                 mov eax, dword ptr [esi]
// 0051abaf  895818               mov dword ptr [eax + 0x18], ebx
// 0051abb2  8b0e                 mov ecx, dword ptr [esi]
// 0051abb4  8b5104               mov edx, dword ptr [ecx + 4]
// 0051abb7  ffd2                 call edx
// 0051abb9  83c408               add esp, 8
// 0051abbc  5b                   pop ebx
// 0051abbd  c3                   ret 
// 0051abbe  8b06                 mov eax, dword ptr [esi]
// 0051abc0  c740146c000000       mov dword ptr [eax + 0x14], 0x6c
// 0051abc7  8b0e                 mov ecx, dword ptr [esi]
// 0051abc9  895918               mov dword ptr [ecx + 0x18], ebx
// 0051abcc  8b16                 mov edx, dword ptr [esi]
// 0051abce  8b4204               mov eax, dword ptr [edx + 4]
// 0051abd1  ffd0                 call eax
// 0051abd3  83c408               add esp, 8
// 0051abd6  5b                   pop ebx
// 0051abd7  c3                   ret 
// 0051abd8  8b0e                 mov ecx, dword ptr [esi]
// 0051abda  c741144d000000       mov dword ptr [ecx + 0x14], 0x4d
// 0051abe1  8b16                 mov edx, dword ptr [esi]
// 0051abe3  895a18               mov dword ptr [edx + 0x18], ebx
// 0051abe6  8b06                 mov eax, dword ptr [esi]
// 0051abe8  8b4804               mov ecx, dword ptr [eax + 4]
// 0051abeb  6a01                 push 1
// 0051abed  56                   push esi
// 0051abee  ffd1                 call ecx
// 0051abf0  83c408               add esp, 8
// 0051abf3  5b                   pop ebx
// 0051abf4  c3                   ret 
// library jpeg-6b/jdmarker.c (function _examine_app0)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
