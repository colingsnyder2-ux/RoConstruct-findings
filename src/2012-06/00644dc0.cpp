// roc 2012-06 00644dc0  unit: seg_00640000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644dc0
//
// 00644dc0  53                   push ebx
// 00644dc1  56                   push esi
// 00644dc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00644dc6  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 00644dca  741b                 je 0x644de7
// 00644dcc  8b06                 mov eax, dword ptr [esi]
// 00644dce  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00644dd5  8b0e                 mov ecx, dword ptr [esi]
// 00644dd7  8b5614               mov edx, dword ptr [esi + 0x14]
// 00644dda  895118               mov dword ptr [ecx + 0x18], edx
// 00644ddd  8b06                 mov eax, dword ptr [esi]
// 00644ddf  8b08                 mov ecx, dword ptr [eax]
// 00644de1  56                   push esi
// 00644de2  ffd1                 call ecx
// 00644de4  83c404               add esp, 4
// 00644de7  8b442410             mov eax, dword ptr [esp + 0x10]
// 00644deb  894640               mov dword ptr [esi + 0x40], eax
// 00644dee  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 00644df5  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 00644dfc  83f805               cmp eax, 5
// 00644dff  0f876f020000         ja 0x645074
// 00644e05  ff24858c506400       jmp dword ptr [eax*4 + 0x64508c]
// 00644e0c  bb01000000           mov ebx, 1
// 00644e11  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00644e17  895e3c               mov dword ptr [esi + 0x3c], ebx
// 00644e1a  8b7644               mov esi, dword ptr [esi + 0x44]
// 00644e1d  33c0                 xor eax, eax
// 00644e1f  891e                 mov dword ptr [esi], ebx
// 00644e21  895e08               mov dword ptr [esi + 8], ebx
// 00644e24  895e0c               mov dword ptr [esi + 0xc], ebx
// 00644e27  894610               mov dword ptr [esi + 0x10], eax
// 00644e2a  894614               mov dword ptr [esi + 0x14], eax
// 00644e2d  894618               mov dword ptr [esi + 0x18], eax
// 00644e30  5e                   pop esi
// 00644e31  5b                   pop ebx
// 00644e32  c3                   ret 
// 00644e33  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644e36  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00644e3d  33c9                 xor ecx, ecx
// 00644e3f  bb01000000           mov ebx, 1
// 00644e44  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00644e4a  895808               mov dword ptr [eax + 8], ebx
// 00644e4d  89580c               mov dword ptr [eax + 0xc], ebx
// 00644e50  c70052000000         mov dword ptr [eax], 0x52
// 00644e56  894810               mov dword ptr [eax + 0x10], ecx
// 00644e59  894814               mov dword ptr [eax + 0x14], ecx
// 00644e5c  894818               mov dword ptr [eax + 0x18], ecx
// 00644e5f  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644e62  83c054               add eax, 0x54
// 00644e65  895808               mov dword ptr [eax + 8], ebx
// 00644e68  89580c               mov dword ptr [eax + 0xc], ebx
// 00644e6b  c70047000000         mov dword ptr [eax], 0x47
// 00644e71  894810               mov dword ptr [eax + 0x10], ecx
// 00644e74  894814               mov dword ptr [eax + 0x14], ecx
// 00644e77  894818               mov dword ptr [eax + 0x18], ecx
// 00644e7a  8b7644               mov esi, dword ptr [esi + 0x44]
// 00644e7d  81c6a8000000         add esi, 0xa8
// 00644e83  895e08               mov dword ptr [esi + 8], ebx
// 00644e86  895e0c               mov dword ptr [esi + 0xc], ebx
// 00644e89  c70642000000         mov dword ptr [esi], 0x42
// 00644e8f  894e10               mov dword ptr [esi + 0x10], ecx
// 00644e92  894e14               mov dword ptr [esi + 0x14], ecx
// 00644e95  894e18               mov dword ptr [esi + 0x18], ecx
// 00644e98  5e                   pop esi
// 00644e99  5b                   pop ebx
// 00644e9a  c3                   ret 
// 00644e9b  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644e9e  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00644ea5  bb01000000           mov ebx, 1
// 00644eaa  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00644eb0  8918                 mov dword ptr [eax], ebx
// 00644eb2  33c9                 xor ecx, ecx
// 00644eb4  894810               mov dword ptr [eax + 0x10], ecx
// 00644eb7  894814               mov dword ptr [eax + 0x14], ecx
// 00644eba  894818               mov dword ptr [eax + 0x18], ecx
// 00644ebd  ba02000000           mov edx, 2
// 00644ec2  895008               mov dword ptr [eax + 8], edx
// 00644ec5  89500c               mov dword ptr [eax + 0xc], edx
// 00644ec8  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644ecb  83c054               add eax, 0x54
// 00644ece  895808               mov dword ptr [eax + 8], ebx
// 00644ed1  89580c               mov dword ptr [eax + 0xc], ebx
// 00644ed4  895810               mov dword ptr [eax + 0x10], ebx
// 00644ed7  895814               mov dword ptr [eax + 0x14], ebx
// 00644eda  895818               mov dword ptr [eax + 0x18], ebx
// 00644edd  8910                 mov dword ptr [eax], edx
// 00644edf  8b7644               mov esi, dword ptr [esi + 0x44]
// 00644ee2  81c6a8000000         add esi, 0xa8
// 00644ee8  895e08               mov dword ptr [esi + 8], ebx
// 00644eeb  895e0c               mov dword ptr [esi + 0xc], ebx
// 00644eee  895e10               mov dword ptr [esi + 0x10], ebx
// 00644ef1  895e14               mov dword ptr [esi + 0x14], ebx
// 00644ef4  895e18               mov dword ptr [esi + 0x18], ebx
// 00644ef7  c70603000000         mov dword ptr [esi], 3
// 00644efd  5e                   pop esi
// 00644efe  5b                   pop ebx
// 00644eff  c3                   ret 
// 00644f00  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644f03  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 00644f0a  33c9                 xor ecx, ecx
// 00644f0c  bb01000000           mov ebx, 1
// 00644f11  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00644f17  895808               mov dword ptr [eax + 8], ebx
// 00644f1a  89580c               mov dword ptr [eax + 0xc], ebx
// 00644f1d  c70043000000         mov dword ptr [eax], 0x43
// 00644f23  894810               mov dword ptr [eax + 0x10], ecx
// 00644f26  894814               mov dword ptr [eax + 0x14], ecx
// 00644f29  894818               mov dword ptr [eax + 0x18], ecx
// 00644f2c  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644f2f  89585c               mov dword ptr [eax + 0x5c], ebx
// 00644f32  895860               mov dword ptr [eax + 0x60], ebx
// 00644f35  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 00644f3c  894864               mov dword ptr [eax + 0x64], ecx
// 00644f3f  894868               mov dword ptr [eax + 0x68], ecx
// 00644f42  89486c               mov dword ptr [eax + 0x6c], ecx
// 00644f45  83c054               add eax, 0x54
// 00644f48  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644f4b  05a8000000           add eax, 0xa8
// 00644f50  895808               mov dword ptr [eax + 8], ebx
// 00644f53  89580c               mov dword ptr [eax + 0xc], ebx
// 00644f56  c70059000000         mov dword ptr [eax], 0x59
// 00644f5c  894810               mov dword ptr [eax + 0x10], ecx
// 00644f5f  894814               mov dword ptr [eax + 0x14], ecx
// 00644f62  894818               mov dword ptr [eax + 0x18], ecx
// 00644f65  8b7644               mov esi, dword ptr [esi + 0x44]
// 00644f68  81c6fc000000         add esi, 0xfc
// 00644f6e  895e08               mov dword ptr [esi + 8], ebx
// 00644f71  895e0c               mov dword ptr [esi + 0xc], ebx
// 00644f74  c7064b000000         mov dword ptr [esi], 0x4b
// 00644f7a  894e10               mov dword ptr [esi + 0x10], ecx
// 00644f7d  894e14               mov dword ptr [esi + 0x14], ecx
// 00644f80  894e18               mov dword ptr [esi + 0x18], ecx
// 00644f83  5e                   pop esi
// 00644f84  5b                   pop ebx
// 00644f85  c3                   ret 
// 00644f86  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644f89  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 00644f90  bb01000000           mov ebx, 1
// 00644f95  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00644f9b  8918                 mov dword ptr [eax], ebx
// 00644f9d  33c9                 xor ecx, ecx
// 00644f9f  894810               mov dword ptr [eax + 0x10], ecx
// 00644fa2  894814               mov dword ptr [eax + 0x14], ecx
// 00644fa5  894818               mov dword ptr [eax + 0x18], ecx
// 00644fa8  ba02000000           mov edx, 2
// 00644fad  895008               mov dword ptr [eax + 8], edx
// 00644fb0  89500c               mov dword ptr [eax + 0xc], edx
// 00644fb3  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644fb6  89585c               mov dword ptr [eax + 0x5c], ebx
// 00644fb9  895860               mov dword ptr [eax + 0x60], ebx
// 00644fbc  895864               mov dword ptr [eax + 0x64], ebx
// 00644fbf  895868               mov dword ptr [eax + 0x68], ebx
// 00644fc2  89586c               mov dword ptr [eax + 0x6c], ebx
// 00644fc5  895054               mov dword ptr [eax + 0x54], edx
// 00644fc8  83c054               add eax, 0x54
// 00644fcb  8b4644               mov eax, dword ptr [esi + 0x44]
// 00644fce  05a8000000           add eax, 0xa8
// 00644fd3  895808               mov dword ptr [eax + 8], ebx
// 00644fd6  89580c               mov dword ptr [eax + 0xc], ebx
// 00644fd9  895810               mov dword ptr [eax + 0x10], ebx
// 00644fdc  895814               mov dword ptr [eax + 0x14], ebx
// 00644fdf  895818               mov dword ptr [eax + 0x18], ebx
// 00644fe2  c70003000000         mov dword ptr [eax], 3
// 00644fe8  8b7644               mov esi, dword ptr [esi + 0x44]
// 00644feb  81c6fc000000         add esi, 0xfc
// 00644ff1  c70604000000         mov dword ptr [esi], 4
// 00644ff7  895608               mov dword ptr [esi + 8], edx
// 00644ffa  89560c               mov dword ptr [esi + 0xc], edx
// 00644ffd  894e10               mov dword ptr [esi + 0x10], ecx
// 00645000  894e14               mov dword ptr [esi + 0x14], ecx
// 00645003  894e18               mov dword ptr [esi + 0x18], ecx
// 00645006  5e                   pop esi
// 00645007  5b                   pop ebx
// 00645008  c3                   ret 
// 00645009  8b4624               mov eax, dword ptr [esi + 0x24]
// 0064500c  bb01000000           mov ebx, 1
// 00645011  3bc3                 cmp eax, ebx
// 00645013  89463c               mov dword ptr [esi + 0x3c], eax
// 00645016  7c05                 jl 0x64501d
// 00645018  83f80a               cmp eax, 0xa
// 0064501b  7e24                 jle 0x645041
// 0064501d  8b16                 mov edx, dword ptr [esi]
// 0064501f  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 00645026  8b06                 mov eax, dword ptr [esi]
// 00645028  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0064502b  894818               mov dword ptr [eax + 0x18], ecx
// 0064502e  8b16                 mov edx, dword ptr [esi]
// 00645030  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 00645037  8b06                 mov eax, dword ptr [esi]
// 00645039  8b08                 mov ecx, dword ptr [eax]
// 0064503b  56                   push esi
// 0064503c  ffd1                 call ecx
// 0064503e  83c404               add esp, 4
// 00645041  57                   push edi
// 00645042  33ff                 xor edi, edi
// 00645044  33c9                 xor ecx, ecx
// 00645046  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00645049  7e25                 jle 0x645070
// 0064504b  33d2                 xor edx, edx
// 0064504d  8d4900               lea ecx, [ecx]
// 00645050  8b4644               mov eax, dword ptr [esi + 0x44]
// 00645053  03c2                 add eax, edx
// 00645055  8908                 mov dword ptr [eax], ecx
// 00645057  03cb                 add ecx, ebx
// 00645059  895808               mov dword ptr [eax + 8], ebx
// 0064505c  89580c               mov dword ptr [eax + 0xc], ebx
// 0064505f  897810               mov dword ptr [eax + 0x10], edi
// 00645062  897814               mov dword ptr [eax + 0x14], edi
// 00645065  897818               mov dword ptr [eax + 0x18], edi
// 00645068  83c254               add edx, 0x54
// 0064506b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0064506e  7ce0                 jl 0x645050
// 00645070  5f                   pop edi
// 00645071  5e                   pop esi
// 00645072  5b                   pop ebx
// 00645073  c3                   ret 
// 00645074  8b16                 mov edx, dword ptr [esi]
// 00645076  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0064507d  8b06                 mov eax, dword ptr [esi]
// 0064507f  8b08                 mov ecx, dword ptr [eax]
// 00645081  56                   push esi
// 00645082  ffd1                 call ecx
// 00645084  83c404               add esp, 4
// 00645087  5e                   pop esi
// 00645088  5b                   pop ebx
// 00645089  c3                   ret 
// 0064508a  8bff                 mov edi, edi
// 0064508c  095064               or dword ptr [eax + 0x64], edx
// 0064508f  000c4e               add byte ptr [esi + ecx*2], cl
// 00645092  640033               add byte ptr fs:[ebx], dh
// 00645095  4e                   dec esi
// 00645096  64009b4e640000       add byte ptr fs:[ebx + 0x644e], bl
// 0064509d  4f                   dec edi
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
