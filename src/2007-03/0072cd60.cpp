// roc 2007-03 0072cd60  unit: seg_00720000  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0072cd60
//
// 0072cd60  53                   push ebx
// 0072cd61  55                   push ebp
// 0072cd62  56                   push esi
// 0072cd63  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072cd67  57                   push edi
// 0072cd68  33db                 xor ebx, ebx
// 0072cd6a  8d9b00000000         lea ebx, [ebx]
// 0072cd70  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072cd73  3d06010000           cmp eax, 0x106
// 0072cd78  7323                 jae 0x72cd9d
// 0072cd7a  e8b1fcffff           call 0x72ca30
// 0072cd7f  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072cd82  3d06010000           cmp eax, 0x106
// 0072cd87  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072cd8b  7308                 jae 0x72cd95
// 0072cd8d  85ff                 test edi, edi
// 0072cd8f  0f84d2020000         je 0x72d067
// 0072cd95  85c0                 test eax, eax
// 0072cd97  0f84d1020000         je 0x72d06e
// 0072cd9d  83f803               cmp eax, 3
// 0072cda0  7249                 jb 0x72cdeb
// 0072cda2  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072cda5  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072cda8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cdab  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0072cdae  d3e0                 shl eax, cl
// 0072cdb0  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072cdb3  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072cdb8  33c1                 xor eax, ecx
// 0072cdba  234654               and eax, dword ptr [esi + 0x54]
// 0072cdbd  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072cdc0  894648               mov dword ptr [esi + 0x48], eax
// 0072cdc3  668b0441             mov ax, word ptr [ecx + eax*2]
// 0072cdc7  23fa                 and edi, edx
// 0072cdc9  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072cdcc  6689047a             mov word ptr [edx + edi*2], ax
// 0072cdd0  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072cdd3  234e34               and ecx, dword ptr [esi + 0x34]
// 0072cdd6  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072cdd9  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0072cddd  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072cde0  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072cde3  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072cde7  66891441             mov word ptr [ecx + eax*2], dx
// 0072cdeb  85db                 test ebx, ebx
// 0072cded  7436                 je 0x72ce25
// 0072cdef  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cdf2  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072cdf5  2bc3                 sub eax, ebx
// 0072cdf7  81e906010000         sub ecx, 0x106
// 0072cdfd  3bc1                 cmp eax, ecx
// 0072cdff  7724                 ja 0x72ce25
// 0072ce01  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0072ce07  83f902               cmp ecx, 2
// 0072ce0a  0f848b000000         je 0x72ce9b
// 0072ce10  83f903               cmp ecx, 3
// 0072ce13  0f8487000000         je 0x72cea0
// 0072ce19  8bc3                 mov eax, ebx
// 0072ce1b  8bfe                 mov edi, esi
// 0072ce1d  e8bef9ffff           call 0x72c7e0
// 0072ce22  894660               mov dword ptr [esi + 0x60], eax
// 0072ce25  bd01000000           mov ebp, 1
// 0072ce2a  837e6003             cmp dword ptr [esi + 0x60], 3
// 0072ce2e  0f824f010000         jb 0x72cf83
// 0072ce34  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072ce38  662b5670             sub dx, word ptr [esi + 0x70]
// 0072ce3c  8a4660               mov al, byte ptr [esi + 0x60]
// 0072ce3f  8bbea4160000         mov edi, dword ptr [esi + 0x16a4]
// 0072ce45  0fb7ca               movzx ecx, dx
// 0072ce48  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072ce4e  66890c57             mov word ptr [edi + edx*2], cx
// 0072ce52  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072ce58  8bbea0160000         mov edi, dword ptr [esi + 0x16a0]
// 0072ce5e  2c03                 sub al, 3
// 0072ce60  88043a               mov byte ptr [edx + edi], al
// 0072ce63  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072ce69  0fb6c0               movzx eax, al
// 0072ce6c  0fb690e06a7e00       movzx edx, byte ptr [eax + 0x7e6ae0]
// 0072ce73  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 0072ce7b  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 0072ce82  81c1ffff0000         add ecx, 0xffff
// 0072ce88  6681f90001           cmp cx, 0x100
// 0072ce8d  732b                 jae 0x72ceba
// 0072ce8f  0fb7c1               movzx eax, cx
// 0072ce92  0fb680e0687e00       movzx eax, byte ptr [eax + 0x7e68e0]
// 0072ce99  eb2c                 jmp 0x72cec7
// 0072ce9b  83f903               cmp ecx, 3
// 0072ce9e  7585                 jne 0x72ce25
// 0072cea0  bd01000000           mov ebp, 1
// 0072cea5  3bc5                 cmp eax, ebp
// 0072cea7  7581                 jne 0x72ce2a
// 0072cea9  53                   push ebx
// 0072ceaa  e8b1faffff           call 0x72c960
// 0072ceaf  83c404               add esp, 4
// 0072ceb2  894660               mov dword ptr [esi + 0x60], eax
// 0072ceb5  e970ffffff           jmp 0x72ce2a
// 0072ceba  0fb7c9               movzx ecx, cx
// 0072cebd  c1e907               shr ecx, 7
// 0072cec0  0fb681e0697e00       movzx eax, byte ptr [ecx + 0x7e69e0]
// 0072cec7  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 0072cecf  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 0072ced5  33c0                 xor eax, eax
// 0072ced7  2bd5                 sub edx, ebp
// 0072ced9  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 0072cedf  0f94c0               sete al
// 0072cee2  8bf8                 mov edi, eax
// 0072cee4  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072cee7  294674               sub dword ptr [esi + 0x74], eax
// 0072ceea  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0072cef0  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072cef3  7762                 ja 0x72cf57
// 0072cef5  83f903               cmp ecx, 3
// 0072cef8  725d                 jb 0x72cf57
// 0072cefa  83c0ff               add eax, -1
// 0072cefd  894660               mov dword ptr [esi + 0x60], eax
// 0072cf00  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072cf03  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cf06  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072cf09  0fb6440a02           movzx eax, byte ptr [edx + ecx + 2]
// 0072cf0e  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 0072cf11  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072cf14  d3e3                 shl ebx, cl
// 0072cf16  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072cf19  33c3                 xor eax, ebx
// 0072cf1b  234654               and eax, dword ptr [esi + 0x54]
// 0072cf1e  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 0072cf21  23da                 and ebx, edx
// 0072cf23  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072cf26  894648               mov dword ptr [esi + 0x48], eax
// 0072cf29  668b0441             mov ax, word ptr [ecx + eax*2]
// 0072cf2d  6689045a             mov word ptr [edx + ebx*2], ax
// 0072cf31  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072cf34  234e34               and ecx, dword ptr [esi + 0x34]
// 0072cf37  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072cf3a  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 0072cf3e  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072cf41  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072cf44  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072cf48  66891441             mov word ptr [ecx + eax*2], dx
// 0072cf4c  834660ff             add dword ptr [esi + 0x60], -1
// 0072cf50  75ae                 jne 0x72cf00
// 0072cf52  e987000000           jmp 0x72cfde
// 0072cf57  01466c               add dword ptr [esi + 0x6c], eax
// 0072cf5a  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cf5d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072cf60  8d1408               lea edx, [eax + ecx]
// 0072cf63  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072cf66  c7466000000000       mov dword ptr [esi + 0x60], 0
// 0072cf6d  0fb602               movzx eax, byte ptr [edx]
// 0072cf70  894648               mov dword ptr [esi + 0x48], eax
// 0072cf73  0fb65201             movzx edx, byte ptr [edx + 1]
// 0072cf77  d3e0                 shl eax, cl
// 0072cf79  33c2                 xor eax, edx
// 0072cf7b  234654               and eax, dword ptr [esi + 0x54]
// 0072cf7e  894648               mov dword ptr [esi + 0x48], eax
// 0072cf81  eb5e                 jmp 0x72cfe1
// 0072cf83  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cf86  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072cf89  8a0408               mov al, byte ptr [eax + ecx]
// 0072cf8c  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072cf92  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 0072cf98  66c704510000         mov word ptr [ecx + edx*2], 0
// 0072cf9e  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072cfa4  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072cfaa  88040a               mov byte ptr [edx + ecx], al
// 0072cfad  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072cfb3  0fb6d0               movzx edx, al
// 0072cfb6  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 0072cfbe  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 0072cfc5  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0072cfcb  33c9                 xor ecx, ecx
// 0072cfcd  2bc5                 sub eax, ebp
// 0072cfcf  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0072cfd5  0f94c1               sete cl
// 0072cfd8  834674ff             add dword ptr [esi + 0x74], -1
// 0072cfdc  8bf9                 mov edi, ecx
// 0072cfde  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072cfe1  85ff                 test edi, edi
// 0072cfe3  0f8487fdffff         je 0x72cd70
// 0072cfe9  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072cfec  85c9                 test ecx, ecx
// 0072cfee  7c07                 jl 0x72cff7
// 0072cff0  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cff3  03c1                 add eax, ecx
// 0072cff5  eb02                 jmp 0x72cff9
// 0072cff7  33c0                 xor eax, eax
// 0072cff9  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cffc  6a00                 push 0
// 0072cffe  2bd1                 sub edx, ecx
// 0072d000  52                   push edx
// 0072d001  50                   push eax
// 0072d002  56                   push esi
// 0072d003  e8688effff           call 0x725e70
// 0072d008  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d00b  8b3e                 mov edi, dword ptr [esi]
// 0072d00d  89465c               mov dword ptr [esi + 0x5c], eax
// 0072d010  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d013  8b6814               mov ebp, dword ptr [eax + 0x14]
// 0072d016  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072d019  83c410               add esp, 0x10
// 0072d01c  3be9                 cmp ebp, ecx
// 0072d01e  7602                 jbe 0x72d022
// 0072d020  8be9                 mov ebp, ecx
// 0072d022  85ed                 test ebp, ebp
// 0072d024  7435                 je 0x72d05b
// 0072d026  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0072d029  8b570c               mov edx, dword ptr [edi + 0xc]
// 0072d02c  55                   push ebp
// 0072d02d  51                   push ecx
// 0072d02e  52                   push edx
// 0072d02f  e8ae21efff           call 0x61f1e2
// 0072d034  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d037  016f0c               add dword ptr [edi + 0xc], ebp
// 0072d03a  016810               add dword ptr [eax + 0x10], ebp
// 0072d03d  016f14               add dword ptr [edi + 0x14], ebp
// 0072d040  296f10               sub dword ptr [edi + 0x10], ebp
// 0072d043  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072d046  296814               sub dword ptr [eax + 0x14], ebp
// 0072d049  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072d04c  83c40c               add esp, 0xc
// 0072d04f  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072d053  7506                 jne 0x72d05b
// 0072d055  8b4708               mov eax, dword ptr [edi + 8]
// 0072d058  894710               mov dword ptr [edi + 0x10], eax
// 0072d05b  8b0e                 mov ecx, dword ptr [esi]
// 0072d05d  83791000             cmp dword ptr [ecx + 0x10], 0
// 0072d061  0f8509fdffff         jne 0x72cd70
// 0072d067  5f                   pop edi
// 0072d068  5e                   pop esi
// 0072d069  5d                   pop ebp
// 0072d06a  33c0                 xor eax, eax
// 0072d06c  5b                   pop ebx
// 0072d06d  c3                   ret 
// 0072d06e  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072d071  85c9                 test ecx, ecx
// 0072d073  7c07                 jl 0x72d07c
// 0072d075  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072d078  03c1                 add eax, ecx
// 0072d07a  eb02                 jmp 0x72d07e
// 0072d07c  33c0                 xor eax, eax
// 0072d07e  33d2                 xor edx, edx
// 0072d080  83ff04               cmp edi, 4
// 0072d083  0f94c2               sete dl
// 0072d086  52                   push edx
// 0072d087  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072d08a  2bd1                 sub edx, ecx
// 0072d08c  52                   push edx
// 0072d08d  50                   push eax
// 0072d08e  56                   push esi
// 0072d08f  e8dc8dffff           call 0x725e70
// 0072d094  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072d097  89465c               mov dword ptr [esi + 0x5c], eax
// 0072d09a  8b06                 mov eax, dword ptr [esi]
// 0072d09c  83c410               add esp, 0x10
// 0072d09f  e8acedffff           call 0x72be50
// 0072d0a4  8b0e                 mov ecx, dword ptr [esi]
// 0072d0a6  33c0                 xor eax, eax
// 0072d0a8  394110               cmp dword ptr [ecx + 0x10], eax
// 0072d0ab  7511                 jne 0x72d0be
// 0072d0ad  83ff04               cmp edi, 4
// 0072d0b0  0f95c0               setne al
// 0072d0b3  5f                   pop edi
// 0072d0b4  5e                   pop esi
// 0072d0b5  5d                   pop ebp
// 0072d0b6  5b                   pop ebx
// 0072d0b7  83e801               sub eax, 1
// 0072d0ba  83e002               and eax, 2
// 0072d0bd  c3                   ret 
// 0072d0be  83ff04               cmp edi, 4
// 0072d0c1  0f94c0               sete al
// 0072d0c4  5f                   pop edi
// 0072d0c5  5e                   pop esi
// 0072d0c6  5d                   pop ebp
// 0072d0c7  5b                   pop ebx
// 0072d0c8  8d440001             lea eax, [eax + eax + 1]
// 0072d0cc  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
