// from server: 100% by auto
// roc 2008-06 00525280  unit: seg_00520000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525280
//
// 00525280  53                   push ebx
// 00525281  56                   push esi
// 00525282  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00525286  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0052528a  741b                 je 0x5252a7
// 0052528c  8b06                 mov eax, dword ptr [esi]
// 0052528e  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00525295  8b0e                 mov ecx, dword ptr [esi]
// 00525297  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052529a  895118               mov dword ptr [ecx + 0x18], edx
// 0052529d  8b06                 mov eax, dword ptr [esi]
// 0052529f  8b08                 mov ecx, dword ptr [eax]
// 005252a1  56                   push esi
// 005252a2  ffd1                 call ecx
// 005252a4  83c404               add esp, 4
// 005252a7  8b442410             mov eax, dword ptr [esp + 0x10]
// 005252ab  894640               mov dword ptr [esi + 0x40], eax
// 005252ae  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 005252b5  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 005252bc  83f805               cmp eax, 5
// 005252bf  0f876f020000         ja 0x525534
// 005252c5  ff24854c555200       jmp dword ptr [eax*4 + 0x52554c]
// 005252cc  bb01000000           mov ebx, 1
// 005252d1  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 005252d7  895e3c               mov dword ptr [esi + 0x3c], ebx
// 005252da  8b7644               mov esi, dword ptr [esi + 0x44]
// 005252dd  33c0                 xor eax, eax
// 005252df  891e                 mov dword ptr [esi], ebx
// 005252e1  895e08               mov dword ptr [esi + 8], ebx
// 005252e4  895e0c               mov dword ptr [esi + 0xc], ebx
// 005252e7  894610               mov dword ptr [esi + 0x10], eax
// 005252ea  894614               mov dword ptr [esi + 0x14], eax
// 005252ed  894618               mov dword ptr [esi + 0x18], eax
// 005252f0  5e                   pop esi
// 005252f1  5b                   pop ebx
// 005252f2  c3                   ret 
// 005252f3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005252f6  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 005252fd  33c9                 xor ecx, ecx
// 005252ff  bb01000000           mov ebx, 1
// 00525304  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0052530a  895808               mov dword ptr [eax + 8], ebx
// 0052530d  89580c               mov dword ptr [eax + 0xc], ebx
// 00525310  c70052000000         mov dword ptr [eax], 0x52
// 00525316  894810               mov dword ptr [eax + 0x10], ecx
// 00525319  894814               mov dword ptr [eax + 0x14], ecx
// 0052531c  894818               mov dword ptr [eax + 0x18], ecx
// 0052531f  8b4644               mov eax, dword ptr [esi + 0x44]
// 00525322  83c054               add eax, 0x54
// 00525325  895808               mov dword ptr [eax + 8], ebx
// 00525328  89580c               mov dword ptr [eax + 0xc], ebx
// 0052532b  c70047000000         mov dword ptr [eax], 0x47
// 00525331  894810               mov dword ptr [eax + 0x10], ecx
// 00525334  894814               mov dword ptr [eax + 0x14], ecx
// 00525337  894818               mov dword ptr [eax + 0x18], ecx
// 0052533a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0052533d  81c6a8000000         add esi, 0xa8
// 00525343  895e08               mov dword ptr [esi + 8], ebx
// 00525346  895e0c               mov dword ptr [esi + 0xc], ebx
// 00525349  c70642000000         mov dword ptr [esi], 0x42
// 0052534f  894e10               mov dword ptr [esi + 0x10], ecx
// 00525352  894e14               mov dword ptr [esi + 0x14], ecx
// 00525355  894e18               mov dword ptr [esi + 0x18], ecx
// 00525358  5e                   pop esi
// 00525359  5b                   pop ebx
// 0052535a  c3                   ret 
// 0052535b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052535e  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 00525365  bb01000000           mov ebx, 1
// 0052536a  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00525370  8918                 mov dword ptr [eax], ebx
// 00525372  33c9                 xor ecx, ecx
// 00525374  894810               mov dword ptr [eax + 0x10], ecx
// 00525377  894814               mov dword ptr [eax + 0x14], ecx
// 0052537a  894818               mov dword ptr [eax + 0x18], ecx
// 0052537d  ba02000000           mov edx, 2
// 00525382  895008               mov dword ptr [eax + 8], edx
// 00525385  89500c               mov dword ptr [eax + 0xc], edx
// 00525388  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052538b  83c054               add eax, 0x54
// 0052538e  895808               mov dword ptr [eax + 8], ebx
// 00525391  89580c               mov dword ptr [eax + 0xc], ebx
// 00525394  895810               mov dword ptr [eax + 0x10], ebx
// 00525397  895814               mov dword ptr [eax + 0x14], ebx
// 0052539a  895818               mov dword ptr [eax + 0x18], ebx
// 0052539d  8910                 mov dword ptr [eax], edx
// 0052539f  8b7644               mov esi, dword ptr [esi + 0x44]
// 005253a2  81c6a8000000         add esi, 0xa8
// 005253a8  895e08               mov dword ptr [esi + 8], ebx
// 005253ab  895e0c               mov dword ptr [esi + 0xc], ebx
// 005253ae  895e10               mov dword ptr [esi + 0x10], ebx
// 005253b1  895e14               mov dword ptr [esi + 0x14], ebx
// 005253b4  895e18               mov dword ptr [esi + 0x18], ebx
// 005253b7  c70603000000         mov dword ptr [esi], 3
// 005253bd  5e                   pop esi
// 005253be  5b                   pop ebx
// 005253bf  c3                   ret 
// 005253c0  8b4644               mov eax, dword ptr [esi + 0x44]
// 005253c3  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 005253ca  33c9                 xor ecx, ecx
// 005253cc  bb01000000           mov ebx, 1
// 005253d1  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 005253d7  895808               mov dword ptr [eax + 8], ebx
// 005253da  89580c               mov dword ptr [eax + 0xc], ebx
// 005253dd  c70043000000         mov dword ptr [eax], 0x43
// 005253e3  894810               mov dword ptr [eax + 0x10], ecx
// 005253e6  894814               mov dword ptr [eax + 0x14], ecx
// 005253e9  894818               mov dword ptr [eax + 0x18], ecx
// 005253ec  8b4644               mov eax, dword ptr [esi + 0x44]
// 005253ef  89585c               mov dword ptr [eax + 0x5c], ebx
// 005253f2  895860               mov dword ptr [eax + 0x60], ebx
// 005253f5  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 005253fc  894864               mov dword ptr [eax + 0x64], ecx
// 005253ff  894868               mov dword ptr [eax + 0x68], ecx
// 00525402  89486c               mov dword ptr [eax + 0x6c], ecx
// 00525405  83c054               add eax, 0x54
// 00525408  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052540b  05a8000000           add eax, 0xa8
// 00525410  895808               mov dword ptr [eax + 8], ebx
// 00525413  89580c               mov dword ptr [eax + 0xc], ebx
// 00525416  c70059000000         mov dword ptr [eax], 0x59
// 0052541c  894810               mov dword ptr [eax + 0x10], ecx
// 0052541f  894814               mov dword ptr [eax + 0x14], ecx
// 00525422  894818               mov dword ptr [eax + 0x18], ecx
// 00525425  8b7644               mov esi, dword ptr [esi + 0x44]
// 00525428  81c6fc000000         add esi, 0xfc
// 0052542e  895e08               mov dword ptr [esi + 8], ebx
// 00525431  895e0c               mov dword ptr [esi + 0xc], ebx
// 00525434  c7064b000000         mov dword ptr [esi], 0x4b
// 0052543a  894e10               mov dword ptr [esi + 0x10], ecx
// 0052543d  894e14               mov dword ptr [esi + 0x14], ecx
// 00525440  894e18               mov dword ptr [esi + 0x18], ecx
// 00525443  5e                   pop esi
// 00525444  5b                   pop ebx
// 00525445  c3                   ret 
// 00525446  8b4644               mov eax, dword ptr [esi + 0x44]
// 00525449  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 00525450  bb01000000           mov ebx, 1
// 00525455  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0052545b  8918                 mov dword ptr [eax], ebx
// 0052545d  33c9                 xor ecx, ecx
// 0052545f  894810               mov dword ptr [eax + 0x10], ecx
// 00525462  894814               mov dword ptr [eax + 0x14], ecx
// 00525465  894818               mov dword ptr [eax + 0x18], ecx
// 00525468  ba02000000           mov edx, 2
// 0052546d  895008               mov dword ptr [eax + 8], edx
// 00525470  89500c               mov dword ptr [eax + 0xc], edx
// 00525473  8b4644               mov eax, dword ptr [esi + 0x44]
// 00525476  89585c               mov dword ptr [eax + 0x5c], ebx
// 00525479  895860               mov dword ptr [eax + 0x60], ebx
// 0052547c  895864               mov dword ptr [eax + 0x64], ebx
// 0052547f  895868               mov dword ptr [eax + 0x68], ebx
// 00525482  89586c               mov dword ptr [eax + 0x6c], ebx
// 00525485  895054               mov dword ptr [eax + 0x54], edx
// 00525488  83c054               add eax, 0x54
// 0052548b  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052548e  05a8000000           add eax, 0xa8
// 00525493  895808               mov dword ptr [eax + 8], ebx
// 00525496  89580c               mov dword ptr [eax + 0xc], ebx
// 00525499  895810               mov dword ptr [eax + 0x10], ebx
// 0052549c  895814               mov dword ptr [eax + 0x14], ebx
// 0052549f  895818               mov dword ptr [eax + 0x18], ebx
// 005254a2  c70003000000         mov dword ptr [eax], 3
// 005254a8  8b7644               mov esi, dword ptr [esi + 0x44]
// 005254ab  81c6fc000000         add esi, 0xfc
// 005254b1  c70604000000         mov dword ptr [esi], 4
// 005254b7  895608               mov dword ptr [esi + 8], edx
// 005254ba  89560c               mov dword ptr [esi + 0xc], edx
// 005254bd  894e10               mov dword ptr [esi + 0x10], ecx
// 005254c0  894e14               mov dword ptr [esi + 0x14], ecx
// 005254c3  894e18               mov dword ptr [esi + 0x18], ecx
// 005254c6  5e                   pop esi
// 005254c7  5b                   pop ebx
// 005254c8  c3                   ret 
// 005254c9  8b4624               mov eax, dword ptr [esi + 0x24]
// 005254cc  bb01000000           mov ebx, 1
// 005254d1  3bc3                 cmp eax, ebx
// 005254d3  89463c               mov dword ptr [esi + 0x3c], eax
// 005254d6  7c05                 jl 0x5254dd
// 005254d8  83f80a               cmp eax, 0xa
// 005254db  7e24                 jle 0x525501
// 005254dd  8b16                 mov edx, dword ptr [esi]
// 005254df  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 005254e6  8b06                 mov eax, dword ptr [esi]
// 005254e8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005254eb  894818               mov dword ptr [eax + 0x18], ecx
// 005254ee  8b16                 mov edx, dword ptr [esi]
// 005254f0  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 005254f7  8b06                 mov eax, dword ptr [esi]
// 005254f9  8b08                 mov ecx, dword ptr [eax]
// 005254fb  56                   push esi
// 005254fc  ffd1                 call ecx
// 005254fe  83c404               add esp, 4
// 00525501  57                   push edi
// 00525502  33ff                 xor edi, edi
// 00525504  33c9                 xor ecx, ecx
// 00525506  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00525509  7e25                 jle 0x525530
// 0052550b  33d2                 xor edx, edx
// 0052550d  8d4900               lea ecx, [ecx]
// 00525510  8b4644               mov eax, dword ptr [esi + 0x44]
// 00525513  03c2                 add eax, edx
// 00525515  8908                 mov dword ptr [eax], ecx
// 00525517  03cb                 add ecx, ebx
// 00525519  895808               mov dword ptr [eax + 8], ebx
// 0052551c  89580c               mov dword ptr [eax + 0xc], ebx
// 0052551f  897810               mov dword ptr [eax + 0x10], edi
// 00525522  897814               mov dword ptr [eax + 0x14], edi
// 00525525  897818               mov dword ptr [eax + 0x18], edi
// 00525528  83c254               add edx, 0x54
// 0052552b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0052552e  7ce0                 jl 0x525510
// 00525530  5f                   pop edi
// 00525531  5e                   pop esi
// 00525532  5b                   pop ebx
// 00525533  c3                   ret 
// 00525534  8b16                 mov edx, dword ptr [esi]
// 00525536  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0052553d  8b06                 mov eax, dword ptr [esi]
// 0052553f  8b08                 mov ecx, dword ptr [eax]
// 00525541  56                   push esi
// 00525542  ffd1                 call ecx
// 00525544  83c404               add esp, 4
// 00525547  5e                   pop esi
// 00525548  5b                   pop ebx
// 00525549  c3                   ret 
// 0052554a  8bff                 mov edi, edi
// 0052554c  c9                   leave 
// 0052554d  54                   push esp
// 0052554e  52                   push edx
// 0052554f  00cc                 add ah, cl
// 00525551  52                   push edx
// 00525552  52                   push edx
// 00525553  00f3                 add bl, dh
// 00525555  52                   push edx
// 00525556  52                   push edx
// 00525557  005b53               add byte ptr [ebx + 0x53], bl
// 0052555a  52                   push edx
// 0052555b  00c0                 add al, al
// 0052555d  53                   push ebx
// 0052555e  52                   push edx
// 0052555f  004654               add byte ptr [esi + 0x54], al
// 00525562  52                   push edx
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
