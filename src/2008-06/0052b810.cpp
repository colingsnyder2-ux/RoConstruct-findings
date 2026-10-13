// roc 2008-06 0052b810  unit: seg_00520000  size: 548 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052b810
//
// 0052b810  56                   push esi
// 0052b811  8b742408             mov esi, dword ptr [esp + 8]
// 0052b815  817e14ca000000       cmp dword ptr [esi + 0x14], 0xca
// 0052b81c  741b                 je 0x52b839
// 0052b81e  8b06                 mov eax, dword ptr [esi]
// 0052b820  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0052b827  8b0e                 mov ecx, dword ptr [esi]
// 0052b829  8b5614               mov edx, dword ptr [esi + 0x14]
// 0052b82c  895118               mov dword ptr [ecx + 0x18], edx
// 0052b82f  8b06                 mov eax, dword ptr [esi]
// 0052b831  8b08                 mov ecx, dword ptr [eax]
// 0052b833  56                   push esi
// 0052b834  ffd1                 call ecx
// 0052b836  83c404               add esp, 4
// 0052b839  8b4630               mov eax, dword ptr [esi + 0x30]
// 0052b83c  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 0052b83f  8d14c500000000       lea edx, [eax*8]
// 0052b846  3bd1                 cmp edx, ecx
// 0052b848  7728                 ja 0x52b872
// 0052b84a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052b84d  6a08                 push 8
// 0052b84f  50                   push eax
// 0052b850  e8aba2ffff           call 0x525b00
// 0052b855  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052b858  6a08                 push 8
// 0052b85a  51                   push ecx
// 0052b85b  89465c               mov dword ptr [esi + 0x5c], eax
// 0052b85e  e89da2ffff           call 0x525b00
// 0052b863  83c410               add esp, 0x10
// 0052b866  c7861801000001000000 mov dword ptr [esi + 0x118], 1
// 0052b870  eb75                 jmp 0x52b8e7
// 0052b872  8d148500000000       lea edx, [eax*4]
// 0052b879  3bd1                 cmp edx, ecx
// 0052b87b  7728                 ja 0x52b8a5
// 0052b87d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052b880  6a04                 push 4
// 0052b882  50                   push eax
// 0052b883  e878a2ffff           call 0x525b00
// 0052b888  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052b88b  6a04                 push 4
// 0052b88d  51                   push ecx
// 0052b88e  89465c               mov dword ptr [esi + 0x5c], eax
// 0052b891  e86aa2ffff           call 0x525b00
// 0052b896  83c410               add esp, 0x10
// 0052b899  c7861801000002000000 mov dword ptr [esi + 0x118], 2
// 0052b8a3  eb42                 jmp 0x52b8e7
// 0052b8a5  8d1400               lea edx, [eax + eax]
// 0052b8a8  3bd1                 cmp edx, ecx
// 0052b8aa  7728                 ja 0x52b8d4
// 0052b8ac  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0052b8af  6a02                 push 2
// 0052b8b1  50                   push eax
// 0052b8b2  e849a2ffff           call 0x525b00
// 0052b8b7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052b8ba  6a02                 push 2
// 0052b8bc  51                   push ecx
// 0052b8bd  89465c               mov dword ptr [esi + 0x5c], eax
// 0052b8c0  e83ba2ffff           call 0x525b00
// 0052b8c5  83c410               add esp, 0x10
// 0052b8c8  c7861801000004000000 mov dword ptr [esi + 0x118], 4
// 0052b8d2  eb13                 jmp 0x52b8e7
// 0052b8d4  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0052b8d7  8b4620               mov eax, dword ptr [esi + 0x20]
// 0052b8da  89565c               mov dword ptr [esi + 0x5c], edx
// 0052b8dd  c7861801000008000000 mov dword ptr [esi + 0x118], 8
// 0052b8e7  837e2400             cmp dword ptr [esi + 0x24], 0
// 0052b8eb  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 0052b8f1  53                   push ebx
// 0052b8f2  894660               mov dword ptr [esi + 0x60], eax
// 0052b8f5  57                   push edi
// 0052b8f6  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052b8fe  7e5c                 jle 0x52b95c
// 0052b900  83c10c               add ecx, 0xc
// 0052b903  55                   push ebp
// 0052b904  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 0052b90a  8bc2                 mov eax, edx
// 0052b90c  83f808               cmp eax, 8
// 0052b90f  7d36                 jge 0x52b947
// 0052b911  8bbe10010000         mov edi, dword ptr [esi + 0x110]
// 0052b917  0faffa               imul edi, edx
// 0052b91a  8d9b00000000         lea ebx, [ebx]
// 0052b920  8b59fc               mov ebx, dword ptr [ecx - 4]
// 0052b923  0fafd8               imul ebx, eax
// 0052b926  03db                 add ebx, ebx
// 0052b928  3bdf                 cmp ebx, edi
// 0052b92a  7f1b                 jg 0x52b947
// 0052b92c  8b29                 mov ebp, dword ptr [ecx]
// 0052b92e  8b9e14010000         mov ebx, dword ptr [esi + 0x114]
// 0052b934  0fafe8               imul ebp, eax
// 0052b937  0fafda               imul ebx, edx
// 0052b93a  03ed                 add ebp, ebp
// 0052b93c  3beb                 cmp ebp, ebx
// 0052b93e  7f07                 jg 0x52b947
// 0052b940  03c0                 add eax, eax
// 0052b942  83f808               cmp eax, 8
// 0052b945  7cd9                 jl 0x52b920
// 0052b947  894118               mov dword ptr [ecx + 0x18], eax
// 0052b94a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052b94e  40                   inc eax
// 0052b94f  83c154               add ecx, 0x54
// 0052b952  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0052b955  89442414             mov dword ptr [esp + 0x14], eax
// 0052b959  7ca9                 jl 0x52b904
// 0052b95b  5d                   pop ebp
// 0052b95c  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0052b962  33db                 xor ebx, ebx
// 0052b964  395e24               cmp dword ptr [esi + 0x24], ebx
// 0052b967  7e53                 jle 0x52b9bc
// 0052b969  83c724               add edi, 0x24
// 0052b96c  8d642400             lea esp, [esp]
// 0052b970  8b57e4               mov edx, dword ptr [edi - 0x1c]
// 0052b973  0faf17               imul edx, dword ptr [edi]
// 0052b976  0faf561c             imul edx, dword ptr [esi + 0x1c]
// 0052b97a  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0052b980  03c9                 add ecx, ecx
// 0052b982  03c9                 add ecx, ecx
// 0052b984  03c9                 add ecx, ecx
// 0052b986  51                   push ecx
// 0052b987  52                   push edx
// 0052b988  e873a1ffff           call 0x525b00
// 0052b98d  8b4fe8               mov ecx, dword ptr [edi - 0x18]
// 0052b990  894704               mov dword ptr [edi + 4], eax
// 0052b993  0faf4e20             imul ecx, dword ptr [esi + 0x20]
// 0052b997  0faf0f               imul ecx, dword ptr [edi]
// 0052b99a  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0052b9a0  03c0                 add eax, eax
// 0052b9a2  03c0                 add eax, eax
// 0052b9a4  03c0                 add eax, eax
// 0052b9a6  50                   push eax
// 0052b9a7  51                   push ecx
// 0052b9a8  e853a1ffff           call 0x525b00
// 0052b9ad  894708               mov dword ptr [edi + 8], eax
// 0052b9b0  43                   inc ebx
// 0052b9b1  83c410               add esp, 0x10
// 0052b9b4  83c754               add edi, 0x54
// 0052b9b7  3b5e24               cmp ebx, dword ptr [esi + 0x24]
// 0052b9ba  7cb4                 jl 0x52b970
// 0052b9bc  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0052b9bf  48                   dec eax
// 0052b9c0  5f                   pop edi
// 0052b9c1  5b                   pop ebx
// 0052b9c2  83f804               cmp eax, 4
// 0052b9c5  7722                 ja 0x52b9e9
// 0052b9c7  ff248520ba5200       jmp dword ptr [eax*4 + 0x52ba20]
// 0052b9ce  c7466401000000       mov dword ptr [esi + 0x64], 1
// 0052b9d5  eb18                 jmp 0x52b9ef
// 0052b9d7  c7466403000000       mov dword ptr [esi + 0x64], 3
// 0052b9de  eb0f                 jmp 0x52b9ef
// 0052b9e0  c7466404000000       mov dword ptr [esi + 0x64], 4
// 0052b9e7  eb06                 jmp 0x52b9ef
// 0052b9e9  8b5624               mov edx, dword ptr [esi + 0x24]
// 0052b9ec  895664               mov dword ptr [esi + 0x64], edx
// 0052b9ef  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0052b9f3  b801000000           mov eax, 1
// 0052b9f8  7503                 jne 0x52b9fd
// 0052b9fa  8b4664               mov eax, dword ptr [esi + 0x64]
// 0052b9fd  8bd6                 mov edx, esi
// 0052b9ff  894668               mov dword ptr [esi + 0x68], eax
// 0052ba02  e889fdffff           call 0x52b790
// 0052ba07  84c0                 test al, al
// 0052ba09  740b                 je 0x52ba16
// 0052ba0b  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0052ba11  89466c               mov dword ptr [esi + 0x6c], eax
// 0052ba14  5e                   pop esi
// 0052ba15  c3                   ret 
// 0052ba16  c7466c01000000       mov dword ptr [esi + 0x6c], 1
// 0052ba1d  5e                   pop esi
// 0052ba1e  c3                   ret 
// 0052ba1f  90                   nop 
// 0052ba20  ce                   into 
// 0052ba21  b95200d7b9           mov ecx, 0xb9d70052
// 0052ba26  52                   push edx
// 0052ba27  00d7                 add bh, dl
// 0052ba29  b95200e0b9           mov ecx, 0xb9e00052
// 0052ba2e  52                   push edx
// 0052ba2f  00e0                 add al, ah
// library jpeg-6b/jdmaster.c (function _jpeg_calc_output_dimensions)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
