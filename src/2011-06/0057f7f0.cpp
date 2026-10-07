// roc 2011-06 0057f7f0  unit: seg_00570000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057f7f0
//
// 0057f7f0  837e2000             cmp dword ptr [esi + 0x20], 0
// 0057f7f4  7612                 jbe 0x57f808
// 0057f7f6  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0057f7fa  760c                 jbe 0x57f808
// 0057f7fc  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0057f800  7e06                 jle 0x57f808
// 0057f802  837e2400             cmp dword ptr [esi + 0x24], 0
// 0057f806  7f13                 jg 0x57f81b
// 0057f808  8b06                 mov eax, dword ptr [esi]
// 0057f80a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 0057f811  8b0e                 mov ecx, dword ptr [esi]
// 0057f813  8b11                 mov edx, dword ptr [ecx]
// 0057f815  56                   push esi
// 0057f816  ffd2                 call edx
// 0057f818  83c404               add esp, 4
// 0057f81b  b8dcff0000           mov eax, 0xffdc
// 0057f820  394620               cmp dword ptr [esi + 0x20], eax
// 0057f823  7f05                 jg 0x57f82a
// 0057f825  39461c               cmp dword ptr [esi + 0x1c], eax
// 0057f828  7e18                 jle 0x57f842
// 0057f82a  8b0e                 mov ecx, dword ptr [esi]
// 0057f82c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0057f833  8b16                 mov edx, dword ptr [esi]
// 0057f835  894218               mov dword ptr [edx + 0x18], eax
// 0057f838  8b06                 mov eax, dword ptr [esi]
// 0057f83a  8b08                 mov ecx, dword ptr [eax]
// 0057f83c  56                   push esi
// 0057f83d  ffd1                 call ecx
// 0057f83f  83c404               add esp, 4
// 0057f842  837e3808             cmp dword ptr [esi + 0x38], 8
// 0057f846  741b                 je 0x57f863
// 0057f848  8b16                 mov edx, dword ptr [esi]
// 0057f84a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0057f851  8b06                 mov eax, dword ptr [esi]
// 0057f853  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0057f856  894818               mov dword ptr [eax + 0x18], ecx
// 0057f859  8b16                 mov edx, dword ptr [esi]
// 0057f85b  8b02                 mov eax, dword ptr [edx]
// 0057f85d  56                   push esi
// 0057f85e  ffd0                 call eax
// 0057f860  83c404               add esp, 4
// 0057f863  b80a000000           mov eax, 0xa
// 0057f868  39463c               cmp dword ptr [esi + 0x3c], eax
// 0057f86b  7e20                 jle 0x57f88d
// 0057f86d  8b0e                 mov ecx, dword ptr [esi]
// 0057f86f  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0057f876  8b16                 mov edx, dword ptr [esi]
// 0057f878  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0057f87b  894a18               mov dword ptr [edx + 0x18], ecx
// 0057f87e  8b16                 mov edx, dword ptr [esi]
// 0057f880  89421c               mov dword ptr [edx + 0x1c], eax
// 0057f883  8b06                 mov eax, dword ptr [esi]
// 0057f885  8b08                 mov ecx, dword ptr [eax]
// 0057f887  56                   push esi
// 0057f888  ffd1                 call ecx
// 0057f88a  83c404               add esp, 4
// 0057f88d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057f890  53                   push ebx
// 0057f891  55                   push ebp
// 0057f892  bb01000000           mov ebx, 1
// 0057f897  33ed                 xor ebp, ebp
// 0057f899  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0057f89c  57                   push edi
// 0057f89d  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0057f8a3  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0057f8a9  7e62                 jle 0x57f90d
// 0057f8ab  8d780c               lea edi, [eax + 0xc]
// 0057f8ae  8bff                 mov edi, edi
// 0057f8b0  8b47fc               mov eax, dword ptr [edi - 4]
// 0057f8b3  85c0                 test eax, eax
// 0057f8b5  7e10                 jle 0x57f8c7
// 0057f8b7  83f804               cmp eax, 4
// 0057f8ba  7f0b                 jg 0x57f8c7
// 0057f8bc  8b07                 mov eax, dword ptr [edi]
// 0057f8be  85c0                 test eax, eax
// 0057f8c0  7e05                 jle 0x57f8c7
// 0057f8c2  83f804               cmp eax, 4
// 0057f8c5  7e13                 jle 0x57f8da
// 0057f8c7  8b16                 mov edx, dword ptr [esi]
// 0057f8c9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0057f8d0  8b06                 mov eax, dword ptr [esi]
// 0057f8d2  8b08                 mov ecx, dword ptr [eax]
// 0057f8d4  56                   push esi
// 0057f8d5  ffd1                 call ecx
// 0057f8d7  83c404               add esp, 4
// 0057f8da  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0057f8e0  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0057f8e3  3bc1                 cmp eax, ecx
// 0057f8e5  7f02                 jg 0x57f8e9
// 0057f8e7  8bc1                 mov eax, ecx
// 0057f8e9  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0057f8ef  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0057f8f5  8b0f                 mov ecx, dword ptr [edi]
// 0057f8f7  3bc1                 cmp eax, ecx
// 0057f8f9  7f02                 jg 0x57f8fd
// 0057f8fb  8bc1                 mov eax, ecx
// 0057f8fd  03eb                 add ebp, ebx
// 0057f8ff  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0057f905  83c754               add edi, 0x54
// 0057f908  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0057f90b  7ca3                 jl 0x57f8b0
// 0057f90d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0057f910  33ed                 xor ebp, ebp
// 0057f912  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0057f915  0f8e8a000000         jle 0x57f9a5
// 0057f91b  8d7824               lea edi, [eax + 0x24]
// 0057f91e  8bff                 mov edi, edi
// 0057f920  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 0057f923  896fe0               mov dword ptr [edi - 0x20], ebp
// 0057f926  c70708000000         mov dword ptr [edi], 8
// 0057f92c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0057f930  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 0057f936  03d2                 add edx, edx
// 0057f938  03d2                 add edx, edx
// 0057f93a  03d2                 add edx, edx
// 0057f93c  52                   push edx
// 0057f93d  50                   push eax
// 0057f93e  e85d84feff           call 0x567da0
// 0057f943  8b57e8               mov edx, dword ptr [edi - 0x18]
// 0057f946  8947f8               mov dword ptr [edi - 8], eax
// 0057f949  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0057f94d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0057f953  03c9                 add ecx, ecx
// 0057f955  03c9                 add ecx, ecx
// 0057f957  03c9                 add ecx, ecx
// 0057f959  51                   push ecx
// 0057f95a  52                   push edx
// 0057f95b  e84084feff           call 0x567da0
// 0057f960  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 0057f963  8947fc               mov dword ptr [edi - 4], eax
// 0057f966  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0057f96a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0057f970  50                   push eax
// 0057f971  51                   push ecx
// 0057f972  e82984feff           call 0x567da0
// 0057f977  894704               mov dword ptr [edi + 4], eax
// 0057f97a  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0057f97d  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0057f981  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0057f987  52                   push edx
// 0057f988  50                   push eax
// 0057f989  e81284feff           call 0x567da0
// 0057f98e  894708               mov dword ptr [edi + 8], eax
// 0057f991  885f0c               mov byte ptr [edi + 0xc], bl
// 0057f994  03eb                 add ebp, ebx
// 0057f996  83c420               add esp, 0x20
// 0057f999  83c754               add edi, 0x54
// 0057f99c  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0057f99f  0f8c7bffffff         jl 0x57f920
// 0057f9a5  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0057f9ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 0057f9ae  03c9                 add ecx, ecx
// 0057f9b0  03c9                 add ecx, ecx
// 0057f9b2  03c9                 add ecx, ecx
// 0057f9b4  51                   push ecx
// 0057f9b5  52                   push edx
// 0057f9b6  e8e583feff           call 0x567da0
// 0057f9bb  83c408               add esp, 8
// 0057f9be  5f                   pop edi
// 0057f9bf  5d                   pop ebp
// 0057f9c0  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 0057f9c6  5b                   pop ebx
// 0057f9c7  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
