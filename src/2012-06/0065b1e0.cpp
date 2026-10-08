// from server: 100% by auto
// roc 2012-06 0065b1e0  unit: seg_00650000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0065b1e0
//
// 0065b1e0  81ec04030000         sub esp, 0x304
// 0065b1e6  56                   push esi
// 0065b1e7  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 0065b1ee  8b4668               mov eax, dword ptr [esi + 0x68]
// 0065b1f1  a801                 test al, 1
// 0065b1f3  7507                 jne 0x65b1fc
// 0065b1f5  685ca3b800           push 0xb8a35c
// 0065b1fa  eb31                 jmp 0x65b22d
// 0065b1fc  a804                 test al, 4
// 0065b1fe  7424                 je 0x65b224
// 0065b200  6844a3b800           push 0xb8a344
// 0065b205  56                   push esi
// 0065b206  e85530ffff           call 0x64e260
// 0065b20b  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 0065b212  50                   push eax
// 0065b213  56                   push esi
// 0065b214  e837fdffff           call 0x65af50
// 0065b219  83c410               add esp, 0x10
// 0065b21c  5e                   pop esi
// 0065b21d  81c404030000         add esp, 0x304
// 0065b223  c3                   ret 
// 0065b224  a802                 test al, 2
// 0065b226  740e                 je 0x65b236
// 0065b228  682ca3b800           push 0xb8a32c
// 0065b22d  56                   push esi
// 0065b22e  e87d2fffff           call 0x64e1b0
// 0065b233  83c408               add esp, 8
// 0065b236  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0065b23c  834e6802             or dword ptr [esi + 0x68], 2
// 0065b240  f6c102               test cl, 2
// 0065b243  7524                 jne 0x65b269
// 0065b245  6804a3b800           push 0xb8a304
// 0065b24a  56                   push esi
// 0065b24b  e81030ffff           call 0x64e260
// 0065b250  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 0065b257  51                   push ecx
// 0065b258  56                   push esi
// 0065b259  e8f2fcffff           call 0x65af50
// 0065b25e  83c410               add esp, 0x10
// 0065b261  5e                   pop esi
// 0065b262  81c404030000         add esp, 0x304
// 0065b268  c3                   ret 
// 0065b269  57                   push edi
// 0065b26a  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 0065b271  81ff00030000         cmp edi, 0x300
// 0065b277  7712                 ja 0x65b28b
// 0065b279  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0065b27e  f7e7                 mul edi
// 0065b280  d1ea                 shr edx, 1
// 0065b282  8d1452               lea edx, [edx + edx*2]
// 0065b285  8bc7                 mov eax, edi
// 0065b287  2bc2                 sub eax, edx
// 0065b289  742b                 je 0x65b2b6
// 0065b28b  68eca2b800           push 0xb8a2ec
// 0065b290  56                   push esi
// 0065b291  80f903               cmp cl, 3
// 0065b294  7418                 je 0x65b2ae
// 0065b296  e8c52fffff           call 0x64e260
// 0065b29b  57                   push edi
// 0065b29c  56                   push esi
// 0065b29d  e8aefcffff           call 0x65af50
// 0065b2a2  83c410               add esp, 0x10
// 0065b2a5  5f                   pop edi
// 0065b2a6  5e                   pop esi
// 0065b2a7  81c404030000         add esp, 0x304
// 0065b2ad  c3                   ret 
// 0065b2ae  e8fd2effff           call 0x64e1b0
// 0065b2b3  83c408               add esp, 8
// 0065b2b6  b856555555           mov eax, 0x55555556
// 0065b2bb  f7ef                 imul edi
// 0065b2bd  53                   push ebx
// 0065b2be  8bda                 mov ebx, edx
// 0065b2c0  c1eb1f               shr ebx, 0x1f
// 0065b2c3  03da                 add ebx, edx
// 0065b2c5  85db                 test ebx, ebx
// 0065b2c7  7e41                 jle 0x65b30a
// 0065b2c9  55                   push ebp
// 0065b2ca  8d7c2416             lea edi, [esp + 0x16]
// 0065b2ce  8beb                 mov ebp, ebx
// 0065b2d0  6a03                 push 3
// 0065b2d2  8d4c2414             lea ecx, [esp + 0x14]
// 0065b2d6  51                   push ecx
// 0065b2d7  56                   push esi
// 0065b2d8  e8132bffff           call 0x64ddf0
// 0065b2dd  6a03                 push 3
// 0065b2df  8d542420             lea edx, [esp + 0x20]
// 0065b2e3  52                   push edx
// 0065b2e4  56                   push esi
// 0065b2e5  e8a62bfeff           call 0x63de90
// 0065b2ea  8a442428             mov al, byte ptr [esp + 0x28]
// 0065b2ee  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 0065b2f2  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 0065b2f6  8847fe               mov byte ptr [edi - 2], al
// 0065b2f9  884fff               mov byte ptr [edi - 1], cl
// 0065b2fc  8817                 mov byte ptr [edi], dl
// 0065b2fe  83c418               add esp, 0x18
// 0065b301  83c703               add edi, 3
// 0065b304  83ed01               sub ebp, 1
// 0065b307  75c7                 jne 0x65b2d0
// 0065b309  5d                   pop ebp
// 0065b30a  6a00                 push 0
// 0065b30c  56                   push esi
// 0065b30d  e83efcffff           call 0x65af50
// 0065b312  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 0065b319  53                   push ebx
// 0065b31a  8d44241c             lea eax, [esp + 0x1c]
// 0065b31e  50                   push eax
// 0065b31f  57                   push edi
// 0065b320  56                   push esi
// 0065b321  e8dabafeff           call 0x646e00
// 0065b326  83c418               add esp, 0x18
// 0065b329  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0065b330  7540                 jne 0x65b372
// 0065b332  85ff                 test edi, edi
// 0065b334  743c                 je 0x65b372
// 0065b336  f6470810             test byte ptr [edi + 8], 0x10
// 0065b33a  7436                 je 0x65b372
// 0065b33c  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 0065b343  7615                 jbe 0x65b35a
// 0065b345  68c4a2b800           push 0xb8a2c4
// 0065b34a  56                   push esi
// 0065b34b  e8102fffff           call 0x64e260
// 0065b350  83c408               add esp, 8
// 0065b353  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 0065b35a  66395f16             cmp word ptr [edi + 0x16], bx
// 0065b35e  7612                 jbe 0x65b372
// 0065b360  6898a2b800           push 0xb8a298
// 0065b365  56                   push esi
// 0065b366  e8f52effff           call 0x64e260
// 0065b36b  83c408               add esp, 8
// 0065b36e  66895f16             mov word ptr [edi + 0x16], bx
// 0065b372  5b                   pop ebx
// 0065b373  5f                   pop edi
// 0065b374  5e                   pop esi
// 0065b375  81c404030000         add esp, 0x304
// 0065b37b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
