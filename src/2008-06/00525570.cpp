// roc 2008-06 00525570  unit: seg_00520000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525570
//
// 00525570  53                   push ebx
// 00525571  56                   push esi
// 00525572  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00525576  8b4628               mov eax, dword ptr [esi + 0x28]
// 00525579  57                   push edi
// 0052557a  83f805               cmp eax, 5
// 0052557d  0f877c020000         ja 0x5257ff
// 00525583  ff248518585200       jmp dword ptr [eax*4 + 0x525818]
// 0052558a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0052558e  741b                 je 0x5255ab
// 00525590  8b06                 mov eax, dword ptr [esi]
// 00525592  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00525599  8b0e                 mov ecx, dword ptr [esi]
// 0052559b  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052559e  895118               mov dword ptr [ecx + 0x18], edx
// 005255a1  8b06                 mov eax, dword ptr [esi]
// 005255a3  8b08                 mov ecx, dword ptr [eax]
// 005255a5  56                   push esi
// 005255a6  ffd1                 call ecx
// 005255a8  83c404               add esp, 4
// 005255ab  b801000000           mov eax, 1
// 005255b0  894640               mov dword ptr [esi + 0x40], eax
// 005255b3  8886c4000000         mov byte ptr [esi + 0xc4], al
// 005255b9  89463c               mov dword ptr [esi + 0x3c], eax
// 005255bc  33c9                 xor ecx, ecx
// 005255be  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 005255c4  8b7644               mov esi, dword ptr [esi + 0x44]
// 005255c7  5f                   pop edi
// 005255c8  8906                 mov dword ptr [esi], eax
// 005255ca  894608               mov dword ptr [esi + 8], eax
// 005255cd  89460c               mov dword ptr [esi + 0xc], eax
// 005255d0  894e10               mov dword ptr [esi + 0x10], ecx
// 005255d3  894e14               mov dword ptr [esi + 0x14], ecx
// 005255d6  894e18               mov dword ptr [esi + 0x18], ecx
// 005255d9  5e                   pop esi
// 005255da  5b                   pop ebx
// 005255db  c3                   ret 
// 005255dc  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005255e0  741b                 je 0x5255fd
// 005255e2  8b16                 mov edx, dword ptr [esi]
// 005255e4  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 005255eb  8b06                 mov eax, dword ptr [esi]
// 005255ed  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005255f0  894818               mov dword ptr [eax + 0x18], ecx
// 005255f3  8b16                 mov edx, dword ptr [esi]
// 005255f5  8b02                 mov eax, dword ptr [edx]
// 005255f7  56                   push esi
// 005255f8  ffd0                 call eax
// 005255fa  83c404               add esp, 4
// 005255fd  8b5644               mov edx, dword ptr [esi + 0x44]
// 00525600  b801000000           mov eax, 1
// 00525605  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0052560b  33c9                 xor ecx, ecx
// 0052560d  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00525613  bb03000000           mov ebx, 3
// 00525618  895e40               mov dword ptr [esi + 0x40], ebx
// 0052561b  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0052561e  8902                 mov dword ptr [edx], eax
// 00525620  bf02000000           mov edi, 2
// 00525625  897a08               mov dword ptr [edx + 8], edi
// 00525628  897a0c               mov dword ptr [edx + 0xc], edi
// 0052562b  894a10               mov dword ptr [edx + 0x10], ecx
// 0052562e  894a14               mov dword ptr [edx + 0x14], ecx
// 00525631  894a18               mov dword ptr [edx + 0x18], ecx
// 00525634  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00525637  897954               mov dword ptr [ecx + 0x54], edi
// 0052563a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0052563d  83c154               add ecx, 0x54
// 00525640  89410c               mov dword ptr [ecx + 0xc], eax
// 00525643  894110               mov dword ptr [ecx + 0x10], eax
// 00525646  894114               mov dword ptr [ecx + 0x14], eax
// 00525649  894118               mov dword ptr [ecx + 0x18], eax
// 0052564c  8b7644               mov esi, dword ptr [esi + 0x44]
// 0052564f  81c6a8000000         add esi, 0xa8
// 00525655  891e                 mov dword ptr [esi], ebx
// 00525657  894608               mov dword ptr [esi + 8], eax
// 0052565a  89460c               mov dword ptr [esi + 0xc], eax
// 0052565d  894610               mov dword ptr [esi + 0x10], eax
// 00525660  894614               mov dword ptr [esi + 0x14], eax
// 00525663  5f                   pop edi
// 00525664  894618               mov dword ptr [esi + 0x18], eax
// 00525667  5e                   pop esi
// 00525668  5b                   pop ebx
// 00525669  c3                   ret 
// 0052566a  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0052566e  748d                 je 0x5255fd
// 00525670  8b0e                 mov ecx, dword ptr [esi]
// 00525672  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 00525679  8b16                 mov edx, dword ptr [esi]
// 0052567b  8b4614               mov eax, dword ptr [esi + 0x14]
// 0052567e  894218               mov dword ptr [edx + 0x18], eax
// 00525681  8b0e                 mov ecx, dword ptr [esi]
// 00525683  8b11                 mov edx, dword ptr [ecx]
// 00525685  56                   push esi
// 00525686  ffd2                 call edx
// 00525688  e96dffffff           jmp 0x5255fa
// 0052568d  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00525691  741b                 je 0x5256ae
// 00525693  8b06                 mov eax, dword ptr [esi]
// 00525695  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0052569c  8b0e                 mov ecx, dword ptr [esi]
// 0052569e  8b5614               mov edx, dword ptr [esi + 0x14]
// 005256a1  895118               mov dword ptr [ecx + 0x18], edx
// 005256a4  8b06                 mov eax, dword ptr [esi]
// 005256a6  8b08                 mov ecx, dword ptr [eax]
// 005256a8  56                   push esi
// 005256a9  ffd1                 call ecx
// 005256ab  83c404               add esp, 4
// 005256ae  8b5644               mov edx, dword ptr [esi + 0x44]
// 005256b1  33c9                 xor ecx, ecx
// 005256b3  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 005256b9  b801000000           mov eax, 1
// 005256be  8886cc000000         mov byte ptr [esi + 0xcc], al
// 005256c4  bb04000000           mov ebx, 4
// 005256c9  895e40               mov dword ptr [esi + 0x40], ebx
// 005256cc  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005256cf  c70243000000         mov dword ptr [edx], 0x43
// 005256d5  894208               mov dword ptr [edx + 8], eax
// 005256d8  89420c               mov dword ptr [edx + 0xc], eax
// 005256db  894a10               mov dword ptr [edx + 0x10], ecx
// 005256de  894a14               mov dword ptr [edx + 0x14], ecx
// 005256e1  894a18               mov dword ptr [edx + 0x18], ecx
// 005256e4  8b5644               mov edx, dword ptr [esi + 0x44]
// 005256e7  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 005256ee  89425c               mov dword ptr [edx + 0x5c], eax
// 005256f1  894260               mov dword ptr [edx + 0x60], eax
// 005256f4  894a64               mov dword ptr [edx + 0x64], ecx
// 005256f7  894a68               mov dword ptr [edx + 0x68], ecx
// 005256fa  894a6c               mov dword ptr [edx + 0x6c], ecx
// 005256fd  83c254               add edx, 0x54
// 00525700  8b5644               mov edx, dword ptr [esi + 0x44]
// 00525703  81c2a8000000         add edx, 0xa8
// 00525709  c70259000000         mov dword ptr [edx], 0x59
// 0052570f  894208               mov dword ptr [edx + 8], eax
// 00525712  89420c               mov dword ptr [edx + 0xc], eax
// 00525715  894a10               mov dword ptr [edx + 0x10], ecx
// 00525718  894a14               mov dword ptr [edx + 0x14], ecx
// 0052571b  894a18               mov dword ptr [edx + 0x18], ecx
// 0052571e  8b7644               mov esi, dword ptr [esi + 0x44]
// 00525721  81c6fc000000         add esi, 0xfc
// 00525727  5f                   pop edi
// 00525728  c7064b000000         mov dword ptr [esi], 0x4b
// 0052572e  894608               mov dword ptr [esi + 8], eax
// 00525731  89460c               mov dword ptr [esi + 0xc], eax
// 00525734  894e10               mov dword ptr [esi + 0x10], ecx
// 00525737  894e14               mov dword ptr [esi + 0x14], ecx
// 0052573a  894e18               mov dword ptr [esi + 0x18], ecx
// 0052573d  5e                   pop esi
// 0052573e  5b                   pop ebx
// 0052573f  c3                   ret 
// 00525740  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00525744  741b                 je 0x525761
// 00525746  8b16                 mov edx, dword ptr [esi]
// 00525748  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0052574f  8b06                 mov eax, dword ptr [esi]
// 00525751  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00525754  894818               mov dword ptr [eax + 0x18], ecx
// 00525757  8b16                 mov edx, dword ptr [esi]
// 00525759  8b02                 mov eax, dword ptr [edx]
// 0052575b  56                   push esi
// 0052575c  ffd0                 call eax
// 0052575e  83c404               add esp, 4
// 00525761  8b5644               mov edx, dword ptr [esi + 0x44]
// 00525764  c7464005000000       mov dword ptr [esi + 0x40], 5
// 0052576b  b801000000           mov eax, 1
// 00525770  8886cc000000         mov byte ptr [esi + 0xcc], al
// 00525776  33c9                 xor ecx, ecx
// 00525778  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 0052577e  bf02000000           mov edi, 2
// 00525783  bb04000000           mov ebx, 4
// 00525788  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0052578b  897a08               mov dword ptr [edx + 8], edi
// 0052578e  897a0c               mov dword ptr [edx + 0xc], edi
// 00525791  8902                 mov dword ptr [edx], eax
// 00525793  894a10               mov dword ptr [edx + 0x10], ecx
// 00525796  894a14               mov dword ptr [edx + 0x14], ecx
// 00525799  894a18               mov dword ptr [edx + 0x18], ecx
// 0052579c  8b5644               mov edx, dword ptr [esi + 0x44]
// 0052579f  897a54               mov dword ptr [edx + 0x54], edi
// 005257a2  89425c               mov dword ptr [edx + 0x5c], eax
// 005257a5  894260               mov dword ptr [edx + 0x60], eax
// 005257a8  894264               mov dword ptr [edx + 0x64], eax
// 005257ab  894268               mov dword ptr [edx + 0x68], eax
// 005257ae  89426c               mov dword ptr [edx + 0x6c], eax
// 005257b1  83c254               add edx, 0x54
// 005257b4  8b5644               mov edx, dword ptr [esi + 0x44]
// 005257b7  81c2a8000000         add edx, 0xa8
// 005257bd  c70203000000         mov dword ptr [edx], 3
// 005257c3  894208               mov dword ptr [edx + 8], eax
// 005257c6  89420c               mov dword ptr [edx + 0xc], eax
// 005257c9  894210               mov dword ptr [edx + 0x10], eax
// 005257cc  894214               mov dword ptr [edx + 0x14], eax
// 005257cf  894218               mov dword ptr [edx + 0x18], eax
// 005257d2  8b7644               mov esi, dword ptr [esi + 0x44]
// 005257d5  81c6fc000000         add esi, 0xfc
// 005257db  897e08               mov dword ptr [esi + 8], edi
// 005257de  897e0c               mov dword ptr [esi + 0xc], edi
// 005257e1  5f                   pop edi
// 005257e2  891e                 mov dword ptr [esi], ebx
// 005257e4  894e10               mov dword ptr [esi + 0x10], ecx
// 005257e7  894e14               mov dword ptr [esi + 0x14], ecx
// 005257ea  894e18               mov dword ptr [esi + 0x18], ecx
// 005257ed  5e                   pop esi
// 005257ee  5b                   pop ebx
// 005257ef  c3                   ret 
// 005257f0  6a00                 push 0
// 005257f2  56                   push esi
// 005257f3  e888faffff           call 0x525280
// 005257f8  83c408               add esp, 8
// 005257fb  5f                   pop edi
// 005257fc  5e                   pop esi
// 005257fd  5b                   pop ebx
// 005257fe  c3                   ret 
// 005257ff  8b0e                 mov ecx, dword ptr [esi]
// 00525801  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 00525808  8b16                 mov edx, dword ptr [esi]
// 0052580a  8b02                 mov eax, dword ptr [edx]
// 0052580c  56                   push esi
// 0052580d  ffd0                 call eax
// 0052580f  83c404               add esp, 4
// 00525812  5f                   pop edi
// 00525813  5e                   pop esi
// 00525814  5b                   pop ebx
// 00525815  c3                   ret 
// 00525816  8bff                 mov edi, edi
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
