// roc 2009-06 005a5800  unit: seg_005a0000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a5800
//
// 005a5800  53                   push ebx
// 005a5801  56                   push esi
// 005a5802  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005a5806  8b4604               mov eax, dword ptr [esi + 4]
// 005a5809  8b08                 mov ecx, dword ptr [eax]
// 005a580b  57                   push edi
// 005a580c  6a0c                 push 0xc
// 005a580e  6a01                 push 1
// 005a5810  56                   push esi
// 005a5811  ffd1                 call ecx
// 005a5813  8bf8                 mov edi, eax
// 005a5815  89be50010000         mov dword ptr [esi + 0x150], edi
// 005a581b  c707e0496700         mov dword ptr [edi], 0x6749e0
// 005a5821  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a5824  48                   dec eax
// 005a5825  bb04000000           mov ebx, 4
// 005a582a  83c40c               add esp, 0xc
// 005a582d  3bc3                 cmp eax, ebx
// 005a582f  771e                 ja 0x5a584f
// 005a5831  ff2485005a5a00       jmp dword ptr [eax*4 + 0x5a5a00]
// 005a5838  837e2401             cmp dword ptr [esi + 0x24], 1
// 005a583c  742a                 je 0x5a5868
// 005a583e  eb15                 jmp 0x5a5855
// 005a5840  837e2403             cmp dword ptr [esi + 0x24], 3
// 005a5844  7422                 je 0x5a5868
// 005a5846  eb0d                 jmp 0x5a5855
// 005a5848  395e24               cmp dword ptr [esi + 0x24], ebx
// 005a584b  741b                 je 0x5a5868
// 005a584d  eb06                 jmp 0x5a5855
// 005a584f  837e2401             cmp dword ptr [esi + 0x24], 1
// 005a5853  7d13                 jge 0x5a5868
// 005a5855  8b16                 mov edx, dword ptr [esi]
// 005a5857  c7421409000000       mov dword ptr [edx + 0x14], 9
// 005a585e  8b06                 mov eax, dword ptr [esi]
// 005a5860  8b08                 mov ecx, dword ptr [eax]
// 005a5862  56                   push esi
// 005a5863  ffd1                 call ecx
// 005a5865  83c404               add esp, 4
// 005a5868  8b4640               mov eax, dword ptr [esi + 0x40]
// 005a586b  8d48ff               lea ecx, [eax - 1]
// 005a586e  3bcb                 cmp ecx, ebx
// 005a5870  0f875e010000         ja 0x5a59d4
// 005a5876  ff248d145a5a00       jmp dword ptr [ecx*4 + 0x5a5a14]
// 005a587d  837e3c01             cmp dword ptr [esi + 0x3c], 1
// 005a5881  7413                 je 0x5a5896
// 005a5883  8b16                 mov edx, dword ptr [esi]
// 005a5885  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005a588c  8b06                 mov eax, dword ptr [esi]
// 005a588e  8b08                 mov ecx, dword ptr [eax]
// 005a5890  56                   push esi
// 005a5891  ffd1                 call ecx
// 005a5893  83c404               add esp, 4
// 005a5896  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a5899  83f801               cmp eax, 1
// 005a589c  741b                 je 0x5a58b9
// 005a589e  83f802               cmp eax, 2
// 005a58a1  7511                 jne 0x5a58b4
// 005a58a3  c70730535a00         mov dword ptr [edi], 0x5a5330
// 005a58a9  c7470420555a00       mov dword ptr [edi + 4], 0x5a5520
// 005a58b0  5f                   pop edi
// 005a58b1  5e                   pop esi
// 005a58b2  5b                   pop ebx
// 005a58b3  c3                   ret 
// 005a58b4  83f803               cmp eax, 3
// 005a58b7  752e                 jne 0x5a58e7
// 005a58b9  c7470420575a00       mov dword ptr [edi + 4], 0x5a5720
// 005a58c0  5f                   pop edi
// 005a58c1  5e                   pop esi
// 005a58c2  5b                   pop ebx
// 005a58c3  c3                   ret 
// 005a58c4  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 005a58c8  7413                 je 0x5a58dd
// 005a58ca  8b16                 mov edx, dword ptr [esi]
// 005a58cc  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005a58d3  8b06                 mov eax, dword ptr [esi]
// 005a58d5  8b08                 mov ecx, dword ptr [eax]
// 005a58d7  56                   push esi
// 005a58d8  ffd1                 call ecx
// 005a58da  83c404               add esp, 4
// 005a58dd  837e2802             cmp dword ptr [esi + 0x28], 2
// 005a58e1  0f840d010000         je 0x5a59f4
// 005a58e7  8b16                 mov edx, dword ptr [esi]
// 005a58e9  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 005a58f0  8b06                 mov eax, dword ptr [esi]
// 005a58f2  8b08                 mov ecx, dword ptr [eax]
// 005a58f4  56                   push esi
// 005a58f5  ffd1                 call ecx
// 005a58f7  83c404               add esp, 4
// 005a58fa  5f                   pop edi
// 005a58fb  5e                   pop esi
// 005a58fc  5b                   pop ebx
// 005a58fd  c3                   ret 
// 005a58fe  837e3c03             cmp dword ptr [esi + 0x3c], 3
// 005a5902  7413                 je 0x5a5917
// 005a5904  8b16                 mov edx, dword ptr [esi]
// 005a5906  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005a590d  8b06                 mov eax, dword ptr [esi]
// 005a590f  8b08                 mov ecx, dword ptr [eax]
// 005a5911  56                   push esi
// 005a5912  ffd1                 call ecx
// 005a5914  83c404               add esp, 4
// 005a5917  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a591a  83f802               cmp eax, 2
// 005a591d  7511                 jne 0x5a5930
// 005a591f  c70730535a00         mov dword ptr [edi], 0x5a5330
// 005a5925  c7470410545a00       mov dword ptr [edi + 4], 0x5a5410
// 005a592c  5f                   pop edi
// 005a592d  5e                   pop esi
// 005a592e  5b                   pop ebx
// 005a592f  c3                   ret 
// 005a5930  83f803               cmp eax, 3
// 005a5933  0f84bb000000         je 0x5a59f4
// 005a5939  8b16                 mov edx, dword ptr [esi]
// 005a593b  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 005a5942  8b06                 mov eax, dword ptr [esi]
// 005a5944  8b08                 mov ecx, dword ptr [eax]
// 005a5946  56                   push esi
// 005a5947  ffd1                 call ecx
// 005a5949  83c404               add esp, 4
// 005a594c  5f                   pop edi
// 005a594d  5e                   pop esi
// 005a594e  5b                   pop ebx
// 005a594f  c3                   ret 
// 005a5950  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 005a5953  7413                 je 0x5a5968
// 005a5955  8b16                 mov edx, dword ptr [esi]
// 005a5957  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005a595e  8b06                 mov eax, dword ptr [esi]
// 005a5960  8b08                 mov ecx, dword ptr [eax]
// 005a5962  56                   push esi
// 005a5963  ffd1                 call ecx
// 005a5965  83c404               add esp, 4
// 005a5968  395e28               cmp dword ptr [esi + 0x28], ebx
// 005a596b  0f8483000000         je 0x5a59f4
// 005a5971  8b16                 mov edx, dword ptr [esi]
// 005a5973  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 005a597a  8b06                 mov eax, dword ptr [esi]
// 005a597c  8b08                 mov ecx, dword ptr [eax]
// 005a597e  56                   push esi
// 005a597f  ffd1                 call ecx
// 005a5981  83c404               add esp, 4
// 005a5984  5f                   pop edi
// 005a5985  5e                   pop esi
// 005a5986  5b                   pop ebx
// 005a5987  c3                   ret 
// 005a5988  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 005a598b  7413                 je 0x5a59a0
// 005a598d  8b16                 mov edx, dword ptr [esi]
// 005a598f  c742140a000000       mov dword ptr [edx + 0x14], 0xa
// 005a5996  8b06                 mov eax, dword ptr [esi]
// 005a5998  8b08                 mov ecx, dword ptr [eax]
// 005a599a  56                   push esi
// 005a599b  ffd1                 call ecx
// 005a599d  83c404               add esp, 4
// 005a59a0  8b4628               mov eax, dword ptr [esi + 0x28]
// 005a59a3  3bc3                 cmp eax, ebx
// 005a59a5  7511                 jne 0x5a59b8
// 005a59a7  c70730535a00         mov dword ptr [edi], 0x5a5330
// 005a59ad  c74704d0555a00       mov dword ptr [edi + 4], 0x5a55d0
// 005a59b4  5f                   pop edi
// 005a59b5  5e                   pop esi
// 005a59b6  5b                   pop ebx
// 005a59b7  c3                   ret 
// 005a59b8  83f805               cmp eax, 5
// 005a59bb  7437                 je 0x5a59f4
// 005a59bd  8b16                 mov edx, dword ptr [esi]
// 005a59bf  c742141b000000       mov dword ptr [edx + 0x14], 0x1b
// 005a59c6  8b06                 mov eax, dword ptr [esi]
// 005a59c8  8b08                 mov ecx, dword ptr [eax]
// 005a59ca  56                   push esi
// 005a59cb  ffd1                 call ecx
// 005a59cd  83c404               add esp, 4
// 005a59d0  5f                   pop edi
// 005a59d1  5e                   pop esi
// 005a59d2  5b                   pop ebx
// 005a59d3  c3                   ret 
// 005a59d4  3b4628               cmp eax, dword ptr [esi + 0x28]
// 005a59d7  7508                 jne 0x5a59e1
// 005a59d9  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005a59dc  3b5624               cmp edx, dword ptr [esi + 0x24]
// 005a59df  7413                 je 0x5a59f4
// 005a59e1  8b06                 mov eax, dword ptr [esi]
// 005a59e3  c740141b000000       mov dword ptr [eax + 0x14], 0x1b
// 005a59ea  8b0e                 mov ecx, dword ptr [esi]
// 005a59ec  8b11                 mov edx, dword ptr [ecx]
// 005a59ee  56                   push esi
// 005a59ef  ffd2                 call edx
// 005a59f1  83c404               add esp, 4
// 005a59f4  c7470480575a00       mov dword ptr [edi + 4], 0x5a5780
// 005a59fb  5f                   pop edi
// 005a59fc  5e                   pop esi
// 005a59fd  5b                   pop ebx
// 005a59fe  c3                   ret 
// 005a59ff  90                   nop 
// 005a5a00  38585a               cmp byte ptr [eax + 0x5a], bl
// 005a5a03  004058               add byte ptr [eax + 0x58], al
// 005a5a06  5a                   pop edx
// 005a5a07  004058               add byte ptr [eax + 0x58], al
// 005a5a0a  5a                   pop edx
// 005a5a0b  004858               add byte ptr [eax + 0x58], cl
// 005a5a0e  5a                   pop edx
// 005a5a0f  004858               add byte ptr [eax + 0x58], cl
// 005a5a12  5a                   pop edx
// 005a5a13  007d58               add byte ptr [ebp + 0x58], bh
// 005a5a16  5a                   pop edx
// 005a5a17  00c4                 add ah, al
// 005a5a19  58                   pop eax
// 005a5a1a  5a                   pop edx
// 005a5a1b  00fe                 add dh, bh
// 005a5a1d  58                   pop eax
// 005a5a1e  5a                   pop edx
// 005a5a1f  005059               add byte ptr [eax + 0x59], dl
// 005a5a22  5a                   pop edx
// library jpeg-6b/jccolor.c (function _jinit_color_converter)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccolor.c
