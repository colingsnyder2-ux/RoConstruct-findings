// roc 2007-03 005137a0  unit: seg_00510000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005137a0
//
// 005137a0  53                   push ebx
// 005137a1  56                   push esi
// 005137a2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005137a6  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005137aa  741b                 je 0x5137c7
// 005137ac  8b06                 mov eax, dword ptr [esi]
// 005137ae  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005137b5  8b0e                 mov ecx, dword ptr [esi]
// 005137b7  8b5614               mov edx, dword ptr [esi + 0x14]
// 005137ba  895118               mov dword ptr [ecx + 0x18], edx
// 005137bd  8b06                 mov eax, dword ptr [esi]
// 005137bf  8b08                 mov ecx, dword ptr [eax]
// 005137c1  56                   push esi
// 005137c2  ffd1                 call ecx
// 005137c4  83c404               add esp, 4
// 005137c7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005137cb  83f805               cmp eax, 5
// 005137ce  894640               mov dword ptr [esi + 0x40], eax
// 005137d1  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 005137d8  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 005137df  0f876f020000         ja 0x513a54
// 005137e5  ff24856c3a5100       jmp dword ptr [eax*4 + 0x513a6c]
// 005137ec  bb01000000           mov ebx, 1
// 005137f1  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 005137f7  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005137fa  8b7644               mov esi, dword ptr [esi + 0x44]
// 005137fd  33c0                 xor eax, eax
// 005137ff  891e                 mov dword ptr [esi], ebx
// 00513801  895e08               mov dword ptr [esi + 8], ebx
// 00513804  895e0c               mov dword ptr [esi + 0xc], ebx
// 00513807  894610               mov dword ptr [esi + 0x10], eax
// 0051380a  894614               mov dword ptr [esi + 0x14], eax
// 0051380d  894618               mov dword ptr [esi + 0x18], eax
// 00513810  5e                   pop esi
// 00513811  5b                   pop ebx
// 00513812  c3                   ret 
// 00513813  8b4644               mov eax, dword ptr [esi + 0x44]
// 00513816  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0051381d  33c9                 xor ecx, ecx
// 0051381f  bb01000000           mov ebx, 1
// 00513824  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0051382a  895808               mov dword ptr [eax + 8], ebx
// 0051382d  89580c               mov dword ptr [eax + 0xc], ebx
// 00513830  c70052000000         mov dword ptr [eax], 0x52
// 00513836  894810               mov dword ptr [eax + 0x10], ecx
// 00513839  894814               mov dword ptr [eax + 0x14], ecx
// 0051383c  894818               mov dword ptr [eax + 0x18], ecx
// 0051383f  8b4644               mov eax, dword ptr [esi + 0x44]
// 00513842  83c054               add eax, 0x54
// 00513845  895808               mov dword ptr [eax + 8], ebx
// 00513848  89580c               mov dword ptr [eax + 0xc], ebx
// 0051384b  c70047000000         mov dword ptr [eax], 0x47
// 00513851  894810               mov dword ptr [eax + 0x10], ecx
// 00513854  894814               mov dword ptr [eax + 0x14], ecx
// 00513857  894818               mov dword ptr [eax + 0x18], ecx
// 0051385a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0051385d  81c6a8000000         add esi, 0xa8
// 00513863  895e08               mov dword ptr [esi + 8], ebx
// 00513866  895e0c               mov dword ptr [esi + 0xc], ebx
// 00513869  c70642000000         mov dword ptr [esi], 0x42
// 0051386f  894e10               mov dword ptr [esi + 0x10], ecx
// 00513872  894e14               mov dword ptr [esi + 0x14], ecx
// 00513875  894e18               mov dword ptr [esi + 0x18], ecx
// 00513878  5e                   pop esi
// 00513879  5b                   pop ebx
// 0051387a  c3                   ret 
// 0051387b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051387e  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00513885  bb01000000           mov ebx, 1
// 0051388a  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00513890  8918                 mov dword ptr [eax], ebx
// 00513892  33c9                 xor ecx, ecx
// 00513894  894810               mov dword ptr [eax + 0x10], ecx
// 00513897  894814               mov dword ptr [eax + 0x14], ecx
// 0051389a  894818               mov dword ptr [eax + 0x18], ecx
// 0051389d  ba02000000           mov edx, 2
// 005138a2  895008               mov dword ptr [eax + 8], edx
// 005138a5  89500c               mov dword ptr [eax + 0xc], edx
// 005138a8  8b4644               mov eax, dword ptr [esi + 0x44]
// 005138ab  83c054               add eax, 0x54
// 005138ae  895808               mov dword ptr [eax + 8], ebx
// 005138b1  89580c               mov dword ptr [eax + 0xc], ebx
// 005138b4  895810               mov dword ptr [eax + 0x10], ebx
// 005138b7  895814               mov dword ptr [eax + 0x14], ebx
// 005138ba  895818               mov dword ptr [eax + 0x18], ebx
// 005138bd  8910                 mov dword ptr [eax], edx
// 005138bf  8b7644               mov esi, dword ptr [esi + 0x44]
// 005138c2  81c6a8000000         add esi, 0xa8
// 005138c8  895e08               mov dword ptr [esi + 8], ebx
// 005138cb  895e0c               mov dword ptr [esi + 0xc], ebx
// 005138ce  895e10               mov dword ptr [esi + 0x10], ebx
// 005138d1  895e14               mov dword ptr [esi + 0x14], ebx
// 005138d4  895e18               mov dword ptr [esi + 0x18], ebx
// 005138d7  c70603000000         mov dword ptr [esi], 3
// 005138dd  5e                   pop esi
// 005138de  5b                   pop ebx
// 005138df  c3                   ret 
// 005138e0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005138e3  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 005138ea  33c9                 xor ecx, ecx
// 005138ec  bb01000000           mov ebx, 1
// 005138f1  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 005138f7  895808               mov dword ptr [eax + 8], ebx
// 005138fa  89580c               mov dword ptr [eax + 0xc], ebx
// 005138fd  c70043000000         mov dword ptr [eax], 0x43
// 00513903  894810               mov dword ptr [eax + 0x10], ecx
// 00513906  894814               mov dword ptr [eax + 0x14], ecx
// 00513909  894818               mov dword ptr [eax + 0x18], ecx
// 0051390c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051390f  89585c               mov dword ptr [eax + 0x5c], ebx
// 00513912  895860               mov dword ptr [eax + 0x60], ebx
// 00513915  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 0051391c  894864               mov dword ptr [eax + 0x64], ecx
// 0051391f  894868               mov dword ptr [eax + 0x68], ecx
// 00513922  89486c               mov dword ptr [eax + 0x6c], ecx
// 00513925  83c054               add eax, 0x54
// 00513928  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051392b  05a8000000           add eax, 0xa8
// 00513930  895808               mov dword ptr [eax + 8], ebx
// 00513933  89580c               mov dword ptr [eax + 0xc], ebx
// 00513936  c70059000000         mov dword ptr [eax], 0x59
// 0051393c  894810               mov dword ptr [eax + 0x10], ecx
// 0051393f  894814               mov dword ptr [eax + 0x14], ecx
// 00513942  894818               mov dword ptr [eax + 0x18], ecx
// 00513945  8b7644               mov esi, dword ptr [esi + 0x44]
// 00513948  81c6fc000000         add esi, 0xfc
// 0051394e  895e08               mov dword ptr [esi + 8], ebx
// 00513951  895e0c               mov dword ptr [esi + 0xc], ebx
// 00513954  c7064b000000         mov dword ptr [esi], 0x4b
// 0051395a  894e10               mov dword ptr [esi + 0x10], ecx
// 0051395d  894e14               mov dword ptr [esi + 0x14], ecx
// 00513960  894e18               mov dword ptr [esi + 0x18], ecx
// 00513963  5e                   pop esi
// 00513964  5b                   pop ebx
// 00513965  c3                   ret 
// 00513966  8b4644               mov eax, dword ptr [esi + 0x44]
// 00513969  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 00513970  bb01000000           mov ebx, 1
// 00513975  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0051397b  8918                 mov dword ptr [eax], ebx
// 0051397d  33c9                 xor ecx, ecx
// 0051397f  894810               mov dword ptr [eax + 0x10], ecx
// 00513982  894814               mov dword ptr [eax + 0x14], ecx
// 00513985  894818               mov dword ptr [eax + 0x18], ecx
// 00513988  ba02000000           mov edx, 2
// 0051398d  895008               mov dword ptr [eax + 8], edx
// 00513990  89500c               mov dword ptr [eax + 0xc], edx
// 00513993  8b4644               mov eax, dword ptr [esi + 0x44]
// 00513996  89585c               mov dword ptr [eax + 0x5c], ebx
// 00513999  895860               mov dword ptr [eax + 0x60], ebx
// 0051399c  895864               mov dword ptr [eax + 0x64], ebx
// 0051399f  895868               mov dword ptr [eax + 0x68], ebx
// 005139a2  89586c               mov dword ptr [eax + 0x6c], ebx
// 005139a5  895054               mov dword ptr [eax + 0x54], edx
// 005139a8  83c054               add eax, 0x54
// 005139ab  8b4644               mov eax, dword ptr [esi + 0x44]
// 005139ae  05a8000000           add eax, 0xa8
// 005139b3  895808               mov dword ptr [eax + 8], ebx
// 005139b6  89580c               mov dword ptr [eax + 0xc], ebx
// 005139b9  895810               mov dword ptr [eax + 0x10], ebx
// 005139bc  895814               mov dword ptr [eax + 0x14], ebx
// 005139bf  895818               mov dword ptr [eax + 0x18], ebx
// 005139c2  c70003000000         mov dword ptr [eax], 3
// 005139c8  8b7644               mov esi, dword ptr [esi + 0x44]
// 005139cb  81c6fc000000         add esi, 0xfc
// 005139d1  c70604000000         mov dword ptr [esi], 4
// 005139d7  895608               mov dword ptr [esi + 8], edx
// 005139da  89560c               mov dword ptr [esi + 0xc], edx
// 005139dd  894e10               mov dword ptr [esi + 0x10], ecx
// 005139e0  894e14               mov dword ptr [esi + 0x14], ecx
// 005139e3  894e18               mov dword ptr [esi + 0x18], ecx
// 005139e6  5e                   pop esi
// 005139e7  5b                   pop ebx
// 005139e8  c3                   ret 
// 005139e9  8b4624               mov eax, dword ptr [esi + 0x24]
// 005139ec  bb01000000           mov ebx, 1
// 005139f1  3bc3                 cmp eax, ebx
// 005139f3  89463c               mov dword ptr [esi + 0x3c], eax
// 005139f6  7c05                 jl 0x5139fd
// 005139f8  83f80a               cmp eax, 0xa
// 005139fb  7e24                 jle 0x513a21
// 005139fd  8b16                 mov edx, dword ptr [esi]
// 005139ff  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 00513a06  8b06                 mov eax, dword ptr [esi]
// 00513a08  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00513a0b  894818               mov dword ptr [eax + 0x18], ecx
// 00513a0e  8b16                 mov edx, dword ptr [esi]
// 00513a10  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 00513a17  8b06                 mov eax, dword ptr [esi]
// 00513a19  8b08                 mov ecx, dword ptr [eax]
// 00513a1b  56                   push esi
// 00513a1c  ffd1                 call ecx
// 00513a1e  83c404               add esp, 4
// 00513a21  57                   push edi
// 00513a22  33ff                 xor edi, edi
// 00513a24  33c9                 xor ecx, ecx
// 00513a26  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00513a29  7e25                 jle 0x513a50
// 00513a2b  33d2                 xor edx, edx
// 00513a2d  8d4900               lea ecx, [ecx]
// 00513a30  8b4644               mov eax, dword ptr [esi + 0x44]
// 00513a33  03c2                 add eax, edx
// 00513a35  8908                 mov dword ptr [eax], ecx
// 00513a37  03cb                 add ecx, ebx
// 00513a39  895808               mov dword ptr [eax + 8], ebx
// 00513a3c  89580c               mov dword ptr [eax + 0xc], ebx
// 00513a3f  897810               mov dword ptr [eax + 0x10], edi
// 00513a42  897814               mov dword ptr [eax + 0x14], edi
// 00513a45  897818               mov dword ptr [eax + 0x18], edi
// 00513a48  83c254               add edx, 0x54
// 00513a4b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00513a4e  7ce0                 jl 0x513a30
// 00513a50  5f                   pop edi
// 00513a51  5e                   pop esi
// 00513a52  5b                   pop ebx
// 00513a53  c3                   ret 
// 00513a54  8b16                 mov edx, dword ptr [esi]
// 00513a56  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 00513a5d  8b06                 mov eax, dword ptr [esi]
// 00513a5f  8b08                 mov ecx, dword ptr [eax]
// 00513a61  56                   push esi
// 00513a62  ffd1                 call ecx
// 00513a64  83c404               add esp, 4
// 00513a67  5e                   pop esi
// 00513a68  5b                   pop ebx
// 00513a69  c3                   ret 
// 00513a6a  8bff                 mov edi, edi
// 00513a6c  e9395100ec           jmp 0xec518baa
// 00513a71  37                   aaa 
// 00513a72  51                   push ecx
// 00513a73  0013                 add byte ptr [ebx], dl
// 00513a75  385100               cmp byte ptr [ecx], dl
// 00513a78  7b38                 jnp 0x513ab2
// 00513a7a  51                   push ecx
// 00513a7b  00e0                 add al, ah
// 00513a7d  385100               cmp byte ptr [ecx], dl
// 00513a80  66395100             cmp word ptr [ecx], dx
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
