// from server: 100% by auto
// roc 2010-06 00575a70  unit: seg_00570000  size: 503 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575a70
//
// 00575a70  b8dcff0000           mov eax, 0xffdc
// 00575a75  394620               cmp dword ptr [esi + 0x20], eax
// 00575a78  7f05                 jg 0x575a7f
// 00575a7a  39461c               cmp dword ptr [esi + 0x1c], eax
// 00575a7d  7e18                 jle 0x575a97
// 00575a7f  8b0e                 mov ecx, dword ptr [esi]
// 00575a81  c7411429000000       mov dword ptr [ecx + 0x14], 0x29
// 00575a88  8b16                 mov edx, dword ptr [esi]
// 00575a8a  894218               mov dword ptr [edx + 0x18], eax
// 00575a8d  8b06                 mov eax, dword ptr [esi]
// 00575a8f  8b08                 mov ecx, dword ptr [eax]
// 00575a91  56                   push esi
// 00575a92  ffd1                 call ecx
// 00575a94  83c404               add esp, 4
// 00575a97  83bec000000008       cmp dword ptr [esi + 0xc0], 8
// 00575a9e  741e                 je 0x575abe
// 00575aa0  8b16                 mov edx, dword ptr [esi]
// 00575aa2  c742140f000000       mov dword ptr [edx + 0x14], 0xf
// 00575aa9  8b06                 mov eax, dword ptr [esi]
// 00575aab  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00575ab1  894818               mov dword ptr [eax + 0x18], ecx
// 00575ab4  8b16                 mov edx, dword ptr [esi]
// 00575ab6  8b02                 mov eax, dword ptr [edx]
// 00575ab8  56                   push esi
// 00575ab9  ffd0                 call eax
// 00575abb  83c404               add esp, 4
// 00575abe  b80a000000           mov eax, 0xa
// 00575ac3  394624               cmp dword ptr [esi + 0x24], eax
// 00575ac6  7e20                 jle 0x575ae8
// 00575ac8  8b0e                 mov ecx, dword ptr [esi]
// 00575aca  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 00575ad1  8b16                 mov edx, dword ptr [esi]
// 00575ad3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 00575ad6  894a18               mov dword ptr [edx + 0x18], ecx
// 00575ad9  8b16                 mov edx, dword ptr [esi]
// 00575adb  89421c               mov dword ptr [edx + 0x1c], eax
// 00575ade  8b06                 mov eax, dword ptr [esi]
// 00575ae0  8b08                 mov ecx, dword ptr [eax]
// 00575ae2  56                   push esi
// 00575ae3  ffd1                 call ecx
// 00575ae5  83c404               add esp, 4
// 00575ae8  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00575aee  53                   push ebx
// 00575aef  55                   push ebp
// 00575af0  bb01000000           mov ebx, 1
// 00575af5  33ed                 xor ebp, ebp
// 00575af7  396e24               cmp dword ptr [esi + 0x24], ebp
// 00575afa  57                   push edi
// 00575afb  899e10010000         mov dword ptr [esi + 0x110], ebx
// 00575b01  899e14010000         mov dword ptr [esi + 0x114], ebx
// 00575b07  7e64                 jle 0x575b6d
// 00575b09  8d780c               lea edi, [eax + 0xc]
// 00575b0c  8d642400             lea esp, [esp]
// 00575b10  8b47fc               mov eax, dword ptr [edi - 4]
// 00575b13  85c0                 test eax, eax
// 00575b15  7e10                 jle 0x575b27
// 00575b17  83f804               cmp eax, 4
// 00575b1a  7f0b                 jg 0x575b27
// 00575b1c  8b07                 mov eax, dword ptr [edi]
// 00575b1e  85c0                 test eax, eax
// 00575b20  7e05                 jle 0x575b27
// 00575b22  83f804               cmp eax, 4
// 00575b25  7e13                 jle 0x575b3a
// 00575b27  8b16                 mov edx, dword ptr [esi]
// 00575b29  c7421412000000       mov dword ptr [edx + 0x14], 0x12
// 00575b30  8b06                 mov eax, dword ptr [esi]
// 00575b32  8b08                 mov ecx, dword ptr [eax]
// 00575b34  56                   push esi
// 00575b35  ffd1                 call ecx
// 00575b37  83c404               add esp, 4
// 00575b3a  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00575b40  8b4ffc               mov ecx, dword ptr [edi - 4]
// 00575b43  3bc1                 cmp eax, ecx
// 00575b45  7f02                 jg 0x575b49
// 00575b47  8bc1                 mov eax, ecx
// 00575b49  898610010000         mov dword ptr [esi + 0x110], eax
// 00575b4f  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00575b55  8b0f                 mov ecx, dword ptr [edi]
// 00575b57  3bc1                 cmp eax, ecx
// 00575b59  7f02                 jg 0x575b5d
// 00575b5b  8bc1                 mov eax, ecx
// 00575b5d  03eb                 add ebp, ebx
// 00575b5f  898614010000         mov dword ptr [esi + 0x114], eax
// 00575b65  83c754               add edi, 0x54
// 00575b68  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00575b6b  7ca3                 jl 0x575b10
// 00575b6d  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00575b73  33ed                 xor ebp, ebp
// 00575b75  396e24               cmp dword ptr [esi + 0x24], ebp
// 00575b78  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00575b82  0f8e91000000         jle 0x575c19
// 00575b88  8d781c               lea edi, [eax + 0x1c]
// 00575b8b  eb03                 jmp 0x575b90
// 00575b8d  8d4900               lea ecx, [ecx]
// 00575b90  8b47ec               mov eax, dword ptr [edi - 0x14]
// 00575b93  c7470808000000       mov dword ptr [edi + 8], 8
// 00575b9a  0faf461c             imul eax, dword ptr [esi + 0x1c]
// 00575b9e  8b9610010000         mov edx, dword ptr [esi + 0x110]
// 00575ba4  03d2                 add edx, edx
// 00575ba6  03d2                 add edx, edx
// 00575ba8  03d2                 add edx, edx
// 00575baa  52                   push edx
// 00575bab  50                   push eax
// 00575bac  e88f77ffff           call 0x56d340
// 00575bb1  8b57f0               mov edx, dword ptr [edi - 0x10]
// 00575bb4  8907                 mov dword ptr [edi], eax
// 00575bb6  0faf5620             imul edx, dword ptr [esi + 0x20]
// 00575bba  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00575bc0  03c9                 add ecx, ecx
// 00575bc2  03c9                 add ecx, ecx
// 00575bc4  03c9                 add ecx, ecx
// 00575bc6  51                   push ecx
// 00575bc7  52                   push edx
// 00575bc8  e87377ffff           call 0x56d340
// 00575bcd  8b4fec               mov ecx, dword ptr [edi - 0x14]
// 00575bd0  894704               mov dword ptr [edi + 4], eax
// 00575bd3  0faf4e1c             imul ecx, dword ptr [esi + 0x1c]
// 00575bd7  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 00575bdd  50                   push eax
// 00575bde  51                   push ecx
// 00575bdf  e85c77ffff           call 0x56d340
// 00575be4  89470c               mov dword ptr [edi + 0xc], eax
// 00575be7  8b47f0               mov eax, dword ptr [edi - 0x10]
// 00575bea  0faf4620             imul eax, dword ptr [esi + 0x20]
// 00575bee  8b9614010000         mov edx, dword ptr [esi + 0x114]
// 00575bf4  52                   push edx
// 00575bf5  50                   push eax
// 00575bf6  e84577ffff           call 0x56d340
// 00575bfb  894710               mov dword ptr [edi + 0x10], eax
// 00575bfe  885f14               mov byte ptr [edi + 0x14], bl
// 00575c01  c7473000000000       mov dword ptr [edi + 0x30], 0
// 00575c08  03eb                 add ebp, ebx
// 00575c0a  83c420               add esp, 0x20
// 00575c0d  83c754               add edi, 0x54
// 00575c10  3b6e24               cmp ebp, dword ptr [esi + 0x24]
// 00575c13  0f8c77ffffff         jl 0x575b90
// 00575c19  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 00575c1f  8b5620               mov edx, dword ptr [esi + 0x20]
// 00575c22  03c9                 add ecx, ecx
// 00575c24  03c9                 add ecx, ecx
// 00575c26  03c9                 add ecx, ecx
// 00575c28  51                   push ecx
// 00575c29  52                   push edx
// 00575c2a  e81177ffff           call 0x56d340
// 00575c2f  89861c010000         mov dword ptr [esi + 0x11c], eax
// 00575c35  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00575c3b  83c408               add esp, 8
// 00575c3e  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00575c41  7c17                 jl 0x575c5a
// 00575c43  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 00575c4a  750e                 jne 0x575c5a
// 00575c4c  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00575c52  5f                   pop edi
// 00575c53  5d                   pop ebp
// 00575c54  c6411000             mov byte ptr [ecx + 0x10], 0
// 00575c58  5b                   pop ebx
// 00575c59  c3                   ret 
// 00575c5a  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00575c60  5f                   pop edi
// 00575c61  5d                   pop ebp
// 00575c62  885a10               mov byte ptr [edx + 0x10], bl
// 00575c65  5b                   pop ebx
// 00575c66  c3                   ret 
// library jpeg-6b/jdinput.c (function _initial_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
