// roc 2009-12 0060b550  unit: seg_00600000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060b550
//
// 0060b550  53                   push ebx
// 0060b551  56                   push esi
// 0060b552  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060b556  8b4628               mov eax, dword ptr [esi + 0x28]
// 0060b559  57                   push edi
// 0060b55a  83f805               cmp eax, 5
// 0060b55d  0f877c020000         ja 0x60b7df
// 0060b563  ff2485f8b76000       jmp dword ptr [eax*4 + 0x60b7f8]
// 0060b56a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b56e  741b                 je 0x60b58b
// 0060b570  8b06                 mov eax, dword ptr [esi]
// 0060b572  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060b579  8b0e                 mov ecx, dword ptr [esi]
// 0060b57b  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060b57e  895118               mov dword ptr [ecx + 0x18], edx
// 0060b581  8b06                 mov eax, dword ptr [esi]
// 0060b583  8b08                 mov ecx, dword ptr [eax]
// 0060b585  56                   push esi
// 0060b586  ffd1                 call ecx
// 0060b588  83c404               add esp, 4
// 0060b58b  b801000000           mov eax, 1
// 0060b590  894640               mov dword ptr [esi + 0x40], eax
// 0060b593  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0060b599  89463c               mov dword ptr [esi + 0x3c], eax
// 0060b59c  33c9                 xor ecx, ecx
// 0060b59e  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 0060b5a4  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b5a7  5f                   pop edi
// 0060b5a8  8906                 mov dword ptr [esi], eax
// 0060b5aa  894608               mov dword ptr [esi + 8], eax
// 0060b5ad  89460c               mov dword ptr [esi + 0xc], eax
// 0060b5b0  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b5b3  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b5b6  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b5b9  5e                   pop esi
// 0060b5ba  5b                   pop ebx
// 0060b5bb  c3                   ret 
// 0060b5bc  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b5c0  741b                 je 0x60b5dd
// 0060b5c2  8b16                 mov edx, dword ptr [esi]
// 0060b5c4  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0060b5cb  8b06                 mov eax, dword ptr [esi]
// 0060b5cd  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0060b5d0  894818               mov dword ptr [eax + 0x18], ecx
// 0060b5d3  8b16                 mov edx, dword ptr [esi]
// 0060b5d5  8b02                 mov eax, dword ptr [edx]
// 0060b5d7  56                   push esi
// 0060b5d8  ffd0                 call eax
// 0060b5da  83c404               add esp, 4
// 0060b5dd  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b5e0  b801000000           mov eax, 1
// 0060b5e5  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0060b5eb  33c9                 xor ecx, ecx
// 0060b5ed  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 0060b5f3  bb03000000           mov ebx, 3
// 0060b5f8  895e40               mov dword ptr [esi + 0x40], ebx
// 0060b5fb  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0060b5fe  8902                 mov dword ptr [edx], eax
// 0060b600  bf02000000           mov edi, 2
// 0060b605  897a08               mov dword ptr [edx + 8], edi
// 0060b608  897a0c               mov dword ptr [edx + 0xc], edi
// 0060b60b  894a10               mov dword ptr [edx + 0x10], ecx
// 0060b60e  894a14               mov dword ptr [edx + 0x14], ecx
// 0060b611  894a18               mov dword ptr [edx + 0x18], ecx
// 0060b614  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0060b617  897954               mov dword ptr [ecx + 0x54], edi
// 0060b61a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0060b61d  83c154               add ecx, 0x54
// 0060b620  89410c               mov dword ptr [ecx + 0xc], eax
// 0060b623  894110               mov dword ptr [ecx + 0x10], eax
// 0060b626  894114               mov dword ptr [ecx + 0x14], eax
// 0060b629  894118               mov dword ptr [ecx + 0x18], eax
// 0060b62c  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b62f  81c6a8000000         add esi, 0xa8
// 0060b635  891e                 mov dword ptr [esi], ebx
// 0060b637  894608               mov dword ptr [esi + 8], eax
// 0060b63a  89460c               mov dword ptr [esi + 0xc], eax
// 0060b63d  894610               mov dword ptr [esi + 0x10], eax
// 0060b640  894614               mov dword ptr [esi + 0x14], eax
// 0060b643  5f                   pop edi
// 0060b644  894618               mov dword ptr [esi + 0x18], eax
// 0060b647  5e                   pop esi
// 0060b648  5b                   pop ebx
// 0060b649  c3                   ret 
// 0060b64a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b64e  748d                 je 0x60b5dd
// 0060b650  8b0e                 mov ecx, dword ptr [esi]
// 0060b652  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 0060b659  8b16                 mov edx, dword ptr [esi]
// 0060b65b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0060b65e  894218               mov dword ptr [edx + 0x18], eax
// 0060b661  8b0e                 mov ecx, dword ptr [esi]
// 0060b663  8b11                 mov edx, dword ptr [ecx]
// 0060b665  56                   push esi
// 0060b666  ffd2                 call edx
// 0060b668  e96dffffff           jmp 0x60b5da
// 0060b66d  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b671  741b                 je 0x60b68e
// 0060b673  8b06                 mov eax, dword ptr [esi]
// 0060b675  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060b67c  8b0e                 mov ecx, dword ptr [esi]
// 0060b67e  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060b681  895118               mov dword ptr [ecx + 0x18], edx
// 0060b684  8b06                 mov eax, dword ptr [esi]
// 0060b686  8b08                 mov ecx, dword ptr [eax]
// 0060b688  56                   push esi
// 0060b689  ffd1                 call ecx
// 0060b68b  83c404               add esp, 4
// 0060b68e  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b691  33c9                 xor ecx, ecx
// 0060b693  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0060b699  b801000000           mov eax, 1
// 0060b69e  8886cc000000         mov byte ptr [esi + 0xcc], al
// 0060b6a4  bb04000000           mov ebx, 4
// 0060b6a9  895e40               mov dword ptr [esi + 0x40], ebx
// 0060b6ac  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0060b6af  c70243000000         mov dword ptr [edx], 0x43
// 0060b6b5  894208               mov dword ptr [edx + 8], eax
// 0060b6b8  89420c               mov dword ptr [edx + 0xc], eax
// 0060b6bb  894a10               mov dword ptr [edx + 0x10], ecx
// 0060b6be  894a14               mov dword ptr [edx + 0x14], ecx
// 0060b6c1  894a18               mov dword ptr [edx + 0x18], ecx
// 0060b6c4  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b6c7  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 0060b6ce  89425c               mov dword ptr [edx + 0x5c], eax
// 0060b6d1  894260               mov dword ptr [edx + 0x60], eax
// 0060b6d4  894a64               mov dword ptr [edx + 0x64], ecx
// 0060b6d7  894a68               mov dword ptr [edx + 0x68], ecx
// 0060b6da  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0060b6dd  83c254               add edx, 0x54
// 0060b6e0  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b6e3  81c2a8000000         add edx, 0xa8
// 0060b6e9  c70259000000         mov dword ptr [edx], 0x59
// 0060b6ef  894208               mov dword ptr [edx + 8], eax
// 0060b6f2  89420c               mov dword ptr [edx + 0xc], eax
// 0060b6f5  894a10               mov dword ptr [edx + 0x10], ecx
// 0060b6f8  894a14               mov dword ptr [edx + 0x14], ecx
// 0060b6fb  894a18               mov dword ptr [edx + 0x18], ecx
// 0060b6fe  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b701  81c6fc000000         add esi, 0xfc
// 0060b707  5f                   pop edi
// 0060b708  c7064b000000         mov dword ptr [esi], 0x4b
// 0060b70e  894608               mov dword ptr [esi + 8], eax
// 0060b711  89460c               mov dword ptr [esi + 0xc], eax
// 0060b714  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b717  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b71a  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b71d  5e                   pop esi
// 0060b71e  5b                   pop ebx
// 0060b71f  c3                   ret 
// 0060b720  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b724  741b                 je 0x60b741
// 0060b726  8b16                 mov edx, dword ptr [esi]
// 0060b728  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0060b72f  8b06                 mov eax, dword ptr [esi]
// 0060b731  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0060b734  894818               mov dword ptr [eax + 0x18], ecx
// 0060b737  8b16                 mov edx, dword ptr [esi]
// 0060b739  8b02                 mov eax, dword ptr [edx]
// 0060b73b  56                   push esi
// 0060b73c  ffd0                 call eax
// 0060b73e  83c404               add esp, 4
// 0060b741  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b744  c7464005000000       mov dword ptr [esi + 0x40], 5
// 0060b74b  b801000000           mov eax, 1
// 0060b750  8886cc000000         mov byte ptr [esi + 0xcc], al
// 0060b756  33c9                 xor ecx, ecx
// 0060b758  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0060b75e  bf02000000           mov edi, 2
// 0060b763  bb04000000           mov ebx, 4
// 0060b768  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0060b76b  897a08               mov dword ptr [edx + 8], edi
// 0060b76e  897a0c               mov dword ptr [edx + 0xc], edi
// 0060b771  8902                 mov dword ptr [edx], eax
// 0060b773  894a10               mov dword ptr [edx + 0x10], ecx
// 0060b776  894a14               mov dword ptr [edx + 0x14], ecx
// 0060b779  894a18               mov dword ptr [edx + 0x18], ecx
// 0060b77c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b77f  897a54               mov dword ptr [edx + 0x54], edi
// 0060b782  89425c               mov dword ptr [edx + 0x5c], eax
// 0060b785  894260               mov dword ptr [edx + 0x60], eax
// 0060b788  894264               mov dword ptr [edx + 0x64], eax
// 0060b78b  894268               mov dword ptr [edx + 0x68], eax
// 0060b78e  89426c               mov dword ptr [edx + 0x6c], eax
// 0060b791  83c254               add edx, 0x54
// 0060b794  8b5644               mov edx, dword ptr [esi + 0x44]
// 0060b797  81c2a8000000         add edx, 0xa8
// 0060b79d  c70203000000         mov dword ptr [edx], 3
// 0060b7a3  894208               mov dword ptr [edx + 8], eax
// 0060b7a6  89420c               mov dword ptr [edx + 0xc], eax
// 0060b7a9  894210               mov dword ptr [edx + 0x10], eax
// 0060b7ac  894214               mov dword ptr [edx + 0x14], eax
// 0060b7af  894218               mov dword ptr [edx + 0x18], eax
// 0060b7b2  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b7b5  81c6fc000000         add esi, 0xfc
// 0060b7bb  897e08               mov dword ptr [esi + 8], edi
// 0060b7be  897e0c               mov dword ptr [esi + 0xc], edi
// 0060b7c1  5f                   pop edi
// 0060b7c2  891e                 mov dword ptr [esi], ebx
// 0060b7c4  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b7c7  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b7ca  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b7cd  5e                   pop esi
// 0060b7ce  5b                   pop ebx
// 0060b7cf  c3                   ret 
// 0060b7d0  6a00                 push 0
// 0060b7d2  56                   push esi
// 0060b7d3  e888faffff           call 0x60b260
// 0060b7d8  83c408               add esp, 8
// 0060b7db  5f                   pop edi
// 0060b7dc  5e                   pop esi
// 0060b7dd  5b                   pop ebx
// 0060b7de  c3                   ret 
// 0060b7df  8b0e                 mov ecx, dword ptr [esi]
// 0060b7e1  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 0060b7e8  8b16                 mov edx, dword ptr [esi]
// 0060b7ea  8b02                 mov eax, dword ptr [edx]
// 0060b7ec  56                   push esi
// 0060b7ed  ffd0                 call eax
// 0060b7ef  83c404               add esp, 4
// 0060b7f2  5f                   pop edi
// 0060b7f3  5e                   pop esi
// 0060b7f4  5b                   pop ebx
// 0060b7f5  c3                   ret 
// 0060b7f6  8bff                 mov edi, edi
// 0060b7f8  d0b760006ab5         sal byte ptr [edi - 0x4a95ffa0], 1
// 0060b7fe  60                   pushal 
// 0060b7ff  00bcb560004ab6       add byte ptr [ebp + esi*4 - 0x49b5ffa0], bh
// 0060b806  60                   pushal 
// 0060b807  006db6               add byte ptr [ebp - 0x4a], ch
// 0060b80a  60                   pushal 
// 0060b80b  0020                 add byte ptr [eax], ah
// 0060b80d  b760                 mov bh, 0x60
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
