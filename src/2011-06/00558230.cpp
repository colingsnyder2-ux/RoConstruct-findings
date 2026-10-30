// roc 2011-06 00558230  unit: seg_00550000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00558230
//
// 00558230  53                   push ebx
// 00558231  56                   push esi
// 00558232  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00558236  8b4628               mov eax, dword ptr [esi + 0x28]
// 00558239  57                   push edi
// 0055823a  83f805               cmp eax, 5
// 0055823d  0f877c020000         ja 0x5584bf
// 00558243  ff2485d8845500       jmp dword ptr [eax*4 + 0x5584d8]
// 0055824a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0055824e  741b                 je 0x55826b
// 00558250  8b06                 mov eax, dword ptr [esi]
// 00558252  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00558259  8b0e                 mov ecx, dword ptr [esi]
// 0055825b  8b5614               mov edx, dword ptr [esi + 0x14]
// 0055825e  895118               mov dword ptr [ecx + 0x18], edx
// 00558261  8b06                 mov eax, dword ptr [esi]
// 00558263  8b08                 mov ecx, dword ptr [eax]
// 00558265  56                   push esi
// 00558266  ffd1                 call ecx
// 00558268  83c404               add esp, 4
// 0055826b  b801000000           mov eax, 1
// 00558270  894640               mov dword ptr [esi + 0x40], eax
// 00558273  8886c4000000         mov byte ptr [esi + 0xc4], al
// 00558279  89463c               mov dword ptr [esi + 0x3c], eax
// 0055827c  33c9                 xor ecx, ecx
// 0055827e  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00558284  8b7644               mov esi, dword ptr [esi + 0x44]
// 00558287  5f                   pop edi
// 00558288  8906                 mov dword ptr [esi], eax
// 0055828a  894608               mov dword ptr [esi + 8], eax
// 0055828d  89460c               mov dword ptr [esi + 0xc], eax
// 00558290  894e10               mov dword ptr [esi + 0x10], ecx
// 00558293  894e14               mov dword ptr [esi + 0x14], ecx
// 00558296  894e18               mov dword ptr [esi + 0x18], ecx
// 00558299  5e                   pop esi
// 0055829a  5b                   pop ebx
// 0055829b  c3                   ret 
// 0055829c  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005582a0  741b                 je 0x5582bd
// 005582a2  8b16                 mov edx, dword ptr [esi]
// 005582a4  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 005582ab  8b06                 mov eax, dword ptr [esi]
// 005582ad  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005582b0  894818               mov dword ptr [eax + 0x18], ecx
// 005582b3  8b16                 mov edx, dword ptr [esi]
// 005582b5  8b02                 mov eax, dword ptr [edx]
// 005582b7  56                   push esi
// 005582b8  ffd0                 call eax
// 005582ba  83c404               add esp, 4
// 005582bd  8b5644               mov edx, dword ptr [esi + 0x44]
// 005582c0  b801000000           mov eax, 1
// 005582c5  8886c4000000         mov byte ptr [esi + 0xc4], al
// 005582cb  33c9                 xor ecx, ecx
// 005582cd  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 005582d3  bb03000000           mov ebx, 3
// 005582d8  895e40               mov dword ptr [esi + 0x40], ebx
// 005582db  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005582de  8902                 mov dword ptr [edx], eax
// 005582e0  bf02000000           mov edi, 2
// 005582e5  897a08               mov dword ptr [edx + 8], edi
// 005582e8  897a0c               mov dword ptr [edx + 0xc], edi
// 005582eb  894a10               mov dword ptr [edx + 0x10], ecx
// 005582ee  894a14               mov dword ptr [edx + 0x14], ecx
// 005582f1  894a18               mov dword ptr [edx + 0x18], ecx
// 005582f4  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 005582f7  897954               mov dword ptr [ecx + 0x54], edi
// 005582fa  89415c               mov dword ptr [ecx + 0x5c], eax
// 005582fd  83c154               add ecx, 0x54
// 00558300  89410c               mov dword ptr [ecx + 0xc], eax
// 00558303  894110               mov dword ptr [ecx + 0x10], eax
// 00558306  894114               mov dword ptr [ecx + 0x14], eax
// 00558309  894118               mov dword ptr [ecx + 0x18], eax
// 0055830c  8b7644               mov esi, dword ptr [esi + 0x44]
// 0055830f  81c6a8000000         add esi, 0xa8
// 00558315  891e                 mov dword ptr [esi], ebx
// 00558317  894608               mov dword ptr [esi + 8], eax
// 0055831a  89460c               mov dword ptr [esi + 0xc], eax
// 0055831d  894610               mov dword ptr [esi + 0x10], eax
// 00558320  894614               mov dword ptr [esi + 0x14], eax
// 00558323  5f                   pop edi
// 00558324  894618               mov dword ptr [esi + 0x18], eax
// 00558327  5e                   pop esi
// 00558328  5b                   pop ebx
// 00558329  c3                   ret 
// 0055832a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0055832e  748d                 je 0x5582bd
// 00558330  8b0e                 mov ecx, dword ptr [esi]
// 00558332  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00558339  8b16                 mov edx, dword ptr [esi]
// 0055833b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0055833e  894218               mov dword ptr [edx + 0x18], eax
// 00558341  8b0e                 mov ecx, dword ptr [esi]
// 00558343  8b11                 mov edx, dword ptr [ecx]
// 00558345  56                   push esi
// 00558346  ffd2                 call edx
// 00558348  e96dffffff           jmp 0x5582ba
// 0055834d  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00558351  741b                 je 0x55836e
// 00558353  8b06                 mov eax, dword ptr [esi]
// 00558355  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0055835c  8b0e                 mov ecx, dword ptr [esi]
// 0055835e  8b5614               mov edx, dword ptr [esi + 0x14]
// 00558361  895118               mov dword ptr [ecx + 0x18], edx
// 00558364  8b06                 mov eax, dword ptr [esi]
// 00558366  8b08                 mov ecx, dword ptr [eax]
// 00558368  56                   push esi
// 00558369  ffd1                 call ecx
// 0055836b  83c404               add esp, 4
// 0055836e  8b5644               mov edx, dword ptr [esi + 0x44]
// 00558371  33c9                 xor ecx, ecx
// 00558373  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 00558379  b801000000           mov eax, 1
// 0055837e  8886cc000000         mov byte ptr [esi + 0xcc], al
// 00558384  bb04000000           mov ebx, 4
// 00558389  895e40               mov dword ptr [esi + 0x40], ebx
// 0055838c  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0055838f  c70243000000         mov dword ptr [edx], 0x43
// 00558395  894208               mov dword ptr [edx + 8], eax
// 00558398  89420c               mov dword ptr [edx + 0xc], eax
// 0055839b  894a10               mov dword ptr [edx + 0x10], ecx
// 0055839e  894a14               mov dword ptr [edx + 0x14], ecx
// 005583a1  894a18               mov dword ptr [edx + 0x18], ecx
// 005583a4  8b5644               mov edx, dword ptr [esi + 0x44]
// 005583a7  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 005583ae  89425c               mov dword ptr [edx + 0x5c], eax
// 005583b1  894260               mov dword ptr [edx + 0x60], eax
// 005583b4  894a64               mov dword ptr [edx + 0x64], ecx
// 005583b7  894a68               mov dword ptr [edx + 0x68], ecx
// 005583ba  894a6c               mov dword ptr [edx + 0x6c], ecx
// 005583bd  83c254               add edx, 0x54
// 005583c0  8b5644               mov edx, dword ptr [esi + 0x44]
// 005583c3  81c2a8000000         add edx, 0xa8
// 005583c9  c70259000000         mov dword ptr [edx], 0x59
// 005583cf  894208               mov dword ptr [edx + 8], eax
// 005583d2  89420c               mov dword ptr [edx + 0xc], eax
// 005583d5  894a10               mov dword ptr [edx + 0x10], ecx
// 005583d8  894a14               mov dword ptr [edx + 0x14], ecx
// 005583db  894a18               mov dword ptr [edx + 0x18], ecx
// 005583de  8b7644               mov esi, dword ptr [esi + 0x44]
// 005583e1  81c6fc000000         add esi, 0xfc
// 005583e7  5f                   pop edi
// 005583e8  c7064b000000         mov dword ptr [esi], 0x4b
// 005583ee  894608               mov dword ptr [esi + 8], eax
// 005583f1  89460c               mov dword ptr [esi + 0xc], eax
// 005583f4  894e10               mov dword ptr [esi + 0x10], ecx
// 005583f7  894e14               mov dword ptr [esi + 0x14], ecx
// 005583fa  894e18               mov dword ptr [esi + 0x18], ecx
// 005583fd  5e                   pop esi
// 005583fe  5b                   pop ebx
// 005583ff  c3                   ret 
// 00558400  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00558404  741b                 je 0x558421
// 00558406  8b16                 mov edx, dword ptr [esi]
// 00558408  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0055840f  8b06                 mov eax, dword ptr [esi]
// 00558411  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00558414  894818               mov dword ptr [eax + 0x18], ecx
// 00558417  8b16                 mov edx, dword ptr [esi]
// 00558419  8b02                 mov eax, dword ptr [edx]
// 0055841b  56                   push esi
// 0055841c  ffd0                 call eax
// 0055841e  83c404               add esp, 4
// 00558421  8b5644               mov edx, dword ptr [esi + 0x44]
// 00558424  c7464005000000       mov dword ptr [esi + 0x40], 5
// 0055842b  b801000000           mov eax, 1
// 00558430  8886cc000000         mov byte ptr [esi + 0xcc], al
// 00558436  33c9                 xor ecx, ecx
// 00558438  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0055843e  bf02000000           mov edi, 2
// 00558443  bb04000000           mov ebx, 4
// 00558448  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0055844b  897a08               mov dword ptr [edx + 8], edi
// 0055844e  897a0c               mov dword ptr [edx + 0xc], edi
// 00558451  8902                 mov dword ptr [edx], eax
// 00558453  894a10               mov dword ptr [edx + 0x10], ecx
// 00558456  894a14               mov dword ptr [edx + 0x14], ecx
// 00558459  894a18               mov dword ptr [edx + 0x18], ecx
// 0055845c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0055845f  897a54               mov dword ptr [edx + 0x54], edi
// 00558462  89425c               mov dword ptr [edx + 0x5c], eax
// 00558465  894260               mov dword ptr [edx + 0x60], eax
// 00558468  894264               mov dword ptr [edx + 0x64], eax
// 0055846b  894268               mov dword ptr [edx + 0x68], eax
// 0055846e  89426c               mov dword ptr [edx + 0x6c], eax
// 00558471  83c254               add edx, 0x54
// 00558474  8b5644               mov edx, dword ptr [esi + 0x44]
// 00558477  81c2a8000000         add edx, 0xa8
// 0055847d  c70203000000         mov dword ptr [edx], 3
// 00558483  894208               mov dword ptr [edx + 8], eax
// 00558486  89420c               mov dword ptr [edx + 0xc], eax
// 00558489  894210               mov dword ptr [edx + 0x10], eax
// 0055848c  894214               mov dword ptr [edx + 0x14], eax
// 0055848f  894218               mov dword ptr [edx + 0x18], eax
// 00558492  8b7644               mov esi, dword ptr [esi + 0x44]
// 00558495  81c6fc000000         add esi, 0xfc
// 0055849b  897e08               mov dword ptr [esi + 8], edi
// 0055849e  897e0c               mov dword ptr [esi + 0xc], edi
// 005584a1  5f                   pop edi
// 005584a2  891e                 mov dword ptr [esi], ebx
// 005584a4  894e10               mov dword ptr [esi + 0x10], ecx
// 005584a7  894e14               mov dword ptr [esi + 0x14], ecx
// 005584aa  894e18               mov dword ptr [esi + 0x18], ecx
// 005584ad  5e                   pop esi
// 005584ae  5b                   pop ebx
// 005584af  c3                   ret 
// 005584b0  6a00                 push 0
// 005584b2  56                   push esi
// 005584b3  e888faffff           call 0x557f40
// 005584b8  83c408               add esp, 8
// 005584bb  5f                   pop edi
// 005584bc  5e                   pop esi
// 005584bd  5b                   pop ebx
// 005584be  c3                   ret 
// 005584bf  8b0e                 mov ecx, dword ptr [esi]
// 005584c1  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 005584c8  8b16                 mov edx, dword ptr [esi]
// 005584ca  8b02                 mov eax, dword ptr [edx]
// 005584cc  56                   push esi
// 005584cd  ffd0                 call eax
// 005584cf  83c404               add esp, 4
// 005584d2  5f                   pop edi
// 005584d3  5e                   pop esi
// 005584d4  5b                   pop ebx
// 005584d5  c3                   ret 
// 005584d6  8bff                 mov edi, edi
// 005584d8  b084                 mov al, 0x84
// 005584da  55                   push ebp
// 005584db  004a82               add byte ptr [edx - 0x7e], cl
// 005584de  55                   push ebp
// 005584df  009c8255002a83       add byte ptr [edx + eax*4 - 0x7cd5ffab], bl
// 005584e6  55                   push ebp
// 005584e7  004d83               add byte ptr [ebp - 0x7d], cl
// 005584ea  55                   push ebp
// 005584eb  0000                 add byte ptr [eax], al
// 005584ed  845500               test byte ptr [ebp], dl
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
