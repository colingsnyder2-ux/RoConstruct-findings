// roc 2012-06 00654a60  unit: seg_00650000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654a60
//
// 00654a60  56                   push esi
// 00654a61  8b742408             mov esi, dword ptr [esp + 8]
// 00654a65  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 00654a6c  741b                 je 0x654a89
// 00654a6e  8b06                 mov eax, dword ptr [esi]
// 00654a70  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00654a77  8b0e                 mov ecx, dword ptr [esi]
// 00654a79  8b5614               mov edx, dword ptr [esi + 0x14]
// 00654a7c  895118               mov dword ptr [ecx + 0x18], edx
// 00654a7f  8b06                 mov eax, dword ptr [esi]
// 00654a81  8b08                 mov ecx, dword ptr [eax]
// 00654a83  56                   push esi
// 00654a84  ffd1                 call ecx
// 00654a86  83c404               add esp, 4
// 00654a89  8b4630               mov eax, dword ptr [esi + 0x30]
// 00654a8c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00654a8f  8d14c500000000       lea edx, [eax*8]
// 00654a96  3bd1                 cmp edx, ecx
// 00654a98  7728                 ja 0x654ac2
// 00654a9a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00654a9d  6a08                 push 8
// 00654a9f  50                   push eax
// 00654aa0  e80beaffff           call 0x6534b0
// 00654aa5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00654aa8  6a08                 push 8
// 00654aaa  51                   push ecx
// 00654aab  89465c               mov dword ptr [esi + 0x5c], eax
// 00654aae  e8fde9ffff           call 0x6534b0
// 00654ab3  83c410               add esp, 0x10
// 00654ab6  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 00654ac0  eb75                 jmp 0x654b37
// 00654ac2  8d148500000000       lea edx, [eax*4]
// 00654ac9  3bd1                 cmp edx, ecx
// 00654acb  7728                 ja 0x654af5
// 00654acd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00654ad0  6a04                 push 4
// 00654ad2  50                   push eax
// 00654ad3  e8d8e9ffff           call 0x6534b0
// 00654ad8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00654adb  6a04                 push 4
// 00654add  51                   push ecx
// 00654ade  89465c               mov dword ptr [esi + 0x5c], eax
// 00654ae1  e8cae9ffff           call 0x6534b0
// 00654ae6  83c410               add esp, 0x10
// 00654ae9  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 00654af3  eb42                 jmp 0x654b37
// 00654af5  8d1400               lea edx, [eax + eax]
// 00654af8  3bd1                 cmp edx, ecx
// 00654afa  7728                 ja 0x654b24
// 00654afc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00654aff  6a02                 push 2
// 00654b01  50                   push eax
// 00654b02  e8a9e9ffff           call 0x6534b0
// 00654b07  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00654b0a  6a02                 push 2
// 00654b0c  51                   push ecx
// 00654b0d  89465c               mov dword ptr [esi + 0x5c], eax
// 00654b10  e89be9ffff           call 0x6534b0
// 00654b15  83c410               add esp, 0x10
// 00654b18  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 00654b22  eb13                 jmp 0x654b37
// 00654b24  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00654b27  8b4620               mov eax, dword ptr [esi + 0x20]
// 00654b2a  89565c               mov dword ptr [esi + 0x5c], edx
// 00654b2d  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00654b37  837e2400             cmp dword ptr [esi + 0x24], 0
// 00654b3b  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00654b41  53                   push ebx
// 00654b42  894660               mov dword ptr [esi + 0x60], eax
// 00654b45  57                   push edi
// 00654b46  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00654b4e  7e5c                 jle 0x654bac
// 00654b50  83c10c               add ecx, 0xc
// 00654b53  55                   push ebp
// 00654b54  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 00654b5a  8bc2                 mov eax, edx
// 00654b5c  83f808               cmp eax, 8
// 00654b5f  7d36                 jge 0x654b97
// 00654b61  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 00654b67  0faffa               imul edi, edx
// 00654b6a  8d9b00000000         lea ebx, [ebx]
// 00654b70  8b59fc               mov ebx, dword ptr [ecx - 4]
// 00654b73  0fafd8               imul ebx, eax
// 00654b76  03db                 add ebx, ebx
// 00654b78  3bdf                 cmp ebx, edi
// 00654b7a  7f1b                 jg 0x654b97
// 00654b7c  8b29                 mov ebp, dword ptr [ecx]
// 00654b7e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00654b84  0fafe8               imul ebp, eax
// 00654b87  0fafda               imul ebx, edx
// 00654b8a  03ed                 add ebp, ebp
// 00654b8c  3beb                 cmp ebp, ebx
// 00654b8e  7f07                 jg 0x654b97
// 00654b90  03c0                 add eax, eax
// 00654b92  83f808               cmp eax, 8
// 00654b95  7cd9                 jl 0x654b70
// 00654b97  894118               mov dword ptr [ecx + 0x18], eax
// 00654b9a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00654b9e  40                   inc eax
// 00654b9f  83c154               add ecx, 0x54
// 00654ba2  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00654ba5  89442414             mov dword ptr [esp + 0x14], eax
// 00654ba9  7ca9                 jl 0x654b54
// 00654bab  5d                   pop ebp
// 00654bac  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00654bb2  33db                 xor ebx, ebx
// 00654bb4  395e24               cmp dword ptr [esi + 0x24], ebx
// 00654bb7  7e53                 jle 0x654c0c
// 00654bb9  83c724               add edi, 0x24
// 00654bbc  8d642400             lea esp, [esp]
// 00654bc0  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 00654bc3  0faf17               imul edx, dword ptr [edi]
// 00654bc6  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 00654bca  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00654bd0  03c9                 add ecx, ecx
// 00654bd2  03c9                 add ecx, ecx
// 00654bd4  03c9                 add ecx, ecx
// 00654bd6  51                   push ecx
// 00654bd7  52                   push edx
// 00654bd8  e8d3e8ffff           call 0x6534b0
// 00654bdd  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 00654be0  894704               mov dword ptr [edi + 4], eax
// 00654be3  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 00654be7  0faf0f               imul ecx, dword ptr [edi]
// 00654bea  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00654bf0  03c0                 add eax, eax
// 00654bf2  03c0                 add eax, eax
// 00654bf4  03c0                 add eax, eax
// 00654bf6  50                   push eax
// 00654bf7  51                   push ecx
// 00654bf8  e8b3e8ffff           call 0x6534b0
// 00654bfd  894708               mov dword ptr [edi + 8], eax
// 00654c00  43                   inc ebx
// 00654c01  83c410               add esp, 0x10
// 00654c04  83c754               add edi, 0x54
// 00654c07  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 00654c0a  7cb4                 jl 0x654bc0
// 00654c0c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00654c0f  48                   dec eax
// 00654c10  5f                   pop edi
// 00654c11  5b                   pop ebx
// 00654c12  83f804               cmp eax, 4
// 00654c15  7722                 ja 0x654c39
// 00654c17  ff2485704c6500       jmp dword ptr [eax*4 + 0x654c70]
// 00654c1e  c7466401000000       mov dword ptr [esi + 0x64], 1
// 00654c25  eb18                 jmp 0x654c3f
// 00654c27  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00654c2e  eb0f                 jmp 0x654c3f
// 00654c30  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00654c37  eb06                 jmp 0x654c3f
// 00654c39  8b5624               mov edx, dword ptr [esi + 0x24]
// 00654c3c  895664               mov dword ptr [esi + 0x64], edx
// 00654c3f  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00654c43  b801000000           mov eax, 1
// 00654c48  7503                 jne 0x654c4d
// 00654c4a  8b4664               mov eax, dword ptr [esi + 0x64]
// 00654c4d  8bd6                 mov edx, esi
// 00654c4f  894668               mov dword ptr [esi + 0x68], eax
// 00654c52  e889fdffff           call 0x6549e0
// 00654c57  84c0                 test al, al
// 00654c59  740b                 je 0x654c66
// 00654c5b  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00654c61  89466c               mov dword ptr [esi + 0x6c], eax
// 00654c64  5e                   pop esi
// 00654c65  c3                   ret 
// 00654c66  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 00654c6d  5e                   pop esi
// 00654c6e  c3                   ret 
// 00654c6f  90                   nop 
// 00654c70  1e                   push ds
// 00654c71  4c                   dec esp
// 00654c72  650027               add byte ptr gs:[edi], ah
// 00654c75  4c                   dec esp
// 00654c76  650027               add byte ptr gs:[edi], ah
// 00654c79  4c                   dec esp
// 00654c7a  650030               add byte ptr gs:[eax], dh
// 00654c7d  4c                   dec esp
// 00654c7e  650030               add byte ptr gs:[eax], dh
// 00654c81  4c                   dec esp
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
