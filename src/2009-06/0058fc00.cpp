// from server: 100% by auto
// roc 2009-06 0058fc00  unit: seg_00580000  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0058fc00
//
// 0058fc00  53                   push ebx
// 0058fc01  55                   push ebp
// 0058fc02  56                   push esi
// 0058fc03  8b742410             mov esi, dword ptr [esp + 0x10]
// 0058fc07  57                   push edi
// 0058fc08  33db                 xor ebx, ebx
// 0058fc0a  8d9b00000000         lea ebx, [ebx]
// 0058fc10  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058fc13  3d06010000           cmp eax, 0x106
// 0058fc18  7323                 jae 0x58fc3d
// 0058fc1a  e8b1fcffff           call 0x58f8d0
// 0058fc1f  8b4674               mov eax, dword ptr [esi + 0x74]
// 0058fc22  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0058fc26  3d06010000           cmp eax, 0x106
// 0058fc2b  7308                 jae 0x58fc35
// 0058fc2d  85ff                 test edi, edi
// 0058fc2f  0f84d6020000         je 0x58ff0b
// 0058fc35  85c0                 test eax, eax
// 0058fc37  0f84d5020000         je 0x58ff12
// 0058fc3d  83f803               cmp eax, 3
// 0058fc40  7249                 jb 0x58fc8b
// 0058fc42  8b4648               mov eax, dword ptr [esi + 0x48]
// 0058fc45  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0058fc48  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058fc4b  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0058fc4e  d3e0                 shl eax, cl
// 0058fc50  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0058fc53  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0058fc58  33c1                 xor eax, ecx
// 0058fc5a  234654               and eax, dword ptr [esi + 0x54]
// 0058fc5d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0058fc60  894648               mov dword ptr [esi + 0x48], eax
// 0058fc63  668b0441             mov ax, word ptr [ecx + eax*2]
// 0058fc67  23fa                 and edi, edx
// 0058fc69  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058fc6c  6689047a             mov word ptr [edx + edi*2], ax
// 0058fc70  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058fc73  234e34               and ecx, dword ptr [esi + 0x34]
// 0058fc76  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058fc79  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0058fc7d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0058fc80  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0058fc83  668b566c             mov dx, word ptr [esi + 0x6c]
// 0058fc87  66891441             mov word ptr [ecx + eax*2], dx
// 0058fc8b  85db                 test ebx, ebx
// 0058fc8d  7436                 je 0x58fcc5
// 0058fc8f  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058fc92  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0058fc95  2bc3                 sub eax, ebx
// 0058fc97  81e906010000         sub ecx, 0x106
// 0058fc9d  3bc1                 cmp eax, ecx
// 0058fc9f  7724                 ja 0x58fcc5
// 0058fca1  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0058fca7  83f902               cmp ecx, 2
// 0058fcaa  0f848e000000         je 0x58fd3e
// 0058fcb0  83f903               cmp ecx, 3
// 0058fcb3  0f848a000000         je 0x58fd43
// 0058fcb9  8bc3                 mov eax, ebx
// 0058fcbb  8bfe                 mov edi, esi
// 0058fcbd  e80efaffff           call 0x58f6d0
// 0058fcc2  894660               mov dword ptr [esi + 0x60], eax
// 0058fcc5  bd01000000           mov ebp, 1
// 0058fcca  837e6003             cmp dword ptr [esi + 0x60], 3
// 0058fcce  0f8254010000         jb 0x58fe28
// 0058fcd4  668b566c             mov dx, word ptr [esi + 0x6c]
// 0058fcd8  662b5670             sub dx, word ptr [esi + 0x70]
// 0058fcdc  8a4660               mov al, byte ptr [esi + 0x60]
// 0058fcdf  8bbea4160000         mov edi, dword ptr [esi + 0x16a4]
// 0058fce5  0fb7ca               movzx ecx, dx
// 0058fce8  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0058fcee  66890c57             mov word ptr [edi + edx*2], cx
// 0058fcf2  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0058fcf8  8bbea0160000         mov edi, dword ptr [esi + 0x16a0]
// 0058fcfe  2c03                 sub al, 3
// 0058fd00  88043a               mov byte ptr [edx + edi], al
// 0058fd03  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0058fd09  0fb6c0               movzx eax, al
// 0058fd0c  0fb69078368d00       movzx edx, byte ptr [eax + 0x8d3678]
// 0058fd13  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 0058fd1b  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 0058fd22  81c1ffff0000         add ecx, 0xffff
// 0058fd28  b800010000           mov eax, 0x100
// 0058fd2d  663bc8               cmp cx, ax
// 0058fd30  732f                 jae 0x58fd61
// 0058fd32  0fb7c9               movzx ecx, cx
// 0058fd35  0fb68178348d00       movzx eax, byte ptr [ecx + 0x8d3478]
// 0058fd3c  eb30                 jmp 0x58fd6e
// 0058fd3e  83f903               cmp ecx, 3
// 0058fd41  7582                 jne 0x58fcc5
// 0058fd43  bd01000000           mov ebp, 1
// 0058fd48  3bc5                 cmp eax, ebp
// 0058fd4a  0f857affffff         jne 0x58fcca
// 0058fd50  53                   push ebx
// 0058fd51  e8dafaffff           call 0x58f830
// 0058fd56  83c404               add esp, 4
// 0058fd59  894660               mov dword ptr [esi + 0x60], eax
// 0058fd5c  e969ffffff           jmp 0x58fcca
// 0058fd61  0fb7d1               movzx edx, cx
// 0058fd64  c1ea07               shr edx, 7
// 0058fd67  0fb68278358d00       movzx eax, byte ptr [edx + 0x8d3578]
// 0058fd6e  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 0058fd76  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0058fd7c  33c9                 xor ecx, ecx
// 0058fd7e  2bc5                 sub eax, ebp
// 0058fd80  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0058fd86  8b4660               mov eax, dword ptr [esi + 0x60]
// 0058fd89  0f94c1               sete cl
// 0058fd8c  294674               sub dword ptr [esi + 0x74], eax
// 0058fd8f  8bf9                 mov edi, ecx
// 0058fd91  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0058fd94  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0058fd9a  7760                 ja 0x58fdfc
// 0058fd9c  83f903               cmp ecx, 3
// 0058fd9f  725b                 jb 0x58fdfc
// 0058fda1  48                   dec eax
// 0058fda2  894660               mov dword ptr [esi + 0x60], eax
// 0058fda5  016e6c               add dword ptr [esi + 0x6c], ebp
// 0058fda8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058fdab  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 0058fdae  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0058fdb1  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058fdb4  0fb6440202           movzx eax, byte ptr [edx + eax + 2]
// 0058fdb9  d3e3                 shl ebx, cl
// 0058fdbb  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0058fdbe  33c3                 xor eax, ebx
// 0058fdc0  234654               and eax, dword ptr [esi + 0x54]
// 0058fdc3  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0058fdc6  23da                 and ebx, edx
// 0058fdc8  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058fdcb  894648               mov dword ptr [esi + 0x48], eax
// 0058fdce  668b0441             mov ax, word ptr [ecx + eax*2]
// 0058fdd2  6689045a             mov word ptr [edx + ebx*2], ax
// 0058fdd6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0058fdd9  234e34               and ecx, dword ptr [esi + 0x34]
// 0058fddc  8b5640               mov edx, dword ptr [esi + 0x40]
// 0058fddf  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0058fde3  8b4648               mov eax, dword ptr [esi + 0x48]
// 0058fde6  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0058fde9  668b566c             mov dx, word ptr [esi + 0x6c]
// 0058fded  66891441             mov word ptr [ecx + eax*2], dx
// 0058fdf1  834660ff             add dword ptr [esi + 0x60], -1
// 0058fdf5  75ae                 jne 0x58fda5
// 0058fdf7  e986000000           jmp 0x58fe82
// 0058fdfc  01466c               add dword ptr [esi + 0x6c], eax
// 0058fdff  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058fe02  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0058fe05  8d1408               lea edx, [eax + ecx]
// 0058fe08  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0058fe0b  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0058fe12  0fb602               movzx eax, byte ptr [edx]
// 0058fe15  894648               mov dword ptr [esi + 0x48], eax
// 0058fe18  0fb65201             movzx edx, byte ptr [edx + 1]
// 0058fe1c  d3e0                 shl eax, cl
// 0058fe1e  33c2                 xor eax, edx
// 0058fe20  234654               and eax, dword ptr [esi + 0x54]
// 0058fe23  894648               mov dword ptr [esi + 0x48], eax
// 0058fe26  eb5d                 jmp 0x58fe85
// 0058fe28  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058fe2b  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0058fe2e  8a0408               mov al, byte ptr [eax + ecx]
// 0058fe31  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0058fe37  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 0058fe3d  33ff                 xor edi, edi
// 0058fe3f  66893c51             mov word ptr [ecx + edx*2], di
// 0058fe43  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0058fe49  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0058fe4f  88040a               mov byte ptr [edx + ecx], al
// 0058fe52  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0058fe58  0fb6d0               movzx edx, al
// 0058fe5b  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 0058fe63  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 0058fe6a  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0058fe70  33c9                 xor ecx, ecx
// 0058fe72  2bc5                 sub eax, ebp
// 0058fe74  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0058fe7a  0f94c1               sete cl
// 0058fe7d  ff4e74               dec dword ptr [esi + 0x74]
// 0058fe80  8bf9                 mov edi, ecx
// 0058fe82  016e6c               add dword ptr [esi + 0x6c], ebp
// 0058fe85  85ff                 test edi, edi
// 0058fe87  0f8483fdffff         je 0x58fc10
// 0058fe8d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0058fe90  85c9                 test ecx, ecx
// 0058fe92  7c07                 jl 0x58fe9b
// 0058fe94  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058fe97  03c1                 add eax, ecx
// 0058fe99  eb02                 jmp 0x58fe9d
// 0058fe9b  33c0                 xor eax, eax
// 0058fe9d  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058fea0  6a00                 push 0
// 0058fea2  2bd1                 sub edx, ecx
// 0058fea4  52                   push edx
// 0058fea5  50                   push eax
// 0058fea6  56                   push esi
// 0058fea7  e834a00000           call 0x599ee0
// 0058feac  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058feaf  8b3e                 mov edi, dword ptr [esi]
// 0058feb1  89465c               mov dword ptr [esi + 0x5c], eax
// 0058feb4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058feb7  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0058feba  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0058febd  83c410               add esp, 0x10
// 0058fec0  3be9                 cmp ebp, ecx
// 0058fec2  7602                 jbe 0x58fec6
// 0058fec4  8be9                 mov ebp, ecx
// 0058fec6  85ed                 test ebp, ebp
// 0058fec8  7435                 je 0x58feff
// 0058feca  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0058fecd  8b570c               mov edx, dword ptr [edi + 0xc]
// 0058fed0  55                   push ebp
// 0058fed1  51                   push ecx
// 0058fed2  52                   push edx
// 0058fed3  e8de9f1800           call 0x719eb6
// 0058fed8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058fedb  016f0c               add dword ptr [edi + 0xc], ebp
// 0058fede  016810               add dword ptr [eax + 0x10], ebp
// 0058fee1  016f14               add dword ptr [edi + 0x14], ebp
// 0058fee4  296f10               sub dword ptr [edi + 0x10], ebp
// 0058fee7  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0058feea  296814               sub dword ptr [eax + 0x14], ebp
// 0058feed  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0058fef0  83c40c               add esp, 0xc
// 0058fef3  837f1400             cmp dword ptr [edi + 0x14], 0
// 0058fef7  7506                 jne 0x58feff
// 0058fef9  8b4708               mov eax, dword ptr [edi + 8]
// 0058fefc  894710               mov dword ptr [edi + 0x10], eax
// 0058feff  8b0e                 mov ecx, dword ptr [esi]
// 0058ff01  83791000             cmp dword ptr [ecx + 0x10], 0
// 0058ff05  0f8505fdffff         jne 0x58fc10
// 0058ff0b  5f                   pop edi
// 0058ff0c  5e                   pop esi
// 0058ff0d  5d                   pop ebp
// 0058ff0e  33c0                 xor eax, eax
// 0058ff10  5b                   pop ebx
// 0058ff11  c3                   ret 
// 0058ff12  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0058ff15  85c9                 test ecx, ecx
// 0058ff17  7c07                 jl 0x58ff20
// 0058ff19  8b4638               mov eax, dword ptr [esi + 0x38]
// 0058ff1c  03c1                 add eax, ecx
// 0058ff1e  eb02                 jmp 0x58ff22
// 0058ff20  33c0                 xor eax, eax
// 0058ff22  33d2                 xor edx, edx
// 0058ff24  83ff04               cmp edi, 4
// 0058ff27  0f94c2               sete dl
// 0058ff2a  52                   push edx
// 0058ff2b  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0058ff2e  2bd1                 sub edx, ecx
// 0058ff30  52                   push edx
// 0058ff31  50                   push eax
// 0058ff32  56                   push esi
// 0058ff33  e8a89f0000           call 0x599ee0
// 0058ff38  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0058ff3b  89465c               mov dword ptr [esi + 0x5c], eax
// 0058ff3e  8b06                 mov eax, dword ptr [esi]
// 0058ff40  83c410               add esp, 0x10
// 0058ff43  e8f8edffff           call 0x58ed40
// 0058ff48  8b0e                 mov ecx, dword ptr [esi]
// 0058ff4a  33c0                 xor eax, eax
// 0058ff4c  394110               cmp dword ptr [ecx + 0x10], eax
// 0058ff4f  750f                 jne 0x58ff60
// 0058ff51  83ff04               cmp edi, 4
// 0058ff54  0f95c0               setne al
// 0058ff57  5f                   pop edi
// 0058ff58  5e                   pop esi
// 0058ff59  5d                   pop ebp
// 0058ff5a  5b                   pop ebx
// 0058ff5b  48                   dec eax
// 0058ff5c  83e002               and eax, 2
// 0058ff5f  c3                   ret 
// 0058ff60  83ff04               cmp edi, 4
// 0058ff63  0f94c0               sete al
// 0058ff66  5f                   pop edi
// 0058ff67  5e                   pop esi
// 0058ff68  5d                   pop ebp
// 0058ff69  5b                   pop ebx
// 0058ff6a  8d440001             lea eax, [eax + eax + 1]
// 0058ff6e  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
