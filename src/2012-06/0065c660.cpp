// from server: 100% by auto
// roc 2012-06 0065c660  unit: seg_00650000  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065c660
//
// 0065c660  81ec04020000         sub esp, 0x204
// 0065c666  55                   push ebp
// 0065c667  8bac2410020000       mov ebp, dword ptr [esp + 0x210]
// 0065c66e  56                   push esi
// 0065c66f  8bb42410020000       mov esi, dword ptr [esp + 0x210]
// 0065c676  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065c679  a801                 test al, 1
// 0065c67b  0f85ac000000         jne 0x65c72d
// 0065c681  6834aab800           push 0xb8aa34
// 0065c686  56                   push esi
// 0065c687  e8241bffff           call 0x64e1b0
// 0065c68c  83c408               add esp, 8
// 0065c68f  0fb78618010000       movzx eax, word ptr [esi + 0x118]
// 0065c696  53                   push ebx
// 0065c697  57                   push edi
// 0065c698  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 0065c69f  8bdf                 mov ebx, edi
// 0065c6a1  d1eb                 shr ebx, 1
// 0065c6a3  3bd8                 cmp ebx, eax
// 0065c6a5  0f850b010000         jne 0x65c7b6
// 0065c6ab  81fb00010000         cmp ebx, 0x100
// 0065c6b1  0f87ff000000         ja 0x65c7b6
// 0065c6b7  33ff                 xor edi, edi
// 0065c6b9  85db                 test ebx, ebx
// 0065c6bb  7643                 jbe 0x65c700
// 0065c6bd  8d4900               lea ecx, [ecx]
// 0065c6c0  6a02                 push 2
// 0065c6c2  8d4c2414             lea ecx, [esp + 0x14]
// 0065c6c6  51                   push ecx
// 0065c6c7  56                   push esi
// 0065c6c8  e82317ffff           call 0x64ddf0
// 0065c6cd  6a02                 push 2
// 0065c6cf  8d542420             lea edx, [esp + 0x20]
// 0065c6d3  52                   push edx
// 0065c6d4  56                   push esi
// 0065c6d5  e8b617feff           call 0x63de90
// 0065c6da  668b442428           mov ax, word ptr [esp + 0x28]
// 0065c6df  660fb6c8             movzx cx, al
// 0065c6e3  ba00010000           mov edx, 0x100
// 0065c6e8  660fafca             imul cx, dx
// 0065c6ec  660fb6c4             movzx ax, ah
// 0065c6f0  6603c8               add cx, ax
// 0065c6f3  66894c7c2c           mov word ptr [esp + edi*2 + 0x2c], cx
// 0065c6f8  47                   inc edi
// 0065c6f9  83c418               add esp, 0x18
// 0065c6fc  3bfb                 cmp edi, ebx
// 0065c6fe  72c0                 jb 0x65c6c0
// 0065c700  6a00                 push 0
// 0065c702  56                   push esi
// 0065c703  e848e8ffff           call 0x65af50
// 0065c708  83c408               add esp, 8
// 0065c70b  85c0                 test eax, eax
// 0065c70d  0f85b8000000         jne 0x65c7cb
// 0065c713  8d4c2414             lea ecx, [esp + 0x14]
// 0065c717  51                   push ecx
// 0065c718  55                   push ebp
// 0065c719  56                   push esi
// 0065c71a  e8b1a1feff           call 0x6468d0
// 0065c71f  83c40c               add esp, 0xc
// 0065c722  5f                   pop edi
// 0065c723  5b                   pop ebx
// 0065c724  5e                   pop esi
// 0065c725  5d                   pop ebp
// 0065c726  81c404020000         add esp, 0x204
// 0065c72c  c3                   ret 
// 0065c72d  a804                 test al, 4
// 0065c72f  7425                 je 0x65c756
// 0065c731  681caab800           push 0xb8aa1c
// 0065c736  56                   push esi
// 0065c737  e8241bffff           call 0x64e260
// 0065c73c  8b842420020000       mov eax, dword ptr [esp + 0x220]
// 0065c743  50                   push eax
// 0065c744  56                   push esi
// 0065c745  e806e8ffff           call 0x65af50
// 0065c74a  83c410               add esp, 0x10
// 0065c74d  5e                   pop esi
// 0065c74e  5d                   pop ebp
// 0065c74f  81c404020000         add esp, 0x204
// 0065c755  c3                   ret 
// 0065c756  a802                 test al, 2
// 0065c758  7525                 jne 0x65c77f
// 0065c75a  6800aab800           push 0xb8aa00
// 0065c75f  56                   push esi
// 0065c760  e8fb1affff           call 0x64e260
// 0065c765  8b8c2420020000       mov ecx, dword ptr [esp + 0x220]
// 0065c76c  51                   push ecx
// 0065c76d  56                   push esi
// 0065c76e  e8dde7ffff           call 0x65af50
// 0065c773  83c410               add esp, 0x10
// 0065c776  5e                   pop esi
// 0065c777  5d                   pop ebp
// 0065c778  81c404020000         add esp, 0x204
// 0065c77e  c3                   ret 
// 0065c77f  85ed                 test ebp, ebp
// 0065c781  0f8408ffffff         je 0x65c68f
// 0065c787  f6450840             test byte ptr [ebp + 8], 0x40
// 0065c78b  0f84fefeffff         je 0x65c68f
// 0065c791  68e8a9b800           push 0xb8a9e8
// 0065c796  56                   push esi
// 0065c797  e8c41affff           call 0x64e260
// 0065c79c  8b942420020000       mov edx, dword ptr [esp + 0x220]
// 0065c7a3  52                   push edx
// 0065c7a4  56                   push esi
// 0065c7a5  e8a6e7ffff           call 0x65af50
// 0065c7aa  83c410               add esp, 0x10
// 0065c7ad  5e                   pop esi
// 0065c7ae  5d                   pop ebp
// 0065c7af  81c404020000         add esp, 0x204
// 0065c7b5  c3                   ret 
// 0065c7b6  68cca9b800           push 0xb8a9cc
// 0065c7bb  56                   push esi
// 0065c7bc  e89f1affff           call 0x64e260
// 0065c7c1  57                   push edi
// 0065c7c2  56                   push esi
// 0065c7c3  e888e7ffff           call 0x65af50
// 0065c7c8  83c410               add esp, 0x10
// 0065c7cb  5f                   pop edi
// 0065c7cc  5b                   pop ebx
// 0065c7cd  5e                   pop esi
// 0065c7ce  5d                   pop ebp
// 0065c7cf  81c404020000         add esp, 0x204
// 0065c7d5  c3                   ret 
// library libpng-1.2.6/pngrutil.c (function _png_handle_hIST)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
