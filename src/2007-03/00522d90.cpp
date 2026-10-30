// roc 2007-03 00522d90  unit: seg_00520000  size: 494 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00522d90
//
// 00522d90  83ec10               sub esp, 0x10
// 00522d93  53                   push ebx
// 00522d94  55                   push ebp
// 00522d95  56                   push esi
// 00522d96  8b742420             mov esi, dword ptr [esp + 0x20]
// 00522d9a  8b4604               mov eax, dword ptr [esi + 4]
// 00522d9d  8b08                 mov ecx, dword ptr [eax]
// 00522d9f  68a0000000           push 0xa0
// 00522da4  6a01                 push 1
// 00522da6  56                   push esi
// 00522da7  ffd1                 call ecx
// 00522da9  8be8                 mov ebp, eax
// 00522dab  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 00522db1  83c40c               add esp, 0xc
// 00522db4  c74500c0285200       mov dword ptr [ebp], 0x5228c0
// 00522dbb  c74504e0285200       mov dword ptr [ebp + 4], 0x5228e0
// 00522dc2  c6450800             mov byte ptr [ebp + 8], 0
// 00522dc6  80be0a01000000       cmp byte ptr [esi + 0x10a], 0
// 00522dcd  896c2418             mov dword ptr [esp + 0x18], ebp
// 00522dd1  7413                 je 0x522de6
// 00522dd3  8b16                 mov edx, dword ptr [esi]
// 00522dd5  c7421419000000       mov dword ptr [edx + 0x14], 0x19
// 00522ddc  8b06                 mov eax, dword ptr [esi]
// 00522dde  8b08                 mov ecx, dword ptr [eax]
// 00522de0  56                   push esi
// 00522de1  ffd1                 call ecx
// 00522de3  83c404               add esp, 4
// 00522de6  807e4800             cmp byte ptr [esi + 0x48], 0
// 00522dea  740e                 je 0x522dfa
// 00522dec  83be1801000001       cmp dword ptr [esi + 0x118], 1
// 00522df3  c644242001           mov byte ptr [esp + 0x20], 1
// 00522df8  7f05                 jg 0x522dff
// 00522dfa  c644242000           mov byte ptr [esp + 0x20], 0
// 00522dff  837e2400             cmp dword ptr [esi + 0x24], 0
// 00522e03  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00522e09  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00522e11  0f8e60010000         jle 0x522f77
// 00522e17  83c324               add ebx, 0x24
// 00522e1a  83c534               add ebp, 0x34
// 00522e1d  57                   push edi
// 00522e1e  8bff                 mov edi, edi
// 00522e20  8b0b                 mov ecx, dword ptr [ebx]
// 00522e22  8b43e4               mov eax, dword ptr [ebx - 0x1c]
// 00522e25  8bbe18010000         mov edi, dword ptr [esi + 0x118]
// 00522e2b  0fafc1               imul eax, ecx
// 00522e2e  99                   cdq 
// 00522e2f  f7ff                 idiv edi
// 00522e31  89442414             mov dword ptr [esp + 0x14], eax
// 00522e35  8b43e8               mov eax, dword ptr [ebx - 0x18]
// 00522e38  0fafc1               imul eax, ecx
// 00522e3b  99                   cdq 
// 00522e3c  f7ff                 idiv edi
// 00522e3e  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00522e44  89542418             mov dword ptr [esp + 0x18], edx
// 00522e48  8bc8                 mov ecx, eax
// 00522e4a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00522e50  894d30               mov dword ptr [ebp + 0x30], ecx
// 00522e53  807b0c00             cmp byte ptr [ebx + 0xc], 0
// 00522e57  750c                 jne 0x522e65
// 00522e59  c74500c0295200       mov dword ptr [ebp], 0x5229c0
// 00522e60  e9f7000000           jmp 0x522f5c
// 00522e65  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00522e69  3bf8                 cmp edi, eax
// 00522e6b  7510                 jne 0x522e7d
// 00522e6d  3bca                 cmp ecx, edx
// 00522e6f  750c                 jne 0x522e7d
// 00522e71  c74500b0295200       mov dword ptr [ebp], 0x5229b0
// 00522e78  e9df000000           jmp 0x522f5c
// 00522e7d  03ff                 add edi, edi
// 00522e7f  3bf8                 cmp edi, eax
// 00522e81  755d                 jne 0x522ee0
// 00522e83  3bca                 cmp ecx, edx
// 00522e85  7525                 jne 0x522eac
// 00522e87  807c242400           cmp byte ptr [esp + 0x24], 0
// 00522e8c  7412                 je 0x522ea0
// 00522e8e  837b0402             cmp dword ptr [ebx + 4], 2
// 00522e92  760c                 jbe 0x522ea0
// 00522e94  c74500802b5200       mov dword ptr [ebp], 0x522b80
// 00522e9b  e98e000000           jmp 0x522f2e
// 00522ea0  c74500b02a5200       mov dword ptr [ebp], 0x522ab0
// 00522ea7  e982000000           jmp 0x522f2e
// 00522eac  3bf8                 cmp edi, eax
// 00522eae  7530                 jne 0x522ee0
// 00522eb0  8d1409               lea edx, [ecx + ecx]
// 00522eb3  3b542418             cmp edx, dword ptr [esp + 0x18]
// 00522eb7  7527                 jne 0x522ee0
// 00522eb9  807c242400           cmp byte ptr [esp + 0x24], 0
// 00522ebe  7417                 je 0x522ed7
// 00522ec0  837b0402             cmp dword ptr [ebx + 4], 2
// 00522ec4  7611                 jbe 0x522ed7
// 00522ec6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00522eca  c74500502c5200       mov dword ptr [ebp], 0x522c50
// 00522ed1  c6400801             mov byte ptr [eax + 8], 1
// 00522ed5  eb57                 jmp 0x522f2e
// 00522ed7  c74500102b5200       mov dword ptr [ebp], 0x522b10
// 00522ede  eb4e                 jmp 0x522f2e
// 00522ee0  99                   cdq 
// 00522ee1  f77c2414             idiv dword ptr [esp + 0x14]
// 00522ee5  85d2                 test edx, edx
// 00522ee7  89442414             mov dword ptr [esp + 0x14], eax
// 00522eeb  752e                 jne 0x522f1b
// 00522eed  8b442418             mov eax, dword ptr [esp + 0x18]
// 00522ef1  99                   cdq 
// 00522ef2  f7f9                 idiv ecx
// 00522ef4  85d2                 test edx, edx
// 00522ef6  7523                 jne 0x522f1b
// 00522ef8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00522efc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00522f00  8a542414             mov dl, byte ptr [esp + 0x14]
// 00522f04  c74500d0295200       mov dword ptr [ebp], 0x5229d0
// 00522f0b  88940f8c000000       mov byte ptr [edi + ecx + 0x8c], dl
// 00522f12  88840f96000000       mov byte ptr [edi + ecx + 0x96], al
// 00522f19  eb13                 jmp 0x522f2e
// 00522f1b  8b06                 mov eax, dword ptr [esi]
// 00522f1d  c7401426000000       mov dword ptr [eax + 0x14], 0x26
// 00522f24  8b0e                 mov ecx, dword ptr [esi]
// 00522f26  8b11                 mov edx, dword ptr [ecx]
// 00522f28  56                   push esi
// 00522f29  ffd2                 call edx
// 00522f2b  83c404               add esp, 4
// 00522f2e  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00522f34  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00522f3a  8b565c               mov edx, dword ptr [esi + 0x5c]
// 00522f3d  8b7e04               mov edi, dword ptr [esi + 4]
// 00522f40  50                   push eax
// 00522f41  51                   push ecx
// 00522f42  52                   push edx
// 00522f43  83c708               add edi, 8
// 00522f46  e8d516ffff           call 0x514620
// 00522f4b  83c408               add esp, 8
// 00522f4e  50                   push eax
// 00522f4f  8b07                 mov eax, dword ptr [edi]
// 00522f51  6a01                 push 1
// 00522f53  56                   push esi
// 00522f54  ffd0                 call eax
// 00522f56  83c410               add esp, 0x10
// 00522f59  8945d8               mov dword ptr [ebp - 0x28], eax
// 00522f5c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00522f60  83c001               add eax, 1
// 00522f63  83c504               add ebp, 4
// 00522f66  83c354               add ebx, 0x54
// 00522f69  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00522f6c  89442410             mov dword ptr [esp + 0x10], eax
// 00522f70  0f8caafeffff         jl 0x522e20
// 00522f76  5f                   pop edi
// 00522f77  5e                   pop esi
// 00522f78  5d                   pop ebp
// 00522f79  5b                   pop ebx
// 00522f7a  83c410               add esp, 0x10
// 00522f7d  c3                   ret 
// library jpeg-6b/jdsample.c (function _jinit_upsampler)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
