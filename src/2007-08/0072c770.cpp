// roc 2007-08 0072c770  unit: boost::signals::detail::Ubasic_connection::?$sp_counted_impl_p  size: 1153 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072c770
//
// 0072c770  51                   push ecx
// 0072c771  53                   push ebx
// 0072c772  55                   push ebp
// 0072c773  56                   push esi
// 0072c774  8b742414             mov esi, dword ptr [esp + 0x14]
// 0072c778  57                   push edi
// 0072c779  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0072c781  bd01000000           mov ebp, 1
// 0072c786  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c789  3d06010000           cmp eax, 0x106
// 0072c78e  7323                 jae 0x72c7b3
// 0072c790  e83bf9ffff           call 0x72c0d0
// 0072c795  8b4674               mov eax, dword ptr [esi + 0x74]
// 0072c798  3d06010000           cmp eax, 0x106
// 0072c79d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0072c7a1  7308                 jae 0x72c7ab
// 0072c7a3  85ff                 test edi, edi
// 0072c7a5  0f849d020000         je 0x72ca48
// 0072c7ab  85c0                 test eax, eax
// 0072c7ad  0f848d030000         je 0x72cb40
// 0072c7b3  83f803               cmp eax, 3
// 0072c7b6  724d                 jb 0x72c805
// 0072c7b8  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072c7bb  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072c7be  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c7c1  8b7e34               mov edi, dword ptr [esi + 0x34]
// 0072c7c4  d3e0                 shl eax, cl
// 0072c7c6  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c7c9  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072c7ce  33c1                 xor eax, ecx
// 0072c7d0  234654               and eax, dword ptr [esi + 0x54]
// 0072c7d3  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c7d6  894648               mov dword ptr [esi + 0x48], eax
// 0072c7d9  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0072c7dd  23fa                 and edi, edx
// 0072c7df  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c7e2  6689047a             mov word ptr [edx + edi*2], ax
// 0072c7e6  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c7e9  234e34               and ecx, dword ptr [esi + 0x34]
// 0072c7ec  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c7ef  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0072c7f3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0072c7f6  8b5644               mov edx, dword ptr [esi + 0x44]
// 0072c7f9  89442410             mov dword ptr [esp + 0x10], eax
// 0072c7fd  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 0072c801  6689044a             mov word ptr [edx + ecx*2], ax
// 0072c805  8b5670               mov edx, dword ptr [esi + 0x70]
// 0072c808  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 0072c80b  895664               mov dword ptr [esi + 0x64], edx
// 0072c80e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0072c812  85d2                 test edx, edx
// 0072c814  bb02000000           mov ebx, 2
// 0072c819  894e78               mov dword ptr [esi + 0x78], ecx
// 0072c81c  895e60               mov dword ptr [esi + 0x60], ebx
// 0072c81f  7471                 je 0x72c892
// 0072c821  8bc1                 mov eax, ecx
// 0072c823  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 0072c829  7367                 jae 0x72c892
// 0072c82b  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c82e  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 0072c831  2bc2                 sub eax, edx
// 0072c833  81e906010000         sub ecx, 0x106
// 0072c839  3bc1                 cmp eax, ecx
// 0072c83b  7755                 ja 0x72c892
// 0072c83d  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 0072c843  3bcb                 cmp ecx, ebx
// 0072c845  7410                 je 0x72c857
// 0072c847  83f903               cmp ecx, 3
// 0072c84a  7410                 je 0x72c85c
// 0072c84c  8bc2                 mov eax, edx
// 0072c84e  8bfe                 mov edi, esi
// 0072c850  e80b26ffff           call 0x71ee60
// 0072c855  eb12                 jmp 0x72c869
// 0072c857  83f903               cmp ecx, 3
// 0072c85a  7510                 jne 0x72c86c
// 0072c85c  3bc5                 cmp eax, ebp
// 0072c85e  750c                 jne 0x72c86c
// 0072c860  52                   push edx
// 0072c861  e87a27ffff           call 0x71efe0
// 0072c866  83c404               add esp, 4
// 0072c869  894660               mov dword ptr [esi + 0x60], eax
// 0072c86c  8b4660               mov eax, dword ptr [esi + 0x60]
// 0072c86f  83f805               cmp eax, 5
// 0072c872  771e                 ja 0x72c892
// 0072c874  39ae88000000         cmp dword ptr [esi + 0x88], ebp
// 0072c87a  7413                 je 0x72c88f
// 0072c87c  83f803               cmp eax, 3
// 0072c87f  7511                 jne 0x72c892
// 0072c881  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c884  2b5670               sub edx, dword ptr [esi + 0x70]
// 0072c887  81fa00100000         cmp edx, 0x1000
// 0072c88d  7603                 jbe 0x72c892
// 0072c88f  895e60               mov dword ptr [esi + 0x60], ebx
// 0072c892  8b4678               mov eax, dword ptr [esi + 0x78]
// 0072c895  83f803               cmp eax, 3
// 0072c898  0f82b2010000         jb 0x72ca50
// 0072c89e  394660               cmp dword ptr [esi + 0x60], eax
// 0072c8a1  0f87a9010000         ja 0x72ca50
// 0072c8a7  668b566c             mov dx, word ptr [esi + 0x6c]
// 0072c8ab  662b5664             sub dx, word ptr [esi + 0x64]
// 0072c8af  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c8b2  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0072c8b5  8b9ea4160000         mov ebx, dword ptr [esi + 0x16a4]
// 0072c8bb  8d7c08fd             lea edi, [eax + ecx - 3]
// 0072c8bf  8a4678               mov al, byte ptr [esi + 0x78]
// 0072c8c2  662bd5               sub dx, bp
// 0072c8c5  0fb7ca               movzx ecx, dx
// 0072c8c8  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072c8ce  66890c53             mov word ptr [ebx + edx*2], cx
// 0072c8d2  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072c8d8  8b9ea0160000         mov ebx, dword ptr [esi + 0x16a0]
// 0072c8de  2c03                 sub al, 3
// 0072c8e0  88041a               mov byte ptr [edx + ebx], al
// 0072c8e3  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072c8e9  0fb6c0               movzx eax, al
// 0072c8ec  0fb690c04e7e00       movzx edx, byte ptr [eax + 0x7e4ec0]
// 0072c8f3  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 0072c8fb  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 0072c902  81c1ffff0000         add ecx, 0xffff
// 0072c908  6681f90001           cmp cx, 0x100
// 0072c90d  730c                 jae 0x72c91b
// 0072c90f  0fb7c1               movzx eax, cx
// 0072c912  0fb680c04c7e00       movzx eax, byte ptr [eax + 0x7e4cc0]
// 0072c919  eb0d                 jmp 0x72c928
// 0072c91b  0fb7c9               movzx ecx, cx
// 0072c91e  c1e907               shr ecx, 7
// 0072c921  0fb681c04d7e00       movzx eax, byte ptr [ecx + 0x7e4dc0]
// 0072c928  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 0072c930  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 0072c936  8b4678               mov eax, dword ptr [esi + 0x78]
// 0072c939  2bd5                 sub edx, ebp
// 0072c93b  33db                 xor ebx, ebx
// 0072c93d  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 0072c943  8bcd                 mov ecx, ebp
// 0072c945  0f94c3               sete bl
// 0072c948  2bc8                 sub ecx, eax
// 0072c94a  014e74               add dword ptr [esi + 0x74], ecx
// 0072c94d  83c0fe               add eax, -2
// 0072c950  894678               mov dword ptr [esi + 0x78], eax
// 0072c953  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072c956  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072c959  3bd7                 cmp edx, edi
// 0072c95b  774e                 ja 0x72c9ab
// 0072c95d  8b4648               mov eax, dword ptr [esi + 0x48]
// 0072c960  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072c963  8b6e40               mov ebp, dword ptr [esi + 0x40]
// 0072c966  d3e0                 shl eax, cl
// 0072c968  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c96b  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0072c970  235634               and edx, dword ptr [esi + 0x34]
// 0072c973  33c1                 xor eax, ecx
// 0072c975  234654               and eax, dword ptr [esi + 0x54]
// 0072c978  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0072c97b  894648               mov dword ptr [esi + 0x48], eax
// 0072c97e  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 0072c982  6689445500           mov word ptr [ebp + edx*2], ax
// 0072c987  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c98a  234e34               and ecx, dword ptr [esi + 0x34]
// 0072c98d  8b5640               mov edx, dword ptr [esi + 0x40]
// 0072c990  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 0072c994  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 0072c997  8b5644               mov edx, dword ptr [esi + 0x44]
// 0072c99a  89442410             mov dword ptr [esp + 0x10], eax
// 0072c99e  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 0072c9a2  6689044a             mov word ptr [edx + ecx*2], ax
// 0072c9a6  bd01000000           mov ebp, 1
// 0072c9ab  834678ff             add dword ptr [esi + 0x78], -1
// 0072c9af  75a2                 jne 0x72c953
// 0072c9b1  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072c9b4  85db                 test ebx, ebx
// 0072c9b6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072c9b9  c7466800000000       mov dword ptr [esi + 0x68], 0
// 0072c9c0  c7466002000000       mov dword ptr [esi + 0x60], 2
// 0072c9c7  0f84b9fdffff         je 0x72c786
// 0072c9cd  8b565c               mov edx, dword ptr [esi + 0x5c]
// 0072c9d0  85d2                 test edx, edx
// 0072c9d2  7c07                 jl 0x72c9db
// 0072c9d4  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072c9d7  03ca                 add ecx, edx
// 0072c9d9  eb02                 jmp 0x72c9dd
// 0072c9db  33c9                 xor ecx, ecx
// 0072c9dd  6a00                 push 0
// 0072c9df  2bc2                 sub eax, edx
// 0072c9e1  50                   push eax
// 0072c9e2  51                   push ecx
// 0072c9e3  56                   push esi
// 0072c9e4  e8a781ffff           call 0x724b90
// 0072c9e9  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0072c9ec  8b3e                 mov edi, dword ptr [esi]
// 0072c9ee  894e5c               mov dword ptr [esi + 0x5c], ecx
// 0072c9f1  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072c9f4  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072c9f7  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072c9fa  83c410               add esp, 0x10
// 0072c9fd  3bd9                 cmp ebx, ecx
// 0072c9ff  7602                 jbe 0x72ca03
// 0072ca01  8bd9                 mov ebx, ecx
// 0072ca03  85db                 test ebx, ebx
// 0072ca05  7435                 je 0x72ca3c
// 0072ca07  8b5010               mov edx, dword ptr [eax + 0x10]
// 0072ca0a  8b470c               mov eax, dword ptr [edi + 0xc]
// 0072ca0d  53                   push ebx
// 0072ca0e  52                   push edx
// 0072ca0f  50                   push eax
// 0072ca10  e83743f0ff           call 0x630d4c
// 0072ca15  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072ca18  015f0c               add dword ptr [edi + 0xc], ebx
// 0072ca1b  015810               add dword ptr [eax + 0x10], ebx
// 0072ca1e  015f14               add dword ptr [edi + 0x14], ebx
// 0072ca21  295f10               sub dword ptr [edi + 0x10], ebx
// 0072ca24  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072ca27  295814               sub dword ptr [eax + 0x14], ebx
// 0072ca2a  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072ca2d  83c40c               add esp, 0xc
// 0072ca30  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072ca34  7506                 jne 0x72ca3c
// 0072ca36  8b4f08               mov ecx, dword ptr [edi + 8]
// 0072ca39  894f10               mov dword ptr [edi + 0x10], ecx
// 0072ca3c  8b16                 mov edx, dword ptr [esi]
// 0072ca3e  837a1000             cmp dword ptr [edx + 0x10], 0
// 0072ca42  0f853efdffff         jne 0x72c786
// 0072ca48  5f                   pop edi
// 0072ca49  5e                   pop esi
// 0072ca4a  5d                   pop ebp
// 0072ca4b  33c0                 xor eax, eax
// 0072ca4d  5b                   pop ebx
// 0072ca4e  59                   pop ecx
// 0072ca4f  c3                   ret 
// 0072ca50  837e6800             cmp dword ptr [esi + 0x68], 0
// 0072ca54  0f84d7000000         je 0x72cb31
// 0072ca5a  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072ca5d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 0072ca60  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 0072ca64  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072ca6a  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 0072ca70  66c704510000         mov word ptr [ecx + edx*2], 0
// 0072ca76  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 0072ca7c  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072ca82  88040a               mov byte ptr [edx + ecx], al
// 0072ca85  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072ca8b  0fb6d0               movzx edx, al
// 0072ca8e  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 0072ca96  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 0072ca9d  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 0072caa3  2bc5                 sub eax, ebp
// 0072caa5  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 0072caab  7572                 jne 0x72cb1f
// 0072caad  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072cab0  85c9                 test ecx, ecx
// 0072cab2  7c07                 jl 0x72cabb
// 0072cab4  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cab7  03c1                 add eax, ecx
// 0072cab9  eb02                 jmp 0x72cabd
// 0072cabb  33c0                 xor eax, eax
// 0072cabd  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cac0  6a00                 push 0
// 0072cac2  2bd1                 sub edx, ecx
// 0072cac4  52                   push edx
// 0072cac5  50                   push eax
// 0072cac6  56                   push esi
// 0072cac7  e8c480ffff           call 0x724b90
// 0072cacc  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cacf  8b3e                 mov edi, dword ptr [esi]
// 0072cad1  89465c               mov dword ptr [esi + 0x5c], eax
// 0072cad4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cad7  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0072cada  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0072cadd  83c410               add esp, 0x10
// 0072cae0  3bd9                 cmp ebx, ecx
// 0072cae2  7602                 jbe 0x72cae6
// 0072cae4  8bd9                 mov ebx, ecx
// 0072cae6  85db                 test ebx, ebx
// 0072cae8  7435                 je 0x72cb1f
// 0072caea  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0072caed  8b570c               mov edx, dword ptr [edi + 0xc]
// 0072caf0  53                   push ebx
// 0072caf1  51                   push ecx
// 0072caf2  52                   push edx
// 0072caf3  e85442f0ff           call 0x630d4c
// 0072caf8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cafb  015f0c               add dword ptr [edi + 0xc], ebx
// 0072cafe  015810               add dword ptr [eax + 0x10], ebx
// 0072cb01  015f14               add dword ptr [edi + 0x14], ebx
// 0072cb04  295f10               sub dword ptr [edi + 0x10], ebx
// 0072cb07  8b471c               mov eax, dword ptr [edi + 0x1c]
// 0072cb0a  295814               sub dword ptr [eax + 0x14], ebx
// 0072cb0d  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 0072cb10  83c40c               add esp, 0xc
// 0072cb13  837f1400             cmp dword ptr [edi + 0x14], 0
// 0072cb17  7506                 jne 0x72cb1f
// 0072cb19  8b4708               mov eax, dword ptr [edi + 8]
// 0072cb1c  894710               mov dword ptr [edi + 0x10], eax
// 0072cb1f  8b0e                 mov ecx, dword ptr [esi]
// 0072cb21  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072cb24  834674ff             add dword ptr [esi + 0x74], -1
// 0072cb28  83791000             cmp dword ptr [ecx + 0x10], 0
// 0072cb2c  e911ffffff           jmp 0x72ca42
// 0072cb31  016e6c               add dword ptr [esi + 0x6c], ebp
// 0072cb34  834674ff             add dword ptr [esi + 0x74], -1
// 0072cb38  896e68               mov dword ptr [esi + 0x68], ebp
// 0072cb3b  e946fcffff           jmp 0x72c786
// 0072cb40  837e6800             cmp dword ptr [esi + 0x68], 0
// 0072cb44  744a                 je 0x72cb90
// 0072cb46  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cb49  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cb4c  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 0072cb50  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 0072cb56  8b96a4160000         mov edx, dword ptr [esi + 0x16a4]
// 0072cb5c  66c7044a0000         mov word ptr [edx + ecx*2], 0
// 0072cb62  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 0072cb68  8b8e98160000         mov ecx, dword ptr [esi + 0x1698]
// 0072cb6e  880411               mov byte ptr [ecx + edx], al
// 0072cb71  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 0072cb77  0fb6c0               movzx eax, al
// 0072cb7a  6601ac8694000000     add word ptr [esi + eax*4 + 0x94], bp
// 0072cb82  8d848694000000       lea eax, [esi + eax*4 + 0x94]
// 0072cb89  c7466800000000       mov dword ptr [esi + 0x68], 0
// 0072cb90  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 0072cb93  85c9                 test ecx, ecx
// 0072cb95  7c07                 jl 0x72cb9e
// 0072cb97  8b4638               mov eax, dword ptr [esi + 0x38]
// 0072cb9a  03c1                 add eax, ecx
// 0072cb9c  eb02                 jmp 0x72cba0
// 0072cb9e  33c0                 xor eax, eax
// 0072cba0  33d2                 xor edx, edx
// 0072cba2  83ff04               cmp edi, 4
// 0072cba5  0f94c2               sete dl
// 0072cba8  52                   push edx
// 0072cba9  8b566c               mov edx, dword ptr [esi + 0x6c]
// 0072cbac  2bd1                 sub edx, ecx
// 0072cbae  52                   push edx
// 0072cbaf  50                   push eax
// 0072cbb0  56                   push esi
// 0072cbb1  e8da7fffff           call 0x724b90
// 0072cbb6  8b466c               mov eax, dword ptr [esi + 0x6c]
// 0072cbb9  89465c               mov dword ptr [esi + 0x5c], eax
// 0072cbbc  8b06                 mov eax, dword ptr [esi]
// 0072cbbe  83c410               add esp, 0x10
// 0072cbc1  e8da21ffff           call 0x71eda0
// 0072cbc6  8b0e                 mov ecx, dword ptr [esi]
// 0072cbc8  33c0                 xor eax, eax
// 0072cbca  394110               cmp dword ptr [ecx + 0x10], eax
// 0072cbcd  7512                 jne 0x72cbe1
// 0072cbcf  83ff04               cmp edi, 4
// 0072cbd2  0f95c0               setne al
// 0072cbd5  5f                   pop edi
// 0072cbd6  5e                   pop esi
// 0072cbd7  5d                   pop ebp
// 0072cbd8  5b                   pop ebx
// 0072cbd9  83e801               sub eax, 1
// 0072cbdc  83e002               and eax, 2
// 0072cbdf  59                   pop ecx
// 0072cbe0  c3                   ret 
// 0072cbe1  83ff04               cmp edi, 4
// 0072cbe4  0f94c0               sete al
// 0072cbe7  5f                   pop edi
// 0072cbe8  5e                   pop esi
// 0072cbe9  5d                   pop ebp
// 0072cbea  5b                   pop ebx
// 0072cbeb  8d440001             lea eax, [eax + eax + 1]
// 0072cbef  59                   pop ecx
// 0072cbf0  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
