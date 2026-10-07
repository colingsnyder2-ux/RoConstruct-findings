// roc 2008-06 007a73b0  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 877 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a73b0
//
// 007a73b0  53                   push ebx
// 007a73b1  55                   push ebp
// 007a73b2  56                   push esi
// 007a73b3  8b742410             mov esi, dword ptr [esp + 0x10]
// 007a73b7  57                   push edi
// 007a73b8  33db                 xor ebx, ebx
// 007a73ba  8d9b00000000         lea ebx, [ebx]
// 007a73c0  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a73c3  3d06010000           cmp eax, 0x106
// 007a73c8  7323                 jae 0x7a73ed
// 007a73ca  e8b1fcffff           call 0x7a7080
// 007a73cf  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a73d2  3d06010000           cmp eax, 0x106
// 007a73d7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007a73db  7308                 jae 0x7a73e5
// 007a73dd  85ff                 test edi, edi
// 007a73df  0f84d2020000         je 0x7a76b7
// 007a73e5  85c0                 test eax, eax
// 007a73e7  0f84d1020000         je 0x7a76be
// 007a73ed  83f803               cmp eax, 3
// 007a73f0  7249                 jb 0x7a743b
// 007a73f2  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a73f5  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007a73f8  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a73fb  8b7e34               mov edi, dword ptr [esi + 0x34]
// 007a73fe  d3e0                 shl eax, cl
// 007a7400  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a7403  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a7408  33c1                 xor eax, ecx
// 007a740a  234654               and eax, dword ptr [esi + 0x54]
// 007a740d  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a7410  894648               mov dword ptr [esi + 0x48], eax
// 007a7413  668b0441             mov ax, word ptr [ecx + eax*2]
// 007a7417  23fa                 and edi, edx
// 007a7419  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a741c  6689047a             mov word ptr [edx + edi*2], ax
// 007a7420  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a7423  234e34               and ecx, dword ptr [esi + 0x34]
// 007a7426  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a7429  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 007a742d  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a7430  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a7433  668b566c             mov dx, word ptr [esi + 0x6c]
// 007a7437  66891441             mov word ptr [ecx + eax*2], dx
// 007a743b  85db                 test ebx, ebx
// 007a743d  7436                 je 0x7a7475
// 007a743f  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7442  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007a7445  2bc3                 sub eax, ebx
// 007a7447  81e906010000         sub ecx, 0x106
// 007a744d  3bc1                 cmp eax, ecx
// 007a744f  7724                 ja 0x7a7475
// 007a7451  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 007a7457  83f902               cmp ecx, 2
// 007a745a  0f848b000000         je 0x7a74eb
// 007a7460  83f903               cmp ecx, 3
// 007a7463  0f8487000000         je 0x7a74f0
// 007a7469  8bc3                 mov eax, ebx
// 007a746b  8bfe                 mov edi, esi
// 007a746d  e8bef9ffff           call 0x7a6e30
// 007a7472  894660               mov dword ptr [esi + 0x60], eax
// 007a7475  bd01000000           mov ebp, 1
// 007a747a  837e6003             cmp dword ptr [esi + 0x60], 3
// 007a747e  0f824f010000         jb 0x7a75d3
// 007a7484  668b566c             mov dx, word ptr [esi + 0x6c]
// 007a7488  662b5670             sub dx, word ptr [esi + 0x70]
// 007a748c  8a4660               mov al, byte ptr [esi + 0x60]
// 007a748f  8bbea4160000         mov edi, dword ptr [esi + 0x16a4]
// 007a7495  0fb7ca               movzx ecx, dx
// 007a7498  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 007a749e  66890c57             mov word ptr [edi + edx*2], cx
// 007a74a2  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 007a74a8  8bbea0160000         mov edi, dword ptr [esi + 0x16a0]
// 007a74ae  2c03                 sub al, 3
// 007a74b0  88043a               mov byte ptr [edx + edi], al
// 007a74b3  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 007a74b9  0fb6c0               movzx eax, al
// 007a74bc  0fb690481d8700       movzx edx, byte ptr [eax + 0x871d48]
// 007a74c3  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 007a74cb  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 007a74d2  81c1ffff0000         add ecx, 0xffff
// 007a74d8  6681f90001           cmp cx, 0x100
// 007a74dd  732b                 jae 0x7a750a
// 007a74df  0fb7c1               movzx eax, cx
// 007a74e2  0fb680481b8700       movzx eax, byte ptr [eax + 0x871b48]
// 007a74e9  eb2c                 jmp 0x7a7517
// 007a74eb  83f903               cmp ecx, 3
// 007a74ee  7585                 jne 0x7a7475
// 007a74f0  bd01000000           mov ebp, 1
// 007a74f5  3bc5                 cmp eax, ebp
// 007a74f7  7581                 jne 0x7a747a
// 007a74f9  53                   push ebx
// 007a74fa  e8b1faffff           call 0x7a6fb0
// 007a74ff  83c404               add esp, 4
// 007a7502  894660               mov dword ptr [esi + 0x60], eax
// 007a7505  e970ffffff           jmp 0x7a747a
// 007a750a  0fb7c9               movzx ecx, cx
// 007a750d  c1e907               shr ecx, 7
// 007a7510  0fb681481c8700       movzx eax, byte ptr [ecx + 0x871c48]
// 007a7517  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 007a751f  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 007a7525  33c0                 xor eax, eax
// 007a7527  2bd5                 sub edx, ebp
// 007a7529  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 007a752f  0f94c0               sete al
// 007a7532  8bf8                 mov edi, eax
// 007a7534  8b4660               mov eax, dword ptr [esi + 0x60]
// 007a7537  294674               sub dword ptr [esi + 0x74], eax
// 007a753a  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 007a7540  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007a7543  7762                 ja 0x7a75a7
// 007a7545  83f903               cmp ecx, 3
// 007a7548  725d                 jb 0x7a75a7
// 007a754a  83c0ff               add eax, -1
// 007a754d  894660               mov dword ptr [esi + 0x60], eax
// 007a7550  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7553  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7556  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a7559  0fb6440a02           movzx eax, byte ptr [edx + ecx + 2]
// 007a755e  8b5e48               mov ebx, dword ptr [esi + 0x48]
// 007a7561  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007a7564  d3e3                 shl ebx, cl
// 007a7566  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a7569  33c3                 xor eax, ebx
// 007a756b  234654               and eax, dword ptr [esi + 0x54]
// 007a756e  8b5e34               mov ebx, dword ptr [esi + 0x34]
// 007a7571  23da                 and ebx, edx
// 007a7573  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a7576  894648               mov dword ptr [esi + 0x48], eax
// 007a7579  668b0441             mov ax, word ptr [ecx + eax*2]
// 007a757d  6689045a             mov word ptr [edx + ebx*2], ax
// 007a7581  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a7584  234e34               and ecx, dword ptr [esi + 0x34]
// 007a7587  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a758a  0fb71c4a             movzx ebx, word ptr [edx + ecx*2]
// 007a758e  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a7591  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a7594  668b566c             mov dx, word ptr [esi + 0x6c]
// 007a7598  66891441             mov word ptr [ecx + eax*2], dx
// 007a759c  834660ff             add dword ptr [esi + 0x60], -1
// 007a75a0  75ae                 jne 0x7a7550
// 007a75a2  e987000000           jmp 0x7a762e
// 007a75a7  01466c               add dword ptr [esi + 0x6c], eax
// 007a75aa  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a75ad  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a75b0  8d1408               lea edx, [eax + ecx]
// 007a75b3  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007a75b6  c7466000000000       mov dword ptr [esi + 0x60], 0
// 007a75bd  0fb602               movzx eax, byte ptr [edx]
// 007a75c0  894648               mov dword ptr [esi + 0x48], eax
// 007a75c3  0fb65201             movzx edx, byte ptr [edx + 1]
// 007a75c7  d3e0                 shl eax, cl
// 007a75c9  33c2                 xor eax, edx
// 007a75cb  234654               and eax, dword ptr [esi + 0x54]
// 007a75ce  894648               mov dword ptr [esi + 0x48], eax
// 007a75d1  eb5e                 jmp 0x7a7631
// 007a75d3  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a75d6  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a75d9  8a0408               mov al, byte ptr [eax + ecx]
// 007a75dc  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 007a75e2  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 007a75e8  66c704510000         mov word ptr [ecx + edx*2], 0
// 007a75ee  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 007a75f4  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 007a75fa  88040a               mov byte ptr [edx + ecx], al
// 007a75fd  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 007a7603  0fb6d0               movzx edx, al
// 007a7606  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 007a760e  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 007a7615  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 007a761b  33c9                 xor ecx, ecx
// 007a761d  2bc5                 sub eax, ebp
// 007a761f  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 007a7625  0f94c1               sete cl
// 007a7628  834674ff             add dword ptr [esi + 0x74], -1
// 007a762c  8bf9                 mov edi, ecx
// 007a762e  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7631  85ff                 test edi, edi
// 007a7633  0f8487fdffff         je 0x7a73c0
// 007a7639  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a763c  85c9                 test ecx, ecx
// 007a763e  7c07                 jl 0x7a7647
// 007a7640  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7643  03c1                 add eax, ecx
// 007a7645  eb02                 jmp 0x7a7649
// 007a7647  33c0                 xor eax, eax
// 007a7649  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a764c  6a00                 push 0
// 007a764e  2bd1                 sub edx, ecx
// 007a7650  52                   push edx
// 007a7651  50                   push eax
// 007a7652  56                   push esi
// 007a7653  e8a8e3ffff           call 0x7a5a00
// 007a7658  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a765b  8b3e                 mov edi, dword ptr [esi]
// 007a765d  89465c               mov dword ptr [esi + 0x5c], eax
// 007a7660  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7663  8b6814               mov ebp, dword ptr [eax + 0x14]
// 007a7666  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007a7669  83c410               add esp, 0x10
// 007a766c  3be9                 cmp ebp, ecx
// 007a766e  7602                 jbe 0x7a7672
// 007a7670  8be9                 mov ebp, ecx
// 007a7672  85ed                 test ebp, ebp
// 007a7674  7435                 je 0x7a76ab
// 007a7676  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007a7679  8b570c               mov edx, dword ptr [edi + 0xc]
// 007a767c  55                   push ebp
// 007a767d  51                   push ecx
// 007a767e  52                   push edx
// 007a767f  e85ca1efff           call 0x6a17e0
// 007a7684  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7687  016f0c               add dword ptr [edi + 0xc], ebp
// 007a768a  016810               add dword ptr [eax + 0x10], ebp
// 007a768d  016f14               add dword ptr [edi + 0x14], ebp
// 007a7690  296f10               sub dword ptr [edi + 0x10], ebp
// 007a7693  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7696  296814               sub dword ptr [eax + 0x14], ebp
// 007a7699  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 007a769c  83c40c               add esp, 0xc
// 007a769f  837f1400             cmp dword ptr [edi + 0x14], 0
// 007a76a3  7506                 jne 0x7a76ab
// 007a76a5  8b4708               mov eax, dword ptr [edi + 8]
// 007a76a8  894710               mov dword ptr [edi + 0x10], eax
// 007a76ab  8b0e                 mov ecx, dword ptr [esi]
// 007a76ad  83791000             cmp dword ptr [ecx + 0x10], 0
// 007a76b1  0f8509fdffff         jne 0x7a73c0
// 007a76b7  5f                   pop edi
// 007a76b8  5e                   pop esi
// 007a76b9  5d                   pop ebp
// 007a76ba  33c0                 xor eax, eax
// 007a76bc  5b                   pop ebx
// 007a76bd  c3                   ret 
// 007a76be  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a76c1  85c9                 test ecx, ecx
// 007a76c3  7c07                 jl 0x7a76cc
// 007a76c5  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a76c8  03c1                 add eax, ecx
// 007a76ca  eb02                 jmp 0x7a76ce
// 007a76cc  33c0                 xor eax, eax
// 007a76ce  33d2                 xor edx, edx
// 007a76d0  83ff04               cmp edi, 4
// 007a76d3  0f94c2               sete dl
// 007a76d6  52                   push edx
// 007a76d7  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a76da  2bd1                 sub edx, ecx
// 007a76dc  52                   push edx
// 007a76dd  50                   push eax
// 007a76de  56                   push esi
// 007a76df  e81ce3ffff           call 0x7a5a00
// 007a76e4  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a76e7  89465c               mov dword ptr [esi + 0x5c], eax
// 007a76ea  8b06                 mov eax, dword ptr [esi]
// 007a76ec  83c410               add esp, 0x10
// 007a76ef  e8acedffff           call 0x7a64a0
// 007a76f4  8b0e                 mov ecx, dword ptr [esi]
// 007a76f6  33c0                 xor eax, eax
// 007a76f8  394110               cmp dword ptr [ecx + 0x10], eax
// 007a76fb  7511                 jne 0x7a770e
// 007a76fd  83ff04               cmp edi, 4
// 007a7700  0f95c0               setne al
// 007a7703  5f                   pop edi
// 007a7704  5e                   pop esi
// 007a7705  5d                   pop ebp
// 007a7706  5b                   pop ebx
// 007a7707  83e801               sub eax, 1
// 007a770a  83e002               and eax, 2
// 007a770d  c3                   ret 
// 007a770e  83ff04               cmp edi, 4
// 007a7711  0f94c0               sete al
// 007a7714  5f                   pop edi
// 007a7715  5e                   pop esi
// 007a7716  5d                   pop ebp
// 007a7717  5b                   pop ebx
// 007a7718  8d440001             lea eax, [eax + eax + 1]
// 007a771c  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_fast)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
