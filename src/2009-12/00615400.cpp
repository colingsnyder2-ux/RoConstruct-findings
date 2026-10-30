// roc 2009-12 00615400  unit: seg_00610000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615400
//
// 00615400  56                   push esi
// 00615401  8b742408             mov esi, dword ptr [esp + 8]
// 00615405  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0061540c  741b                 je 0x615429
// 0061540e  8b06                 mov eax, dword ptr [esi]
// 00615410  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 00615417  8b0e                 mov ecx, dword ptr [esi]
// 00615419  8b5614               mov edx, dword ptr [esi + 0x14]
// 0061541c  895118               mov dword ptr [ecx + 0x18], edx
// 0061541f  8b06                 mov eax, dword ptr [esi]
// 00615421  8b08                 mov ecx, dword ptr [eax]
// 00615423  56                   push esi
// 00615424  ffd1                 call ecx
// 00615426  83c404               add esp, 4
// 00615429  8b4630               mov eax, dword ptr [esi + 0x30]
// 0061542c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0061542f  8d14c500000000       lea edx, [eax*8]
// 00615436  3bd1                 cmp edx, ecx
// 00615438  7728                 ja 0x615462
// 0061543a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061543d  6a08                 push 8
// 0061543f  50                   push eax
// 00615440  e81b68ffff           call 0x60bc60
// 00615445  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00615448  6a08                 push 8
// 0061544a  51                   push ecx
// 0061544b  89465c               mov dword ptr [esi + 0x5c], eax
// 0061544e  e80d68ffff           call 0x60bc60
// 00615453  83c410               add esp, 0x10
// 00615456  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 00615460  eb75                 jmp 0x6154d7
// 00615462  8d148500000000       lea edx, [eax*4]
// 00615469  3bd1                 cmp edx, ecx
// 0061546b  7728                 ja 0x615495
// 0061546d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00615470  6a04                 push 4
// 00615472  50                   push eax
// 00615473  e8e867ffff           call 0x60bc60
// 00615478  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0061547b  6a04                 push 4
// 0061547d  51                   push ecx
// 0061547e  89465c               mov dword ptr [esi + 0x5c], eax
// 00615481  e8da67ffff           call 0x60bc60
// 00615486  83c410               add esp, 0x10
// 00615489  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 00615493  eb42                 jmp 0x6154d7
// 00615495  8d1400               lea edx, [eax + eax]
// 00615498  3bd1                 cmp edx, ecx
// 0061549a  7728                 ja 0x6154c4
// 0061549c  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061549f  6a02                 push 2
// 006154a1  50                   push eax
// 006154a2  e8b967ffff           call 0x60bc60
// 006154a7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006154aa  6a02                 push 2
// 006154ac  51                   push ecx
// 006154ad  89465c               mov dword ptr [esi + 0x5c], eax
// 006154b0  e8ab67ffff           call 0x60bc60
// 006154b5  83c410               add esp, 0x10
// 006154b8  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 006154c2  eb13                 jmp 0x6154d7
// 006154c4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 006154c7  8b4620               mov eax, dword ptr [esi + 0x20]
// 006154ca  89565c               mov dword ptr [esi + 0x5c], edx
// 006154cd  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 006154d7  837e2400             cmp dword ptr [esi + 0x24], 0
// 006154db  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 006154e1  53                   push ebx
// 006154e2  894660               mov dword ptr [esi + 0x60], eax
// 006154e5  57                   push edi
// 006154e6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006154ee  7e5c                 jle 0x61554c
// 006154f0  83c10c               add ecx, 0xc
// 006154f3  55                   push ebp
// 006154f4  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 006154fa  8bc2                 mov eax, edx
// 006154fc  83f808               cmp eax, 8
// 006154ff  7d36                 jge 0x615537
// 00615501  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 00615507  0faffa               imul edi, edx
// 0061550a  8d9b00000000         lea ebx, [ebx]
// 00615510  8b59fc               mov ebx, dword ptr [ecx - 4]
// 00615513  0fafd8               imul ebx, eax
// 00615516  03db                 add ebx, ebx
// 00615518  3bdf                 cmp ebx, edi
// 0061551a  7f1b                 jg 0x615537
// 0061551c  8b29                 mov ebp, dword ptr [ecx]
// 0061551e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 00615524  0fafe8               imul ebp, eax
// 00615527  0fafda               imul ebx, edx
// 0061552a  03ed                 add ebp, ebp
// 0061552c  3beb                 cmp ebp, ebx
// 0061552e  7f07                 jg 0x615537
// 00615530  03c0                 add eax, eax
// 00615532  83f808               cmp eax, 8
// 00615535  7cd9                 jl 0x615510
// 00615537  894118               mov dword ptr [ecx + 0x18], eax
// 0061553a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061553e  40                   inc eax
// 0061553f  83c154               add ecx, 0x54
// 00615542  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00615545  89442414             mov dword ptr [esp + 0x14], eax
// 00615549  7ca9                 jl 0x6154f4
// 0061554b  5d                   pop ebp
// 0061554c  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00615552  33db                 xor ebx, ebx
// 00615554  395e24               cmp dword ptr [esi + 0x24], ebx
// 00615557  7e53                 jle 0x6155ac
// 00615559  83c724               add edi, 0x24
// 0061555c  8d642400             lea esp, [esp]
// 00615560  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 00615563  0faf17               imul edx, dword ptr [edi]
// 00615566  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 0061556a  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 00615570  03c9                 add ecx, ecx
// 00615572  03c9                 add ecx, ecx
// 00615574  03c9                 add ecx, ecx
// 00615576  51                   push ecx
// 00615577  52                   push edx
// 00615578  e8e366ffff           call 0x60bc60
// 0061557d  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 00615580  894704               mov dword ptr [edi + 4], eax
// 00615583  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 00615587  0faf0f               imul ecx, dword ptr [edi]
// 0061558a  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00615590  03c0                 add eax, eax
// 00615592  03c0                 add eax, eax
// 00615594  03c0                 add eax, eax
// 00615596  50                   push eax
// 00615597  51                   push ecx
// 00615598  e8c366ffff           call 0x60bc60
// 0061559d  894708               mov dword ptr [edi + 8], eax
// 006155a0  43                   inc ebx
// 006155a1  83c410               add esp, 0x10
// 006155a4  83c754               add edi, 0x54
// 006155a7  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 006155aa  7cb4                 jl 0x615560
// 006155ac  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006155af  48                   dec eax
// 006155b0  5f                   pop edi
// 006155b1  5b                   pop ebx
// 006155b2  83f804               cmp eax, 4
// 006155b5  7722                 ja 0x6155d9
// 006155b7  ff248510566100       jmp dword ptr [eax*4 + 0x615610]
// 006155be  c7466401000000       mov dword ptr [esi + 0x64], 1
// 006155c5  eb18                 jmp 0x6155df
// 006155c7  c7466403000000       mov dword ptr [esi + 0x64], 3
// 006155ce  eb0f                 jmp 0x6155df
// 006155d0  c7466404000000       mov dword ptr [esi + 0x64], 4
// 006155d7  eb06                 jmp 0x6155df
// 006155d9  8b5624               mov edx, dword ptr [esi + 0x24]
// 006155dc  895664               mov dword ptr [esi + 0x64], edx
// 006155df  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 006155e3  b801000000           mov eax, 1
// 006155e8  7503                 jne 0x6155ed
// 006155ea  8b4664               mov eax, dword ptr [esi + 0x64]
// 006155ed  8bd6                 mov edx, esi
// 006155ef  894668               mov dword ptr [esi + 0x68], eax
// 006155f2  e889fdffff           call 0x615380
// 006155f7  84c0                 test al, al
// 006155f9  740b                 je 0x615606
// 006155fb  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 00615601  89466c               mov dword ptr [esi + 0x6c], eax
// 00615604  5e                   pop esi
// 00615605  c3                   ret 
// 00615606  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 0061560d  5e                   pop esi
// 0061560e  c3                   ret 
// 0061560f  90                   nop 
// 00615610  be556100c7           mov esi, 0xc7006155
// 00615615  55                   push ebp
// 00615616  61                   popal 
// 00615617  00c7                 add bh, al
// 00615619  55                   push ebp
// 0061561a  61                   popal 
// 0061561b  00d0                 add al, dl
// 0061561d  55                   push ebp
// 0061561e  61                   popal 
// 0061561f  00d0                 add al, dl
// 00615621  55                   push ebp
// 00615622  61                   popal 
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
