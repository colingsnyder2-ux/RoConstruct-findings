// roc 2009-06 005894e0  unit: seg_00580000  size: 740 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005894e0
//
// 005894e0  53                   push ebx
// 005894e1  56                   push esi
// 005894e2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005894e6  837e1464             cmp dword ptr [esi + 0x14], 0x64
// 005894ea  741b                 je 0x589507
// 005894ec  8b06                 mov eax, dword ptr [esi]
// 005894ee  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005894f5  8b0e                 mov ecx, dword ptr [esi]
// 005894f7  8b5614               mov edx, dword ptr [esi + 0x14]
// 005894fa  895118               mov dword ptr [ecx + 0x18], edx
// 005894fd  8b06                 mov eax, dword ptr [esi]
// 005894ff  8b08                 mov ecx, dword ptr [eax]
// 00589501  56                   push esi
// 00589502  ffd1                 call ecx
// 00589504  83c404               add esp, 4
// 00589507  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058950b  894640               mov dword ptr [esi + 0x40], eax
// 0058950e  c686c400000000       mov byte ptr [esi + 0xc4], 0
// 00589515  c686cc00000000       mov byte ptr [esi + 0xcc], 0
// 0058951c  83f805               cmp eax, 5
// 0058951f  0f876f020000         ja 0x589794
// 00589525  ff2485ac975800       jmp dword ptr [eax*4 + 0x5897ac]
// 0058952c  bb01000000           mov ebx, 1
// 00589531  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 00589537  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0058953a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0058953d  33c0                 xor eax, eax
// 0058953f  891e                 mov dword ptr [esi], ebx
// 00589541  895e08               mov dword ptr [esi + 8], ebx
// 00589544  895e0c               mov dword ptr [esi + 0xc], ebx
// 00589547  894610               mov dword ptr [esi + 0x10], eax
// 0058954a  894614               mov dword ptr [esi + 0x14], eax
// 0058954d  894618               mov dword ptr [esi + 0x18], eax
// 00589550  5e                   pop esi
// 00589551  5b                   pop ebx
// 00589552  c3                   ret 
// 00589553  8b4644               mov eax, dword ptr [esi + 0x44]
// 00589556  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 0058955d  33c9                 xor ecx, ecx
// 0058955f  bb01000000           mov ebx, 1
// 00589564  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 0058956a  895808               mov dword ptr [eax + 8], ebx
// 0058956d  89580c               mov dword ptr [eax + 0xc], ebx
// 00589570  c70052000000         mov dword ptr [eax], 0x52
// 00589576  894810               mov dword ptr [eax + 0x10], ecx
// 00589579  894814               mov dword ptr [eax + 0x14], ecx
// 0058957c  894818               mov dword ptr [eax + 0x18], ecx
// 0058957f  8b4644               mov eax, dword ptr [esi + 0x44]
// 00589582  83c054               add eax, 0x54
// 00589585  895808               mov dword ptr [eax + 8], ebx
// 00589588  89580c               mov dword ptr [eax + 0xc], ebx
// 0058958b  c70047000000         mov dword ptr [eax], 0x47
// 00589591  894810               mov dword ptr [eax + 0x10], ecx
// 00589594  894814               mov dword ptr [eax + 0x14], ecx
// 00589597  894818               mov dword ptr [eax + 0x18], ecx
// 0058959a  8b7644               mov esi, dword ptr [esi + 0x44]
// 0058959d  81c6a8000000         add esi, 0xa8
// 005895a3  895e08               mov dword ptr [esi + 8], ebx
// 005895a6  895e0c               mov dword ptr [esi + 0xc], ebx
// 005895a9  c70642000000         mov dword ptr [esi], 0x42
// 005895af  894e10               mov dword ptr [esi + 0x10], ecx
// 005895b2  894e14               mov dword ptr [esi + 0x14], ecx
// 005895b5  894e18               mov dword ptr [esi + 0x18], ecx
// 005895b8  5e                   pop esi
// 005895b9  5b                   pop ebx
// 005895ba  c3                   ret 
// 005895bb  8b4644               mov eax, dword ptr [esi + 0x44]
// 005895be  c7463c03000000       mov dword ptr [esi + 0x3c], 3
// 005895c5  bb01000000           mov ebx, 1
// 005895ca  889ec4000000         mov byte ptr [esi + 0xc4], bl
// 005895d0  8918                 mov dword ptr [eax], ebx
// 005895d2  33c9                 xor ecx, ecx
// 005895d4  894810               mov dword ptr [eax + 0x10], ecx
// 005895d7  894814               mov dword ptr [eax + 0x14], ecx
// 005895da  894818               mov dword ptr [eax + 0x18], ecx
// 005895dd  ba02000000           mov edx, 2
// 005895e2  895008               mov dword ptr [eax + 8], edx
// 005895e5  89500c               mov dword ptr [eax + 0xc], edx
// 005895e8  8b4644               mov eax, dword ptr [esi + 0x44]
// 005895eb  83c054               add eax, 0x54
// 005895ee  895808               mov dword ptr [eax + 8], ebx
// 005895f1  89580c               mov dword ptr [eax + 0xc], ebx
// 005895f4  895810               mov dword ptr [eax + 0x10], ebx
// 005895f7  895814               mov dword ptr [eax + 0x14], ebx
// 005895fa  895818               mov dword ptr [eax + 0x18], ebx
// 005895fd  8910                 mov dword ptr [eax], edx
// 005895ff  8b7644               mov esi, dword ptr [esi + 0x44]
// 00589602  81c6a8000000         add esi, 0xa8
// 00589608  895e08               mov dword ptr [esi + 8], ebx
// 0058960b  895e0c               mov dword ptr [esi + 0xc], ebx
// 0058960e  895e10               mov dword ptr [esi + 0x10], ebx
// 00589611  895e14               mov dword ptr [esi + 0x14], ebx
// 00589614  895e18               mov dword ptr [esi + 0x18], ebx
// 00589617  c70603000000         mov dword ptr [esi], 3
// 0058961d  5e                   pop esi
// 0058961e  5b                   pop ebx
// 0058961f  c3                   ret 
// 00589620  8b4644               mov eax, dword ptr [esi + 0x44]
// 00589623  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 0058962a  33c9                 xor ecx, ecx
// 0058962c  bb01000000           mov ebx, 1
// 00589631  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 00589637  895808               mov dword ptr [eax + 8], ebx
// 0058963a  89580c               mov dword ptr [eax + 0xc], ebx
// 0058963d  c70043000000         mov dword ptr [eax], 0x43
// 00589643  894810               mov dword ptr [eax + 0x10], ecx
// 00589646  894814               mov dword ptr [eax + 0x14], ecx
// 00589649  894818               mov dword ptr [eax + 0x18], ecx
// 0058964c  8b4644               mov eax, dword ptr [esi + 0x44]
// 0058964f  89585c               mov dword ptr [eax + 0x5c], ebx
// 00589652  895860               mov dword ptr [eax + 0x60], ebx
// 00589655  c740544d000000       mov dword ptr [eax + 0x54], 0x4d
// 0058965c  894864               mov dword ptr [eax + 0x64], ecx
// 0058965f  894868               mov dword ptr [eax + 0x68], ecx
// 00589662  89486c               mov dword ptr [eax + 0x6c], ecx
// 00589665  83c054               add eax, 0x54
// 00589668  8b4644               mov eax, dword ptr [esi + 0x44]
// 0058966b  05a8000000           add eax, 0xa8
// 00589670  895808               mov dword ptr [eax + 8], ebx
// 00589673  89580c               mov dword ptr [eax + 0xc], ebx
// 00589676  c70059000000         mov dword ptr [eax], 0x59
// 0058967c  894810               mov dword ptr [eax + 0x10], ecx
// 0058967f  894814               mov dword ptr [eax + 0x14], ecx
// 00589682  894818               mov dword ptr [eax + 0x18], ecx
// 00589685  8b7644               mov esi, dword ptr [esi + 0x44]
// 00589688  81c6fc000000         add esi, 0xfc
// 0058968e  895e08               mov dword ptr [esi + 8], ebx
// 00589691  895e0c               mov dword ptr [esi + 0xc], ebx
// 00589694  c7064b000000         mov dword ptr [esi], 0x4b
// 0058969a  894e10               mov dword ptr [esi + 0x10], ecx
// 0058969d  894e14               mov dword ptr [esi + 0x14], ecx
// 005896a0  894e18               mov dword ptr [esi + 0x18], ecx
// 005896a3  5e                   pop esi
// 005896a4  5b                   pop ebx
// 005896a5  c3                   ret 
// 005896a6  8b4644               mov eax, dword ptr [esi + 0x44]
// 005896a9  c7463c04000000       mov dword ptr [esi + 0x3c], 4
// 005896b0  bb01000000           mov ebx, 1
// 005896b5  889ecc000000         mov byte ptr [esi + 0xcc], bl
// 005896bb  8918                 mov dword ptr [eax], ebx
// 005896bd  33c9                 xor ecx, ecx
// 005896bf  894810               mov dword ptr [eax + 0x10], ecx
// 005896c2  894814               mov dword ptr [eax + 0x14], ecx
// 005896c5  894818               mov dword ptr [eax + 0x18], ecx
// 005896c8  ba02000000           mov edx, 2
// 005896cd  895008               mov dword ptr [eax + 8], edx
// 005896d0  89500c               mov dword ptr [eax + 0xc], edx
// 005896d3  8b4644               mov eax, dword ptr [esi + 0x44]
// 005896d6  89585c               mov dword ptr [eax + 0x5c], ebx
// 005896d9  895860               mov dword ptr [eax + 0x60], ebx
// 005896dc  895864               mov dword ptr [eax + 0x64], ebx
// 005896df  895868               mov dword ptr [eax + 0x68], ebx
// 005896e2  89586c               mov dword ptr [eax + 0x6c], ebx
// 005896e5  895054               mov dword ptr [eax + 0x54], edx
// 005896e8  83c054               add eax, 0x54
// 005896eb  8b4644               mov eax, dword ptr [esi + 0x44]
// 005896ee  05a8000000           add eax, 0xa8
// 005896f3  895808               mov dword ptr [eax + 8], ebx
// 005896f6  89580c               mov dword ptr [eax + 0xc], ebx
// 005896f9  895810               mov dword ptr [eax + 0x10], ebx
// 005896fc  895814               mov dword ptr [eax + 0x14], ebx
// 005896ff  895818               mov dword ptr [eax + 0x18], ebx
// 00589702  c70003000000         mov dword ptr [eax], 3
// 00589708  8b7644               mov esi, dword ptr [esi + 0x44]
// 0058970b  81c6fc000000         add esi, 0xfc
// 00589711  c70604000000         mov dword ptr [esi], 4
// 00589717  895608               mov dword ptr [esi + 8], edx
// 0058971a  89560c               mov dword ptr [esi + 0xc], edx
// 0058971d  894e10               mov dword ptr [esi + 0x10], ecx
// 00589720  894e14               mov dword ptr [esi + 0x14], ecx
// 00589723  894e18               mov dword ptr [esi + 0x18], ecx
// 00589726  5e                   pop esi
// 00589727  5b                   pop ebx
// 00589728  c3                   ret 
// 00589729  8b4624               mov eax, dword ptr [esi + 0x24]
// 0058972c  bb01000000           mov ebx, 1
// 00589731  3bc3                 cmp eax, ebx
// 00589733  89463c               mov dword ptr [esi + 0x3c], eax
// 00589736  7c05                 jl 0x58973d
// 00589738  83f80a               cmp eax, 0xa
// 0058973b  7e24                 jle 0x589761
// 0058973d  8b16                 mov edx, dword ptr [esi]
// 0058973f  c742141a000000       mov dword ptr [edx + 0x14], 0x1a
// 00589746  8b06                 mov eax, dword ptr [esi]
// 00589748  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0058974b  894818               mov dword ptr [eax + 0x18], ecx
// 0058974e  8b16                 mov edx, dword ptr [esi]
// 00589750  c7421c0a000000       mov dword ptr [edx + 0x1c], 0xa
// 00589757  8b06                 mov eax, dword ptr [esi]
// 00589759  8b08                 mov ecx, dword ptr [eax]
// 0058975b  56                   push esi
// 0058975c  ffd1                 call ecx
// 0058975e  83c404               add esp, 4
// 00589761  57                   push edi
// 00589762  33ff                 xor edi, edi
// 00589764  33c9                 xor ecx, ecx
// 00589766  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00589769  7e25                 jle 0x589790
// 0058976b  33d2                 xor edx, edx
// 0058976d  8d4900               lea ecx, [ecx]
// 00589770  8b4644               mov eax, dword ptr [esi + 0x44]
// 00589773  03c2                 add eax, edx
// 00589775  8908                 mov dword ptr [eax], ecx
// 00589777  03cb                 add ecx, ebx
// 00589779  895808               mov dword ptr [eax + 8], ebx
// 0058977c  89580c               mov dword ptr [eax + 0xc], ebx
// 0058977f  897810               mov dword ptr [eax + 0x10], edi
// 00589782  897814               mov dword ptr [eax + 0x14], edi
// 00589785  897818               mov dword ptr [eax + 0x18], edi
// 00589788  83c254               add edx, 0x54
// 0058978b  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 0058978e  7ce0                 jl 0x589770
// 00589790  5f                   pop edi
// 00589791  5e                   pop esi
// 00589792  5b                   pop ebx
// 00589793  c3                   ret 
// 00589794  8b16                 mov edx, dword ptr [esi]
// 00589796  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 0058979d  8b06                 mov eax, dword ptr [esi]
// 0058979f  8b08                 mov ecx, dword ptr [eax]
// 005897a1  56                   push esi
// 005897a2  ffd1                 call ecx
// 005897a4  83c404               add esp, 4
// 005897a7  5e                   pop esi
// 005897a8  5b                   pop ebx
// 005897a9  c3                   ret 
// 005897aa  8bff                 mov edi, edi
// 005897ac  299758002c95         sub dword ptr [edi - 0x6ad3ffa8], edx
// 005897b2  58                   pop eax
// 005897b3  005395               add byte ptr [ebx - 0x6b], dl
// 005897b6  58                   pop eax
// 005897b7  00bb95580020         add byte ptr [ebx + 0x20005895], bh
// 005897bd  96                   xchg esi, eax
// 005897be  58                   pop eax
// library jpeg-6b/jcparam.c (function _jpeg_set_colorspace)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
