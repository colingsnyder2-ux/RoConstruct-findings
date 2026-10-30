// roc 2007-03 0052a4f0  unit: seg_00520000  size: 472 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0052a4f0
//
// 0052a4f0  837e2000             cmp dword ptr [esi + 0x20], 0
// 0052a4f4  7612                 jbe 0x52a508
// 0052a4f6  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0052a4fa  760c                 jbe 0x52a508
// 0052a4fc  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0052a500  7e06                 jle 0x52a508
// 0052a502  837e2400             cmp dword ptr [esi + 0x24], 0
// 0052a506  7f13                 jg 0x52a51b
// 0052a508  8b06                 mov eax, dword ptr [esi]
// 0052a50a  c7401420000000       mov dword ptr [eax + 0x14], 0x20
// 0052a511  8b0e                 mov ecx, dword ptr [esi]
// 0052a513  8b11                 mov edx, dword ptr [ecx]
// 0052a515  56                   push esi
// 0052a516  ffd2                 call edx
// 0052a518  83c404               add esp, 4
// 0052a51b  b8dcff0000           mov eax, 0xffdc
// 0052a520  394620               cmp dword ptr [esi + 0x20], eax
// 0052a523  7f05                 jg 0x52a52a
// 0052a525  39461c               cmp dword ptr [esi + 0x1c], eax
// 0052a528  7e18                 jle 0x52a542
// 0052a52a  8b0e                 mov ecx, dword ptr [esi]
// 0052a52c  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 0052a533  8b16                 mov edx, dword ptr [esi]
// 0052a535  894218               mov dword ptr [edx + 0x18], eax
// 0052a538  8b06                 mov eax, dword ptr [esi]
// 0052a53a  8b08                 mov ecx, dword ptr [eax]
// 0052a53c  56                   push esi
// 0052a53d  ffd1                 call ecx
// 0052a53f  83c404               add esp, 4
// 0052a542  837e3808             cmp dword ptr [esi + 0x38], 8
// 0052a546  741b                 je 0x52a563
// 0052a548  8b16                 mov edx, dword ptr [esi]
// 0052a54a  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 0052a551  8b06                 mov eax, dword ptr [esi]
// 0052a553  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0052a556  894818               mov dword ptr [eax + 0x18], ecx
// 0052a559  8b16                 mov edx, dword ptr [esi]
// 0052a55b  8b02                 mov eax, dword ptr [edx]
// 0052a55d  56                   push esi
// 0052a55e  ffd0                 call eax
// 0052a560  83c404               add esp, 4
// 0052a563  b80a000000           mov eax, 0xa
// 0052a568  39463c               cmp dword ptr [esi + 0x3c], eax
// 0052a56b  7e20                 jle 0x52a58d
// 0052a56d  8b0e                 mov ecx, dword ptr [esi]
// 0052a56f  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0052a576  8b16                 mov edx, dword ptr [esi]
// 0052a578  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0052a57b  894a18               mov dword ptr [edx + 0x18], ecx
// 0052a57e  8b16                 mov edx, dword ptr [esi]
// 0052a580  89421c               mov dword ptr [edx + 0x1c], eax
// 0052a583  8b06                 mov eax, dword ptr [esi]
// 0052a585  8b08                 mov ecx, dword ptr [eax]
// 0052a587  56                   push esi
// 0052a588  ffd1                 call ecx
// 0052a58a  83c404               add esp, 4
// 0052a58d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052a590  53                   push ebx
// 0052a591  55                   push ebp
// 0052a592  bb01000000           mov ebx, 1
// 0052a597  33ed                 xor ebp, ebp
// 0052a599  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0052a59c  57                   push edi
// 0052a59d  899ed8000000         mov dword ptr [esi + 0xd8], ebx
// 0052a5a3  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0052a5a9  7e62                 jle 0x52a60d
// 0052a5ab  8d780c               lea edi, [eax + 0xc]
// 0052a5ae  8bff                 mov edi, edi
// 0052a5b0  8b47fc               mov eax, dword ptr [edi - 4]
// 0052a5b3  85c0                 test eax, eax
// 0052a5b5  7e10                 jle 0x52a5c7
// 0052a5b7  83f804               cmp eax, 4
// 0052a5ba  7f0b                 jg 0x52a5c7
// 0052a5bc  8b07                 mov eax, dword ptr [edi]
// 0052a5be  85c0                 test eax, eax
// 0052a5c0  7e05                 jle 0x52a5c7
// 0052a5c2  83f804               cmp eax, 4
// 0052a5c5  7e13                 jle 0x52a5da
// 0052a5c7  8b16                 mov edx, dword ptr [esi]
// 0052a5c9  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 0052a5d0  8b06                 mov eax, dword ptr [esi]
// 0052a5d2  8b08                 mov ecx, dword ptr [eax]
// 0052a5d4  56                   push esi
// 0052a5d5  ffd1                 call ecx
// 0052a5d7  83c404               add esp, 4
// 0052a5da  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0052a5e0  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0052a5e3  3bc1                 cmp eax, ecx
// 0052a5e5  7f02                 jg 0x52a5e9
// 0052a5e7  8bc1                 mov eax, ecx
// 0052a5e9  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0052a5ef  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0052a5f5  8b0f                 mov ecx, dword ptr [edi]
// 0052a5f7  3bc1                 cmp eax, ecx
// 0052a5f9  7f02                 jg 0x52a5fd
// 0052a5fb  8bc1                 mov eax, ecx
// 0052a5fd  03eb                 add ebp, ebx
// 0052a5ff  8986dc000000         mov dword ptr [esi + 0xdc], eax
// 0052a605  83c754               add edi, 0x54
// 0052a608  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0052a60b  7ca3                 jl 0x52a5b0
// 0052a60d  8b4644               mov eax, dword ptr [esi + 0x44]
// 0052a610  33ed                 xor ebp, ebp
// 0052a612  396e3c               cmp dword ptr [esi + 0x3c], ebp
// 0052a615  0f8e8a000000         jle 0x52a6a5
// 0052a61b  8d7824               lea edi, [eax + 0x24]
// 0052a61e  8bff                 mov edi, edi
// 0052a620  8b47e4               mov eax, dword ptr [edi - 0x1c]
// 0052a623  896fe0               mov dword ptr [edi - 0x20], ebp
// 0052a626  c70708000000         mov dword ptr [edi], 8
// 0052a62c  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 0052a630  8b96d8000000         mov edx, dword ptr [esi + 0xd8]
// 0052a636  03d2                 add edx, edx
// 0052a638  03d2                 add edx, edx
// 0052a63a  03d2                 add edx, edx
// 0052a63c  52                   push edx
// 0052a63d  50                   push eax
// 0052a63e  e8cd9ffeff           call 0x514610
// 0052a643  8b57e8               mov edx, dword ptr [edi - 0x18]
// 0052a646  8947f8               mov dword ptr [edi - 8], eax
// 0052a649  0faf5620             imul edx, dword ptr [esi + 0x20]
// 0052a64d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0052a653  03c9                 add ecx, ecx
// 0052a655  03c9                 add ecx, ecx
// 0052a657  03c9                 add ecx, ecx
// 0052a659  51                   push ecx
// 0052a65a  52                   push edx
// 0052a65b  e8b09ffeff           call 0x514610
// 0052a660  8b4fe4               mov ecx, dword ptr [edi - 0x1c]
// 0052a663  8947fc               mov dword ptr [edi - 4], eax
// 0052a666  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 0052a66a  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0052a670  50                   push eax
// 0052a671  51                   push ecx
// 0052a672  e8999ffeff           call 0x514610
// 0052a677  894704               mov dword ptr [edi + 4], eax
// 0052a67a  8b47e8               mov eax, dword ptr [edi - 0x18]
// 0052a67d  0faf4620             imul eax, dword ptr [esi + 0x20]
// 0052a681  8b96dc000000         mov edx, dword ptr [esi + 0xdc]
// 0052a687  52                   push edx
// 0052a688  50                   push eax
// 0052a689  e8829ffeff           call 0x514610
// 0052a68e  894708               mov dword ptr [edi + 8], eax
// 0052a691  885f0c               mov byte ptr [edi + 0xc], bl
// 0052a694  03eb                 add ebp, ebx
// 0052a696  83c420               add esp, 0x20
// 0052a699  83c754               add edi, 0x54
// 0052a69c  3b6e3c               cmp ebp, dword ptr [esi + 0x3c]
// 0052a69f  0f8c7bffffff         jl 0x52a620
// 0052a6a5  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0052a6ab  8b5620               mov edx, dword ptr [esi + 0x20]
// 0052a6ae  03c9                 add ecx, ecx
// 0052a6b0  03c9                 add ecx, ecx
// 0052a6b2  03c9                 add ecx, ecx
// 0052a6b4  51                   push ecx
// 0052a6b5  52                   push edx
// 0052a6b6  e8559ffeff           call 0x514610
// 0052a6bb  83c408               add esp, 8
// 0052a6be  5f                   pop edi
// 0052a6bf  5d                   pop ebp
// 0052a6c0  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 0052a6c6  5b                   pop ebx
// 0052a6c7  c3                   ret 
// library jpeg-6b/jcmaster.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
