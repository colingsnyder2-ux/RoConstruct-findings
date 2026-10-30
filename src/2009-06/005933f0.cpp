// roc 2009-06 005933f0  unit: seg_00590000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005933f0
//
// 005933f0  56                   push esi
// 005933f1  8b742408             mov esi, dword ptr [esp + 8]
// 005933f5  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 005933fc  741b                 je 0x593419
// 005933fe  8b06                 mov eax, dword ptr [esi]
// 00593400  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00593407  8b0e                 mov ecx, dword ptr [esi]
// 00593409  8b5614               mov edx, dword ptr [esi + 0x14]
// 0059340c  895118               mov dword ptr [ecx + 0x18], edx
// 0059340f  8b06                 mov eax, dword ptr [esi]
// 00593411  8b08                 mov ecx, dword ptr [eax]
// 00593413  56                   push esi
// 00593414  ffd1                 call ecx
// 00593416  83c404               add esp, 4
// 00593419  8b4630               mov eax, dword ptr [esi + 0x30]
// 0059341c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0059341f  8d14c500000000       lea edx, [eax*8]
// 00593426  3bd1                 cmp edx, ecx
// 00593428  7728                 ja 0x593452
// 0059342a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0059342d  6a08                 push 8
// 0059342f  50                   push eax
// 00593430  e8db69ffff           call 0x589e10
// 00593435  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00593438  6a08                 push 8
// 0059343a  51                   push ecx
// 0059343b  89465c               mov dword ptr [esi + 0x5c], eax
// 0059343e  e8cd69ffff           call 0x589e10
// 00593443  83c410               add esp, 0x10
// 00593446  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 00593450  eb75                 jmp 0x5934c7
// 00593452  8d148500000000       lea edx, [eax*4]
// 00593459  3bd1                 cmp edx, ecx
// 0059345b  7728                 ja 0x593485
// 0059345d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00593460  6a04                 push 4
// 00593462  50                   push eax
// 00593463  e8a869ffff           call 0x589e10
// 00593468  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0059346b  6a04                 push 4
// 0059346d  51                   push ecx
// 0059346e  89465c               mov dword ptr [esi + 0x5c], eax
// 00593471  e89a69ffff           call 0x589e10
// 00593476  83c410               add esp, 0x10
// 00593479  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 00593483  eb42                 jmp 0x5934c7
// 00593485  8d1400               lea edx, [eax + eax]
// 00593488  3bd1                 cmp edx, ecx
// 0059348a  7728                 ja 0x5934b4
// 0059348c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0059348f  6a02                 push 2
// 00593491  50                   push eax
// 00593492  e87969ffff           call 0x589e10
// 00593497  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0059349a  6a02                 push 2
// 0059349c  51                   push ecx
// 0059349d  89465c               mov dword ptr [esi + 0x5c], eax
// 005934a0  e86b69ffff           call 0x589e10
// 005934a5  83c410               add esp, 0x10
// 005934a8  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 005934b2  eb13                 jmp 0x5934c7
// 005934b4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 005934b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 005934ba  89565c               mov dword ptr [esi + 0x5c], edx
// 005934bd  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 005934c7  837e2400             cmp dword ptr [esi + 0x24], 0
// 005934cb  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 005934d1  53                   push ebx
// 005934d2  894660               mov dword ptr [esi + 0x60], eax
// 005934d5  57                   push edi
// 005934d6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005934de  7e5c                 jle 0x59353c
// 005934e0  83c10c               add ecx, 0xc
// 005934e3  55                   push ebp
// 005934e4  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 005934ea  8bc2                 mov eax, edx
// 005934ec  83f808               cmp eax, 8
// 005934ef  7d36                 jge 0x593527
// 005934f1  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 005934f7  0faffa               imul edi, edx
// 005934fa  8d9b00000000         lea ebx, [ebx]
// 00593500  8b59fc               mov ebx, dword ptr [ecx - 4]
// 00593503  0fafd8               imul ebx, eax
// 00593506  03db                 add ebx, ebx
// 00593508  3bdf                 cmp ebx, edi
// 0059350a  7f1b                 jg 0x593527
// 0059350c  8b29                 mov ebp, dword ptr [ecx]
// 0059350e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00593514  0fafe8               imul ebp, eax
// 00593517  0fafda               imul ebx, edx
// 0059351a  03ed                 add ebp, ebp
// 0059351c  3beb                 cmp ebp, ebx
// 0059351e  7f07                 jg 0x593527
// 00593520  03c0                 add eax, eax
// 00593522  83f808               cmp eax, 8
// 00593525  7cd9                 jl 0x593500
// 00593527  894118               mov dword ptr [ecx + 0x18], eax
// 0059352a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059352e  40                   inc eax
// 0059352f  83c154               add ecx, 0x54
// 00593532  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00593535  89442414             mov dword ptr [esp + 0x14], eax
// 00593539  7ca9                 jl 0x5934e4
// 0059353b  5d                   pop ebp
// 0059353c  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00593542  33db                 xor ebx, ebx
// 00593544  395e24               cmp dword ptr [esi + 0x24], ebx
// 00593547  7e53                 jle 0x59359c
// 00593549  83c724               add edi, 0x24
// 0059354c  8d642400             lea esp, [esp]
// 00593550  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 00593553  0faf17               imul edx, dword ptr [edi]
// 00593556  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 0059355a  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00593560  03c9                 add ecx, ecx
// 00593562  03c9                 add ecx, ecx
// 00593564  03c9                 add ecx, ecx
// 00593566  51                   push ecx
// 00593567  52                   push edx
// 00593568  e8a368ffff           call 0x589e10
// 0059356d  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 00593570  894704               mov dword ptr [edi + 4], eax
// 00593573  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 00593577  0faf0f               imul ecx, dword ptr [edi]
// 0059357a  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00593580  03c0                 add eax, eax
// 00593582  03c0                 add eax, eax
// 00593584  03c0                 add eax, eax
// 00593586  50                   push eax
// 00593587  51                   push ecx
// 00593588  e88368ffff           call 0x589e10
// 0059358d  894708               mov dword ptr [edi + 8], eax
// 00593590  43                   inc ebx
// 00593591  83c410               add esp, 0x10
// 00593594  83c754               add edi, 0x54
// 00593597  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0059359a  7cb4                 jl 0x593550
// 0059359c  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0059359f  48                   dec eax
// 005935a0  5f                   pop edi
// 005935a1  5b                   pop ebx
// 005935a2  83f804               cmp eax, 4
// 005935a5  7722                 ja 0x5935c9
// 005935a7  ff248500365900       jmp dword ptr [eax*4 + 0x593600]
// 005935ae  c7466401000000       mov dword ptr [esi + 0x64], 1
// 005935b5  eb18                 jmp 0x5935cf
// 005935b7  c7466403000000       mov dword ptr [esi + 0x64], 3
// 005935be  eb0f                 jmp 0x5935cf
// 005935c0  c7466404000000       mov dword ptr [esi + 0x64], 4
// 005935c7  eb06                 jmp 0x5935cf
// 005935c9  8b5624               mov edx, dword ptr [esi + 0x24]
// 005935cc  895664               mov dword ptr [esi + 0x64], edx
// 005935cf  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005935d3  b801000000           mov eax, 1
// 005935d8  7503                 jne 0x5935dd
// 005935da  8b4664               mov eax, dword ptr [esi + 0x64]
// 005935dd  8bd6                 mov edx, esi
// 005935df  894668               mov dword ptr [esi + 0x68], eax
// 005935e2  e889fdffff           call 0x593370
// 005935e7  84c0                 test al, al
// 005935e9  740b                 je 0x5935f6
// 005935eb  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 005935f1  89466c               mov dword ptr [esi + 0x6c], eax
// 005935f4  5e                   pop esi
// 005935f5  c3                   ret 
// 005935f6  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 005935fd  5e                   pop esi
// 005935fe  c3                   ret 
// 005935ff  90                   nop 
// 00593600  ae                   scasb al, byte ptr es:[edi]
// 00593601  355900b735           xor eax, 0x35b70059
// 00593606  59                   pop ecx
// 00593607  00b7355900c0         add byte ptr [edi - 0x3fffa6cb], dh
// 0059360d  355900c035           xor eax, 0x35c00059
// 00593612  59                   pop ecx
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
