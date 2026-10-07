// roc 2011-06 0056fad0  unit: seg_00560000  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056fad0
//
// 0056fad0  81ec04030000         sub esp, 0x304
// 0056fad6  56                   push esi
// 0056fad7  8bb4240c030000       mov esi, dword ptr [esp + 0x30c]
// 0056fade  8b4668               mov eax, dword ptr [esi + 0x68]
// 0056fae1  a801                 test al, 1
// 0056fae3  7507                 jne 0x56faec
// 0056fae5  680c65a800           push 0xa8650c
// 0056faea  eb31                 jmp 0x56fb1d
// 0056faec  a804                 test al, 4
// 0056faee  7424                 je 0x56fb14
// 0056faf0  68f464a800           push 0xa864f4
// 0056faf5  56                   push esi
// 0056faf6  e8e518ffff           call 0x5613e0
// 0056fafb  8b84241c030000       mov eax, dword ptr [esp + 0x31c]
// 0056fb02  50                   push eax
// 0056fb03  56                   push esi
// 0056fb04  e837fdffff           call 0x56f840
// 0056fb09  83c410               add esp, 0x10
// 0056fb0c  5e                   pop esi
// 0056fb0d  81c404030000         add esp, 0x304
// 0056fb13  c3                   ret 
// 0056fb14  a802                 test al, 2
// 0056fb16  740e                 je 0x56fb26
// 0056fb18  68dc64a800           push 0xa864dc
// 0056fb1d  56                   push esi
// 0056fb1e  e80d18ffff           call 0x561330
// 0056fb23  83c408               add esp, 8
// 0056fb26  8a8e26010000         mov cl, byte ptr [esi + 0x126]
// 0056fb2c  834e6802             or dword ptr [esi + 0x68], 2
// 0056fb30  f6c102               test cl, 2
// 0056fb33  7524                 jne 0x56fb59
// 0056fb35  68b464a800           push 0xa864b4
// 0056fb3a  56                   push esi
// 0056fb3b  e8a018ffff           call 0x5613e0
// 0056fb40  8b8c241c030000       mov ecx, dword ptr [esp + 0x31c]
// 0056fb47  51                   push ecx
// 0056fb48  56                   push esi
// 0056fb49  e8f2fcffff           call 0x56f840
// 0056fb4e  83c410               add esp, 0x10
// 0056fb51  5e                   pop esi
// 0056fb52  81c404030000         add esp, 0x304
// 0056fb58  c3                   ret 
// 0056fb59  57                   push edi
// 0056fb5a  8bbc2418030000       mov edi, dword ptr [esp + 0x318]
// 0056fb61  81ff00030000         cmp edi, 0x300
// 0056fb67  7712                 ja 0x56fb7b
// 0056fb69  b8abaaaaaa           mov eax, 0xaaaaaaab
// 0056fb6e  f7e7                 mul edi
// 0056fb70  d1ea                 shr edx, 1
// 0056fb72  8d1452               lea edx, [edx + edx*2]
// 0056fb75  8bc7                 mov eax, edi
// 0056fb77  2bc2                 sub eax, edx
// 0056fb79  742b                 je 0x56fba6
// 0056fb7b  689c64a800           push 0xa8649c
// 0056fb80  56                   push esi
// 0056fb81  80f903               cmp cl, 3
// 0056fb84  7418                 je 0x56fb9e
// 0056fb86  e85518ffff           call 0x5613e0
// 0056fb8b  57                   push edi
// 0056fb8c  56                   push esi
// 0056fb8d  e8aefcffff           call 0x56f840
// 0056fb92  83c410               add esp, 0x10
// 0056fb95  5f                   pop edi
// 0056fb96  5e                   pop esi
// 0056fb97  81c404030000         add esp, 0x304
// 0056fb9d  c3                   ret 
// 0056fb9e  e88d17ffff           call 0x561330
// 0056fba3  83c408               add esp, 8
// 0056fba6  b856555555           mov eax, 0x55555556
// 0056fbab  f7ef                 imul edi
// 0056fbad  53                   push ebx
// 0056fbae  8bda                 mov ebx, edx
// 0056fbb0  c1eb1f               shr ebx, 0x1f
// 0056fbb3  03da                 add ebx, edx
// 0056fbb5  85db                 test ebx, ebx
// 0056fbb7  7e41                 jle 0x56fbfa
// 0056fbb9  55                   push ebp
// 0056fbba  8d7c2416             lea edi, [esp + 0x16]
// 0056fbbe  8beb                 mov ebp, ebx
// 0056fbc0  6a03                 push 3
// 0056fbc2  8d4c2414             lea ecx, [esp + 0x14]
// 0056fbc6  51                   push ecx
// 0056fbc7  56                   push esi
// 0056fbc8  e8a313ffff           call 0x560f70
// 0056fbcd  6a03                 push 3
// 0056fbcf  8d542420             lea edx, [esp + 0x20]
// 0056fbd3  52                   push edx
// 0056fbd4  56                   push esi
// 0056fbd5  e8760cfeff           call 0x550850
// 0056fbda  8a442428             mov al, byte ptr [esp + 0x28]
// 0056fbde  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 0056fbe2  8a54242a             mov dl, byte ptr [esp + 0x2a]
// 0056fbe6  8847fe               mov byte ptr [edi - 2], al
// 0056fbe9  884fff               mov byte ptr [edi - 1], cl
// 0056fbec  8817                 mov byte ptr [edi], dl
// 0056fbee  83c418               add esp, 0x18
// 0056fbf1  83c703               add edi, 3
// 0056fbf4  83ed01               sub ebp, 1
// 0056fbf7  75c7                 jne 0x56fbc0
// 0056fbf9  5d                   pop ebp
// 0056fbfa  6a00                 push 0
// 0056fbfc  56                   push esi
// 0056fbfd  e83efcffff           call 0x56f840
// 0056fc02  8bbc2420030000       mov edi, dword ptr [esp + 0x320]
// 0056fc09  53                   push ebx
// 0056fc0a  8d44241c             lea eax, [esp + 0x1c]
// 0056fc0e  50                   push eax
// 0056fc0f  57                   push edi
// 0056fc10  56                   push esi
// 0056fc11  e86aa3feff           call 0x559f80
// 0056fc16  83c418               add esp, 0x18
// 0056fc19  80be2601000003       cmp byte ptr [esi + 0x126], 3
// 0056fc20  7540                 jne 0x56fc62
// 0056fc22  85ff                 test edi, edi
// 0056fc24  743c                 je 0x56fc62
// 0056fc26  f6470810             test byte ptr [edi + 8], 0x10
// 0056fc2a  7436                 je 0x56fc62
// 0056fc2c  66399e1a010000       cmp word ptr [esi + 0x11a], bx
// 0056fc33  7615                 jbe 0x56fc4a
// 0056fc35  687464a800           push 0xa86474
// 0056fc3a  56                   push esi
// 0056fc3b  e8a017ffff           call 0x5613e0
// 0056fc40  83c408               add esp, 8
// 0056fc43  66899e1a010000       mov word ptr [esi + 0x11a], bx
// 0056fc4a  66395f16             cmp word ptr [edi + 0x16], bx
// 0056fc4e  7612                 jbe 0x56fc62
// 0056fc50  684864a800           push 0xa86448
// 0056fc55  56                   push esi
// 0056fc56  e88517ffff           call 0x5613e0
// 0056fc5b  83c408               add esp, 8
// 0056fc5e  66895f16             mov word ptr [edi + 0x16], bx
// 0056fc62  5b                   pop ebx
// 0056fc63  5f                   pop edi
// 0056fc64  5e                   pop esi
// 0056fc65  81c404030000         add esp, 0x304
// 0056fc6b  c3                   ret 
// library libpng-1.2.5/pngrutil.c (function _png_handle_PLTE)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrutil.c
