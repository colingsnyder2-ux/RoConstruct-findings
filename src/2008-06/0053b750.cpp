// roc 2008-06 0053b750  unit: seg_00530000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053b750
//
// 0053b750  837e2000             cmp dword ptr [esi + 0x20], 0
// 0053b754  7612                 jbe 0x53b768
// 0053b756  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0053b75a  760c                 jbe 0x53b768
// 0053b75c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0053b760  7e06                 jle 0x53b768
// 0053b762  837e2400             cmp dword ptr [esi + 0x24], 0
// 0053b766  7f13                 jg 0x53b77b
// 0053b768  8b06                 mov eax, dword ptr [esi]
// 0053b76a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 0053b771  8b0e                 mov ecx, dword ptr [esi]
// 0053b773  8b11                 mov edx, dword ptr [ecx]
// 0053b775  56                   push esi
// 0053b776  ffd2                 call edx
// 0053b778  83c404               add esp, 4
// 0053b77b  b8dcff0000           mov eax, 0xffdc
// 0053b780  394620               cmp dword ptr [esi + 0x20], eax
// 0053b783  7f05                 jg 0x53b78a
// 0053b785  39461c               cmp dword ptr [esi + 0x1c], eax
// 0053b788  7e18                 jle 0x53b7a2
// 0053b78a  8b0e                 mov ecx, dword ptr [esi]
// 0053b78c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0053b793  8b16                 mov edx, dword ptr [esi]
// 0053b795  894218               mov dword ptr [edx + 0x18], eax
// 0053b798  8b06                 mov eax, dword ptr [esi]
// 0053b79a  8b08                 mov ecx, dword ptr [eax]
// 0053b79c  56                   push esi
// 0053b79d  ffd1                 call ecx
// 0053b79f  83c404               add esp, 4
// 0053b7a2  837e3808             cmp dword ptr [esi + 0x38], 8
// 0053b7a6  741b                 je 0x53b7c3
// 0053b7a8  8b16                 mov edx, dword ptr [esi]
// 0053b7aa  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0053b7b1  8b06                 mov eax, dword ptr [esi]
// 0053b7b3  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0053b7b6  894818               mov dword ptr [eax + 0x18], ecx
// 0053b7b9  8b16                 mov edx, dword ptr [esi]
// 0053b7bb  8b02                 mov eax, dword ptr [edx]
// 0053b7bd  56                   push esi
// 0053b7be  ffd0                 call eax
// 0053b7c0  83c404               add esp, 4
// 0053b7c3  b80a000000           mov eax, 0xa
// 0053b7c8  39463c               cmp dword ptr [esi + 0x3c], eax
// 0053b7cb  7e20                 jle 0x53b7ed
// 0053b7cd  8b0e                 mov ecx, dword ptr [esi]
// 0053b7cf  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0053b7d6  8b16                 mov edx, dword ptr [esi]
// 0053b7d8  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0053b7db  894a18               mov dword ptr [edx + 0x18], ecx
// 0053b7de  8b16                 mov edx, dword ptr [esi]
// 0053b7e0  89421c               mov dword ptr [edx + 0x1c], eax
// 0053b7e3  8b06                 mov eax, dword ptr [esi]
// 0053b7e5  8b08                 mov ecx, dword ptr [eax]
// 0053b7e7  56                   push esi
// 0053b7e8  ffd1                 call ecx
// 0053b7ea  83c404               add esp, 4
// 0053b7ed  8b4644               mov eax, dword ptr [esi + 0x44]
// 0053b7f0  53                   push ebx
// 0053b7f1  55                   push ebp
// 0053b7f2  bb01000000           mov ebx, 1
// 0053b7f7  33ed                 xor ebp, ebp
// 0053b7f9  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0053b7fc  57                   push edi
// 0053b7fd  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0053b803  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0053b809  7e62                 jle 0x53b86d
// 0053b80b  8d780c               lea edi, [eax + 0xc]
// 0053b80e  8bff                 mov edi, edi
// 0053b810  8b47fc               mov eax, dword ptr [edi - 4]
// 0053b813  85c0                 test eax, eax
// 0053b815  7e10                 jle 0x53b827
// 0053b817  83f804               cmp eax, 4
// 0053b81a  7f0b                 jg 0x53b827
// 0053b81c  8b07                 mov eax, dword ptr [edi]
// 0053b81e  85c0                 test eax, eax
// 0053b820  7e05                 jle 0x53b827
// 0053b822  83f804               cmp eax, 4
// 0053b825  7e13                 jle 0x53b83a
// 0053b827  8b16                 mov edx, dword ptr [esi]
// 0053b829  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0053b830  8b06                 mov eax, dword ptr [esi]
// 0053b832  8b08                 mov ecx, dword ptr [eax]
// 0053b834  56                   push esi
// 0053b835  ffd1                 call ecx
// 0053b837  83c404               add esp, 4
// 0053b83a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0053b840  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0053b843  3bc1                 cmp eax, ecx
// 0053b845  7f02                 jg 0x53b849
// 0053b847  8bc1                 mov eax, ecx
// 0053b849  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0053b84f  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0053b855  8b0f                 mov ecx, dword ptr [edi]
// 0053b857  3bc1                 cmp eax, ecx
// 0053b859  7f02                 jg 0x53b85d
// 0053b85b  8bc1                 mov eax, ecx
// 0053b85d  03eb                 add ebp, ebx
// 0053b85f  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0053b865  83c754               add edi, 0x54
// 0053b868  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0053b86b  7ca3                 jl 0x53b810
// 0053b86d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0053b870  33ed                 xor ebp, ebp
// 0053b872  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0053b875  0f8e8a000000         jle 0x53b905
// 0053b87b  8d7824               lea edi, [eax + 0x24]
// 0053b87e  8bff                 mov edi, edi
// 0053b880  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 0053b883  896fe0               mov dword ptr [edi - 0x20], ebp
// 0053b886  c70708000000         mov dword ptr [edi], 8
// 0053b88c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0053b890  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 0053b896  03d2                 add edx, edx
// 0053b898  03d2                 add edx, edx
// 0053b89a  03d2                 add edx, edx
// 0053b89c  52                   push edx
// 0053b89d  50                   push eax
// 0053b89e  e85da2feff           call 0x525b00
// 0053b8a3  8b57e8               mov edx, dword ptr [edi - 0x18]
// 0053b8a6  8947f8               mov dword ptr [edi - 8], eax
// 0053b8a9  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0053b8ad  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0053b8b3  03c9                 add ecx, ecx
// 0053b8b5  03c9                 add ecx, ecx
// 0053b8b7  03c9                 add ecx, ecx
// 0053b8b9  51                   push ecx
// 0053b8ba  52                   push edx
// 0053b8bb  e840a2feff           call 0x525b00
// 0053b8c0  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 0053b8c3  8947fc               mov dword ptr [edi - 4], eax
// 0053b8c6  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0053b8ca  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0053b8d0  50                   push eax
// 0053b8d1  51                   push ecx
// 0053b8d2  e829a2feff           call 0x525b00
// 0053b8d7  894704               mov dword ptr [edi + 4], eax
// 0053b8da  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0053b8dd  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0053b8e1  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0053b8e7  52                   push edx
// 0053b8e8  50                   push eax
// 0053b8e9  e812a2feff           call 0x525b00
// 0053b8ee  894708               mov dword ptr [edi + 8], eax
// 0053b8f1  885f0c               mov byte ptr [edi + 0xc], bl
// 0053b8f4  03eb                 add ebp, ebx
// 0053b8f6  83c420               add esp, 0x20
// 0053b8f9  83c754               add edi, 0x54
// 0053b8fc  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0053b8ff  0f8c7bffffff         jl 0x53b880
// 0053b905  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0053b90b  8b5620               mov edx, dword ptr [esi + 0x20]
// 0053b90e  03c9                 add ecx, ecx
// 0053b910  03c9                 add ecx, ecx
// 0053b912  03c9                 add ecx, ecx
// 0053b914  51                   push ecx
// 0053b915  52                   push edx
// 0053b916  e8e5a1feff           call 0x525b00
// 0053b91b  83c408               add esp, 8
// 0053b91e  5f                   pop edi
// 0053b91f  5d                   pop ebp
// 0053b920  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 0053b926  5b                   pop ebx
// 0053b927  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
