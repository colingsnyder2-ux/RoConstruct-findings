// roc 2009-06 00594e70  unit: seg_00590000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00594e70
//
// 00594e70  81ec04030000         sub esp, 0x304
// 00594e76  56                   push esi
// 00594e77  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 00594e7e  8b4668               mov eax, dword ptr [esi + 0x68]
// 00594e81  a801                 test al, 1
// 00594e83  7507                 jne 0x594e8c
// 00594e85  6818228d00           push 0x8d2218
// 00594e8a  eb31                 jmp 0x594ebd
// 00594e8c  a804                 test al, 4
// 00594e8e  7424                 je 0x594eb4
// 00594e90  6800228d00           push 0x8d2200
// 00594e95  56                   push esi
// 00594e96  e87593ffff           call 0x58e210
// 00594e9b  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 00594ea2  50                   push eax
// 00594ea3  56                   push esi
// 00594ea4  e837fdffff           call 0x594be0
// 00594ea9  83c410               add esp, 0x10
// 00594eac  5e                   pop esi
// 00594ead  81c404030000         add esp, 0x304
// 00594eb3  c3                   ret 
// 00594eb4  a802                 test al, 2
// 00594eb6  740e                 je 0x594ec6
// 00594eb8  68e8218d00           push 0x8d21e8
// 00594ebd  56                   push esi
// 00594ebe  e89d92ffff           call 0x58e160
// 00594ec3  83c408               add esp, 8
// 00594ec6  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 00594ecc  834e6802             or dword ptr [esi + 0x68], 2
// 00594ed0  f6c102               test cl, 2
// 00594ed3  7524                 jne 0x594ef9
// 00594ed5  68c0218d00           push 0x8d21c0
// 00594eda  56                   push esi
// 00594edb  e83093ffff           call 0x58e210
// 00594ee0  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 00594ee7  51                   push ecx
// 00594ee8  56                   push esi
// 00594ee9  e8f2fcffff           call 0x594be0
// 00594eee  83c410               add esp, 0x10
// 00594ef1  5e                   pop esi
// 00594ef2  81c404030000         add esp, 0x304
// 00594ef8  c3                   ret 
// 00594ef9  57                   push edi
// 00594efa  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 00594f01  81ff00030000         cmp edi, 0x300
// 00594f07  7712                 ja 0x594f1b
// 00594f09  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00594f0e  f7e7                 mul edi
// 00594f10  d1ea                 shr edx, 1
// 00594f12  8d1452               lea edx, [edx + edx*2]
// 00594f15  8bc7                 mov eax, edi
// 00594f17  2bc2                 sub eax, edx
// 00594f19  742b                 je 0x594f46
// 00594f1b  68a8218d00           push 0x8d21a8
// 00594f20  56                   push esi
// 00594f21  80f903               cmp cl, 3
// 00594f24  7418                 je 0x594f3e
// 00594f26  e8e592ffff           call 0x58e210
// 00594f2b  57                   push edi
// 00594f2c  56                   push esi
// 00594f2d  e8aefcffff           call 0x594be0
// 00594f32  83c410               add esp, 0x10
// 00594f35  5f                   pop edi
// 00594f36  5e                   pop esi
// 00594f37  81c404030000         add esp, 0x304
// 00594f3d  c3                   ret 
// 00594f3e  e81d92ffff           call 0x58e160
// 00594f43  83c408               add esp, 8
// 00594f46  b856555555           mov eax, 0x55555556
// 00594f4b  f7ef                 imul edi
// 00594f4d  53                   push ebx
// 00594f4e  8bda                 mov ebx, edx
// 00594f50  c1eb1f               shr ebx, 0x1f
// 00594f53  03da                 add ebx, edx
// 00594f55  85db                 test ebx, ebx
// 00594f57  7e41                 jle 0x594f9a
// 00594f59  55                   push ebp
// 00594f5a  8d7c2416             lea edi, [esp + 0x16]
// 00594f5e  8beb                 mov ebp, ebx
// 00594f60  6a03                 push 3
// 00594f62  8d4c2414             lea ecx, [esp + 0x14]
// 00594f66  51                   push ecx
// 00594f67  56                   push esi
// 00594f68  e8933dffff           call 0x588d00
// 00594f6d  6a03                 push 3
// 00594f6f  8d542420             lea edx, [esp + 0x20]
// 00594f73  52                   push edx
// 00594f74  56                   push esi
// 00594f75  e846c9feff           call 0x5818c0
// 00594f7a  8a442428             mov al, byte ptr [esp + 0x28]
// 00594f7e  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 00594f82  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 00594f86  8847fe               mov byte ptr [edi - 2], al
// 00594f89  884fff               mov byte ptr [edi - 1], cl
// 00594f8c  8817                 mov byte ptr [edi], dl
// 00594f8e  83c418               add esp, 0x18
// 00594f91  83c703               add edi, 3
// 00594f94  83ed01               sub ebp, 1
// 00594f97  75c7                 jne 0x594f60
// 00594f99  5d                   pop ebp
// 00594f9a  6a00                 push 0
// 00594f9c  56                   push esi
// 00594f9d  e83efcffff           call 0x594be0
// 00594fa2  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 00594fa9  53                   push ebx
// 00594faa  8d44241c             lea eax, [esp + 0x1c]
// 00594fae  50                   push eax
// 00594faf  57                   push edi
// 00594fb0  56                   push esi
// 00594fb1  e89abdfeff           call 0x580d50
// 00594fb6  83c418               add esp, 0x18
// 00594fb9  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00594fc0  7540                 jne 0x595002
// 00594fc2  85ff                 test edi, edi
// 00594fc4  743c                 je 0x595002
// 00594fc6  f6470810             test byte ptr [edi + 8], 0x10
// 00594fca  7436                 je 0x595002
// 00594fcc  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 00594fd3  7615                 jbe 0x594fea
// 00594fd5  6880218d00           push 0x8d2180
// 00594fda  56                   push esi
// 00594fdb  e83092ffff           call 0x58e210
// 00594fe0  83c408               add esp, 8
// 00594fe3  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 00594fea  66395f16             cmp word ptr [edi + 0x16], bx
// 00594fee  7612                 jbe 0x595002
// 00594ff0  6854218d00           push 0x8d2154
// 00594ff5  56                   push esi
// 00594ff6  e81592ffff           call 0x58e210
// 00594ffb  83c408               add esp, 8
// 00594ffe  66895f16             mov word ptr [edi + 0x16], bx
// 00595002  5b                   pop ebx
// 00595003  5f                   pop edi
// 00595004  5e                   pop esi
// 00595005  81c404030000         add esp, 0x304
// 0059500b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
