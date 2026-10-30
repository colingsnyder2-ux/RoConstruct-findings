// from server: 100% by auto
// roc 2011-06 00569a90  unit: seg_00560000  size: 468 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00569a90
//
// 00569a90  83ec08               sub esp, 8
// 00569a93  53                   push ebx
// 00569a94  56                   push esi
// 00569a95  8bf0                 mov esi, eax
// 00569a97  8b442414             mov eax, dword ptr [esp + 0x14]
// 00569a9b  57                   push edi
// 00569a9c  8b7c8648             mov edi, dword ptr [esi + eax*4 + 0x48]
// 00569aa0  897c2410             mov dword ptr [esp + 0x10], edi
// 00569aa4  85ff                 test edi, edi
// 00569aa6  7518                 jne 0x569ac0
// 00569aa8  8b0e                 mov ecx, dword ptr [esi]
// 00569aaa  c7411434000000       mov dword ptr [ecx + 0x14], 0x34
// 00569ab1  8b16                 mov edx, dword ptr [esi]
// 00569ab3  894218               mov dword ptr [edx + 0x18], eax
// 00569ab6  8b06                 mov eax, dword ptr [esi]
// 00569ab8  8b08                 mov ecx, dword ptr [eax]
// 00569aba  56                   push esi
// 00569abb  ffd1                 call ecx
// 00569abd  83c404               add esp, 4
// 00569ac0  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00569ac8  8d4704               lea eax, [edi + 4]
// 00569acb  ba10000000           mov edx, 0x10
// 00569ad0  b9ff000000           mov ecx, 0xff
// 00569ad5  663948fc             cmp word ptr [eax - 4], cx
// 00569ad9  b901000000           mov ecx, 1
// 00569ade  7604                 jbe 0x569ae4
// 00569ae0  894c240c             mov dword ptr [esp + 0xc], ecx
// 00569ae4  bbff000000           mov ebx, 0xff
// 00569ae9  663958fe             cmp word ptr [eax - 2], bx
// 00569aed  7604                 jbe 0x569af3
// 00569aef  894c240c             mov dword ptr [esp + 0xc], ecx
// 00569af3  663918               cmp word ptr [eax], bx
// 00569af6  7604                 jbe 0x569afc
// 00569af8  894c240c             mov dword ptr [esp + 0xc], ecx
// 00569afc  66395802             cmp word ptr [eax + 2], bx
// 00569b00  7604                 jbe 0x569b06
// 00569b02  894c240c             mov dword ptr [esp + 0xc], ecx
// 00569b06  83c008               add eax, 8
// 00569b09  2bd1                 sub edx, ecx
// 00569b0b  75c3                 jne 0x569ad0
// 00569b0d  389780000000         cmp byte ptr [edi + 0x80], dl
// 00569b13  0f8540010000         jne 0x569c59
// 00569b19  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569b1c  8b10                 mov edx, dword ptr [eax]
// 00569b1e  55                   push ebp
// 00569b1f  881a                 mov byte ptr [edx], bl
// 00569b21  ff00                 inc dword ptr [eax]
// 00569b23  83cdff               or ebp, 0xffffffff
// 00569b26  016804               add dword ptr [eax + 4], ebp
// 00569b29  7523                 jne 0x569b4e
// 00569b2b  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569b2e  56                   push esi
// 00569b2f  ffd0                 call eax
// 00569b31  83c404               add esp, 4
// 00569b34  84c0                 test al, al
// 00569b36  7516                 jne 0x569b4e
// 00569b38  8b0e                 mov ecx, dword ptr [esi]
// 00569b3a  bf18000000           mov edi, 0x18
// 00569b3f  897914               mov dword ptr [ecx + 0x14], edi
// 00569b42  8b16                 mov edx, dword ptr [esi]
// 00569b44  8b02                 mov eax, dword ptr [edx]
// 00569b46  56                   push esi
// 00569b47  ffd0                 call eax
// 00569b49  83c404               add esp, 4
// 00569b4c  eb05                 jmp 0x569b53
// 00569b4e  bf18000000           mov edi, 0x18
// 00569b53  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569b56  8b08                 mov ecx, dword ptr [eax]
// 00569b58  c601db               mov byte ptr [ecx], 0xdb
// 00569b5b  ff00                 inc dword ptr [eax]
// 00569b5d  016804               add dword ptr [eax + 4], ebp
// 00569b60  751c                 jne 0x569b7e
// 00569b62  8b500c               mov edx, dword ptr [eax + 0xc]
// 00569b65  56                   push esi
// 00569b66  ffd2                 call edx
// 00569b68  83c404               add esp, 4
// 00569b6b  84c0                 test al, al
// 00569b6d  750f                 jne 0x569b7e
// 00569b6f  8b06                 mov eax, dword ptr [esi]
// 00569b71  897814               mov dword ptr [eax + 0x14], edi
// 00569b74  8b0e                 mov ecx, dword ptr [esi]
// 00569b76  8b11                 mov edx, dword ptr [ecx]
// 00569b78  56                   push esi
// 00569b79  ffd2                 call edx
// 00569b7b  83c404               add esp, 4
// 00569b7e  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00569b82  f7db                 neg ebx
// 00569b84  1bdb                 sbb ebx, ebx
// 00569b86  83e340               and ebx, 0x40
// 00569b89  83c343               add ebx, 0x43
// 00569b8c  e88ffeffff           call 0x569a20
// 00569b91  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569b94  8a4c2410             mov cl, byte ptr [esp + 0x10]
// 00569b98  8b10                 mov edx, dword ptr [eax]
// 00569b9a  c0e104               shl cl, 4
// 00569b9d  024c241c             add cl, byte ptr [esp + 0x1c]
// 00569ba1  880a                 mov byte ptr [edx], cl
// 00569ba3  ff00                 inc dword ptr [eax]
// 00569ba5  016804               add dword ptr [eax + 4], ebp
// 00569ba8  751c                 jne 0x569bc6
// 00569baa  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569bad  56                   push esi
// 00569bae  ffd0                 call eax
// 00569bb0  83c404               add esp, 4
// 00569bb3  84c0                 test al, al
// 00569bb5  750f                 jne 0x569bc6
// 00569bb7  8b0e                 mov ecx, dword ptr [esi]
// 00569bb9  897914               mov dword ptr [ecx + 0x14], edi
// 00569bbc  8b16                 mov edx, dword ptr [esi]
// 00569bbe  8b02                 mov eax, dword ptr [edx]
// 00569bc0  56                   push esi
// 00569bc1  ffd0                 call eax
// 00569bc3  83c404               add esp, 4
// 00569bc6  bff058a800           mov edi, 0xa858f0
// 00569bcb  eb03                 jmp 0x569bd0
// 00569bcd  8d4900               lea ecx, [ecx]
// 00569bd0  837c241000           cmp dword ptr [esp + 0x10], 0
// 00569bd5  8b0f                 mov ecx, dword ptr [edi]
// 00569bd7  8b542414             mov edx, dword ptr [esp + 0x14]
// 00569bdb  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 00569bdf  7433                 je 0x569c14
// 00569be1  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569be4  8b10                 mov edx, dword ptr [eax]
// 00569be6  8bcb                 mov ecx, ebx
// 00569be8  c1e908               shr ecx, 8
// 00569beb  880a                 mov byte ptr [edx], cl
// 00569bed  ff00                 inc dword ptr [eax]
// 00569bef  016804               add dword ptr [eax + 4], ebp
// 00569bf2  7520                 jne 0x569c14
// 00569bf4  8b400c               mov eax, dword ptr [eax + 0xc]
// 00569bf7  56                   push esi
// 00569bf8  ffd0                 call eax
// 00569bfa  83c404               add esp, 4
// 00569bfd  84c0                 test al, al
// 00569bff  7513                 jne 0x569c14
// 00569c01  8b0e                 mov ecx, dword ptr [esi]
// 00569c03  c7411418000000       mov dword ptr [ecx + 0x14], 0x18
// 00569c0a  8b16                 mov edx, dword ptr [esi]
// 00569c0c  8b02                 mov eax, dword ptr [edx]
// 00569c0e  56                   push esi
// 00569c0f  ffd0                 call eax
// 00569c11  83c404               add esp, 4
// 00569c14  8b4618               mov eax, dword ptr [esi + 0x18]
// 00569c17  8b08                 mov ecx, dword ptr [eax]
// 00569c19  8819                 mov byte ptr [ecx], bl
// 00569c1b  ff00                 inc dword ptr [eax]
// 00569c1d  016804               add dword ptr [eax + 4], ebp
// 00569c20  7520                 jne 0x569c42
// 00569c22  8b500c               mov edx, dword ptr [eax + 0xc]
// 00569c25  56                   push esi
// 00569c26  ffd2                 call edx
// 00569c28  83c404               add esp, 4
// 00569c2b  84c0                 test al, al
// 00569c2d  7513                 jne 0x569c42
// 00569c2f  8b06                 mov eax, dword ptr [esi]
// 00569c31  c7401418000000       mov dword ptr [eax + 0x14], 0x18
// 00569c38  8b0e                 mov ecx, dword ptr [esi]
// 00569c3a  8b11                 mov edx, dword ptr [ecx]
// 00569c3c  56                   push esi
// 00569c3d  ffd2                 call edx
// 00569c3f  83c404               add esp, 4
// 00569c42  83c704               add edi, 4
// 00569c45  81fff059a800         cmp edi, 0xa859f0
// 00569c4b  7c83                 jl 0x569bd0
// 00569c4d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00569c51  c6808000000001       mov byte ptr [eax + 0x80], 1
// 00569c58  5d                   pop ebp
// 00569c59  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00569c5d  5f                   pop edi
// 00569c5e  5e                   pop esi
// 00569c5f  5b                   pop ebx
// 00569c60  83c408               add esp, 8
// 00569c63  c3                   ret 
// library jpeg-6b/jcmarker.c (function _emit_dqt)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
