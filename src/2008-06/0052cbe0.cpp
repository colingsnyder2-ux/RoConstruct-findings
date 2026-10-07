// roc 2008-06 0052cbe0  unit: seg_00520000  size: 687 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052cbe0
//
// 0052cbe0  55                   push ebp
// 0052cbe1  56                   push esi
// 0052cbe2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0052cbe6  56                   push esi
// 0052cbe7  c7467800000000       mov dword ptr [esi + 0x78], 0
// 0052cbee  e86d6cffff           call 0x523860
// 0052cbf3  83c404               add esp, 4
// 0052cbf6  80be2301000000       cmp byte ptr [esi + 0x123], 0
// 0052cbfd  0f8495000000         je 0x52cc98
// 0052cc03  f6467002             test byte ptr [esi + 0x70], 2
// 0052cc07  7522                 jne 0x52cc2b
// 0052cc09  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0052cc0f  2b0524958200         sub eax, dword ptr [0x829524]
// 0052cc15  8b0d40958200         mov ecx, dword ptr [0x829540]
// 0052cc1b  8d4408ff             lea eax, [eax + ecx - 1]
// 0052cc1f  33d2                 xor edx, edx
// 0052cc21  f7f1                 div ecx
// 0052cc23  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0052cc29  eb0c                 jmp 0x52cc37
// 0052cc2b  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 0052cc31  898ed0000000         mov dword ptr [esi + 0xd0], ecx
// 0052cc37  0fb68624010000       movzx eax, byte ptr [esi + 0x124]
// 0052cc3e  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 0052cc44  03c0                 add eax, eax
// 0052cc46  8b8c0008958200       mov ecx, dword ptr [eax + eax + 0x829508]
// 0052cc4d  03c0                 add eax, eax
// 0052cc4f  8bd5                 mov edx, ebp
// 0052cc51  2b90ec948200         sub edx, dword ptr [eax + 0x8294ec]
// 0052cc57  8d440aff             lea eax, [edx + ecx - 1]
// 0052cc5b  33d2                 xor edx, edx
// 0052cc5d  f7f1                 div ecx
// 0052cc5f  8a8e29010000         mov cl, byte ptr [esi + 0x129]
// 0052cc65  80f908               cmp cl, 8
// 0052cc68  0fb6c9               movzx ecx, cl
// 0052cc6b  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 0052cc71  7211                 jb 0x52cc84
// 0052cc73  c1e903               shr ecx, 3
// 0052cc76  0fafc8               imul ecx, eax
// 0052cc79  8d4101               lea eax, [ecx + 1]
// 0052cc7c  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0052cc82  eb39                 jmp 0x52ccbd
// 0052cc84  0fafc8               imul ecx, eax
// 0052cc87  83c107               add ecx, 7
// 0052cc8a  c1e903               shr ecx, 3
// 0052cc8d  8d4101               lea eax, [ecx + 1]
// 0052cc90  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0052cc96  eb25                 jmp 0x52ccbd
// 0052cc98  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0052cc9e  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 0052cca4  8baec8000000         mov ebp, dword ptr [esi + 0xc8]
// 0052ccaa  41                   inc ecx
// 0052ccab  8986d0000000         mov dword ptr [esi + 0xd0], eax
// 0052ccb1  89aee0000000         mov dword ptr [esi + 0xe0], ebp
// 0052ccb7  898edc000000         mov dword ptr [esi + 0xdc], ecx
// 0052ccbd  0fb68629010000       movzx eax, byte ptr [esi + 0x129]
// 0052ccc4  53                   push ebx
// 0052ccc5  8b5e70               mov ebx, dword ptr [esi + 0x70]
// 0052ccc8  57                   push edi
// 0052ccc9  f6c304               test bl, 4
// 0052cccc  740e                 je 0x52ccdc
// 0052ccce  80be2701000008       cmp byte ptr [esi + 0x127], 8
// 0052ccd5  7305                 jae 0x52ccdc
// 0052ccd7  b808000000           mov eax, 8
// 0052ccdc  8bfb                 mov edi, ebx
// 0052ccde  81e700100000         and edi, 0x1000
// 0052cce4  7460                 je 0x52cd46
// 0052cce6  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0052ccec  80f903               cmp cl, 3
// 0052ccef  7515                 jne 0x52cd06
// 0052ccf1  33c0                 xor eax, eax
// 0052ccf3  6639861a010000       cmp word ptr [esi + 0x11a], ax
// 0052ccfa  0f95c0               setne al
// 0052ccfd  8d04c518000000       lea eax, [eax*8 + 0x18]
// 0052cd04  eb40                 jmp 0x52cd46
// 0052cd06  84c9                 test cl, cl
// 0052cd08  7518                 jne 0x52cd22
// 0052cd0a  83f808               cmp eax, 8
// 0052cd0d  7d05                 jge 0x52cd14
// 0052cd0f  b808000000           mov eax, 8
// 0052cd14  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 0052cd1c  7428                 je 0x52cd46
// 0052cd1e  03c0                 add eax, eax
// 0052cd20  eb24                 jmp 0x52cd46
// 0052cd22  80f902               cmp cl, 2
// 0052cd25  751f                 jne 0x52cd46
// 0052cd27  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 0052cd2f  7415                 je 0x52cd46
// 0052cd31  8d0c8500000000       lea ecx, [eax*4]
// 0052cd38  b856555555           mov eax, 0x55555556
// 0052cd3d  f7e9                 imul ecx
// 0052cd3f  8bc2                 mov eax, edx
// 0052cd41  c1e81f               shr eax, 0x1f
// 0052cd44  03c2                 add eax, edx
// 0052cd46  8bd3                 mov edx, ebx
// 0052cd48  81e200800000         and edx, 0x8000
// 0052cd4e  743d                 je 0x52cd8d
// 0052cd50  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0052cd56  80f903               cmp cl, 3
// 0052cd59  7507                 jne 0x52cd62
// 0052cd5b  b820000000           mov eax, 0x20
// 0052cd60  eb2b                 jmp 0x52cd8d
// 0052cd62  84c9                 test cl, cl
// 0052cd64  7511                 jne 0x52cd77
// 0052cd66  33c9                 xor ecx, ecx
// 0052cd68  83f808               cmp eax, 8
// 0052cd6b  0f9fc1               setg cl
// 0052cd6e  49                   dec ecx
// 0052cd6f  83e1f0               and ecx, 0xfffffff0
// 0052cd72  83c120               add ecx, 0x20
// 0052cd75  eb14                 jmp 0x52cd8b
// 0052cd77  80f902               cmp cl, 2
// 0052cd7a  7511                 jne 0x52cd8d
// 0052cd7c  33c9                 xor ecx, ecx
// 0052cd7e  83f820               cmp eax, 0x20
// 0052cd81  0f9fc1               setg cl
// 0052cd84  49                   dec ecx
// 0052cd85  83e1e0               and ecx, 0xffffffe0
// 0052cd88  83c140               add ecx, 0x40
// 0052cd8b  8bc1                 mov eax, ecx
// 0052cd8d  f7c300400000         test ebx, 0x4000
// 0052cd93  7455                 je 0x52cdea
// 0052cd95  6683be1a01000000     cmp word ptr [esi + 0x11a], 0
// 0052cd9d  7404                 je 0x52cda3
// 0052cd9f  85ff                 test edi, edi
// 0052cda1  7536                 jne 0x52cdd9
// 0052cda3  85d2                 test edx, edx
// 0052cda5  7532                 jne 0x52cdd9
// 0052cda7  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0052cdad  80f904               cmp cl, 4
// 0052cdb0  7427                 je 0x52cdd9
// 0052cdb2  83f808               cmp eax, 8
// 0052cdb5  7f11                 jg 0x52cdc8
// 0052cdb7  33c0                 xor eax, eax
// 0052cdb9  80f906               cmp cl, 6
// 0052cdbc  0f94c0               sete al
// 0052cdbf  8d04c518000000       lea eax, [eax*8 + 0x18]
// 0052cdc6  eb22                 jmp 0x52cdea
// 0052cdc8  33c0                 xor eax, eax
// 0052cdca  80f906               cmp cl, 6
// 0052cdcd  0f95c0               setne al
// 0052cdd0  48                   dec eax
// 0052cdd1  83e010               and eax, 0x10
// 0052cdd4  83c030               add eax, 0x30
// 0052cdd7  eb11                 jmp 0x52cdea
// 0052cdd9  33d2                 xor edx, edx
// 0052cddb  83f810               cmp eax, 0x10
// 0052cdde  0f9fc2               setg dl
// 0052cde1  4a                   dec edx
// 0052cde2  83e2e0               and edx, 0xffffffe0
// 0052cde5  83c240               add edx, 0x40
// 0052cde8  8bc2                 mov eax, edx
// 0052cdea  5f                   pop edi
// 0052cdeb  f7c300001000         test ebx, 0x100000
// 0052cdf1  5b                   pop ebx
// 0052cdf2  7411                 je 0x52ce05
// 0052cdf4  0fb64e65             movzx ecx, byte ptr [esi + 0x65]
// 0052cdf8  0fb65664             movzx edx, byte ptr [esi + 0x64]
// 0052cdfc  0fafca               imul ecx, edx
// 0052cdff  3bc8                 cmp ecx, eax
// 0052ce01  7e02                 jle 0x52ce05
// 0052ce03  8bc1                 mov eax, ecx
// 0052ce05  8d5507               lea edx, [ebp + 7]
// 0052ce08  83e2f8               and edx, 0xfffffff8
// 0052ce0b  83f808               cmp eax, 8
// 0052ce0e  8bc8                 mov ecx, eax
// 0052ce10  7c08                 jl 0x52ce1a
// 0052ce12  c1e903               shr ecx, 3
// 0052ce15  0fafca               imul ecx, edx
// 0052ce18  eb09                 jmp 0x52ce23
// 0052ce1a  0fafca               imul ecx, edx
// 0052ce1d  83c107               add ecx, 7
// 0052ce20  c1e903               shr ecx, 3
// 0052ce23  83c007               add eax, 7
// 0052ce26  c1f803               sar eax, 3
// 0052ce29  8d440841             lea eax, [eax + ecx + 0x41]
// 0052ce2d  50                   push eax
// 0052ce2e  56                   push esi
// 0052ce2f  e86cd6ffff           call 0x52a4a0
// 0052ce34  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0052ce3a  898650020000         mov dword ptr [esi + 0x250], eax
// 0052ce40  83c020               add eax, 0x20
// 0052ce43  41                   inc ecx
// 0052ce44  83c408               add esp, 8
// 0052ce47  8986ec000000         mov dword ptr [esi + 0xec], eax
// 0052ce4d  83f9ff               cmp ecx, -1
// 0052ce50  760e                 jbe 0x52ce60
// 0052ce52  68f8bc8200           push 0x82bcf8
// 0052ce57  56                   push esi
// 0052ce58  e853cbffff           call 0x5299b0
// 0052ce5d  83c408               add esp, 8
// 0052ce60  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 0052ce66  42                   inc edx
// 0052ce67  52                   push edx
// 0052ce68  56                   push esi
// 0052ce69  e832d6ffff           call 0x52a4a0
// 0052ce6e  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 0052ce74  41                   inc ecx
// 0052ce75  51                   push ecx
// 0052ce76  6a00                 push 0
// 0052ce78  50                   push eax
// 0052ce79  56                   push esi
// 0052ce7a  8986e8000000         mov dword ptr [esi + 0xe8], eax
// 0052ce80  e8abd5ffff           call 0x52a430
// 0052ce85  834e6c40             or dword ptr [esi + 0x6c], 0x40
// 0052ce89  83c418               add esp, 0x18
// 0052ce8c  5e                   pop esi
// 0052ce8d  5d                   pop ebp
// 0052ce8e  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_read_start_row)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
