// roc 2010-06 005820e0  unit: seg_00580000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005820e0
//
// 005820e0  83ec10               sub esp, 0x10
// 005820e3  53                   push ebx
// 005820e4  55                   push ebp
// 005820e5  56                   push esi
// 005820e6  8b742420             mov esi, dword ptr [esp + 0x20]
// 005820ea  8b4604               mov eax, dword ptr [esi + 4]
// 005820ed  8b08                 mov ecx, dword ptr [eax]
// 005820ef  68a0000000           push 0xa0
// 005820f4  6a01                 push 1
// 005820f6  56                   push esi
// 005820f7  ffd1                 call ecx
// 005820f9  8be8                 mov ebp, eax
// 005820fb  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 00582101  83c40c               add esp, 0xc
// 00582104  c74500301c5800       mov dword ptr [ebp], 0x581c30
// 0058210b  c74504501c5800       mov dword ptr [ebp + 4], 0x581c50
// 00582112  c6450800             mov byte ptr [ebp + 8], 0
// 00582116  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 0058211d  896c2418             mov dword ptr [esp + 0x18], ebp
// 00582121  7413                 je 0x582136
// 00582123  8b16                 mov edx, dword ptr [esi]
// 00582125  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 0058212c  8b06                 mov eax, dword ptr [esi]
// 0058212e  8b08                 mov ecx, dword ptr [eax]
// 00582130  56                   push esi
// 00582131  ffd1                 call ecx
// 00582133  83c404               add esp, 4
// 00582136  807e4800             cmp byte ptr [esi + 0x48], 0
// 0058213a  740e                 je 0x58214a
// 0058213c  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 00582143  c644242001           mov byte ptr [esp + 0x20], 1
// 00582148  7f05                 jg 0x58214f
// 0058214a  c644242000           mov byte ptr [esp + 0x20], 0
// 0058214f  837e2400             cmp dword ptr [esi + 0x24], 0
// 00582153  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00582159  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00582161  0f8e5e010000         jle 0x5822c5
// 00582167  83c324               add ebx, 0x24
// 0058216a  83c534               add ebp, 0x34
// 0058216d  57                   push edi
// 0058216e  8bff                 mov edi, edi
// 00582170  8b0b                 mov ecx, dword ptr [ebx]
// 00582172  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00582175  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 0058217b  0fafc1               imul eax, ecx
// 0058217e  99                   cdq 
// 0058217f  f7ff                 idiv edi
// 00582181  89442414             mov dword ptr [esp + 0x14], eax
// 00582185  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00582188  0fafc1               imul eax, ecx
// 0058218b  99                   cdq 
// 0058218c  f7ff                 idiv edi
// 0058218e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00582194  89542418             mov dword ptr [esp + 0x18], edx
// 00582198  8bc8                 mov ecx, eax
// 0058219a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 005821a0  894d30               mov dword ptr [ebp + 0x30], ecx
// 005821a3  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 005821a7  750c                 jne 0x5821b5
// 005821a9  c74500301d5800       mov dword ptr [ebp], 0x581d30
// 005821b0  e9f7000000           jmp 0x5822ac
// 005821b5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005821b9  3bf8                 cmp edi, eax
// 005821bb  7510                 jne 0x5821cd
// 005821bd  3bca                 cmp ecx, edx
// 005821bf  750c                 jne 0x5821cd
// 005821c1  c74500201d5800       mov dword ptr [ebp], 0x581d20
// 005821c8  e9df000000           jmp 0x5822ac
// 005821cd  03ff                 add edi, edi
// 005821cf  3bf8                 cmp edi, eax
// 005821d1  755d                 jne 0x582230
// 005821d3  3bca                 cmp ecx, edx
// 005821d5  7525                 jne 0x5821fc
// 005821d7  807c242400           cmp byte ptr [esp + 0x24], 0
// 005821dc  7412                 je 0x5821f0
// 005821de  837b0402             cmp dword ptr [ebx + 4], 2
// 005821e2  760c                 jbe 0x5821f0
// 005821e4  c74500f01e5800       mov dword ptr [ebp], 0x581ef0
// 005821eb  e98e000000           jmp 0x58227e
// 005821f0  c74500201e5800       mov dword ptr [ebp], 0x581e20
// 005821f7  e982000000           jmp 0x58227e
// 005821fc  3bf8                 cmp edi, eax
// 005821fe  7530                 jne 0x582230
// 00582200  8d1409               lea edx, [ecx + ecx]
// 00582203  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00582207  7527                 jne 0x582230
// 00582209  807c242400           cmp byte ptr [esp + 0x24], 0
// 0058220e  7417                 je 0x582227
// 00582210  837b0402             cmp dword ptr [ebx + 4], 2
// 00582214  7611                 jbe 0x582227
// 00582216  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0058221a  c74500b01f5800       mov dword ptr [ebp], 0x581fb0
// 00582221  c6400801             mov byte ptr [eax + 8], 1
// 00582225  eb57                 jmp 0x58227e
// 00582227  c74500801e5800       mov dword ptr [ebp], 0x581e80
// 0058222e  eb4e                 jmp 0x58227e
// 00582230  99                   cdq 
// 00582231  f77c2414             idiv dword ptr [esp + 0x14]
// 00582235  89442414             mov dword ptr [esp + 0x14], eax
// 00582239  85d2                 test edx, edx
// 0058223b  752e                 jne 0x58226b
// 0058223d  8b442418             mov eax, dword ptr [esp + 0x18]
// 00582241  99                   cdq 
// 00582242  f7f9                 idiv ecx
// 00582244  85d2                 test edx, edx
// 00582246  7523                 jne 0x58226b
// 00582248  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0058224c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00582250  8a542414             mov dl, byte ptr [esp + 0x14]
// 00582254  c74500401d5800       mov dword ptr [ebp], 0x581d40
// 0058225b  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00582262  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00582269  eb13                 jmp 0x58227e
// 0058226b  8b06                 mov eax, dword ptr [esi]
// 0058226d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00582274  8b0e                 mov ecx, dword ptr [esi]
// 00582276  8b11                 mov edx, dword ptr [ecx]
// 00582278  56                   push esi
// 00582279  ffd2                 call edx
// 0058227b  83c404               add esp, 4
// 0058227e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00582284  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0058228a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0058228d  8b7e04               mov edi, dword ptr [esi + 4]
// 00582290  50                   push eax
// 00582291  51                   push ecx
// 00582292  52                   push edx
// 00582293  83c708               add edi, 8
// 00582296  e8b5b0feff           call 0x56d350
// 0058229b  83c408               add esp, 8
// 0058229e  50                   push eax
// 0058229f  8b07                 mov eax, dword ptr [edi]
// 005822a1  6a01                 push 1
// 005822a3  56                   push esi
// 005822a4  ffd0                 call eax
// 005822a6  83c410               add esp, 0x10
// 005822a9  8945d8               mov dword ptr [ebp - 0x28], eax
// 005822ac  8b442410             mov eax, dword ptr [esp + 0x10]
// 005822b0  40                   inc eax
// 005822b1  83c504               add ebp, 4
// 005822b4  83c354               add ebx, 0x54
// 005822b7  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005822ba  89442410             mov dword ptr [esp + 0x10], eax
// 005822be  0f8cacfeffff         jl 0x582170
// 005822c4  5f                   pop edi
// 005822c5  5e                   pop esi
// 005822c6  5d                   pop ebp
// 005822c7  5b                   pop ebx
// 005822c8  83c410               add esp, 0x10
// 005822cb  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
