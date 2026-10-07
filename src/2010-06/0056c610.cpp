// roc 2010-06 0056c610  unit: seg_00560000  size: 273 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056c610
//
// 0056c610  56                   push esi
// 0056c611  8b742408             mov esi, dword ptr [esp + 8]
// 0056c615  8b4614               mov eax, dword ptr [esi + 0x14]
// 0056c618  83f865               cmp eax, 0x65
// 0056c61b  7421                 je 0x56c63e
// 0056c61d  83f866               cmp eax, 0x66
// 0056c620  741c                 je 0x56c63e
// 0056c622  83f867               cmp eax, 0x67
// 0056c625  7444                 je 0x56c66b
// 0056c627  8b06                 mov eax, dword ptr [esi]
// 0056c629  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056c630  8b0e                 mov ecx, dword ptr [esi]
// 0056c632  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056c635  895118               mov dword ptr [ecx + 0x18], edx
// 0056c638  8b06                 mov eax, dword ptr [esi]
// 0056c63a  8b08                 mov ecx, dword ptr [eax]
// 0056c63c  eb27                 jmp 0x56c665
// 0056c63e  8b96d0000000         mov edx, dword ptr [esi + 0xd0]
// 0056c644  3b5620               cmp edx, dword ptr [esi + 0x20]
// 0056c647  7313                 jae 0x56c65c
// 0056c649  8b06                 mov eax, dword ptr [esi]
// 0056c64b  c7401443000000       mov dword ptr [eax + 0x14], 0x43
// 0056c652  8b0e                 mov ecx, dword ptr [esi]
// 0056c654  8b11                 mov edx, dword ptr [ecx]
// 0056c656  56                   push esi
// 0056c657  ffd2                 call edx
// 0056c659  83c404               add esp, 4
// 0056c65c  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0056c662  8b4808               mov ecx, dword ptr [eax + 8]
// 0056c665  56                   push esi
// 0056c666  ffd1                 call ecx
// 0056c668  83c404               add esp, 4
// 0056c66b  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0056c671  80780d00             cmp byte ptr [eax + 0xd], 0
// 0056c675  0f8586000000         jne 0x56c701
// 0056c67b  53                   push ebx
// 0056c67c  57                   push edi
// 0056c67d  bb18000000           mov ebx, 0x18
// 0056c682  8b10                 mov edx, dword ptr [eax]
// 0056c684  56                   push esi
// 0056c685  ffd2                 call edx
// 0056c687  33ff                 xor edi, edi
// 0056c689  83c404               add esp, 4
// 0056c68c  39bee0000000         cmp dword ptr [esi + 0xe0], edi
// 0056c692  7650                 jbe 0x56c6e4
// 0056c694  837e0800             cmp dword ptr [esi + 8], 0
// 0056c698  741d                 je 0x56c6b7
// 0056c69a  8b4608               mov eax, dword ptr [esi + 8]
// 0056c69d  897804               mov dword ptr [eax + 4], edi
// 0056c6a0  8b4e08               mov ecx, dword ptr [esi + 8]
// 0056c6a3  8b96e0000000         mov edx, dword ptr [esi + 0xe0]
// 0056c6a9  895108               mov dword ptr [ecx + 8], edx
// 0056c6ac  8b4608               mov eax, dword ptr [esi + 8]
// 0056c6af  8b08                 mov ecx, dword ptr [eax]
// 0056c6b1  56                   push esi
// 0056c6b2  ffd1                 call ecx
// 0056c6b4  83c404               add esp, 4
// 0056c6b7  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 0056c6bd  8b4204               mov eax, dword ptr [edx + 4]
// 0056c6c0  6a00                 push 0
// 0056c6c2  56                   push esi
// 0056c6c3  ffd0                 call eax
// 0056c6c5  83c408               add esp, 8
// 0056c6c8  84c0                 test al, al
// 0056c6ca  750f                 jne 0x56c6db
// 0056c6cc  8b0e                 mov ecx, dword ptr [esi]
// 0056c6ce  895914               mov dword ptr [ecx + 0x14], ebx
// 0056c6d1  8b16                 mov edx, dword ptr [esi]
// 0056c6d3  8b02                 mov eax, dword ptr [edx]
// 0056c6d5  56                   push esi
// 0056c6d6  ffd0                 call eax
// 0056c6d8  83c404               add esp, 4
// 0056c6db  47                   inc edi
// 0056c6dc  3bbee0000000         cmp edi, dword ptr [esi + 0xe0]
// 0056c6e2  72b0                 jb 0x56c694
// 0056c6e4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 0056c6ea  8b5108               mov edx, dword ptr [ecx + 8]
// 0056c6ed  56                   push esi
// 0056c6ee  ffd2                 call edx
// 0056c6f0  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 0056c6f6  83c404               add esp, 4
// 0056c6f9  80780d00             cmp byte ptr [eax + 0xd], 0
// 0056c6fd  7483                 je 0x56c682
// 0056c6ff  5f                   pop edi
// 0056c700  5b                   pop ebx
// 0056c701  8b864c010000         mov eax, dword ptr [esi + 0x14c]
// 0056c707  8b480c               mov ecx, dword ptr [eax + 0xc]
// 0056c70a  56                   push esi
// 0056c70b  ffd1                 call ecx
// 0056c70d  8b5618               mov edx, dword ptr [esi + 0x18]
// 0056c710  8b4210               mov eax, dword ptr [edx + 0x10]
// 0056c713  56                   push esi
// 0056c714  ffd0                 call eax
// 0056c716  56                   push esi
// 0056c717  e84460ffff           call 0x562760
// 0056c71c  83c40c               add esp, 0xc
// 0056c71f  5e                   pop esi
// 0056c720  c3                   ret 
// library jpeg-6b/jcapimin.c (function _jpeg_finish_compress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcapimin.c
