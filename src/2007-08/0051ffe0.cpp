// roc 2007-08 0051ffe0  unit: seg_00510000  size: 552 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051ffe0
//
// 0051ffe0  56                   push esi
// 0051ffe1  8b742408             mov esi, dword ptr [esp + 8]
// 0051ffe5  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0051ffec  741b                 je 0x520009
// 0051ffee  8b06                 mov eax, dword ptr [esi]
// 0051fff0  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051fff7  8b0e                 mov ecx, dword ptr [esi]
// 0051fff9  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051fffc  895118               mov dword ptr [ecx + 0x18], edx
// 0051ffff  8b06                 mov eax, dword ptr [esi]
// 00520001  8b08                 mov ecx, dword ptr [eax]
// 00520003  56                   push esi
// 00520004  ffd1                 call ecx
// 00520006  83c404               add esp, 4
// 00520009  8b4630               mov eax, dword ptr [esi + 0x30]
// 0052000c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0052000f  8d14c500000000       lea edx, [eax*8]
// 00520016  3bd1                 cmp edx, ecx
// 00520018  7728                 ja 0x520042
// 0052001a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052001d  6a08                 push 8
// 0052001f  50                   push eax
// 00520020  e82be2ffff           call 0x51e250
// 00520025  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00520028  6a08                 push 8
// 0052002a  51                   push ecx
// 0052002b  89465c               mov dword ptr [esi + 0x5c], eax
// 0052002e  e81de2ffff           call 0x51e250
// 00520033  83c410               add esp, 0x10
// 00520036  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 00520040  eb75                 jmp 0x5200b7
// 00520042  8d148500000000       lea edx, [eax*4]
// 00520049  3bd1                 cmp edx, ecx
// 0052004b  7728                 ja 0x520075
// 0052004d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00520050  6a04                 push 4
// 00520052  50                   push eax
// 00520053  e8f8e1ffff           call 0x51e250
// 00520058  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052005b  6a04                 push 4
// 0052005d  51                   push ecx
// 0052005e  89465c               mov dword ptr [esi + 0x5c], eax
// 00520061  e8eae1ffff           call 0x51e250
// 00520066  83c410               add esp, 0x10
// 00520069  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 00520073  eb42                 jmp 0x5200b7
// 00520075  8d1400               lea edx, [eax + eax]
// 00520078  3bd1                 cmp edx, ecx
// 0052007a  7728                 ja 0x5200a4
// 0052007c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052007f  6a02                 push 2
// 00520081  50                   push eax
// 00520082  e8c9e1ffff           call 0x51e250
// 00520087  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052008a  6a02                 push 2
// 0052008c  51                   push ecx
// 0052008d  89465c               mov dword ptr [esi + 0x5c], eax
// 00520090  e8bbe1ffff           call 0x51e250
// 00520095  83c410               add esp, 0x10
// 00520098  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 005200a2  eb13                 jmp 0x5200b7
// 005200a4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005200a7  8b4620               mov eax, dword ptr [esi + 0x20]
// 005200aa  89565c               mov dword ptr [esi + 0x5c], edx
// 005200ad  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 005200b7  837e2400             cmp dword ptr [esi + 0x24], 0
// 005200bb  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005200c1  53                   push ebx
// 005200c2  894660               mov dword ptr [esi + 0x60], eax
// 005200c5  57                   push edi
// 005200c6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005200ce  7e5e                 jle 0x52012e
// 005200d0  83c10c               add ecx, 0xc
// 005200d3  55                   push ebp
// 005200d4  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 005200da  8bc2                 mov eax, edx
// 005200dc  83f808               cmp eax, 8
// 005200df  7d36                 jge 0x520117
// 005200e1  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 005200e7  0faffa               imul edi, edx
// 005200ea  8d9b00000000         lea ebx, [ebx]
// 005200f0  8b59fc               mov ebx, dword ptr [ecx - 4]
// 005200f3  0fafd8               imul ebx, eax
// 005200f6  03db                 add ebx, ebx
// 005200f8  3bdf                 cmp ebx, edi
// 005200fa  7f1b                 jg 0x520117
// 005200fc  8b29                 mov ebp, dword ptr [ecx]
// 005200fe  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00520104  0fafe8               imul ebp, eax
// 00520107  0fafda               imul ebx, edx
// 0052010a  03ed                 add ebp, ebp
// 0052010c  3beb                 cmp ebp, ebx
// 0052010e  7f07                 jg 0x520117
// 00520110  03c0                 add eax, eax
// 00520112  83f808               cmp eax, 8
// 00520115  7cd9                 jl 0x5200f0
// 00520117  894118               mov dword ptr [ecx + 0x18], eax
// 0052011a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052011e  83c001               add eax, 1
// 00520121  83c154               add ecx, 0x54
// 00520124  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00520127  89442414             mov dword ptr [esp + 0x14], eax
// 0052012b  7ca7                 jl 0x5200d4
// 0052012d  5d                   pop ebp
// 0052012e  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00520134  33db                 xor ebx, ebx
// 00520136  395e24               cmp dword ptr [esi + 0x24], ebx
// 00520139  7e53                 jle 0x52018e
// 0052013b  83c724               add edi, 0x24
// 0052013e  8bff                 mov edi, edi
// 00520140  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 00520143  0faf17               imul edx, dword ptr [edi]
// 00520146  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 0052014a  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00520150  03c9                 add ecx, ecx
// 00520152  03c9                 add ecx, ecx
// 00520154  03c9                 add ecx, ecx
// 00520156  51                   push ecx
// 00520157  52                   push edx
// 00520158  e8f3e0ffff           call 0x51e250
// 0052015d  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 00520160  894704               mov dword ptr [edi + 4], eax
// 00520163  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 00520167  0faf0f               imul ecx, dword ptr [edi]
// 0052016a  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00520170  03c0                 add eax, eax
// 00520172  03c0                 add eax, eax
// 00520174  03c0                 add eax, eax
// 00520176  50                   push eax
// 00520177  51                   push ecx
// 00520178  e8d3e0ffff           call 0x51e250
// 0052017d  894708               mov dword ptr [edi + 8], eax
// 00520180  83c301               add ebx, 1
// 00520183  83c410               add esp, 0x10
// 00520186  83c754               add edi, 0x54
// 00520189  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0052018c  7cb2                 jl 0x520140
// 0052018e  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00520191  83c0ff               add eax, -1
// 00520194  83f804               cmp eax, 4
// 00520197  5f                   pop edi
// 00520198  5b                   pop ebx
// 00520199  7722                 ja 0x5201bd
// 0052019b  ff2485f4015200       jmp dword ptr [eax*4 + 0x5201f4]
// 005201a2  c7466401000000       mov dword ptr [esi + 0x64], 1
// 005201a9  eb18                 jmp 0x5201c3
// 005201ab  c7466403000000       mov dword ptr [esi + 0x64], 3
// 005201b2  eb0f                 jmp 0x5201c3
// 005201b4  c7466404000000       mov dword ptr [esi + 0x64], 4
// 005201bb  eb06                 jmp 0x5201c3
// 005201bd  8b5624               mov edx, dword ptr [esi + 0x24]
// 005201c0  895664               mov dword ptr [esi + 0x64], edx
// 005201c3  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005201c7  b801000000           mov eax, 1
// 005201cc  7503                 jne 0x5201d1
// 005201ce  8b4664               mov eax, dword ptr [esi + 0x64]
// 005201d1  8bd6                 mov edx, esi
// 005201d3  894668               mov dword ptr [esi + 0x68], eax
// 005201d6  e885fdffff           call 0x51ff60
// 005201db  84c0                 test al, al
// 005201dd  740b                 je 0x5201ea
// 005201df  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 005201e5  89466c               mov dword ptr [esi + 0x6c], eax
// 005201e8  5e                   pop esi
// 005201e9  c3                   ret 
// 005201ea  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 005201f1  5e                   pop esi
// 005201f2  c3                   ret 
// 005201f3  90                   nop 
// 005201f4  a2015200ab           mov byte ptr [0xab005201], al
// 005201f9  015200               add dword ptr [edx], edx
// 005201fc  ab                   stosd dword ptr es:[edi], eax
// 005201fd  015200               add dword ptr [edx], edx
// 00520200  b401                 mov ah, 1
// 00520202  52                   push edx
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
