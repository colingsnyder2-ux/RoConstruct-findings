// roc 2008-06 0052d170  unit: seg_00520000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052d170
//
// 0052d170  81ec04030000         sub esp, 0x304
// 0052d176  56                   push esi
// 0052d177  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 0052d17e  8b4668               mov eax, dword ptr [esi + 0x68]
// 0052d181  a801                 test al, 1
// 0052d183  7507                 jne 0x52d18c
// 0052d185  6844be8200           push 0x82be44
// 0052d18a  eb31                 jmp 0x52d1bd
// 0052d18c  a804                 test al, 4
// 0052d18e  7424                 je 0x52d1b4
// 0052d190  682cbe8200           push 0x82be2c
// 0052d195  56                   push esi
// 0052d196  e8b5c8ffff           call 0x529a50
// 0052d19b  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 0052d1a2  50                   push eax
// 0052d1a3  56                   push esi
// 0052d1a4  e837fdffff           call 0x52cee0
// 0052d1a9  83c410               add esp, 0x10
// 0052d1ac  5e                   pop esi
// 0052d1ad  81c404030000         add esp, 0x304
// 0052d1b3  c3                   ret 
// 0052d1b4  a802                 test al, 2
// 0052d1b6  740e                 je 0x52d1c6
// 0052d1b8  6814be8200           push 0x82be14
// 0052d1bd  56                   push esi
// 0052d1be  e8edc7ffff           call 0x5299b0
// 0052d1c3  83c408               add esp, 8
// 0052d1c6  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0052d1cc  834e6802             or dword ptr [esi + 0x68], 2
// 0052d1d0  f6c102               test cl, 2
// 0052d1d3  7524                 jne 0x52d1f9
// 0052d1d5  68ecbd8200           push 0x82bdec
// 0052d1da  56                   push esi
// 0052d1db  e870c8ffff           call 0x529a50
// 0052d1e0  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 0052d1e7  51                   push ecx
// 0052d1e8  56                   push esi
// 0052d1e9  e8f2fcffff           call 0x52cee0
// 0052d1ee  83c410               add esp, 0x10
// 0052d1f1  5e                   pop esi
// 0052d1f2  81c404030000         add esp, 0x304
// 0052d1f8  c3                   ret 
// 0052d1f9  57                   push edi
// 0052d1fa  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 0052d201  81ff00030000         cmp edi, 0x300
// 0052d207  7712                 ja 0x52d21b
// 0052d209  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0052d20e  f7e7                 mul edi
// 0052d210  d1ea                 shr edx, 1
// 0052d212  8d1452               lea edx, [edx + edx*2]
// 0052d215  8bc7                 mov eax, edi
// 0052d217  2bc2                 sub eax, edx
// 0052d219  742b                 je 0x52d246
// 0052d21b  68d4bd8200           push 0x82bdd4
// 0052d220  56                   push esi
// 0052d221  80f903               cmp cl, 3
// 0052d224  7418                 je 0x52d23e
// 0052d226  e825c8ffff           call 0x529a50
// 0052d22b  57                   push edi
// 0052d22c  56                   push esi
// 0052d22d  e8aefcffff           call 0x52cee0
// 0052d232  83c410               add esp, 0x10
// 0052d235  5f                   pop edi
// 0052d236  5e                   pop esi
// 0052d237  81c404030000         add esp, 0x304
// 0052d23d  c3                   ret 
// 0052d23e  e86dc7ffff           call 0x5299b0
// 0052d243  83c408               add esp, 8
// 0052d246  b856555555           mov eax, 0x55555556
// 0052d24b  f7ef                 imul edi
// 0052d24d  53                   push ebx
// 0052d24e  8bda                 mov ebx, edx
// 0052d250  c1eb1f               shr ebx, 0x1f
// 0052d253  03da                 add ebx, edx
// 0052d255  85db                 test ebx, ebx
// 0052d257  7e41                 jle 0x52d29a
// 0052d259  55                   push ebp
// 0052d25a  8d7c2416             lea edi, [esp + 0x16]
// 0052d25e  8beb                 mov ebp, ebx
// 0052d260  6a03                 push 3
// 0052d262  8d4c2414             lea ecx, [esp + 0x14]
// 0052d266  51                   push ecx
// 0052d267  56                   push esi
// 0052d268  e84378ffff           call 0x524ab0
// 0052d26d  6a03                 push 3
// 0052d26f  8d542420             lea edx, [esp + 0x20]
// 0052d273  52                   push edx
// 0052d274  56                   push esi
// 0052d275  e8060bffff           call 0x51dd80
// 0052d27a  8a442428             mov al, byte ptr [esp + 0x28]
// 0052d27e  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 0052d282  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 0052d286  8847fe               mov byte ptr [edi - 2], al
// 0052d289  884fff               mov byte ptr [edi - 1], cl
// 0052d28c  8817                 mov byte ptr [edi], dl
// 0052d28e  83c418               add esp, 0x18
// 0052d291  83c703               add edi, 3
// 0052d294  83ed01               sub ebp, 1
// 0052d297  75c7                 jne 0x52d260
// 0052d299  5d                   pop ebp
// 0052d29a  6a00                 push 0
// 0052d29c  56                   push esi
// 0052d29d  e83efcffff           call 0x52cee0
// 0052d2a2  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 0052d2a9  53                   push ebx
// 0052d2aa  8d44241c             lea eax, [esp + 0x1c]
// 0052d2ae  50                   push eax
// 0052d2af  57                   push edi
// 0052d2b0  56                   push esi
// 0052d2b1  e83a00ffff           call 0x51d2f0
// 0052d2b6  83c418               add esp, 0x18
// 0052d2b9  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0052d2c0  7540                 jne 0x52d302
// 0052d2c2  85ff                 test edi, edi
// 0052d2c4  743c                 je 0x52d302
// 0052d2c6  f6470810             test byte ptr [edi + 8], 0x10
// 0052d2ca  7436                 je 0x52d302
// 0052d2cc  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 0052d2d3  7615                 jbe 0x52d2ea
// 0052d2d5  68acbd8200           push 0x82bdac
// 0052d2da  56                   push esi
// 0052d2db  e870c7ffff           call 0x529a50
// 0052d2e0  83c408               add esp, 8
// 0052d2e3  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 0052d2ea  66395f16             cmp word ptr [edi + 0x16], bx
// 0052d2ee  7612                 jbe 0x52d302
// 0052d2f0  6880bd8200           push 0x82bd80
// 0052d2f5  56                   push esi
// 0052d2f6  e855c7ffff           call 0x529a50
// 0052d2fb  83c408               add esp, 8
// 0052d2fe  66895f16             mov word ptr [edi + 0x16], bx
// 0052d302  5b                   pop ebx
// 0052d303  5f                   pop edi
// 0052d304  5e                   pop esi
// 0052d305  81c404030000         add esp, 0x304
// 0052d30b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
