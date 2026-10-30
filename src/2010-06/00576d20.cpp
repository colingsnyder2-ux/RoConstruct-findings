// roc 2010-06 00576d20  unit: seg_00570000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00576d20
//
// 00576d20  56                   push esi
// 00576d21  8b742408             mov esi, dword ptr [esp + 8]
// 00576d25  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 00576d2c  741b                 je 0x576d49
// 00576d2e  8b06                 mov eax, dword ptr [esi]
// 00576d30  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00576d37  8b0e                 mov ecx, dword ptr [esi]
// 00576d39  8b5614               mov edx, dword ptr [esi + 0x14]
// 00576d3c  895118               mov dword ptr [ecx + 0x18], edx
// 00576d3f  8b06                 mov eax, dword ptr [esi]
// 00576d41  8b08                 mov ecx, dword ptr [eax]
// 00576d43  56                   push esi
// 00576d44  ffd1                 call ecx
// 00576d46  83c404               add esp, 4
// 00576d49  8b4630               mov eax, dword ptr [esi + 0x30]
// 00576d4c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00576d4f  8d14c500000000       lea edx, [eax*8]
// 00576d56  3bd1                 cmp edx, ecx
// 00576d58  7728                 ja 0x576d82
// 00576d5a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00576d5d  6a08                 push 8
// 00576d5f  50                   push eax
// 00576d60  e8db65ffff           call 0x56d340
// 00576d65  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00576d68  6a08                 push 8
// 00576d6a  51                   push ecx
// 00576d6b  89465c               mov dword ptr [esi + 0x5c], eax
// 00576d6e  e8cd65ffff           call 0x56d340
// 00576d73  83c410               add esp, 0x10
// 00576d76  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 00576d80  eb75                 jmp 0x576df7
// 00576d82  8d148500000000       lea edx, [eax*4]
// 00576d89  3bd1                 cmp edx, ecx
// 00576d8b  7728                 ja 0x576db5
// 00576d8d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00576d90  6a04                 push 4
// 00576d92  50                   push eax
// 00576d93  e8a865ffff           call 0x56d340
// 00576d98  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00576d9b  6a04                 push 4
// 00576d9d  51                   push ecx
// 00576d9e  89465c               mov dword ptr [esi + 0x5c], eax
// 00576da1  e89a65ffff           call 0x56d340
// 00576da6  83c410               add esp, 0x10
// 00576da9  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 00576db3  eb42                 jmp 0x576df7
// 00576db5  8d1400               lea edx, [eax + eax]
// 00576db8  3bd1                 cmp edx, ecx
// 00576dba  7728                 ja 0x576de4
// 00576dbc  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00576dbf  6a02                 push 2
// 00576dc1  50                   push eax
// 00576dc2  e87965ffff           call 0x56d340
// 00576dc7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00576dca  6a02                 push 2
// 00576dcc  51                   push ecx
// 00576dcd  89465c               mov dword ptr [esi + 0x5c], eax
// 00576dd0  e86b65ffff           call 0x56d340
// 00576dd5  83c410               add esp, 0x10
// 00576dd8  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 00576de2  eb13                 jmp 0x576df7
// 00576de4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00576de7  8b4620               mov eax, dword ptr [esi + 0x20]
// 00576dea  89565c               mov dword ptr [esi + 0x5c], edx
// 00576ded  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 00576df7  837e2400             cmp dword ptr [esi + 0x24], 0
// 00576dfb  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00576e01  53                   push ebx
// 00576e02  894660               mov dword ptr [esi + 0x60], eax
// 00576e05  57                   push edi
// 00576e06  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00576e0e  7e5c                 jle 0x576e6c
// 00576e10  83c10c               add ecx, 0xc
// 00576e13  55                   push ebp
// 00576e14  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 00576e1a  8bc2                 mov eax, edx
// 00576e1c  83f808               cmp eax, 8
// 00576e1f  7d36                 jge 0x576e57
// 00576e21  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 00576e27  0faffa               imul edi, edx
// 00576e2a  8d9b00000000         lea ebx, [ebx]
// 00576e30  8b59fc               mov ebx, dword ptr [ecx - 4]
// 00576e33  0fafd8               imul ebx, eax
// 00576e36  03db                 add ebx, ebx
// 00576e38  3bdf                 cmp ebx, edi
// 00576e3a  7f1b                 jg 0x576e57
// 00576e3c  8b29                 mov ebp, dword ptr [ecx]
// 00576e3e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00576e44  0fafe8               imul ebp, eax
// 00576e47  0fafda               imul ebx, edx
// 00576e4a  03ed                 add ebp, ebp
// 00576e4c  3beb                 cmp ebp, ebx
// 00576e4e  7f07                 jg 0x576e57
// 00576e50  03c0                 add eax, eax
// 00576e52  83f808               cmp eax, 8
// 00576e55  7cd9                 jl 0x576e30
// 00576e57  894118               mov dword ptr [ecx + 0x18], eax
// 00576e5a  8b442414             mov eax, dword ptr [esp + 0x14]
// 00576e5e  40                   inc eax
// 00576e5f  83c154               add ecx, 0x54
// 00576e62  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00576e65  89442414             mov dword ptr [esp + 0x14], eax
// 00576e69  7ca9                 jl 0x576e14
// 00576e6b  5d                   pop ebp
// 00576e6c  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00576e72  33db                 xor ebx, ebx
// 00576e74  395e24               cmp dword ptr [esi + 0x24], ebx
// 00576e77  7e53                 jle 0x576ecc
// 00576e79  83c724               add edi, 0x24
// 00576e7c  8d642400             lea esp, [esp]
// 00576e80  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 00576e83  0faf17               imul edx, dword ptr [edi]
// 00576e86  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 00576e8a  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00576e90  03c9                 add ecx, ecx
// 00576e92  03c9                 add ecx, ecx
// 00576e94  03c9                 add ecx, ecx
// 00576e96  51                   push ecx
// 00576e97  52                   push edx
// 00576e98  e8a364ffff           call 0x56d340
// 00576e9d  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 00576ea0  894704               mov dword ptr [edi + 4], eax
// 00576ea3  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 00576ea7  0faf0f               imul ecx, dword ptr [edi]
// 00576eaa  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00576eb0  03c0                 add eax, eax
// 00576eb2  03c0                 add eax, eax
// 00576eb4  03c0                 add eax, eax
// 00576eb6  50                   push eax
// 00576eb7  51                   push ecx
// 00576eb8  e88364ffff           call 0x56d340
// 00576ebd  894708               mov dword ptr [edi + 8], eax
// 00576ec0  43                   inc ebx
// 00576ec1  83c410               add esp, 0x10
// 00576ec4  83c754               add edi, 0x54
// 00576ec7  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 00576eca  7cb4                 jl 0x576e80
// 00576ecc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00576ecf  48                   dec eax
// 00576ed0  5f                   pop edi
// 00576ed1  5b                   pop ebx
// 00576ed2  83f804               cmp eax, 4
// 00576ed5  7722                 ja 0x576ef9
// 00576ed7  ff2485306f5700       jmp dword ptr [eax*4 + 0x576f30]
// 00576ede  c7466401000000       mov dword ptr [esi + 0x64], 1
// 00576ee5  eb18                 jmp 0x576eff
// 00576ee7  c7466403000000       mov dword ptr [esi + 0x64], 3
// 00576eee  eb0f                 jmp 0x576eff
// 00576ef0  c7466404000000       mov dword ptr [esi + 0x64], 4
// 00576ef7  eb06                 jmp 0x576eff
// 00576ef9  8b5624               mov edx, dword ptr [esi + 0x24]
// 00576efc  895664               mov dword ptr [esi + 0x64], edx
// 00576eff  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00576f03  b801000000           mov eax, 1
// 00576f08  7503                 jne 0x576f0d
// 00576f0a  8b4664               mov eax, dword ptr [esi + 0x64]
// 00576f0d  8bd6                 mov edx, esi
// 00576f0f  894668               mov dword ptr [esi + 0x68], eax
// 00576f12  e889fdffff           call 0x576ca0
// 00576f17  84c0                 test al, al
// 00576f19  740b                 je 0x576f26
// 00576f1b  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00576f21  89466c               mov dword ptr [esi + 0x6c], eax
// 00576f24  5e                   pop esi
// 00576f25  c3                   ret 
// 00576f26  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 00576f2d  5e                   pop esi
// 00576f2e  c3                   ret 
// 00576f2f  90                   nop 
// 00576f30  de6e57               fisubr word ptr [esi + 0x57]
// 00576f33  00e7                 add bh, ah
// 00576f35  6e                   outsb dx, byte ptr [esi]
// 00576f36  57                   push edi
// 00576f37  00e7                 add bh, ah
// 00576f39  6e                   outsb dx, byte ptr [esi]
// 00576f3a  57                   push edi
// 00576f3b  00f0                 add al, dh
// 00576f3d  6e                   outsb dx, byte ptr [esi]
// 00576f3e  57                   push edi
// 00576f3f  00f0                 add al, dh
// 00576f41  6e                   outsb dx, byte ptr [esi]
// 00576f42  57                   push edi
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
