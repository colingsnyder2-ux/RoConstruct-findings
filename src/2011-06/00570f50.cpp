// roc 2011-06 00570f50  unit: seg_00570000  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00570f50
//
// 00570f50  81ec04020000         sub esp, 0x204
// 00570f56  55                   push ebp
// 00570f57  8bac2410020000       mov ebp, dword ptr [esp + 0x210]
// 00570f5e  56                   push esi
// 00570f5f  8bb42410020000       mov esi, dword ptr [esp + 0x210]
// 00570f66  8b4668               mov eax, dword ptr [esi + 0x68]
// 00570f69  a801                 test al, 1
// 00570f6b  0f85ac000000         jne 0x57101d
// 00570f71  68e46ba800           push 0xa86be4
// 00570f76  56                   push esi
// 00570f77  e8b403ffff           call 0x561330
// 00570f7c  83c408               add esp, 8
// 00570f7f  0fb78618010000       movzx eax, word ptr [esi + 0x118]
// 00570f86  53                   push ebx
// 00570f87  57                   push edi
// 00570f88  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 00570f8f  8bdf                 mov ebx, edi
// 00570f91  d1eb                 shr ebx, 1
// 00570f93  3bd8                 cmp ebx, eax
// 00570f95  0f850b010000         jne 0x5710a6
// 00570f9b  81fb00010000         cmp ebx, 0x100
// 00570fa1  0f87ff000000         ja 0x5710a6
// 00570fa7  33ff                 xor edi, edi
// 00570fa9  85db                 test ebx, ebx
// 00570fab  7643                 jbe 0x570ff0
// 00570fad  8d4900               lea ecx, [ecx]
// 00570fb0  6a02                 push 2
// 00570fb2  8d4c2414             lea ecx, [esp + 0x14]
// 00570fb6  51                   push ecx
// 00570fb7  56                   push esi
// 00570fb8  e8b3fffeff           call 0x560f70
// 00570fbd  6a02                 push 2
// 00570fbf  8d542420             lea edx, [esp + 0x20]
// 00570fc3  52                   push edx
// 00570fc4  56                   push esi
// 00570fc5  e886f8fdff           call 0x550850
// 00570fca  668b442428           mov ax, word ptr [esp + 0x28]
// 00570fcf  660fb6c8             movzx cx, al
// 00570fd3  ba00010000           mov edx, 0x100
// 00570fd8  660fafca             imul cx, dx
// 00570fdc  660fb6c4             movzx ax, ah
// 00570fe0  6603c8               add cx, ax
// 00570fe3  66894c7c2c           mov word ptr [esp + edi*2 + 0x2c], cx
// 00570fe8  47                   inc edi
// 00570fe9  83c418               add esp, 0x18
// 00570fec  3bfb                 cmp edi, ebx
// 00570fee  72c0                 jb 0x570fb0
// 00570ff0  6a00                 push 0
// 00570ff2  56                   push esi
// 00570ff3  e848e8ffff           call 0x56f840
// 00570ff8  83c408               add esp, 8
// 00570ffb  85c0                 test eax, eax
// 00570ffd  0f85b8000000         jne 0x5710bb
// 00571003  8d4c2414             lea ecx, [esp + 0x14]
// 00571007  51                   push ecx
// 00571008  55                   push ebp
// 00571009  56                   push esi
// 0057100a  e8418afeff           call 0x559a50
// 0057100f  83c40c               add esp, 0xc
// 00571012  5f                   pop edi
// 00571013  5b                   pop ebx
// 00571014  5e                   pop esi
// 00571015  5d                   pop ebp
// 00571016  81c404020000         add esp, 0x204
// 0057101c  c3                   ret 
// 0057101d  a804                 test al, 4
// 0057101f  7425                 je 0x571046
// 00571021  68cc6ba800           push 0xa86bcc
// 00571026  56                   push esi
// 00571027  e8b403ffff           call 0x5613e0
// 0057102c  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 00571033  50                   push eax
// 00571034  56                   push esi
// 00571035  e806e8ffff           call 0x56f840
// 0057103a  83c410               add esp, 0x10
// 0057103d  5e                   pop esi
// 0057103e  5d                   pop ebp
// 0057103f  81c404020000         add esp, 0x204
// 00571045  c3                   ret 
// 00571046  a802                 test al, 2
// 00571048  7525                 jne 0x57106f
// 0057104a  68b06ba800           push 0xa86bb0
// 0057104f  56                   push esi
// 00571050  e88b03ffff           call 0x5613e0
// 00571055  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 0057105c  51                   push ecx
// 0057105d  56                   push esi
// 0057105e  e8dde7ffff           call 0x56f840
// 00571063  83c410               add esp, 0x10
// 00571066  5e                   pop esi
// 00571067  5d                   pop ebp
// 00571068  81c404020000         add esp, 0x204
// 0057106e  c3                   ret 
// 0057106f  85ed                 test ebp, ebp
// 00571071  0f8408ffffff         je 0x570f7f
// 00571077  f6450840             test byte ptr [ebp + 8], 0x40
// 0057107b  0f84fefeffff         je 0x570f7f
// 00571081  68986ba800           push 0xa86b98
// 00571086  56                   push esi
// 00571087  e85403ffff           call 0x5613e0
// 0057108c  8b942420020000       mov edx, dword ptr [esp + 0x220]
// 00571093  52                   push edx
// 00571094  56                   push esi
// 00571095  e8a6e7ffff           call 0x56f840
// 0057109a  83c410               add esp, 0x10
// 0057109d  5e                   pop esi
// 0057109e  5d                   pop ebp
// 0057109f  81c404020000         add esp, 0x204
// 005710a5  c3                   ret 
// 005710a6  687c6ba800           push 0xa86b7c
// 005710ab  56                   push esi
// 005710ac  e82f03ffff           call 0x5613e0
// 005710b1  57                   push edi
// 005710b2  56                   push esi
// 005710b3  e888e7ffff           call 0x56f840
// 005710b8  83c410               add esp, 0x10
// 005710bb  5f                   pop edi
// 005710bc  5b                   pop ebx
// 005710bd  5e                   pop esi
// 005710be  5d                   pop ebp
// 005710bf  81c404020000         add esp, 0x204
// 005710c5  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
