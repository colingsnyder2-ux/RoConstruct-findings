// from server: 100% by auto
// roc 2007-08 00521460  unit: seg_00520000  size: 701 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00521460
//
// 00521460  55                   push ebp
// 00521461  56                   push esi
// 00521462  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00521466  56                   push esi
// 00521467  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0052146e  e8bdb0ffff           call 0x51c530
// 00521473  83c404               add esp, 4
// 00521476  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0052147d  0f8495000000         je 0x521518
// 00521483  f6467002             test byte ptr [esi + 0x70], 2
// 00521487  7522                 jne 0x5214ab
// 00521489  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0052148f  2b055c167a00         sub eax, dword ptr [0x7a165c]
// 00521495  8b0d78167a00         mov ecx, dword ptr [0x7a1678]
// 0052149b  8d4408ff             lea eax, [eax + ecx - 1]
// 0052149f  33d2                 xor edx, edx
// 005214a1  f7f1                 div ecx
// 005214a3  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 005214a9  eb0c                 jmp 0x5214b7
// 005214ab  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 005214b1  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 005214b7  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 005214be  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 005214c4  03c0                 add eax, eax
// 005214c6  8b8c0040167a00       mov ecx, dword ptr [eax + eax + 0x7a1640]
// 005214cd  03c0                 add eax, eax
// 005214cf  8bd5                 mov edx, ebp
// 005214d1  2b9024167a00         sub edx, dword ptr [eax + 0x7a1624]
// 005214d7  8d440aff             lea eax, [edx + ecx - 1]
// 005214db  33d2                 xor edx, edx
// 005214dd  f7f1                 div ecx
// 005214df  8a8e29010000         mov cl, byte ptr [esi + 0x129]
// 005214e5  80f908               cmp cl, 8
// 005214e8  0fb6c9               movzx ecx, cl
// 005214eb  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 005214f1  7211                 jb 0x521504
// 005214f3  c1e903               shr ecx, 3
// 005214f6  0fafc8               imul ecx, eax
// 005214f9  8d4101               lea eax, [ecx + 1]
// 005214fc  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00521502  eb3b                 jmp 0x52153f
// 00521504  0fafc8               imul ecx, eax
// 00521507  83c107               add ecx, 7
// 0052150a  c1e903               shr ecx, 3
// 0052150d  8d4101               lea eax, [ecx + 1]
// 00521510  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00521516  eb27                 jmp 0x52153f
// 00521518  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0052151e  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00521524  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 0052152a  83c101               add ecx, 1
// 0052152d  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 00521533  89aee0000000         mov dword ptr [esi + 0xe0], ebp
// 00521539  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 0052153f  0fb68629010000       movzx eax, byte ptr [esi + 0x129]
// 00521546  53                   push ebx
// 00521547  8b5e70               mov ebx, dword ptr [esi + 0x70]
// 0052154a  f6c304               test bl, 4
// 0052154d  57                   push edi
// 0052154e  740e                 je 0x52155e
// 00521550  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 00521557  7305                 jae 0x52155e
// 00521559  b808000000           mov eax, 8
// 0052155e  8bfb                 mov edi, ebx
// 00521560  81e700100000         and edi, 0x1000
// 00521566  7460                 je 0x5215c8
// 00521568  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0052156e  80f903               cmp cl, 3
// 00521571  7515                 jne 0x521588
// 00521573  33c0                 xor eax, eax
// 00521575  6639861a010000       cmp word ptr [esi + 0x11a], ax
// 0052157c  0f95c0               setne al
// 0052157f  8d04c518000000       lea eax, [eax*8 + 0x18]
// 00521586  eb40                 jmp 0x5215c8
// 00521588  84c9                 test cl, cl
// 0052158a  7518                 jne 0x5215a4
// 0052158c  83f808               cmp eax, 8
// 0052158f  7d05                 jge 0x521596
// 00521591  b808000000           mov eax, 8
// 00521596  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 0052159e  7428                 je 0x5215c8
// 005215a0  03c0                 add eax, eax
// 005215a2  eb24                 jmp 0x5215c8
// 005215a4  80f902               cmp cl, 2
// 005215a7  751f                 jne 0x5215c8
// 005215a9  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 005215b1  7415                 je 0x5215c8
// 005215b3  8d0c8500000000       lea ecx, [eax*4]
// 005215ba  b856555555           mov eax, 0x55555556
// 005215bf  f7e9                 imul ecx
// 005215c1  8bc2                 mov eax, edx
// 005215c3  c1e81f               shr eax, 0x1f
// 005215c6  03c2                 add eax, edx
// 005215c8  8bd3                 mov edx, ebx
// 005215ca  81e200800000         and edx, 0x8000
// 005215d0  7441                 je 0x521613
// 005215d2  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 005215d8  80f903               cmp cl, 3
// 005215db  7507                 jne 0x5215e4
// 005215dd  b820000000           mov eax, 0x20
// 005215e2  eb2f                 jmp 0x521613
// 005215e4  84c9                 test cl, cl
// 005215e6  7513                 jne 0x5215fb
// 005215e8  33c9                 xor ecx, ecx
// 005215ea  83f808               cmp eax, 8
// 005215ed  0f9fc1               setg cl
// 005215f0  83e901               sub ecx, 1
// 005215f3  83e1f0               and ecx, 0xfffffff0
// 005215f6  83c120               add ecx, 0x20
// 005215f9  eb16                 jmp 0x521611
// 005215fb  80f902               cmp cl, 2
// 005215fe  7513                 jne 0x521613
// 00521600  33c9                 xor ecx, ecx
// 00521602  83f820               cmp eax, 0x20
// 00521605  0f9fc1               setg cl
// 00521608  83e901               sub ecx, 1
// 0052160b  83e1e0               and ecx, 0xffffffe0
// 0052160e  83c140               add ecx, 0x40
// 00521611  8bc1                 mov eax, ecx
// 00521613  f7c300400000         test ebx, 0x4000
// 00521619  7457                 je 0x521672
// 0052161b  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 00521623  7404                 je 0x521629
// 00521625  85ff                 test edi, edi
// 00521627  7536                 jne 0x52165f
// 00521629  85d2                 test edx, edx
// 0052162b  7532                 jne 0x52165f
// 0052162d  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 00521633  80f904               cmp cl, 4
// 00521636  7427                 je 0x52165f
// 00521638  83f808               cmp eax, 8
// 0052163b  7f11                 jg 0x52164e
// 0052163d  33c0                 xor eax, eax
// 0052163f  80f906               cmp cl, 6
// 00521642  0f94c0               sete al
// 00521645  8d04c518000000       lea eax, [eax*8 + 0x18]
// 0052164c  eb24                 jmp 0x521672
// 0052164e  80e906               sub cl, 6
// 00521651  f6d9                 neg cl
// 00521653  1bc9                 sbb ecx, ecx
// 00521655  83e1f0               and ecx, 0xfffffff0
// 00521658  83c140               add ecx, 0x40
// 0052165b  8bc1                 mov eax, ecx
// 0052165d  eb13                 jmp 0x521672
// 0052165f  33d2                 xor edx, edx
// 00521661  83f810               cmp eax, 0x10
// 00521664  0f9fc2               setg dl
// 00521667  83ea01               sub edx, 1
// 0052166a  83e2e0               and edx, 0xffffffe0
// 0052166d  83c240               add edx, 0x40
// 00521670  8bc2                 mov eax, edx
// 00521672  5f                   pop edi
// 00521673  f7c300001000         test ebx, 0x100000
// 00521679  5b                   pop ebx
// 0052167a  7411                 je 0x52168d
// 0052167c  0fb64e65             movzx ecx, byte ptr [esi + 0x65]
// 00521680  0fb65664             movzx edx, byte ptr [esi + 0x64]
// 00521684  0fafca               imul ecx, edx
// 00521687  3bc8                 cmp ecx, eax
// 00521689  7e02                 jle 0x52168d
// 0052168b  8bc1                 mov eax, ecx
// 0052168d  8d5507               lea edx, [ebp + 7]
// 00521690  83e2f8               and edx, 0xfffffff8
// 00521693  83f808               cmp eax, 8
// 00521696  8bc8                 mov ecx, eax
// 00521698  7c08                 jl 0x5216a2
// 0052169a  c1e903               shr ecx, 3
// 0052169d  0fafca               imul ecx, edx
// 005216a0  eb09                 jmp 0x5216ab
// 005216a2  0fafca               imul ecx, edx
// 005216a5  83c107               add ecx, 7
// 005216a8  c1e903               shr ecx, 3
// 005216ab  83c007               add eax, 7
// 005216ae  c1f803               sar eax, 3
// 005216b1  8d440841             lea eax, [eax + ecx + 0x41]
// 005216b5  50                   push eax
// 005216b6  56                   push esi
// 005216b7  e8c4d5ffff           call 0x51ec80
// 005216bc  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 005216c2  898650020000         mov dword ptr [esi + 0x250], eax
// 005216c8  83c020               add eax, 0x20
// 005216cb  83c101               add ecx, 1
// 005216ce  83c408               add esp, 8
// 005216d1  83f9ff               cmp ecx, -1
// 005216d4  8986ec000000         mov dword ptr [esi + 0xec], eax
// 005216da  760e                 jbe 0x5216ea
// 005216dc  682c377a00           push 0x7a372c
// 005216e1  56                   push esi
// 005216e2  e8f9d1ffff           call 0x51e8e0
// 005216e7  83c408               add esp, 8
// 005216ea  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 005216f0  83c201               add edx, 1
// 005216f3  52                   push edx
// 005216f4  56                   push esi
// 005216f5  e886d5ffff           call 0x51ec80
// 005216fa  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 00521700  83c101               add ecx, 1
// 00521703  51                   push ecx
// 00521704  6a00                 push 0
// 00521706  50                   push eax
// 00521707  56                   push esi
// 00521708  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 0052170e  e8ddd4ffff           call 0x51ebf0
// 00521713  834e6c40             or dword ptr [esi + 0x6c], 0x40
// 00521717  83c418               add esp, 0x18
// 0052171a  5e                   pop esi
// 0052171b  5d                   pop ebp
// 0052171c  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_read_start_row)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
