// roc 2009-12 006279e0  unit: seg_00620000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006279e0
//
// 006279e0  837e2000             cmp dword ptr [esi + 0x20], 0
// 006279e4  7612                 jbe 0x6279f8
// 006279e6  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 006279ea  760c                 jbe 0x6279f8
// 006279ec  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 006279f0  7e06                 jle 0x6279f8
// 006279f2  837e2400             cmp dword ptr [esi + 0x24], 0
// 006279f6  7f13                 jg 0x627a0b
// 006279f8  8b06                 mov eax, dword ptr [esi]
// 006279fa  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 00627a01  8b0e                 mov ecx, dword ptr [esi]
// 00627a03  8b11                 mov edx, dword ptr [ecx]
// 00627a05  56                   push esi
// 00627a06  ffd2                 call edx
// 00627a08  83c404               add esp, 4
// 00627a0b  b8dcff0000           mov eax, 0xffdc
// 00627a10  394620               cmp dword ptr [esi + 0x20], eax
// 00627a13  7f05                 jg 0x627a1a
// 00627a15  39461c               cmp dword ptr [esi + 0x1c], eax
// 00627a18  7e18                 jle 0x627a32
// 00627a1a  8b0e                 mov ecx, dword ptr [esi]
// 00627a1c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00627a23  8b16                 mov edx, dword ptr [esi]
// 00627a25  894218               mov dword ptr [edx + 0x18], eax
// 00627a28  8b06                 mov eax, dword ptr [esi]
// 00627a2a  8b08                 mov ecx, dword ptr [eax]
// 00627a2c  56                   push esi
// 00627a2d  ffd1                 call ecx
// 00627a2f  83c404               add esp, 4
// 00627a32  837e3808             cmp dword ptr [esi + 0x38], 8
// 00627a36  741b                 je 0x627a53
// 00627a38  8b16                 mov edx, dword ptr [esi]
// 00627a3a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 00627a41  8b06                 mov eax, dword ptr [esi]
// 00627a43  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 00627a46  894818               mov dword ptr [eax + 0x18], ecx
// 00627a49  8b16                 mov edx, dword ptr [esi]
// 00627a4b  8b02                 mov eax, dword ptr [edx]
// 00627a4d  56                   push esi
// 00627a4e  ffd0                 call eax
// 00627a50  83c404               add esp, 4
// 00627a53  b80a000000           mov eax, 0xa
// 00627a58  39463c               cmp dword ptr [esi + 0x3c], eax
// 00627a5b  7e20                 jle 0x627a7d
// 00627a5d  8b0e                 mov ecx, dword ptr [esi]
// 00627a5f  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00627a66  8b16                 mov edx, dword ptr [esi]
// 00627a68  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00627a6b  894a18               mov dword ptr [edx + 0x18], ecx
// 00627a6e  8b16                 mov edx, dword ptr [esi]
// 00627a70  89421c               mov dword ptr [edx + 0x1c], eax
// 00627a73  8b06                 mov eax, dword ptr [esi]
// 00627a75  8b08                 mov ecx, dword ptr [eax]
// 00627a77  56                   push esi
// 00627a78  ffd1                 call ecx
// 00627a7a  83c404               add esp, 4
// 00627a7d  8b4644               mov eax, dword ptr [esi + 0x44]
// 00627a80  53                   push ebx
// 00627a81  55                   push ebp
// 00627a82  bb01000000           mov ebx, 1
// 00627a87  33ed                 xor ebp, ebp
// 00627a89  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 00627a8c  57                   push edi
// 00627a8d  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 00627a93  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00627a99  7e62                 jle 0x627afd
// 00627a9b  8d780c               lea edi, [eax + 0xc]
// 00627a9e  8bff                 mov edi, edi
// 00627aa0  8b47fc               mov eax, dword ptr [edi - 4]
// 00627aa3  85c0                 test eax, eax
// 00627aa5  7e10                 jle 0x627ab7
// 00627aa7  83f804               cmp eax, 4
// 00627aaa  7f0b                 jg 0x627ab7
// 00627aac  8b07                 mov eax, dword ptr [edi]
// 00627aae  85c0                 test eax, eax
// 00627ab0  7e05                 jle 0x627ab7
// 00627ab2  83f804               cmp eax, 4
// 00627ab5  7e13                 jle 0x627aca
// 00627ab7  8b16                 mov edx, dword ptr [esi]
// 00627ab9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00627ac0  8b06                 mov eax, dword ptr [esi]
// 00627ac2  8b08                 mov ecx, dword ptr [eax]
// 00627ac4  56                   push esi
// 00627ac5  ffd1                 call ecx
// 00627ac7  83c404               add esp, 4
// 00627aca  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00627ad0  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00627ad3  3bc1                 cmp eax, ecx
// 00627ad5  7f02                 jg 0x627ad9
// 00627ad7  8bc1                 mov eax, ecx
// 00627ad9  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 00627adf  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00627ae5  8b0f                 mov ecx, dword ptr [edi]
// 00627ae7  3bc1                 cmp eax, ecx
// 00627ae9  7f02                 jg 0x627aed
// 00627aeb  8bc1                 mov eax, ecx
// 00627aed  03eb                 add ebp, ebx
// 00627aef  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 00627af5  83c754               add edi, 0x54
// 00627af8  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00627afb  7ca3                 jl 0x627aa0
// 00627afd  8b4644               mov eax, dword ptr [esi + 0x44]
// 00627b00  33ed                 xor ebp, ebp
// 00627b02  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 00627b05  0f8e8a000000         jle 0x627b95
// 00627b0b  8d7824               lea edi, [eax + 0x24]
// 00627b0e  8bff                 mov edi, edi
// 00627b10  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 00627b13  896fe0               mov dword ptr [edi - 0x20], ebp
// 00627b16  c70708000000         mov dword ptr [edi], 8
// 00627b1c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 00627b20  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 00627b26  03d2                 add edx, edx
// 00627b28  03d2                 add edx, edx
// 00627b2a  03d2                 add edx, edx
// 00627b2c  52                   push edx
// 00627b2d  50                   push eax
// 00627b2e  e82d41feff           call 0x60bc60
// 00627b33  8b57e8               mov edx, dword ptr [edi - 0x18]
// 00627b36  8947f8               mov dword ptr [edi - 8], eax
// 00627b39  0faf5620             imul edx, dword ptr [esi + 0x20]
// 00627b3d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00627b43  03c9                 add ecx, ecx
// 00627b45  03c9                 add ecx, ecx
// 00627b47  03c9                 add ecx, ecx
// 00627b49  51                   push ecx
// 00627b4a  52                   push edx
// 00627b4b  e81041feff           call 0x60bc60
// 00627b50  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 00627b53  8947fc               mov dword ptr [edi - 4], eax
// 00627b56  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 00627b5a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 00627b60  50                   push eax
// 00627b61  51                   push ecx
// 00627b62  e8f940feff           call 0x60bc60
// 00627b67  894704               mov dword ptr [edi + 4], eax
// 00627b6a  8b47e8               mov eax, dword ptr [edi - 0x18]
// 00627b6d  0faf4620             imul eax, dword ptr [esi + 0x20]
// 00627b71  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 00627b77  52                   push edx
// 00627b78  50                   push eax
// 00627b79  e8e240feff           call 0x60bc60
// 00627b7e  894708               mov dword ptr [edi + 8], eax
// 00627b81  885f0c               mov byte ptr [edi + 0xc], bl
// 00627b84  03eb                 add ebp, ebx
// 00627b86  83c420               add esp, 0x20
// 00627b89  83c754               add edi, 0x54
// 00627b8c  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 00627b8f  0f8c7bffffff         jl 0x627b10
// 00627b95  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00627b9b  8b5620               mov edx, dword ptr [esi + 0x20]
// 00627b9e  03c9                 add ecx, ecx
// 00627ba0  03c9                 add ecx, ecx
// 00627ba2  03c9                 add ecx, ecx
// 00627ba4  51                   push ecx
// 00627ba5  52                   push edx
// 00627ba6  e8b540feff           call 0x60bc60
// 00627bab  83c408               add esp, 8
// 00627bae  5f                   pop edi
// 00627baf  5d                   pop ebp
// 00627bb0  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 00627bb6  5b                   pop ebx
// 00627bb7  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
