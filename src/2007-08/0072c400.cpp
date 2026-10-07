// roc 2007-08 0072c400  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072c400
//
// 0072c400  53                   push ebx
// 0072c401  55                   push ebp
// 0072c402  56                   push esi
// 0072c403  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072c407  57                   push edi
// 0072c408  33db                 xor ebx, ebx
// 0072c40a  8d9b00000000         lea ebx, [ebx]
// 0072c410  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c413  3d06010000           cmp eax, 0x106
// 0072c418  7323                 jae 0x72c43d
// 0072c41a  e8b1fcffff           call 0x72c0d0
// 0072c41f  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c422  3d06010000           cmp eax, 0x106
// 0072c427  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072c42b  7308                 jae 0x72c435
// 0072c42d  85ff                 test edi, edi
// 0072c42f  0f84d2020000         je 0x72c707
// 0072c435  85c0                 test eax, eax
// 0072c437  0f84d1020000         je 0x72c70e
// 0072c43d  83f803               cmp eax, 3
// 0072c440  7249                 jb 0x72c48b
// 0072c442  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072c445  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072c448  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c44b  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0072c44e  d3e0                 shl eax, cl
// 0072c450  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c453  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072c458  33c1                 xor eax, ecx
// 0072c45a  234654               and eax, dword ptr [esi + 0x54]
// 0072c45d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c460  894648               mov dword ptr [esi + 0x48], eax
// 0072c463  668b0441             mov ax, word ptr [ecx + eax*2]
// 0072c467  23fa                 and edi, edx
// 0072c469  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c46c  6689047a             mov word ptr [edx + edi*2], ax
// 0072c470  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c473  234e34               and ecx, dword ptr [esi + 0x34]
// 0072c476  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c479  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0072c47d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072c480  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c483  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072c487  66891441             mov word ptr [ecx + eax*2], dx
// 0072c48b  85db                 test ebx, ebx
// 0072c48d  7436                 je 0x72c4c5
// 0072c48f  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c492  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072c495  2bc3                 sub eax, ebx
// 0072c497  81e906010000         sub ecx, 0x106
// 0072c49d  3bc1                 cmp eax, ecx
// 0072c49f  7724                 ja 0x72c4c5
// 0072c4a1  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0072c4a7  83f902               cmp ecx, 2
// 0072c4aa  0f848b000000         je 0x72c53b
// 0072c4b0  83f903               cmp ecx, 3
// 0072c4b3  0f8487000000         je 0x72c540
// 0072c4b9  8bc3                 mov eax, ebx
// 0072c4bb  8bfe                 mov edi, esi
// 0072c4bd  e89e29ffff           call 0x71ee60
// 0072c4c2  894660               mov dword ptr [esi + 0x60], eax
// 0072c4c5  bd01000000           mov ebp, 1
// 0072c4ca  837e6003             cmp dword ptr [esi + 0x60], 3
// 0072c4ce  0f824f010000         jb 0x72c623
// 0072c4d4  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072c4d8  662b5670             sub dx, word ptr [esi + 0x70]
// 0072c4dc  8a4660               mov al, byte ptr [esi + 0x60]
// 0072c4df  8bbea4160000         mov edi, dword ptr [esi + 0x16a4]
// 0072c4e5  0fb7ca               movzx ecx, dx
// 0072c4e8  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072c4ee  66890c57             mov word ptr [edi + edx*2], cx
// 0072c4f2  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072c4f8  8bbea0160000         mov edi, dword ptr [esi + 0x16a0]
// 0072c4fe  2c03                 sub al, 3
// 0072c500  88043a               mov byte ptr [edx + edi], al
// 0072c503  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072c509  0fb6c0               movzx eax, al
// 0072c50c  0fb690c04e7e00       movzx edx, byte ptr [eax + 0x7e4ec0]
// 0072c513  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 0072c51b  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 0072c522  81c1ffff0000         add ecx, 0xffff
// 0072c528  6681f90001           cmp cx, 0x100
// 0072c52d  732b                 jae 0x72c55a
// 0072c52f  0fb7c1               movzx eax, cx
// 0072c532  0fb680c04c7e00       movzx eax, byte ptr [eax + 0x7e4cc0]
// 0072c539  eb2c                 jmp 0x72c567
// 0072c53b  83f903               cmp ecx, 3
// 0072c53e  7585                 jne 0x72c4c5
// 0072c540  bd01000000           mov ebp, 1
// 0072c545  3bc5                 cmp eax, ebp
// 0072c547  7581                 jne 0x72c4ca
// 0072c549  53                   push ebx
// 0072c54a  e8912affff           call 0x71efe0
// 0072c54f  83c404               add esp, 4
// 0072c552  894660               mov dword ptr [esi + 0x60], eax
// 0072c555  e970ffffff           jmp 0x72c4ca
// 0072c55a  0fb7c9               movzx ecx, cx
// 0072c55d  c1e907               shr ecx, 7
// 0072c560  0fb681c04d7e00       movzx eax, byte ptr [ecx + 0x7e4dc0]
// 0072c567  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 0072c56f  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 0072c575  33c0                 xor eax, eax
// 0072c577  2bd5                 sub edx, ebp
// 0072c579  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 0072c57f  0f94c0               sete al
// 0072c582  8bf8                 mov edi, eax
// 0072c584  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072c587  294674               sub dword ptr [esi + 0x74], eax
// 0072c58a  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0072c590  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072c593  7762                 ja 0x72c5f7
// 0072c595  83f903               cmp ecx, 3
// 0072c598  725d                 jb 0x72c5f7
// 0072c59a  83c0ff               add eax, -1
// 0072c59d  894660               mov dword ptr [esi + 0x60], eax
// 0072c5a0  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072c5a3  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c5a6  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c5a9  0fb6440a02           movzx eax, byte ptr [edx + ecx + 2]
// 0072c5ae  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 0072c5b1  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072c5b4  d3e3                 shl ebx, cl
// 0072c5b6  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c5b9  33c3                 xor eax, ebx
// 0072c5bb  234654               and eax, dword ptr [esi + 0x54]
// 0072c5be  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0072c5c1  23da                 and ebx, edx
// 0072c5c3  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c5c6  894648               mov dword ptr [esi + 0x48], eax
// 0072c5c9  668b0441             mov ax, word ptr [ecx + eax*2]
// 0072c5cd  6689045a             mov word ptr [edx + ebx*2], ax
// 0072c5d1  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c5d4  234e34               and ecx, dword ptr [esi + 0x34]
// 0072c5d7  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c5da  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0072c5de  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072c5e1  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c5e4  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072c5e8  66891441             mov word ptr [ecx + eax*2], dx
// 0072c5ec  834660ff             add dword ptr [esi + 0x60], -1
// 0072c5f0  75ae                 jne 0x72c5a0
// 0072c5f2  e987000000           jmp 0x72c67e
// 0072c5f7  01466c               add dword ptr [esi + 0x6c], eax
// 0072c5fa  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c5fd  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c600  8d1408               lea edx, [eax + ecx]
// 0072c603  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072c606  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0072c60d  0fb602               movzx eax, byte ptr [edx]
// 0072c610  894648               mov dword ptr [esi + 0x48], eax
// 0072c613  0fb65201             movzx edx, byte ptr [edx + 1]
// 0072c617  d3e0                 shl eax, cl
// 0072c619  33c2                 xor eax, edx
// 0072c61b  234654               and eax, dword ptr [esi + 0x54]
// 0072c61e  894648               mov dword ptr [esi + 0x48], eax
// 0072c621  eb5e                 jmp 0x72c681
// 0072c623  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c626  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c629  8a0408               mov al, byte ptr [eax + ecx]
// 0072c62c  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072c632  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 0072c638  66c704510000         mov word ptr [ecx + edx*2], 0
// 0072c63e  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072c644  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072c64a  88040a               mov byte ptr [edx + ecx], al
// 0072c64d  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072c653  0fb6d0               movzx edx, al
// 0072c656  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 0072c65e  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 0072c665  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0072c66b  33c9                 xor ecx, ecx
// 0072c66d  2bc5                 sub eax, ebp
// 0072c66f  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0072c675  0f94c1               sete cl
// 0072c678  834674ff             add dword ptr [esi + 0x74], -1
// 0072c67c  8bf9                 mov edi, ecx
// 0072c67e  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072c681  85ff                 test edi, edi
// 0072c683  0f8487fdffff         je 0x72c410
// 0072c689  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072c68c  85c9                 test ecx, ecx
// 0072c68e  7c07                 jl 0x72c697
// 0072c690  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072c693  03c1                 add eax, ecx
// 0072c695  eb02                 jmp 0x72c699
// 0072c697  33c0                 xor eax, eax
// 0072c699  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c69c  6a00                 push 0
// 0072c69e  2bd1                 sub edx, ecx
// 0072c6a0  52                   push edx
// 0072c6a1  50                   push eax
// 0072c6a2  56                   push esi
// 0072c6a3  e8e884ffff           call 0x724b90
// 0072c6a8  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c6ab  8b3e                 mov edi, dword ptr [esi]
// 0072c6ad  89465c               mov dword ptr [esi + 0x5c], eax
// 0072c6b0  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c6b3  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0072c6b6  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072c6b9  83c410               add esp, 0x10
// 0072c6bc  3be9                 cmp ebp, ecx
// 0072c6be  7602                 jbe 0x72c6c2
// 0072c6c0  8be9                 mov ebp, ecx
// 0072c6c2  85ed                 test ebp, ebp
// 0072c6c4  7435                 je 0x72c6fb
// 0072c6c6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0072c6c9  8b570c               mov edx, dword ptr [edi + 0xc]
// 0072c6cc  55                   push ebp
// 0072c6cd  51                   push ecx
// 0072c6ce  52                   push edx
// 0072c6cf  e87846f0ff           call 0x630d4c
// 0072c6d4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c6d7  016f0c               add dword ptr [edi + 0xc], ebp
// 0072c6da  016810               add dword ptr [eax + 0x10], ebp
// 0072c6dd  016f14               add dword ptr [edi + 0x14], ebp
// 0072c6e0  296f10               sub dword ptr [edi + 0x10], ebp
// 0072c6e3  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c6e6  296814               sub dword ptr [eax + 0x14], ebp
// 0072c6e9  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072c6ec  83c40c               add esp, 0xc
// 0072c6ef  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072c6f3  7506                 jne 0x72c6fb
// 0072c6f5  8b4708               mov eax, dword ptr [edi + 8]
// 0072c6f8  894710               mov dword ptr [edi + 0x10], eax
// 0072c6fb  8b0e                 mov ecx, dword ptr [esi]
// 0072c6fd  83791000             cmp dword ptr [ecx + 0x10], 0
// 0072c701  0f8509fdffff         jne 0x72c410
// 0072c707  5f                   pop edi
// 0072c708  5e                   pop esi
// 0072c709  5d                   pop ebp
// 0072c70a  33c0                 xor eax, eax
// 0072c70c  5b                   pop ebx
// 0072c70d  c3                   ret 
// 0072c70e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072c711  85c9                 test ecx, ecx
// 0072c713  7c07                 jl 0x72c71c
// 0072c715  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072c718  03c1                 add eax, ecx
// 0072c71a  eb02                 jmp 0x72c71e
// 0072c71c  33c0                 xor eax, eax
// 0072c71e  33d2                 xor edx, edx
// 0072c720  83ff04               cmp edi, 4
// 0072c723  0f94c2               sete dl
// 0072c726  52                   push edx
// 0072c727  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c72a  2bd1                 sub edx, ecx
// 0072c72c  52                   push edx
// 0072c72d  50                   push eax
// 0072c72e  56                   push esi
// 0072c72f  e85c84ffff           call 0x724b90
// 0072c734  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c737  89465c               mov dword ptr [esi + 0x5c], eax
// 0072c73a  8b06                 mov eax, dword ptr [esi]
// 0072c73c  83c410               add esp, 0x10
// 0072c73f  e85c26ffff           call 0x71eda0
// 0072c744  8b0e                 mov ecx, dword ptr [esi]
// 0072c746  33c0                 xor eax, eax
// 0072c748  394110               cmp dword ptr [ecx + 0x10], eax
// 0072c74b  7511                 jne 0x72c75e
// 0072c74d  83ff04               cmp edi, 4
// 0072c750  0f95c0               setne al
// 0072c753  5f                   pop edi
// 0072c754  5e                   pop esi
// 0072c755  5d                   pop ebp
// 0072c756  5b                   pop ebx
// 0072c757  83e801               sub eax, 1
// 0072c75a  83e002               and eax, 2
// 0072c75d  c3                   ret 
// 0072c75e  83ff04               cmp edi, 4
// 0072c761  0f94c0               sete al
// 0072c764  5f                   pop edi
// 0072c765  5e                   pop esi
// 0072c766  5d                   pop ebp
// 0072c767  5b                   pop ebx
// 0072c768  8d440001             lea eax, [eax + eax + 1]
// 0072c76c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
