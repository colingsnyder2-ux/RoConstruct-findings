// roc 2007-03 0051a5d0  unit: seg_00510000  size: 459 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a5d0
//
// 0051a5d0  51                   push ecx
// 0051a5d1  53                   push ebx
// 0051a5d2  57                   push edi
// 0051a5d3  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0051a5d9  56                   push esi
// 0051a5da  e821fdffff           call 0x51a300
// 0051a5df  83c404               add esp, 4
// 0051a5e2  8bde                 mov ebx, esi
// 0051a5e4  e847ffffff           call 0x51a530
// 0051a5e9  33db                 xor ebx, ebx
// 0051a5eb  8bd6                 mov edx, esi
// 0051a5ed  895f0c               mov dword ptr [edi + 0xc], ebx
// 0051a5f0  e88bfcffff           call 0x51a280
// 0051a5f5  884710               mov byte ptr [edi + 0x10], al
// 0051a5f8  895f14               mov dword ptr [edi + 0x14], ebx
// 0051a5fb  895f18               mov dword ptr [edi + 0x18], ebx
// 0051a5fe  8a464a               mov al, byte ptr [esi + 0x4a]
// 0051a601  3ac3                 cmp al, bl
// 0051a603  7405                 je 0x51a60a
// 0051a605  385e40               cmp byte ptr [esi + 0x40], bl
// 0051a608  7509                 jne 0x51a613
// 0051a60a  885e58               mov byte ptr [esi + 0x58], bl
// 0051a60d  885e59               mov byte ptr [esi + 0x59], bl
// 0051a610  885e5a               mov byte ptr [esi + 0x5a], bl
// 0051a613  3ac3                 cmp al, bl
// 0051a615  745e                 je 0x51a675
// 0051a617  385e41               cmp byte ptr [esi + 0x41], bl
// 0051a61a  7413                 je 0x51a62f
// 0051a61c  8b06                 mov eax, dword ptr [esi]
// 0051a61e  c740142f000000       mov dword ptr [eax + 0x14], 0x2f
// 0051a625  8b0e                 mov ecx, dword ptr [esi]
// 0051a627  8b11                 mov edx, dword ptr [ecx]
// 0051a629  56                   push esi
// 0051a62a  ffd2                 call edx
// 0051a62c  83c404               add esp, 4
// 0051a62f  837e6403             cmp dword ptr [esi + 0x64], 3
// 0051a633  7455                 je 0x51a68a
// 0051a635  885e59               mov byte ptr [esi + 0x59], bl
// 0051a638  885e5a               mov byte ptr [esi + 0x5a], bl
// 0051a63b  895e74               mov dword ptr [esi + 0x74], ebx
// 0051a63e  c6465801             mov byte ptr [esi + 0x58], 1
// 0051a642  385e58               cmp byte ptr [esi + 0x58], bl
// 0051a645  7412                 je 0x51a659
// 0051a647  56                   push esi
// 0051a648  e863b40000           call 0x525ab0
// 0051a64d  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0051a653  83c404               add esp, 4
// 0051a656  894714               mov dword ptr [edi + 0x14], eax
// 0051a659  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0051a65c  7505                 jne 0x51a663
// 0051a65e  385e59               cmp byte ptr [esi + 0x59], bl
// 0051a661  7412                 je 0x51a675
// 0051a663  56                   push esi
// 0051a664  e877a70000           call 0x524de0
// 0051a669  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0051a66f  83c404               add esp, 4
// 0051a672  894f18               mov dword ptr [edi + 0x18], ecx
// 0051a675  385e41               cmp byte ptr [esi + 0x41], bl
// 0051a678  7542                 jne 0x51a6bc
// 0051a67a  385f10               cmp byte ptr [edi + 0x10], bl
// 0051a67d  56                   push esi
// 0051a67e  7420                 je 0x51a6a0
// 0051a680  e86b940000           call 0x523af0
// 0051a685  83c404               add esp, 4
// 0051a688  eb24                 jmp 0x51a6ae
// 0051a68a  395e74               cmp dword ptr [esi + 0x74], ebx
// 0051a68d  7406                 je 0x51a695
// 0051a68f  c6465901             mov byte ptr [esi + 0x59], 1
// 0051a693  ebad                 jmp 0x51a642
// 0051a695  385e50               cmp byte ptr [esi + 0x50], bl
// 0051a698  74a4                 je 0x51a63e
// 0051a69a  c6465a01             mov byte ptr [esi + 0x5a], 1
// 0051a69e  eba2                 jmp 0x51a642
// 0051a6a0  e84b8d0000           call 0x5233f0
// 0051a6a5  56                   push esi
// 0051a6a6  e8e5860000           call 0x522d90
// 0051a6ab  83c408               add esp, 8
// 0051a6ae  0fb6565a             movzx edx, byte ptr [esi + 0x5a]
// 0051a6b2  52                   push edx
// 0051a6b3  56                   push esi
// 0051a6b4  e867810000           call 0x522820
// 0051a6b9  83c408               add esp, 8
// 0051a6bc  56                   push esi
// 0051a6bd  e80e7e0000           call 0x5224d0
// 0051a6c2  83c404               add esp, 4
// 0051a6c5  389ec9000000         cmp byte ptr [esi + 0xc9], bl
// 0051a6cb  56                   push esi
// 0051a6cc  7411                 je 0x51a6df
// 0051a6ce  8b06                 mov eax, dword ptr [esi]
// 0051a6d0  c7401401000000       mov dword ptr [eax + 0x14], 1
// 0051a6d7  8b0e                 mov ecx, dword ptr [esi]
// 0051a6d9  8b11                 mov edx, dword ptr [ecx]
// 0051a6db  ffd2                 call edx
// 0051a6dd  eb14                 jmp 0x51a6f3
// 0051a6df  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 0051a6e5  7407                 je 0x51a6ee
// 0051a6e7  e8547a0000           call 0x522140
// 0051a6ec  eb05                 jmp 0x51a6f3
// 0051a6ee  e87d6d0000           call 0x521470
// 0051a6f3  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0051a6f9  83c404               add esp, 4
// 0051a6fc  385810               cmp byte ptr [eax + 0x10], bl
// 0051a6ff  7509                 jne 0x51a70a
// 0051a701  385e40               cmp byte ptr [esi + 0x40], bl
// 0051a704  885c2408             mov byte ptr [esp + 8], bl
// 0051a708  7405                 je 0x51a70f
// 0051a70a  c644240801           mov byte ptr [esp + 8], 1
// 0051a70f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051a713  51                   push ecx
// 0051a714  56                   push esi
// 0051a715  e806610000           call 0x520820
// 0051a71a  83c408               add esp, 8
// 0051a71d  385e41               cmp byte ptr [esi + 0x41], bl
// 0051a720  750a                 jne 0x51a72c
// 0051a722  53                   push ebx
// 0051a723  56                   push esi
// 0051a724  e8e7510000           call 0x51f910
// 0051a729  83c408               add esp, 8
// 0051a72c  8b5604               mov edx, dword ptr [esi + 4]
// 0051a72f  8b4218               mov eax, dword ptr [edx + 0x18]
// 0051a732  56                   push esi
// 0051a733  ffd0                 call eax
// 0051a735  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0051a73b  8b5108               mov edx, dword ptr [ecx + 8]
// 0051a73e  56                   push esi
// 0051a73f  ffd2                 call edx
// 0051a741  8b4e08               mov ecx, dword ptr [esi + 8]
// 0051a744  83c408               add esp, 8
// 0051a747  3bcb                 cmp ecx, ebx
// 0051a749  744c                 je 0x51a797
// 0051a74b  385e40               cmp byte ptr [esi + 0x40], bl
// 0051a74e  7547                 jne 0x51a797
// 0051a750  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 0051a756  385810               cmp byte ptr [eax + 0x10], bl
// 0051a759  743c                 je 0x51a797
// 0051a75b  389ec8000000         cmp byte ptr [esi + 0xc8], bl
// 0051a761  8b4624               mov eax, dword ptr [esi + 0x24]
// 0051a764  7404                 je 0x51a76a
// 0051a766  8d444002             lea eax, [eax + eax*2 + 2]
// 0051a76a  895904               mov dword ptr [ecx + 4], ebx
// 0051a76d  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0051a773  8b5608               mov edx, dword ptr [esi + 8]
// 0051a776  0fafc8               imul ecx, eax
// 0051a779  894a08               mov dword ptr [edx + 8], ecx
// 0051a77c  8b4608               mov eax, dword ptr [esi + 8]
// 0051a77f  89580c               mov dword ptr [eax + 0xc], ebx
// 0051a782  8b5608               mov edx, dword ptr [esi + 8]
// 0051a785  33c9                 xor ecx, ecx
// 0051a787  385e5a               cmp byte ptr [esi + 0x5a], bl
// 0051a78a  0f95c1               setne cl
// 0051a78d  83c102               add ecx, 2
// 0051a790  894a10               mov dword ptr [edx + 0x10], ecx
// 0051a793  83470c01             add dword ptr [edi + 0xc], 1
// 0051a797  5f                   pop edi
// 0051a798  5b                   pop ebx
// 0051a799  59                   pop ecx
// 0051a79a  c3                   ret 
// library jpeg-6b/jdmaster.c (function _master_selection)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
