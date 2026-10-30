// roc 2009-12 0060b260  unit: seg_00600000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060b260
//
// 0060b260  53                   push ebx
// 0060b261  56                   push esi
// 0060b262  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0060b266  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0060b26a  741b                 je 0x60b287
// 0060b26c  8b06                 mov eax, dword ptr [esi]
// 0060b26e  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0060b275  8b0e                 mov ecx, dword ptr [esi]
// 0060b277  8b5614               mov edx, dword ptr [esi + 0x14]
// 0060b27a  895118               mov dword ptr [ecx + 0x18], edx
// 0060b27d  8b06                 mov eax, dword ptr [esi]
// 0060b27f  8b08                 mov ecx, dword ptr [eax]
// 0060b281  56                   push esi
// 0060b282  ffd1                 call ecx
// 0060b284  83c404               add esp, 4
// 0060b287  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060b28b  894640               mov dword ptr [esi + 0x40], eax
// 0060b28e  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 0060b295  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 0060b29c  83f805               cmp eax, 5
// 0060b29f  0f876f020000         ja 0x60b514
// 0060b2a5  ff24852cb56000       jmp dword ptr [eax*4 + 0x60b52c]
// 0060b2ac  bb01000000           mov ebx, 1
// 0060b2b1  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 0060b2b7  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0060b2ba  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b2bd  33c0                 xor eax, eax
// 0060b2bf  891e                 mov dword ptr [esi], ebx
// 0060b2c1  895e08               mov dword ptr [esi + 8], ebx
// 0060b2c4  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060b2c7  894610               mov dword ptr [esi + 0x10], eax
// 0060b2ca  894614               mov dword ptr [esi + 0x14], eax
// 0060b2cd  894618               mov dword ptr [esi + 0x18], eax
// 0060b2d0  5e                   pop esi
// 0060b2d1  5b                   pop ebx
// 0060b2d2  c3                   ret 
// 0060b2d3  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b2d6  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0060b2dd  33c9                 xor ecx, ecx
// 0060b2df  bb01000000           mov ebx, 1
// 0060b2e4  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0060b2ea  895808               mov dword ptr [eax + 8], ebx
// 0060b2ed  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b2f0  c70052000000         mov dword ptr [eax], 0x52
// 0060b2f6  894810               mov dword ptr [eax + 0x10], ecx
// 0060b2f9  894814               mov dword ptr [eax + 0x14], ecx
// 0060b2fc  894818               mov dword ptr [eax + 0x18], ecx
// 0060b2ff  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b302  83c054               add eax, 0x54
// 0060b305  895808               mov dword ptr [eax + 8], ebx
// 0060b308  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b30b  c70047000000         mov dword ptr [eax], 0x47
// 0060b311  894810               mov dword ptr [eax + 0x10], ecx
// 0060b314  894814               mov dword ptr [eax + 0x14], ecx
// 0060b317  894818               mov dword ptr [eax + 0x18], ecx
// 0060b31a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b31d  81c6a8000000         add esi, 0xa8
// 0060b323  895e08               mov dword ptr [esi + 8], ebx
// 0060b326  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060b329  c70642000000         mov dword ptr [esi], 0x42
// 0060b32f  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b332  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b335  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b338  5e                   pop esi
// 0060b339  5b                   pop ebx
// 0060b33a  c3                   ret 
// 0060b33b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b33e  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0060b345  bb01000000           mov ebx, 1
// 0060b34a  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 0060b350  8918                 mov dword ptr [eax], ebx
// 0060b352  33c9                 xor ecx, ecx
// 0060b354  894810               mov dword ptr [eax + 0x10], ecx
// 0060b357  894814               mov dword ptr [eax + 0x14], ecx
// 0060b35a  894818               mov dword ptr [eax + 0x18], ecx
// 0060b35d  ba02000000           mov edx, 2
// 0060b362  895008               mov dword ptr [eax + 8], edx
// 0060b365  89500c               mov dword ptr [eax + 0xc], edx
// 0060b368  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b36b  83c054               add eax, 0x54
// 0060b36e  895808               mov dword ptr [eax + 8], ebx
// 0060b371  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b374  895810               mov dword ptr [eax + 0x10], ebx
// 0060b377  895814               mov dword ptr [eax + 0x14], ebx
// 0060b37a  895818               mov dword ptr [eax + 0x18], ebx
// 0060b37d  8910                 mov dword ptr [eax], edx
// 0060b37f  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b382  81c6a8000000         add esi, 0xa8
// 0060b388  895e08               mov dword ptr [esi + 8], ebx
// 0060b38b  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060b38e  895e10               mov dword ptr [esi + 0x10], ebx
// 0060b391  895e14               mov dword ptr [esi + 0x14], ebx
// 0060b394  895e18               mov dword ptr [esi + 0x18], ebx
// 0060b397  c70603000000         mov dword ptr [esi], 3
// 0060b39d  5e                   pop esi
// 0060b39e  5b                   pop ebx
// 0060b39f  c3                   ret 
// 0060b3a0  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b3a3  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0060b3aa  33c9                 xor ecx, ecx
// 0060b3ac  bb01000000           mov ebx, 1
// 0060b3b1  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0060b3b7  895808               mov dword ptr [eax + 8], ebx
// 0060b3ba  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b3bd  c70043000000         mov dword ptr [eax], 0x43
// 0060b3c3  894810               mov dword ptr [eax + 0x10], ecx
// 0060b3c6  894814               mov dword ptr [eax + 0x14], ecx
// 0060b3c9  894818               mov dword ptr [eax + 0x18], ecx
// 0060b3cc  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b3cf  89585c               mov dword ptr [eax + 0x5c], ebx
// 0060b3d2  895860               mov dword ptr [eax + 0x60], ebx
// 0060b3d5  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 0060b3dc  894864               mov dword ptr [eax + 0x64], ecx
// 0060b3df  894868               mov dword ptr [eax + 0x68], ecx
// 0060b3e2  89486c               mov dword ptr [eax + 0x6c], ecx
// 0060b3e5  83c054               add eax, 0x54
// 0060b3e8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b3eb  05a8000000           add eax, 0xa8
// 0060b3f0  895808               mov dword ptr [eax + 8], ebx
// 0060b3f3  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b3f6  c70059000000         mov dword ptr [eax], 0x59
// 0060b3fc  894810               mov dword ptr [eax + 0x10], ecx
// 0060b3ff  894814               mov dword ptr [eax + 0x14], ecx
// 0060b402  894818               mov dword ptr [eax + 0x18], ecx
// 0060b405  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b408  81c6fc000000         add esi, 0xfc
// 0060b40e  895e08               mov dword ptr [esi + 8], ebx
// 0060b411  895e0c               mov dword ptr [esi + 0xc], ebx
// 0060b414  c7064b000000         mov dword ptr [esi], 0x4b
// 0060b41a  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b41d  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b420  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b423  5e                   pop esi
// 0060b424  5b                   pop ebx
// 0060b425  c3                   ret 
// 0060b426  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b429  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0060b430  bb01000000           mov ebx, 1
// 0060b435  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0060b43b  8918                 mov dword ptr [eax], ebx
// 0060b43d  33c9                 xor ecx, ecx
// 0060b43f  894810               mov dword ptr [eax + 0x10], ecx
// 0060b442  894814               mov dword ptr [eax + 0x14], ecx
// 0060b445  894818               mov dword ptr [eax + 0x18], ecx
// 0060b448  ba02000000           mov edx, 2
// 0060b44d  895008               mov dword ptr [eax + 8], edx
// 0060b450  89500c               mov dword ptr [eax + 0xc], edx
// 0060b453  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b456  89585c               mov dword ptr [eax + 0x5c], ebx
// 0060b459  895860               mov dword ptr [eax + 0x60], ebx
// 0060b45c  895864               mov dword ptr [eax + 0x64], ebx
// 0060b45f  895868               mov dword ptr [eax + 0x68], ebx
// 0060b462  89586c               mov dword ptr [eax + 0x6c], ebx
// 0060b465  895054               mov dword ptr [eax + 0x54], edx
// 0060b468  83c054               add eax, 0x54
// 0060b46b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b46e  05a8000000           add eax, 0xa8
// 0060b473  895808               mov dword ptr [eax + 8], ebx
// 0060b476  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b479  895810               mov dword ptr [eax + 0x10], ebx
// 0060b47c  895814               mov dword ptr [eax + 0x14], ebx
// 0060b47f  895818               mov dword ptr [eax + 0x18], ebx
// 0060b482  c70003000000         mov dword ptr [eax], 3
// 0060b488  8b7644               mov esi, dword ptr [esi + 0x44]
// 0060b48b  81c6fc000000         add esi, 0xfc
// 0060b491  c70604000000         mov dword ptr [esi], 4
// 0060b497  895608               mov dword ptr [esi + 8], edx
// 0060b49a  89560c               mov dword ptr [esi + 0xc], edx
// 0060b49d  894e10               mov dword ptr [esi + 0x10], ecx
// 0060b4a0  894e14               mov dword ptr [esi + 0x14], ecx
// 0060b4a3  894e18               mov dword ptr [esi + 0x18], ecx
// 0060b4a6  5e                   pop esi
// 0060b4a7  5b                   pop ebx
// 0060b4a8  c3                   ret 
// 0060b4a9  8b4624               mov eax, dword ptr [esi + 0x24]
// 0060b4ac  bb01000000           mov ebx, 1
// 0060b4b1  3bc3                 cmp eax, ebx
// 0060b4b3  89463c               mov dword ptr [esi + 0x3c], eax
// 0060b4b6  7c05                 jl 0x60b4bd
// 0060b4b8  83f80a               cmp eax, 0xa
// 0060b4bb  7e24                 jle 0x60b4e1
// 0060b4bd  8b16                 mov edx, dword ptr [esi]
// 0060b4bf  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 0060b4c6  8b06                 mov eax, dword ptr [esi]
// 0060b4c8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0060b4cb  894818               mov dword ptr [eax + 0x18], ecx
// 0060b4ce  8b16                 mov edx, dword ptr [esi]
// 0060b4d0  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 0060b4d7  8b06                 mov eax, dword ptr [esi]
// 0060b4d9  8b08                 mov ecx, dword ptr [eax]
// 0060b4db  56                   push esi
// 0060b4dc  ffd1                 call ecx
// 0060b4de  83c404               add esp, 4
// 0060b4e1  57                   push edi
// 0060b4e2  33ff                 xor edi, edi
// 0060b4e4  33c9                 xor ecx, ecx
// 0060b4e6  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0060b4e9  7e25                 jle 0x60b510
// 0060b4eb  33d2                 xor edx, edx
// 0060b4ed  8d4900               lea ecx, [ecx]
// 0060b4f0  8b4644               mov eax, dword ptr [esi + 0x44]
// 0060b4f3  03c2                 add eax, edx
// 0060b4f5  8908                 mov dword ptr [eax], ecx
// 0060b4f7  03cb                 add ecx, ebx
// 0060b4f9  895808               mov dword ptr [eax + 8], ebx
// 0060b4fc  89580c               mov dword ptr [eax + 0xc], ebx
// 0060b4ff  897810               mov dword ptr [eax + 0x10], edi
// 0060b502  897814               mov dword ptr [eax + 0x14], edi
// 0060b505  897818               mov dword ptr [eax + 0x18], edi
// 0060b508  83c254               add edx, 0x54
// 0060b50b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0060b50e  7ce0                 jl 0x60b4f0
// 0060b510  5f                   pop edi
// 0060b511  5e                   pop esi
// 0060b512  5b                   pop ebx
// 0060b513  c3                   ret 
// 0060b514  8b16                 mov edx, dword ptr [esi]
// 0060b516  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0060b51d  8b06                 mov eax, dword ptr [esi]
// 0060b51f  8b08                 mov ecx, dword ptr [eax]
// 0060b521  56                   push esi
// 0060b522  ffd1                 call ecx
// 0060b524  83c404               add esp, 4
// 0060b527  5e                   pop esi
// 0060b528  5b                   pop ebx
// 0060b529  c3                   ret 
// 0060b52a  8bff                 mov edi, edi
// 0060b52c  a9b46000ac           test eax, 0xac0060b4
// 0060b531  b260                 mov dl, 0x60
// 0060b533  00d3                 add bl, dl
// 0060b535  b260                 mov dl, 0x60
// 0060b537  003b                 add byte ptr [ebx], bh
// 0060b539  b360                 mov bl, 0x60
// 0060b53b  00a0b3600026         add byte ptr [eax + 0x260060b3], ah
// 0060b541  b460                 mov ah, 0x60
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
