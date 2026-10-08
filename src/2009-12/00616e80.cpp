// roc 2009-12 00616e80  unit: seg_00610000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00616e80
//
// 00616e80  81ec04030000         sub esp, 0x304
// 00616e86  56                   push esi
// 00616e87  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 00616e8e  8b4668               mov eax, dword ptr [esi + 0x68]
// 00616e91  a801                 test al, 1
// 00616e93  7507                 jne 0x616e9c
// 00616e95  68a8909c00           push 0x9c90a8
// 00616e9a  eb31                 jmp 0x616ecd
// 00616e9c  a804                 test al, 4
// 00616e9e  7424                 je 0x616ec4
// 00616ea0  6890909c00           push 0x9c9090
// 00616ea5  56                   push esi
// 00616ea6  e89593ffff           call 0x610240
// 00616eab  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 00616eb2  50                   push eax
// 00616eb3  56                   push esi
// 00616eb4  e837fdffff           call 0x616bf0
// 00616eb9  83c410               add esp, 0x10
// 00616ebc  5e                   pop esi
// 00616ebd  81c404030000         add esp, 0x304
// 00616ec3  c3                   ret 
// 00616ec4  a802                 test al, 2
// 00616ec6  740e                 je 0x616ed6
// 00616ec8  6878909c00           push 0x9c9078
// 00616ecd  56                   push esi
// 00616ece  e8bd92ffff           call 0x610190
// 00616ed3  83c408               add esp, 8
// 00616ed6  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 00616edc  834e6802             or dword ptr [esi + 0x68], 2
// 00616ee0  f6c102               test cl, 2
// 00616ee3  7524                 jne 0x616f09
// 00616ee5  6850909c00           push 0x9c9050
// 00616eea  56                   push esi
// 00616eeb  e85093ffff           call 0x610240
// 00616ef0  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 00616ef7  51                   push ecx
// 00616ef8  56                   push esi
// 00616ef9  e8f2fcffff           call 0x616bf0
// 00616efe  83c410               add esp, 0x10
// 00616f01  5e                   pop esi
// 00616f02  81c404030000         add esp, 0x304
// 00616f08  c3                   ret 
// 00616f09  57                   push edi
// 00616f0a  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 00616f11  81ff00030000         cmp edi, 0x300
// 00616f17  7712                 ja 0x616f2b
// 00616f19  b8abaaaaaa           mov eax, 0xaaaaaaab
// 00616f1e  f7e7                 mul edi
// 00616f20  d1ea                 shr edx, 1
// 00616f22  8d1452               lea edx, [edx + edx*2]
// 00616f25  8bc7                 mov eax, edi
// 00616f27  2bc2                 sub eax, edx
// 00616f29  742b                 je 0x616f56
// 00616f2b  6838909c00           push 0x9c9038
// 00616f30  56                   push esi
// 00616f31  80f903               cmp cl, 3
// 00616f34  7418                 je 0x616f4e
// 00616f36  e80593ffff           call 0x610240
// 00616f3b  57                   push edi
// 00616f3c  56                   push esi
// 00616f3d  e8aefcffff           call 0x616bf0
// 00616f42  83c410               add esp, 0x10
// 00616f45  5f                   pop edi
// 00616f46  5e                   pop esi
// 00616f47  81c404030000         add esp, 0x304
// 00616f4d  c3                   ret 
// 00616f4e  e83d92ffff           call 0x610190
// 00616f53  83c408               add esp, 8
// 00616f56  b856555555           mov eax, 0x55555556
// 00616f5b  f7ef                 imul edi
// 00616f5d  53                   push ebx
// 00616f5e  8bda                 mov ebx, edx
// 00616f60  c1eb1f               shr ebx, 0x1f
// 00616f63  03da                 add ebx, edx
// 00616f65  85db                 test ebx, ebx
// 00616f67  7e41                 jle 0x616faa
// 00616f69  55                   push ebp
// 00616f6a  8d7c2416             lea edi, [esp + 0x16]
// 00616f6e  8beb                 mov ebp, ebx
// 00616f70  6a03                 push 3
// 00616f72  8d4c2414             lea ecx, [esp + 0x14]
// 00616f76  51                   push ecx
// 00616f77  56                   push esi
// 00616f78  e8133bffff           call 0x60aa90
// 00616f7d  6a03                 push 3
// 00616f7f  8d542420             lea edx, [esp + 0x20]
// 00616f83  52                   push edx
// 00616f84  56                   push esi
// 00616f85  e8e6c6feff           call 0x603670
// 00616f8a  8a442428             mov al, byte ptr [esp + 0x28]
// 00616f8e  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 00616f92  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 00616f96  8847fe               mov byte ptr [edi - 2], al
// 00616f99  884fff               mov byte ptr [edi - 1], cl
// 00616f9c  8817                 mov byte ptr [edi], dl
// 00616f9e  83c418               add esp, 0x18
// 00616fa1  83c703               add edi, 3
// 00616fa4  83ed01               sub ebp, 1
// 00616fa7  75c7                 jne 0x616f70
// 00616fa9  5d                   pop ebp
// 00616faa  6a00                 push 0
// 00616fac  56                   push esi
// 00616fad  e83efcffff           call 0x616bf0
// 00616fb2  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 00616fb9  53                   push ebx
// 00616fba  8d44241c             lea eax, [esp + 0x1c]
// 00616fbe  50                   push eax
// 00616fbf  57                   push edi
// 00616fc0  56                   push esi
// 00616fc1  e83abbfeff           call 0x602b00
// 00616fc6  83c418               add esp, 0x18
// 00616fc9  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 00616fd0  7540                 jne 0x617012
// 00616fd2  85ff                 test edi, edi
// 00616fd4  743c                 je 0x617012
// 00616fd6  f6470810             test byte ptr [edi + 8], 0x10
// 00616fda  7436                 je 0x617012
// 00616fdc  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 00616fe3  7615                 jbe 0x616ffa
// 00616fe5  6810909c00           push 0x9c9010
// 00616fea  56                   push esi
// 00616feb  e85092ffff           call 0x610240
// 00616ff0  83c408               add esp, 8
// 00616ff3  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 00616ffa  66395f16             cmp word ptr [edi + 0x16], bx
// 00616ffe  7612                 jbe 0x617012
// 00617000  68e48f9c00           push 0x9c8fe4
// 00617005  56                   push esi
// 00617006  e83592ffff           call 0x610240
// 0061700b  83c408               add esp, 8
// 0061700e  66895f16             mov word ptr [edi + 0x16], bx
// 00617012  5b                   pop ebx
// 00617013  5f                   pop edi
// 00617014  5e                   pop esi
// 00617015  81c404030000         add esp, 0x304
// 0061701b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
