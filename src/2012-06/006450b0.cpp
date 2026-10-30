// roc 2012-06 006450b0  unit: seg_00640000  size: 704 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006450b0
//
// 006450b0  53                   push ebx
// 006450b1  56                   push esi
// 006450b2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006450b6  8b4628               mov eax, dword ptr [esi + 0x28]
// 006450b9  57                   push edi
// 006450ba  83f805               cmp eax, 5
// 006450bd  0f877c020000         ja 0x64533f
// 006450c3  ff248558536400       jmp dword ptr [eax*4 + 0x645358]
// 006450ca  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 006450ce  741b                 je 0x6450eb
// 006450d0  8b06                 mov eax, dword ptr [esi]
// 006450d2  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 006450d9  8b0e                 mov ecx, dword ptr [esi]
// 006450db  8b5614               mov edx, dword ptr [esi + 0x14]
// 006450de  895118               mov dword ptr [ecx + 0x18], edx
// 006450e1  8b06                 mov eax, dword ptr [esi]
// 006450e3  8b08                 mov ecx, dword ptr [eax]
// 006450e5  56                   push esi
// 006450e6  ffd1                 call ecx
// 006450e8  83c404               add esp, 4
// 006450eb  b801000000           mov eax, 1
// 006450f0  894640               mov dword ptr [esi + 0x40], eax
// 006450f3  8886c4000000         mov byte ptr [esi + 0xc4], al
// 006450f9  89463c               mov dword ptr [esi + 0x3c], eax
// 006450fc  33c9                 xor ecx, ecx
// 006450fe  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00645104  8b7644               mov esi, dword ptr [esi + 0x44]
// 00645107  5f                   pop edi
// 00645108  8906                 mov dword ptr [esi], eax
// 0064510a  894608               mov dword ptr [esi + 8], eax
// 0064510d  89460c               mov dword ptr [esi + 0xc], eax
// 00645110  894e10               mov dword ptr [esi + 0x10], ecx
// 00645113  894e14               mov dword ptr [esi + 0x14], ecx
// 00645116  894e18               mov dword ptr [esi + 0x18], ecx
// 00645119  5e                   pop esi
// 0064511a  5b                   pop ebx
// 0064511b  c3                   ret 
// 0064511c  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00645120  741b                 je 0x64513d
// 00645122  8b16                 mov edx, dword ptr [esi]
// 00645124  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0064512b  8b06                 mov eax, dword ptr [esi]
// 0064512d  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00645130  894818               mov dword ptr [eax + 0x18], ecx
// 00645133  8b16                 mov edx, dword ptr [esi]
// 00645135  8b02                 mov eax, dword ptr [edx]
// 00645137  56                   push esi
// 00645138  ffd0                 call eax
// 0064513a  83c404               add esp, 4
// 0064513d  8b5644               mov edx, dword ptr [esi + 0x44]
// 00645140  b801000000           mov eax, 1
// 00645145  8886c4000000         mov byte ptr [esi + 0xc4], al
// 0064514b  33c9                 xor ecx, ecx
// 0064514d  888ecc000000         mov byte ptr [esi + 0xcc], cl
// 00645153  bb03000000           mov ebx, 3
// 00645158  895e40               mov dword ptr [esi + 0x40], ebx
// 0064515b  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0064515e  8902                 mov dword ptr [edx], eax
// 00645160  bf02000000           mov edi, 2
// 00645165  897a08               mov dword ptr [edx + 8], edi
// 00645168  897a0c               mov dword ptr [edx + 0xc], edi
// 0064516b  894a10               mov dword ptr [edx + 0x10], ecx
// 0064516e  894a14               mov dword ptr [edx + 0x14], ecx
// 00645171  894a18               mov dword ptr [edx + 0x18], ecx
// 00645174  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 00645177  897954               mov dword ptr [ecx + 0x54], edi
// 0064517a  89415c               mov dword ptr [ecx + 0x5c], eax
// 0064517d  83c154               add ecx, 0x54
// 00645180  89410c               mov dword ptr [ecx + 0xc], eax
// 00645183  894110               mov dword ptr [ecx + 0x10], eax
// 00645186  894114               mov dword ptr [ecx + 0x14], eax
// 00645189  894118               mov dword ptr [ecx + 0x18], eax
// 0064518c  8b7644               mov esi, dword ptr [esi + 0x44]
// 0064518f  81c6a8000000         add esi, 0xa8
// 00645195  891e                 mov dword ptr [esi], ebx
// 00645197  894608               mov dword ptr [esi + 8], eax
// 0064519a  89460c               mov dword ptr [esi + 0xc], eax
// 0064519d  894610               mov dword ptr [esi + 0x10], eax
// 006451a0  894614               mov dword ptr [esi + 0x14], eax
// 006451a3  5f                   pop edi
// 006451a4  894618               mov dword ptr [esi + 0x18], eax
// 006451a7  5e                   pop esi
// 006451a8  5b                   pop ebx
// 006451a9  c3                   ret 
// 006451aa  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 006451ae  748d                 je 0x64513d
// 006451b0  8b0e                 mov ecx, dword ptr [esi]
// 006451b2  c7411414000000       mov dword ptr [ecx + 0x14], 0x14
// 006451b9  8b16                 mov edx, dword ptr [esi]
// 006451bb  8b4614               mov eax, dword ptr [esi + 0x14]
// 006451be  894218               mov dword ptr [edx + 0x18], eax
// 006451c1  8b0e                 mov ecx, dword ptr [esi]
// 006451c3  8b11                 mov edx, dword ptr [ecx]
// 006451c5  56                   push esi
// 006451c6  ffd2                 call edx
// 006451c8  e96dffffff           jmp 0x64513a
// 006451cd  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 006451d1  741b                 je 0x6451ee
// 006451d3  8b06                 mov eax, dword ptr [esi]
// 006451d5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 006451dc  8b0e                 mov ecx, dword ptr [esi]
// 006451de  8b5614               mov edx, dword ptr [esi + 0x14]
// 006451e1  895118               mov dword ptr [ecx + 0x18], edx
// 006451e4  8b06                 mov eax, dword ptr [esi]
// 006451e6  8b08                 mov ecx, dword ptr [eax]
// 006451e8  56                   push esi
// 006451e9  ffd1                 call ecx
// 006451eb  83c404               add esp, 4
// 006451ee  8b5644               mov edx, dword ptr [esi + 0x44]
// 006451f1  33c9                 xor ecx, ecx
// 006451f3  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 006451f9  b801000000           mov eax, 1
// 006451fe  8886cc000000         mov byte ptr [esi + 0xcc], al
// 00645204  bb04000000           mov ebx, 4
// 00645209  895e40               mov dword ptr [esi + 0x40], ebx
// 0064520c  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0064520f  c70243000000         mov dword ptr [edx], 0x43
// 00645215  894208               mov dword ptr [edx + 8], eax
// 00645218  89420c               mov dword ptr [edx + 0xc], eax
// 0064521b  894a10               mov dword ptr [edx + 0x10], ecx
// 0064521e  894a14               mov dword ptr [edx + 0x14], ecx
// 00645221  894a18               mov dword ptr [edx + 0x18], ecx
// 00645224  8b5644               mov edx, dword ptr [esi + 0x44]
// 00645227  c742544d000000       mov dword ptr [edx + 0x54], 0x4d
// 0064522e  89425c               mov dword ptr [edx + 0x5c], eax
// 00645231  894260               mov dword ptr [edx + 0x60], eax
// 00645234  894a64               mov dword ptr [edx + 0x64], ecx
// 00645237  894a68               mov dword ptr [edx + 0x68], ecx
// 0064523a  894a6c               mov dword ptr [edx + 0x6c], ecx
// 0064523d  83c254               add edx, 0x54
// 00645240  8b5644               mov edx, dword ptr [esi + 0x44]
// 00645243  81c2a8000000         add edx, 0xa8
// 00645249  c70259000000         mov dword ptr [edx], 0x59
// 0064524f  894208               mov dword ptr [edx + 8], eax
// 00645252  89420c               mov dword ptr [edx + 0xc], eax
// 00645255  894a10               mov dword ptr [edx + 0x10], ecx
// 00645258  894a14               mov dword ptr [edx + 0x14], ecx
// 0064525b  894a18               mov dword ptr [edx + 0x18], ecx
// 0064525e  8b7644               mov esi, dword ptr [esi + 0x44]
// 00645261  81c6fc000000         add esi, 0xfc
// 00645267  5f                   pop edi
// 00645268  c7064b000000         mov dword ptr [esi], 0x4b
// 0064526e  894608               mov dword ptr [esi + 8], eax
// 00645271  89460c               mov dword ptr [esi + 0xc], eax
// 00645274  894e10               mov dword ptr [esi + 0x10], ecx
// 00645277  894e14               mov dword ptr [esi + 0x14], ecx
// 0064527a  894e18               mov dword ptr [esi + 0x18], ecx
// 0064527d  5e                   pop esi
// 0064527e  5b                   pop ebx
// 0064527f  c3                   ret 
// 00645280  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00645284  741b                 je 0x6452a1
// 00645286  8b16                 mov edx, dword ptr [esi]
// 00645288  c7421414000000       mov dword ptr [edx + 0x14], 0x14
// 0064528f  8b06                 mov eax, dword ptr [esi]
// 00645291  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00645294  894818               mov dword ptr [eax + 0x18], ecx
// 00645297  8b16                 mov edx, dword ptr [esi]
// 00645299  8b02                 mov eax, dword ptr [edx]
// 0064529b  56                   push esi
// 0064529c  ffd0                 call eax
// 0064529e  83c404               add esp, 4
// 006452a1  8b5644               mov edx, dword ptr [esi + 0x44]
// 006452a4  c7464005000000       mov dword ptr [esi + 0x40], 5
// 006452ab  b801000000           mov eax, 1
// 006452b0  8886cc000000         mov byte ptr [esi + 0xcc], al
// 006452b6  33c9                 xor ecx, ecx
// 006452b8  888ec4000000         mov byte ptr [esi + 0xc4], cl
// 006452be  bf02000000           mov edi, 2
// 006452c3  bb04000000           mov ebx, 4
// 006452c8  895e3c               mov dword ptr [esi + 0x3c], ebx
// 006452cb  897a08               mov dword ptr [edx + 8], edi
// 006452ce  897a0c               mov dword ptr [edx + 0xc], edi
// 006452d1  8902                 mov dword ptr [edx], eax
// 006452d3  894a10               mov dword ptr [edx + 0x10], ecx
// 006452d6  894a14               mov dword ptr [edx + 0x14], ecx
// 006452d9  894a18               mov dword ptr [edx + 0x18], ecx
// 006452dc  8b5644               mov edx, dword ptr [esi + 0x44]
// 006452df  897a54               mov dword ptr [edx + 0x54], edi
// 006452e2  89425c               mov dword ptr [edx + 0x5c], eax
// 006452e5  894260               mov dword ptr [edx + 0x60], eax
// 006452e8  894264               mov dword ptr [edx + 0x64], eax
// 006452eb  894268               mov dword ptr [edx + 0x68], eax
// 006452ee  89426c               mov dword ptr [edx + 0x6c], eax
// 006452f1  83c254               add edx, 0x54
// 006452f4  8b5644               mov edx, dword ptr [esi + 0x44]
// 006452f7  81c2a8000000         add edx, 0xa8
// 006452fd  c70203000000         mov dword ptr [edx], 3
// 00645303  894208               mov dword ptr [edx + 8], eax
// 00645306  89420c               mov dword ptr [edx + 0xc], eax
// 00645309  894210               mov dword ptr [edx + 0x10], eax
// 0064530c  894214               mov dword ptr [edx + 0x14], eax
// 0064530f  894218               mov dword ptr [edx + 0x18], eax
// 00645312  8b7644               mov esi, dword ptr [esi + 0x44]
// 00645315  81c6fc000000         add esi, 0xfc
// 0064531b  897e08               mov dword ptr [esi + 8], edi
// 0064531e  897e0c               mov dword ptr [esi + 0xc], edi
// 00645321  5f                   pop edi
// 00645322  891e                 mov dword ptr [esi], ebx
// 00645324  894e10               mov dword ptr [esi + 0x10], ecx
// 00645327  894e14               mov dword ptr [esi + 0x14], ecx
// 0064532a  894e18               mov dword ptr [esi + 0x18], ecx
// 0064532d  5e                   pop esi
// 0064532e  5b                   pop ebx
// 0064532f  c3                   ret 
// 00645330  6a00                 push 0
// 00645332  56                   push esi
// 00645333  e888faffff           call 0x644dc0
// 00645338  83c408               add esp, 8
// 0064533b  5f                   pop edi
// 0064533c  5e                   pop esi
// 0064533d  5b                   pop ebx
// 0064533e  c3                   ret 
// 0064533f  8b0e                 mov ecx, dword ptr [esi]
// 00645341  c7411409000000       mov dword ptr [ecx + 0x14], 9
// 00645348  8b16                 mov edx, dword ptr [esi]
// 0064534a  8b02                 mov eax, dword ptr [edx]
// 0064534c  56                   push esi
// 0064534d  ffd0                 call eax
// 0064534f  83c404               add esp, 4
// 00645352  5f                   pop edi
// 00645353  5e                   pop esi
// 00645354  5b                   pop ebx
// 00645355  c3                   ret 
// 00645356  8bff                 mov edi, edi
// 00645358  305364               xor byte ptr [ebx + 0x64], dl
// 0064535b  00ca                 add dl, cl
// 0064535d  50                   push eax
// 0064535e  64001c51             add byte ptr fs:[ecx + edx*2], bl
// 00645362  6400aa516400cd       add byte ptr fs:[edx - 0x32ff9baf], ch
// 00645369  51                   push ecx
// library jpeg-6b/jcparam.c (function _jpeg_default_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
