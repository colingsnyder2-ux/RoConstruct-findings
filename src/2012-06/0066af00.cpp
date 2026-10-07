// roc 2012-06 0066af00  unit: seg_00660000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0066af00
//
// 0066af00  837e2000             cmp dword ptr [esi + 0x20], 0
// 0066af04  7612                 jbe 0x66af18
// 0066af06  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0066af0a  760c                 jbe 0x66af18
// 0066af0c  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0066af10  7e06                 jle 0x66af18
// 0066af12  837e2400             cmp dword ptr [esi + 0x24], 0
// 0066af16  7f13                 jg 0x66af2b
// 0066af18  8b06                 mov eax, dword ptr [esi]
// 0066af1a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 0066af21  8b0e                 mov ecx, dword ptr [esi]
// 0066af23  8b11                 mov edx, dword ptr [ecx]
// 0066af25  56                   push esi
// 0066af26  ffd2                 call edx
// 0066af28  83c404               add esp, 4
// 0066af2b  b8dcff0000           mov eax, 0xffdc
// 0066af30  394620               cmp dword ptr [esi + 0x20], eax
// 0066af33  7f05                 jg 0x66af3a
// 0066af35  39461c               cmp dword ptr [esi + 0x1c], eax
// 0066af38  7e18                 jle 0x66af52
// 0066af3a  8b0e                 mov ecx, dword ptr [esi]
// 0066af3c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0066af43  8b16                 mov edx, dword ptr [esi]
// 0066af45  894218               mov dword ptr [edx + 0x18], eax
// 0066af48  8b06                 mov eax, dword ptr [esi]
// 0066af4a  8b08                 mov ecx, dword ptr [eax]
// 0066af4c  56                   push esi
// 0066af4d  ffd1                 call ecx
// 0066af4f  83c404               add esp, 4
// 0066af52  837e3808             cmp dword ptr [esi + 0x38], 8
// 0066af56  741b                 je 0x66af73
// 0066af58  8b16                 mov edx, dword ptr [esi]
// 0066af5a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0066af61  8b06                 mov eax, dword ptr [esi]
// 0066af63  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0066af66  894818               mov dword ptr [eax + 0x18], ecx
// 0066af69  8b16                 mov edx, dword ptr [esi]
// 0066af6b  8b02                 mov eax, dword ptr [edx]
// 0066af6d  56                   push esi
// 0066af6e  ffd0                 call eax
// 0066af70  83c404               add esp, 4
// 0066af73  b80a000000           mov eax, 0xa
// 0066af78  39463c               cmp dword ptr [esi + 0x3c], eax
// 0066af7b  7e20                 jle 0x66af9d
// 0066af7d  8b0e                 mov ecx, dword ptr [esi]
// 0066af7f  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0066af86  8b16                 mov edx, dword ptr [esi]
// 0066af88  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0066af8b  894a18               mov dword ptr [edx + 0x18], ecx
// 0066af8e  8b16                 mov edx, dword ptr [esi]
// 0066af90  89421c               mov dword ptr [edx + 0x1c], eax
// 0066af93  8b06                 mov eax, dword ptr [esi]
// 0066af95  8b08                 mov ecx, dword ptr [eax]
// 0066af97  56                   push esi
// 0066af98  ffd1                 call ecx
// 0066af9a  83c404               add esp, 4
// 0066af9d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0066afa0  53                   push ebx
// 0066afa1  55                   push ebp
// 0066afa2  bb01000000           mov ebx, 1
// 0066afa7  33ed                 xor ebp, ebp
// 0066afa9  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0066afac  57                   push edi
// 0066afad  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0066afb3  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0066afb9  7e62                 jle 0x66b01d
// 0066afbb  8d780c               lea edi, [eax + 0xc]
// 0066afbe  8bff                 mov edi, edi
// 0066afc0  8b47fc               mov eax, dword ptr [edi - 4]
// 0066afc3  85c0                 test eax, eax
// 0066afc5  7e10                 jle 0x66afd7
// 0066afc7  83f804               cmp eax, 4
// 0066afca  7f0b                 jg 0x66afd7
// 0066afcc  8b07                 mov eax, dword ptr [edi]
// 0066afce  85c0                 test eax, eax
// 0066afd0  7e05                 jle 0x66afd7
// 0066afd2  83f804               cmp eax, 4
// 0066afd5  7e13                 jle 0x66afea
// 0066afd7  8b16                 mov edx, dword ptr [esi]
// 0066afd9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0066afe0  8b06                 mov eax, dword ptr [esi]
// 0066afe2  8b08                 mov ecx, dword ptr [eax]
// 0066afe4  56                   push esi
// 0066afe5  ffd1                 call ecx
// 0066afe7  83c404               add esp, 4
// 0066afea  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066aff0  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0066aff3  3bc1                 cmp eax, ecx
// 0066aff5  7f02                 jg 0x66aff9
// 0066aff7  8bc1                 mov eax, ecx
// 0066aff9  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0066afff  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0066b005  8b0f                 mov ecx, dword ptr [edi]
// 0066b007  3bc1                 cmp eax, ecx
// 0066b009  7f02                 jg 0x66b00d
// 0066b00b  8bc1                 mov eax, ecx
// 0066b00d  03eb                 add ebp, ebx
// 0066b00f  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0066b015  83c754               add edi, 0x54
// 0066b018  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0066b01b  7ca3                 jl 0x66afc0
// 0066b01d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0066b020  33ed                 xor ebp, ebp
// 0066b022  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0066b025  0f8e8a000000         jle 0x66b0b5
// 0066b02b  8d7824               lea edi, [eax + 0x24]
// 0066b02e  8bff                 mov edi, edi
// 0066b030  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 0066b033  896fe0               mov dword ptr [edi - 0x20], ebp
// 0066b036  c70708000000         mov dword ptr [edi], 8
// 0066b03c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0066b040  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 0066b046  03d2                 add edx, edx
// 0066b048  03d2                 add edx, edx
// 0066b04a  03d2                 add edx, edx
// 0066b04c  52                   push edx
// 0066b04d  50                   push eax
// 0066b04e  e85d84feff           call 0x6534b0
// 0066b053  8b57e8               mov edx, dword ptr [edi - 0x18]
// 0066b056  8947f8               mov dword ptr [edi - 8], eax
// 0066b059  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0066b05d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0066b063  03c9                 add ecx, ecx
// 0066b065  03c9                 add ecx, ecx
// 0066b067  03c9                 add ecx, ecx
// 0066b069  51                   push ecx
// 0066b06a  52                   push edx
// 0066b06b  e84084feff           call 0x6534b0
// 0066b070  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 0066b073  8947fc               mov dword ptr [edi - 4], eax
// 0066b076  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0066b07a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0066b080  50                   push eax
// 0066b081  51                   push ecx
// 0066b082  e82984feff           call 0x6534b0
// 0066b087  894704               mov dword ptr [edi + 4], eax
// 0066b08a  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0066b08d  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0066b091  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0066b097  52                   push edx
// 0066b098  50                   push eax
// 0066b099  e81284feff           call 0x6534b0
// 0066b09e  894708               mov dword ptr [edi + 8], eax
// 0066b0a1  885f0c               mov byte ptr [edi + 0xc], bl
// 0066b0a4  03eb                 add ebp, ebx
// 0066b0a6  83c420               add esp, 0x20
// 0066b0a9  83c754               add edi, 0x54
// 0066b0ac  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0066b0af  0f8c7bffffff         jl 0x66b030
// 0066b0b5  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0066b0bb  8b5620               mov edx, dword ptr [esi + 0x20]
// 0066b0be  03c9                 add ecx, ecx
// 0066b0c0  03c9                 add ecx, ecx
// 0066b0c2  03c9                 add ecx, ecx
// 0066b0c4  51                   push ecx
// 0066b0c5  52                   push edx
// 0066b0c6  e8e583feff           call 0x6534b0
// 0066b0cb  83c408               add esp, 8
// 0066b0ce  5f                   pop edi
// 0066b0cf  5d                   pop ebp
// 0066b0d0  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 0066b0d6  5b                   pop ebx
// 0066b0d7  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
