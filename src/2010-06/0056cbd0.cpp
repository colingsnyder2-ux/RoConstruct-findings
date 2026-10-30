// roc 2010-06 0056cbd0  unit: seg_00560000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056cbd0
//
// 0056cbd0  53                   push ebx
// 0056cbd1  56                   push esi
// 0056cbd2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0056cbd6  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 0056cbda  741b                 je 0x56cbf7
// 0056cbdc  8b06                 mov eax, dword ptr [esi]
// 0056cbde  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056cbe5  8b0e                 mov ecx, dword ptr [esi]
// 0056cbe7  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056cbea  895118               mov dword ptr [ecx + 0x18], edx
// 0056cbed  8b06                 mov eax, dword ptr [esi]
// 0056cbef  8b08                 mov ecx, dword ptr [eax]
// 0056cbf1  56                   push esi
// 0056cbf2  ffd1                 call ecx
// 0056cbf4  83c404               add esp, 4
// 0056cbf7  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056cbfb  894640               mov dword ptr [esi + 0x40], eax
// 0056cbfe  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 0056cc05  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 0056cc0c  83f805               cmp eax, 5
// 0056cc0f  0f876f020000         ja 0x56ce84
// 0056cc15  ff24859cce5600       jmp dword ptr [eax*4 + 0x56ce9c]
// 0056cc1c  bb01000000           mov ebx, 1
// 0056cc21  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 0056cc27  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0056cc2a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cc2d  33c0                 xor eax, eax
// 0056cc2f  891e                 mov dword ptr [esi], ebx
// 0056cc31  895e08               mov dword ptr [esi + 8], ebx
// 0056cc34  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056cc37  894610               mov dword ptr [esi + 0x10], eax
// 0056cc3a  894614               mov dword ptr [esi + 0x14], eax
// 0056cc3d  894618               mov dword ptr [esi + 0x18], eax
// 0056cc40  5e                   pop esi
// 0056cc41  5b                   pop ebx
// 0056cc42  c3                   ret 
// 0056cc43  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cc46  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0056cc4d  33c9                 xor ecx, ecx
// 0056cc4f  bb01000000           mov ebx, 1
// 0056cc54  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0056cc5a  895808               mov dword ptr [eax + 8], ebx
// 0056cc5d  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cc60  c70052000000         mov dword ptr [eax], 0x52
// 0056cc66  894810               mov dword ptr [eax + 0x10], ecx
// 0056cc69  894814               mov dword ptr [eax + 0x14], ecx
// 0056cc6c  894818               mov dword ptr [eax + 0x18], ecx
// 0056cc6f  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cc72  83c054               add eax, 0x54
// 0056cc75  895808               mov dword ptr [eax + 8], ebx
// 0056cc78  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cc7b  c70047000000         mov dword ptr [eax], 0x47
// 0056cc81  894810               mov dword ptr [eax + 0x10], ecx
// 0056cc84  894814               mov dword ptr [eax + 0x14], ecx
// 0056cc87  894818               mov dword ptr [eax + 0x18], ecx
// 0056cc8a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cc8d  81c6a8000000         add esi, 0xa8
// 0056cc93  895e08               mov dword ptr [esi + 8], ebx
// 0056cc96  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056cc99  c70642000000         mov dword ptr [esi], 0x42
// 0056cc9f  894e10               mov dword ptr [esi + 0x10], ecx
// 0056cca2  894e14               mov dword ptr [esi + 0x14], ecx
// 0056cca5  894e18               mov dword ptr [esi + 0x18], ecx
// 0056cca8  5e                   pop esi
// 0056cca9  5b                   pop ebx
// 0056ccaa  c3                   ret 
// 0056ccab  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056ccae  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0056ccb5  bb01000000           mov ebx, 1
// 0056ccba  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 0056ccc0  8918                 mov dword ptr [eax], ebx
// 0056ccc2  33c9                 xor ecx, ecx
// 0056ccc4  894810               mov dword ptr [eax + 0x10], ecx
// 0056ccc7  894814               mov dword ptr [eax + 0x14], ecx
// 0056ccca  894818               mov dword ptr [eax + 0x18], ecx
// 0056cccd  ba02000000           mov edx, 2
// 0056ccd2  895008               mov dword ptr [eax + 8], edx
// 0056ccd5  89500c               mov dword ptr [eax + 0xc], edx
// 0056ccd8  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056ccdb  83c054               add eax, 0x54
// 0056ccde  895808               mov dword ptr [eax + 8], ebx
// 0056cce1  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cce4  895810               mov dword ptr [eax + 0x10], ebx
// 0056cce7  895814               mov dword ptr [eax + 0x14], ebx
// 0056ccea  895818               mov dword ptr [eax + 0x18], ebx
// 0056cced  8910                 mov dword ptr [eax], edx
// 0056ccef  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056ccf2  81c6a8000000         add esi, 0xa8
// 0056ccf8  895e08               mov dword ptr [esi + 8], ebx
// 0056ccfb  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056ccfe  895e10               mov dword ptr [esi + 0x10], ebx
// 0056cd01  895e14               mov dword ptr [esi + 0x14], ebx
// 0056cd04  895e18               mov dword ptr [esi + 0x18], ebx
// 0056cd07  c70603000000         mov dword ptr [esi], 3
// 0056cd0d  5e                   pop esi
// 0056cd0e  5b                   pop ebx
// 0056cd0f  c3                   ret 
// 0056cd10  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cd13  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0056cd1a  33c9                 xor ecx, ecx
// 0056cd1c  bb01000000           mov ebx, 1
// 0056cd21  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0056cd27  895808               mov dword ptr [eax + 8], ebx
// 0056cd2a  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cd2d  c70043000000         mov dword ptr [eax], 0x43
// 0056cd33  894810               mov dword ptr [eax + 0x10], ecx
// 0056cd36  894814               mov dword ptr [eax + 0x14], ecx
// 0056cd39  894818               mov dword ptr [eax + 0x18], ecx
// 0056cd3c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cd3f  89585c               mov dword ptr [eax + 0x5c], ebx
// 0056cd42  895860               mov dword ptr [eax + 0x60], ebx
// 0056cd45  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 0056cd4c  894864               mov dword ptr [eax + 0x64], ecx
// 0056cd4f  894868               mov dword ptr [eax + 0x68], ecx
// 0056cd52  89486c               mov dword ptr [eax + 0x6c], ecx
// 0056cd55  83c054               add eax, 0x54
// 0056cd58  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cd5b  05a8000000           add eax, 0xa8
// 0056cd60  895808               mov dword ptr [eax + 8], ebx
// 0056cd63  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cd66  c70059000000         mov dword ptr [eax], 0x59
// 0056cd6c  894810               mov dword ptr [eax + 0x10], ecx
// 0056cd6f  894814               mov dword ptr [eax + 0x14], ecx
// 0056cd72  894818               mov dword ptr [eax + 0x18], ecx
// 0056cd75  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cd78  81c6fc000000         add esi, 0xfc
// 0056cd7e  895e08               mov dword ptr [esi + 8], ebx
// 0056cd81  895e0c               mov dword ptr [esi + 0xc], ebx
// 0056cd84  c7064b000000         mov dword ptr [esi], 0x4b
// 0056cd8a  894e10               mov dword ptr [esi + 0x10], ecx
// 0056cd8d  894e14               mov dword ptr [esi + 0x14], ecx
// 0056cd90  894e18               mov dword ptr [esi + 0x18], ecx
// 0056cd93  5e                   pop esi
// 0056cd94  5b                   pop ebx
// 0056cd95  c3                   ret 
// 0056cd96  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cd99  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0056cda0  bb01000000           mov ebx, 1
// 0056cda5  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0056cdab  8918                 mov dword ptr [eax], ebx
// 0056cdad  33c9                 xor ecx, ecx
// 0056cdaf  894810               mov dword ptr [eax + 0x10], ecx
// 0056cdb2  894814               mov dword ptr [eax + 0x14], ecx
// 0056cdb5  894818               mov dword ptr [eax + 0x18], ecx
// 0056cdb8  ba02000000           mov edx, 2
// 0056cdbd  895008               mov dword ptr [eax + 8], edx
// 0056cdc0  89500c               mov dword ptr [eax + 0xc], edx
// 0056cdc3  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cdc6  89585c               mov dword ptr [eax + 0x5c], ebx
// 0056cdc9  895860               mov dword ptr [eax + 0x60], ebx
// 0056cdcc  895864               mov dword ptr [eax + 0x64], ebx
// 0056cdcf  895868               mov dword ptr [eax + 0x68], ebx
// 0056cdd2  89586c               mov dword ptr [eax + 0x6c], ebx
// 0056cdd5  895054               mov dword ptr [eax + 0x54], edx
// 0056cdd8  83c054               add eax, 0x54
// 0056cddb  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056cdde  05a8000000           add eax, 0xa8
// 0056cde3  895808               mov dword ptr [eax + 8], ebx
// 0056cde6  89580c               mov dword ptr [eax + 0xc], ebx
// 0056cde9  895810               mov dword ptr [eax + 0x10], ebx
// 0056cdec  895814               mov dword ptr [eax + 0x14], ebx
// 0056cdef  895818               mov dword ptr [eax + 0x18], ebx
// 0056cdf2  c70003000000         mov dword ptr [eax], 3
// 0056cdf8  8b7644               mov esi, dword ptr [esi + 0x44]
// 0056cdfb  81c6fc000000         add esi, 0xfc
// 0056ce01  c70604000000         mov dword ptr [esi], 4
// 0056ce07  895608               mov dword ptr [esi + 8], edx
// 0056ce0a  89560c               mov dword ptr [esi + 0xc], edx
// 0056ce0d  894e10               mov dword ptr [esi + 0x10], ecx
// 0056ce10  894e14               mov dword ptr [esi + 0x14], ecx
// 0056ce13  894e18               mov dword ptr [esi + 0x18], ecx
// 0056ce16  5e                   pop esi
// 0056ce17  5b                   pop ebx
// 0056ce18  c3                   ret 
// 0056ce19  8b4624               mov eax, dword ptr [esi + 0x24]
// 0056ce1c  bb01000000           mov ebx, 1
// 0056ce21  3bc3                 cmp eax, ebx
// 0056ce23  89463c               mov dword ptr [esi + 0x3c], eax
// 0056ce26  7c05                 jl 0x56ce2d
// 0056ce28  83f80a               cmp eax, 0xa
// 0056ce2b  7e24                 jle 0x56ce51
// 0056ce2d  8b16                 mov edx, dword ptr [esi]
// 0056ce2f  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 0056ce36  8b06                 mov eax, dword ptr [esi]
// 0056ce38  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0056ce3b  894818               mov dword ptr [eax + 0x18], ecx
// 0056ce3e  8b16                 mov edx, dword ptr [esi]
// 0056ce40  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 0056ce47  8b06                 mov eax, dword ptr [esi]
// 0056ce49  8b08                 mov ecx, dword ptr [eax]
// 0056ce4b  56                   push esi
// 0056ce4c  ffd1                 call ecx
// 0056ce4e  83c404               add esp, 4
// 0056ce51  57                   push edi
// 0056ce52  33ff                 xor edi, edi
// 0056ce54  33c9                 xor ecx, ecx
// 0056ce56  397e3c               cmp dword ptr [esi + 0x3c], edi
// 0056ce59  7e25                 jle 0x56ce80
// 0056ce5b  33d2                 xor edx, edx
// 0056ce5d  8d4900               lea ecx, [ecx]
// 0056ce60  8b4644               mov eax, dword ptr [esi + 0x44]
// 0056ce63  03c2                 add eax, edx
// 0056ce65  8908                 mov dword ptr [eax], ecx
// 0056ce67  03cb                 add ecx, ebx
// 0056ce69  895808               mov dword ptr [eax + 8], ebx
// 0056ce6c  89580c               mov dword ptr [eax + 0xc], ebx
// 0056ce6f  897810               mov dword ptr [eax + 0x10], edi
// 0056ce72  897814               mov dword ptr [eax + 0x14], edi
// 0056ce75  897818               mov dword ptr [eax + 0x18], edi
// 0056ce78  83c254               add edx, 0x54
// 0056ce7b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0056ce7e  7ce0                 jl 0x56ce60
// 0056ce80  5f                   pop edi
// 0056ce81  5e                   pop esi
// 0056ce82  5b                   pop ebx
// 0056ce83  c3                   ret 
// 0056ce84  8b16                 mov edx, dword ptr [esi]
// 0056ce86  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0056ce8d  8b06                 mov eax, dword ptr [esi]
// 0056ce8f  8b08                 mov ecx, dword ptr [eax]
// 0056ce91  56                   push esi
// 0056ce92  ffd1                 call ecx
// 0056ce94  83c404               add esp, 4
// 0056ce97  5e                   pop esi
// 0056ce98  5b                   pop ebx
// 0056ce99  c3                   ret 
// 0056ce9a  8bff                 mov edi, edi
// 0056ce9c  19ce                 sbb esi, ecx
// 0056ce9e  56                   push esi
// 0056ce9f  001ccc               add byte ptr [esp + ecx*8], bl
// 0056cea2  56                   push esi
// 0056cea3  0043cc               add byte ptr [ebx - 0x34], al
// 0056cea6  56                   push esi
// 0056cea7  00abcc560010         add byte ptr [ebx + 0x100056cc], ch
// 0056cead  cd56                 int 0x56
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
