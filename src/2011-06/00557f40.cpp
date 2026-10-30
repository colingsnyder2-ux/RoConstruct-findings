// roc 2011-06 00557f40  unit: seg_00550000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00557f40
//
// 00557f40  53                   push ebx
// 00557f41  56                   push esi
// 00557f42  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00557f46  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00557f4a  741b                 je 0x557f67
// 00557f4c  8b06                 mov eax, dword ptr [esi]
// 00557f4e  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00557f55  8b0e                 mov ecx, dword ptr [esi]
// 00557f57  8b5614               mov edx, dword ptr [esi + 0x14]
// 00557f5a  895118               mov dword ptr [ecx + 0x18], edx
// 00557f5d  8b06                 mov eax, dword ptr [esi]
// 00557f5f  8b08                 mov ecx, dword ptr [eax]
// 00557f61  56                   push esi
// 00557f62  ffd1                 call ecx
// 00557f64  83c404               add esp, 4
// 00557f67  8b442410             mov eax, dword ptr [esp + 0x10]
// 00557f6b  894640               mov dword ptr [esi + 0x40], eax
// 00557f6e  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 00557f75  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 00557f7c  83f805               cmp eax, 5
// 00557f7f  0f876f020000         ja 0x5581f4
// 00557f85  ff24850c825500       jmp dword ptr [eax*4 + 0x55820c]
// 00557f8c  bb01000000           mov ebx, 1
// 00557f91  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00557f97  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00557f9a  8b7644               mov esi, dword ptr [esi + 0x44]
// 00557f9d  33c0                 xor eax, eax
// 00557f9f  891e                 mov dword ptr [esi], ebx
// 00557fa1  895e08               mov dword ptr [esi + 8], ebx
// 00557fa4  895e0c               mov dword ptr [esi + 0xc], ebx
// 00557fa7  894610               mov dword ptr [esi + 0x10], eax
// 00557faa  894614               mov dword ptr [esi + 0x14], eax
// 00557fad  894618               mov dword ptr [esi + 0x18], eax
// 00557fb0  5e                   pop esi
// 00557fb1  5b                   pop ebx
// 00557fb2  c3                   ret 
// 00557fb3  8b4644               mov eax, dword ptr [esi + 0x44]
// 00557fb6  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00557fbd  33c9                 xor ecx, ecx
// 00557fbf  bb01000000           mov ebx, 1
// 00557fc4  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00557fca  895808               mov dword ptr [eax + 8], ebx
// 00557fcd  89580c               mov dword ptr [eax + 0xc], ebx
// 00557fd0  c70052000000         mov dword ptr [eax], 0x52
// 00557fd6  894810               mov dword ptr [eax + 0x10], ecx
// 00557fd9  894814               mov dword ptr [eax + 0x14], ecx
// 00557fdc  894818               mov dword ptr [eax + 0x18], ecx
// 00557fdf  8b4644               mov eax, dword ptr [esi + 0x44]
// 00557fe2  83c054               add eax, 0x54
// 00557fe5  895808               mov dword ptr [eax + 8], ebx
// 00557fe8  89580c               mov dword ptr [eax + 0xc], ebx
// 00557feb  c70047000000         mov dword ptr [eax], 0x47
// 00557ff1  894810               mov dword ptr [eax + 0x10], ecx
// 00557ff4  894814               mov dword ptr [eax + 0x14], ecx
// 00557ff7  894818               mov dword ptr [eax + 0x18], ecx
// 00557ffa  8b7644               mov esi, dword ptr [esi + 0x44]
// 00557ffd  81c6a8000000         add esi, 0xa8
// 00558003  895e08               mov dword ptr [esi + 8], ebx
// 00558006  895e0c               mov dword ptr [esi + 0xc], ebx
// 00558009  c70642000000         mov dword ptr [esi], 0x42
// 0055800f  894e10               mov dword ptr [esi + 0x10], ecx
// 00558012  894e14               mov dword ptr [esi + 0x14], ecx
// 00558015  894e18               mov dword ptr [esi + 0x18], ecx
// 00558018  5e                   pop esi
// 00558019  5b                   pop ebx
// 0055801a  c3                   ret 
// 0055801b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055801e  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00558025  bb01000000           mov ebx, 1
// 0055802a  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00558030  8918                 mov dword ptr [eax], ebx
// 00558032  33c9                 xor ecx, ecx
// 00558034  894810               mov dword ptr [eax + 0x10], ecx
// 00558037  894814               mov dword ptr [eax + 0x14], ecx
// 0055803a  894818               mov dword ptr [eax + 0x18], ecx
// 0055803d  ba02000000           mov edx, 2
// 00558042  895008               mov dword ptr [eax + 8], edx
// 00558045  89500c               mov dword ptr [eax + 0xc], edx
// 00558048  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055804b  83c054               add eax, 0x54
// 0055804e  895808               mov dword ptr [eax + 8], ebx
// 00558051  89580c               mov dword ptr [eax + 0xc], ebx
// 00558054  895810               mov dword ptr [eax + 0x10], ebx
// 00558057  895814               mov dword ptr [eax + 0x14], ebx
// 0055805a  895818               mov dword ptr [eax + 0x18], ebx
// 0055805d  8910                 mov dword ptr [eax], edx
// 0055805f  8b7644               mov esi, dword ptr [esi + 0x44]
// 00558062  81c6a8000000         add esi, 0xa8
// 00558068  895e08               mov dword ptr [esi + 8], ebx
// 0055806b  895e0c               mov dword ptr [esi + 0xc], ebx
// 0055806e  895e10               mov dword ptr [esi + 0x10], ebx
// 00558071  895e14               mov dword ptr [esi + 0x14], ebx
// 00558074  895e18               mov dword ptr [esi + 0x18], ebx
// 00558077  c70603000000         mov dword ptr [esi], 3
// 0055807d  5e                   pop esi
// 0055807e  5b                   pop ebx
// 0055807f  c3                   ret 
// 00558080  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558083  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0055808a  33c9                 xor ecx, ecx
// 0055808c  bb01000000           mov ebx, 1
// 00558091  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00558097  895808               mov dword ptr [eax + 8], ebx
// 0055809a  89580c               mov dword ptr [eax + 0xc], ebx
// 0055809d  c70043000000         mov dword ptr [eax], 0x43
// 005580a3  894810               mov dword ptr [eax + 0x10], ecx
// 005580a6  894814               mov dword ptr [eax + 0x14], ecx
// 005580a9  894818               mov dword ptr [eax + 0x18], ecx
// 005580ac  8b4644               mov eax, dword ptr [esi + 0x44]
// 005580af  89585c               mov dword ptr [eax + 0x5c], ebx
// 005580b2  895860               mov dword ptr [eax + 0x60], ebx
// 005580b5  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 005580bc  894864               mov dword ptr [eax + 0x64], ecx
// 005580bf  894868               mov dword ptr [eax + 0x68], ecx
// 005580c2  89486c               mov dword ptr [eax + 0x6c], ecx
// 005580c5  83c054               add eax, 0x54
// 005580c8  8b4644               mov eax, dword ptr [esi + 0x44]
// 005580cb  05a8000000           add eax, 0xa8
// 005580d0  895808               mov dword ptr [eax + 8], ebx
// 005580d3  89580c               mov dword ptr [eax + 0xc], ebx
// 005580d6  c70059000000         mov dword ptr [eax], 0x59
// 005580dc  894810               mov dword ptr [eax + 0x10], ecx
// 005580df  894814               mov dword ptr [eax + 0x14], ecx
// 005580e2  894818               mov dword ptr [eax + 0x18], ecx
// 005580e5  8b7644               mov esi, dword ptr [esi + 0x44]
// 005580e8  81c6fc000000         add esi, 0xfc
// 005580ee  895e08               mov dword ptr [esi + 8], ebx
// 005580f1  895e0c               mov dword ptr [esi + 0xc], ebx
// 005580f4  c7064b000000         mov dword ptr [esi], 0x4b
// 005580fa  894e10               mov dword ptr [esi + 0x10], ecx
// 005580fd  894e14               mov dword ptr [esi + 0x14], ecx
// 00558100  894e18               mov dword ptr [esi + 0x18], ecx
// 00558103  5e                   pop esi
// 00558104  5b                   pop ebx
// 00558105  c3                   ret 
// 00558106  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558109  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 00558110  bb01000000           mov ebx, 1
// 00558115  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0055811b  8918                 mov dword ptr [eax], ebx
// 0055811d  33c9                 xor ecx, ecx
// 0055811f  894810               mov dword ptr [eax + 0x10], ecx
// 00558122  894814               mov dword ptr [eax + 0x14], ecx
// 00558125  894818               mov dword ptr [eax + 0x18], ecx
// 00558128  ba02000000           mov edx, 2
// 0055812d  895008               mov dword ptr [eax + 8], edx
// 00558130  89500c               mov dword ptr [eax + 0xc], edx
// 00558133  8b4644               mov eax, dword ptr [esi + 0x44]
// 00558136  89585c               mov dword ptr [eax + 0x5c], ebx
// 00558139  895860               mov dword ptr [eax + 0x60], ebx
// 0055813c  895864               mov dword ptr [eax + 0x64], ebx
// 0055813f  895868               mov dword ptr [eax + 0x68], ebx
// 00558142  89586c               mov dword ptr [eax + 0x6c], ebx
// 00558145  895054               mov dword ptr [eax + 0x54], edx
// 00558148  83c054               add eax, 0x54
// 0055814b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0055814e  05a8000000           add eax, 0xa8
// 00558153  895808               mov dword ptr [eax + 8], ebx
// 00558156  89580c               mov dword ptr [eax + 0xc], ebx
// 00558159  895810               mov dword ptr [eax + 0x10], ebx
// 0055815c  895814               mov dword ptr [eax + 0x14], ebx
// 0055815f  895818               mov dword ptr [eax + 0x18], ebx
// 00558162  c70003000000         mov dword ptr [eax], 3
// 00558168  8b7644               mov esi, dword ptr [esi + 0x44]
// 0055816b  81c6fc000000         add esi, 0xfc
// 00558171  c70604000000         mov dword ptr [esi], 4
// 00558177  895608               mov dword ptr [esi + 8], edx
// 0055817a  89560c               mov dword ptr [esi + 0xc], edx
// 0055817d  894e10               mov dword ptr [esi + 0x10], ecx
// 00558180  894e14               mov dword ptr [esi + 0x14], ecx
// 00558183  894e18               mov dword ptr [esi + 0x18], ecx
// 00558186  5e                   pop esi
// 00558187  5b                   pop ebx
// 00558188  c3                   ret 
// 00558189  8b4624               mov eax, dword ptr [esi + 0x24]
// 0055818c  bb01000000           mov ebx, 1
// 00558191  3bc3                 cmp eax, ebx
// 00558193  89463c               mov dword ptr [esi + 0x3c], eax
// 00558196  7c05                 jl 0x55819d
// 00558198  83f80a               cmp eax, 0xa
// 0055819b  7e24                 jle 0x5581c1
// 0055819d  8b16                 mov edx, dword ptr [esi]
// 0055819f  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 005581a6  8b06                 mov eax, dword ptr [esi]
// 005581a8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005581ab  894818               mov dword ptr [eax + 0x18], ecx
// 005581ae  8b16                 mov edx, dword ptr [esi]
// 005581b0  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 005581b7  8b06                 mov eax, dword ptr [esi]
// 005581b9  8b08                 mov ecx, dword ptr [eax]
// 005581bb  56                   push esi
// 005581bc  ffd1                 call ecx
// 005581be  83c404               add esp, 4
// 005581c1  57                   push edi
// 005581c2  33ff                 xor edi, edi
// 005581c4  33c9                 xor ecx, ecx
// 005581c6  397e3c               cmp dword ptr [esi + 0x3c], edi
// 005581c9  7e25                 jle 0x5581f0
// 005581cb  33d2                 xor edx, edx
// 005581cd  8d4900               lea ecx, [ecx]
// 005581d0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005581d3  03c2                 add eax, edx
// 005581d5  8908                 mov dword ptr [eax], ecx
// 005581d7  03cb                 add ecx, ebx
// 005581d9  895808               mov dword ptr [eax + 8], ebx
// 005581dc  89580c               mov dword ptr [eax + 0xc], ebx
// 005581df  897810               mov dword ptr [eax + 0x10], edi
// 005581e2  897814               mov dword ptr [eax + 0x14], edi
// 005581e5  897818               mov dword ptr [eax + 0x18], edi
// 005581e8  83c254               add edx, 0x54
// 005581eb  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 005581ee  7ce0                 jl 0x5581d0
// 005581f0  5f                   pop edi
// 005581f1  5e                   pop esi
// 005581f2  5b                   pop ebx
// 005581f3  c3                   ret 
// 005581f4  8b16                 mov edx, dword ptr [esi]
// 005581f6  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005581fd  8b06                 mov eax, dword ptr [esi]
// 005581ff  8b08                 mov ecx, dword ptr [eax]
// 00558201  56                   push esi
// 00558202  ffd1                 call ecx
// 00558204  83c404               add esp, 4
// 00558207  5e                   pop esi
// 00558208  5b                   pop ebx
// 00558209  c3                   ret 
// 0055820a  8bff                 mov edi, edi
// 0055820c  898155008c7f         mov dword ptr [ecx + 0x7f8c0055], eax
// 00558212  55                   push ebp
// 00558213  00b37f55001b         add byte ptr [ebx + 0x1b00557f], dh
// 00558219  80550080             adc byte ptr [ebp], 0x80
// 0055821d  80550006             adc byte ptr [ebp], 6
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
