// roc 2008-06 007a7720  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 1153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a7720
//
// 007a7720  51                   push ecx
// 007a7721  53                   push ebx
// 007a7722  55                   push ebp
// 007a7723  56                   push esi
// 007a7724  8b742414             mov esi, dword ptr [esp + 0x14]
// 007a7728  57                   push edi
// 007a7729  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007a7731  bd01000000           mov ebp, 1
// 007a7736  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a7739  3d06010000           cmp eax, 0x106
// 007a773e  7323                 jae 0x7a7763
// 007a7740  e83bf9ffff           call 0x7a7080
// 007a7745  8b4674               mov eax, dword ptr [esi + 0x74]
// 007a7748  3d06010000           cmp eax, 0x106
// 007a774d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007a7751  7308                 jae 0x7a775b
// 007a7753  85ff                 test edi, edi
// 007a7755  0f849d020000         je 0x7a79f8
// 007a775b  85c0                 test eax, eax
// 007a775d  0f848d030000         je 0x7a7af0
// 007a7763  83f803               cmp eax, 3
// 007a7766  724d                 jb 0x7a77b5
// 007a7768  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a776b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007a776e  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7771  8b7e34               mov edi, dword ptr [esi + 0x34]
// 007a7774  d3e0                 shl eax, cl
// 007a7776  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a7779  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a777e  33c1                 xor eax, ecx
// 007a7780  234654               and eax, dword ptr [esi + 0x54]
// 007a7783  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a7786  894648               mov dword ptr [esi + 0x48], eax
// 007a7789  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 007a778d  23fa                 and edi, edx
// 007a778f  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a7792  6689047a             mov word ptr [edx + edi*2], ax
// 007a7796  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a7799  234e34               and ecx, dword ptr [esi + 0x34]
// 007a779c  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a779f  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 007a77a3  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007a77a6  8b5644               mov edx, dword ptr [esi + 0x44]
// 007a77a9  89442410             mov dword ptr [esp + 0x10], eax
// 007a77ad  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 007a77b1  6689044a             mov word ptr [edx + ecx*2], ax
// 007a77b5  8b5670               mov edx, dword ptr [esi + 0x70]
// 007a77b8  8b4e60               mov ecx, dword ptr [esi + 0x60]
// 007a77bb  895664               mov dword ptr [esi + 0x64], edx
// 007a77be  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a77c2  85d2                 test edx, edx
// 007a77c4  bb02000000           mov ebx, 2
// 007a77c9  894e78               mov dword ptr [esi + 0x78], ecx
// 007a77cc  895e60               mov dword ptr [esi + 0x60], ebx
// 007a77cf  7471                 je 0x7a7842
// 007a77d1  8bc1                 mov eax, ecx
// 007a77d3  3b8680000000         cmp eax, dword ptr [esi + 0x80]
// 007a77d9  7367                 jae 0x7a7842
// 007a77db  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a77de  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 007a77e1  2bc2                 sub eax, edx
// 007a77e3  81e906010000         sub ecx, 0x106
// 007a77e9  3bc1                 cmp eax, ecx
// 007a77eb  7755                 ja 0x7a7842
// 007a77ed  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 007a77f3  3bcb                 cmp ecx, ebx
// 007a77f5  7410                 je 0x7a7807
// 007a77f7  83f903               cmp ecx, 3
// 007a77fa  7410                 je 0x7a780c
// 007a77fc  8bc2                 mov eax, edx
// 007a77fe  8bfe                 mov edi, esi
// 007a7800  e82bf6ffff           call 0x7a6e30
// 007a7805  eb12                 jmp 0x7a7819
// 007a7807  83f903               cmp ecx, 3
// 007a780a  7510                 jne 0x7a781c
// 007a780c  3bc5                 cmp eax, ebp
// 007a780e  750c                 jne 0x7a781c
// 007a7810  52                   push edx
// 007a7811  e89af7ffff           call 0x7a6fb0
// 007a7816  83c404               add esp, 4
// 007a7819  894660               mov dword ptr [esi + 0x60], eax
// 007a781c  8b4660               mov eax, dword ptr [esi + 0x60]
// 007a781f  83f805               cmp eax, 5
// 007a7822  771e                 ja 0x7a7842
// 007a7824  39ae88000000         cmp dword ptr [esi + 0x88], ebp
// 007a782a  7413                 je 0x7a783f
// 007a782c  83f803               cmp eax, 3
// 007a782f  7511                 jne 0x7a7842
// 007a7831  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7834  2b5670               sub edx, dword ptr [esi + 0x70]
// 007a7837  81fa00100000         cmp edx, 0x1000
// 007a783d  7603                 jbe 0x7a7842
// 007a783f  895e60               mov dword ptr [esi + 0x60], ebx
// 007a7842  8b4678               mov eax, dword ptr [esi + 0x78]
// 007a7845  83f803               cmp eax, 3
// 007a7848  0f82b2010000         jb 0x7a7a00
// 007a784e  394660               cmp dword ptr [esi + 0x60], eax
// 007a7851  0f87a9010000         ja 0x7a7a00
// 007a7857  668b566c             mov dx, word ptr [esi + 0x6c]
// 007a785b  662b5664             sub dx, word ptr [esi + 0x64]
// 007a785f  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7862  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 007a7865  8b9ea4160000         mov ebx, dword ptr [esi + 0x16a4]
// 007a786b  8d7c08fd             lea edi, [eax + ecx - 3]
// 007a786f  8a4678               mov al, byte ptr [esi + 0x78]
// 007a7872  662bd5               sub dx, bp
// 007a7875  0fb7ca               movzx ecx, dx
// 007a7878  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 007a787e  66890c53             mov word ptr [ebx + edx*2], cx
// 007a7882  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 007a7888  8b9ea0160000         mov ebx, dword ptr [esi + 0x16a0]
// 007a788e  2c03                 sub al, 3
// 007a7890  88041a               mov byte ptr [edx + ebx], al
// 007a7893  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 007a7899  0fb6c0               movzx eax, al
// 007a789c  0fb690481d8700       movzx edx, byte ptr [eax + 0x871d48]
// 007a78a3  6601ac9698040000     add word ptr [esi + edx*4 + 0x498], bp
// 007a78ab  8d849698040000       lea eax, [esi + edx*4 + 0x498]
// 007a78b2  81c1ffff0000         add ecx, 0xffff
// 007a78b8  6681f90001           cmp cx, 0x100
// 007a78bd  730c                 jae 0x7a78cb
// 007a78bf  0fb7c1               movzx eax, cx
// 007a78c2  0fb680481b8700       movzx eax, byte ptr [eax + 0x871b48]
// 007a78c9  eb0d                 jmp 0x7a78d8
// 007a78cb  0fb7c9               movzx ecx, cx
// 007a78ce  c1e907               shr ecx, 7
// 007a78d1  0fb681481c8700       movzx eax, byte ptr [ecx + 0x871c48]
// 007a78d8  6601ac8688090000     add word ptr [esi + eax*4 + 0x988], bp
// 007a78e0  8b969c160000         mov edx, dword ptr [esi + 0x169c]
// 007a78e6  8b4678               mov eax, dword ptr [esi + 0x78]
// 007a78e9  2bd5                 sub edx, ebp
// 007a78eb  33db                 xor ebx, ebx
// 007a78ed  3996a0160000         cmp dword ptr [esi + 0x16a0], edx
// 007a78f3  8bcd                 mov ecx, ebp
// 007a78f5  0f94c3               sete bl
// 007a78f8  2bc8                 sub ecx, eax
// 007a78fa  014e74               add dword ptr [esi + 0x74], ecx
// 007a78fd  83c0fe               add eax, -2
// 007a7900  894678               mov dword ptr [esi + 0x78], eax
// 007a7903  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7906  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7909  3bd7                 cmp edx, edi
// 007a790b  774e                 ja 0x7a795b
// 007a790d  8b4648               mov eax, dword ptr [esi + 0x48]
// 007a7910  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007a7913  8b6e40               mov ebp, dword ptr [esi + 0x40]
// 007a7916  d3e0                 shl eax, cl
// 007a7918  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a791b  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 007a7920  235634               and edx, dword ptr [esi + 0x34]
// 007a7923  33c1                 xor eax, ecx
// 007a7925  234654               and eax, dword ptr [esi + 0x54]
// 007a7928  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 007a792b  894648               mov dword ptr [esi + 0x48], eax
// 007a792e  0fb70441             movzx eax, word ptr [ecx + eax*2]
// 007a7932  6689445500           mov word ptr [ebp + edx*2], ax
// 007a7937  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a793a  234e34               and ecx, dword ptr [esi + 0x34]
// 007a793d  8b5640               mov edx, dword ptr [esi + 0x40]
// 007a7940  0fb7044a             movzx eax, word ptr [edx + ecx*2]
// 007a7944  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 007a7947  8b5644               mov edx, dword ptr [esi + 0x44]
// 007a794a  89442410             mov dword ptr [esp + 0x10], eax
// 007a794e  0fb7466c             movzx eax, word ptr [esi + 0x6c]
// 007a7952  6689044a             mov word ptr [edx + ecx*2], ax
// 007a7956  bd01000000           mov ebp, 1
// 007a795b  834678ff             add dword ptr [esi + 0x78], -1
// 007a795f  75a2                 jne 0x7a7903
// 007a7961  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7964  85db                 test ebx, ebx
// 007a7966  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7969  c7466800000000       mov dword ptr [esi + 0x68], 0
// 007a7970  c7466002000000       mov dword ptr [esi + 0x60], 2
// 007a7977  0f84b9fdffff         je 0x7a7736
// 007a797d  8b565c               mov edx, dword ptr [esi + 0x5c]
// 007a7980  85d2                 test edx, edx
// 007a7982  7c07                 jl 0x7a798b
// 007a7984  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a7987  03ca                 add ecx, edx
// 007a7989  eb02                 jmp 0x7a798d
// 007a798b  33c9                 xor ecx, ecx
// 007a798d  6a00                 push 0
// 007a798f  2bc2                 sub eax, edx
// 007a7991  50                   push eax
// 007a7992  51                   push ecx
// 007a7993  56                   push esi
// 007a7994  e867e0ffff           call 0x7a5a00
// 007a7999  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007a799c  8b3e                 mov edi, dword ptr [esi]
// 007a799e  894e5c               mov dword ptr [esi + 0x5c], ecx
// 007a79a1  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a79a4  8b5814               mov ebx, dword ptr [eax + 0x14]
// 007a79a7  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007a79aa  83c410               add esp, 0x10
// 007a79ad  3bd9                 cmp ebx, ecx
// 007a79af  7602                 jbe 0x7a79b3
// 007a79b1  8bd9                 mov ebx, ecx
// 007a79b3  85db                 test ebx, ebx
// 007a79b5  7435                 je 0x7a79ec
// 007a79b7  8b5010               mov edx, dword ptr [eax + 0x10]
// 007a79ba  8b470c               mov eax, dword ptr [edi + 0xc]
// 007a79bd  53                   push ebx
// 007a79be  52                   push edx
// 007a79bf  50                   push eax
// 007a79c0  e81b9eefff           call 0x6a17e0
// 007a79c5  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a79c8  015f0c               add dword ptr [edi + 0xc], ebx
// 007a79cb  015810               add dword ptr [eax + 0x10], ebx
// 007a79ce  015f14               add dword ptr [edi + 0x14], ebx
// 007a79d1  295f10               sub dword ptr [edi + 0x10], ebx
// 007a79d4  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a79d7  295814               sub dword ptr [eax + 0x14], ebx
// 007a79da  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 007a79dd  83c40c               add esp, 0xc
// 007a79e0  837f1400             cmp dword ptr [edi + 0x14], 0
// 007a79e4  7506                 jne 0x7a79ec
// 007a79e6  8b4f08               mov ecx, dword ptr [edi + 8]
// 007a79e9  894f10               mov dword ptr [edi + 0x10], ecx
// 007a79ec  8b16                 mov edx, dword ptr [esi]
// 007a79ee  837a1000             cmp dword ptr [edx + 0x10], 0
// 007a79f2  0f853efdffff         jne 0x7a7736
// 007a79f8  5f                   pop edi
// 007a79f9  5e                   pop esi
// 007a79fa  5d                   pop ebp
// 007a79fb  33c0                 xor eax, eax
// 007a79fd  5b                   pop ebx
// 007a79fe  59                   pop ecx
// 007a79ff  c3                   ret 
// 007a7a00  837e6800             cmp dword ptr [esi + 0x68], 0
// 007a7a04  0f84d7000000         je 0x7a7ae1
// 007a7a0a  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7a0d  8b4e38               mov ecx, dword ptr [esi + 0x38]
// 007a7a10  8a4408ff             mov al, byte ptr [eax + ecx - 1]
// 007a7a14  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 007a7a1a  8b8ea4160000         mov ecx, dword ptr [esi + 0x16a4]
// 007a7a20  66c704510000         mov word ptr [ecx + edx*2], 0
// 007a7a26  8b9698160000         mov edx, dword ptr [esi + 0x1698]
// 007a7a2c  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 007a7a32  88040a               mov byte ptr [edx + ecx], al
// 007a7a35  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 007a7a3b  0fb6d0               movzx edx, al
// 007a7a3e  6601ac9694000000     add word ptr [esi + edx*4 + 0x94], bp
// 007a7a46  8d849694000000       lea eax, [esi + edx*4 + 0x94]
// 007a7a4d  8b869c160000         mov eax, dword ptr [esi + 0x169c]
// 007a7a53  2bc5                 sub eax, ebp
// 007a7a55  3986a0160000         cmp dword ptr [esi + 0x16a0], eax
// 007a7a5b  7572                 jne 0x7a7acf
// 007a7a5d  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a7a60  85c9                 test ecx, ecx
// 007a7a62  7c07                 jl 0x7a7a6b
// 007a7a64  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7a67  03c1                 add eax, ecx
// 007a7a69  eb02                 jmp 0x7a7a6d
// 007a7a6b  33c0                 xor eax, eax
// 007a7a6d  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7a70  6a00                 push 0
// 007a7a72  2bd1                 sub edx, ecx
// 007a7a74  52                   push edx
// 007a7a75  50                   push eax
// 007a7a76  56                   push esi
// 007a7a77  e884dfffff           call 0x7a5a00
// 007a7a7c  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7a7f  8b3e                 mov edi, dword ptr [esi]
// 007a7a81  89465c               mov dword ptr [esi + 0x5c], eax
// 007a7a84  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7a87  8b5814               mov ebx, dword ptr [eax + 0x14]
// 007a7a8a  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 007a7a8d  83c410               add esp, 0x10
// 007a7a90  3bd9                 cmp ebx, ecx
// 007a7a92  7602                 jbe 0x7a7a96
// 007a7a94  8bd9                 mov ebx, ecx
// 007a7a96  85db                 test ebx, ebx
// 007a7a98  7435                 je 0x7a7acf
// 007a7a9a  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007a7a9d  8b570c               mov edx, dword ptr [edi + 0xc]
// 007a7aa0  53                   push ebx
// 007a7aa1  51                   push ecx
// 007a7aa2  52                   push edx
// 007a7aa3  e8389defff           call 0x6a17e0
// 007a7aa8  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7aab  015f0c               add dword ptr [edi + 0xc], ebx
// 007a7aae  015810               add dword ptr [eax + 0x10], ebx
// 007a7ab1  015f14               add dword ptr [edi + 0x14], ebx
// 007a7ab4  295f10               sub dword ptr [edi + 0x10], ebx
// 007a7ab7  8b471c               mov eax, dword ptr [edi + 0x1c]
// 007a7aba  295814               sub dword ptr [eax + 0x14], ebx
// 007a7abd  8b7f1c               mov edi, dword ptr [edi + 0x1c]
// 007a7ac0  83c40c               add esp, 0xc
// 007a7ac3  837f1400             cmp dword ptr [edi + 0x14], 0
// 007a7ac7  7506                 jne 0x7a7acf
// 007a7ac9  8b4708               mov eax, dword ptr [edi + 8]
// 007a7acc  894710               mov dword ptr [edi + 0x10], eax
// 007a7acf  8b0e                 mov ecx, dword ptr [esi]
// 007a7ad1  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7ad4  834674ff             add dword ptr [esi + 0x74], -1
// 007a7ad8  83791000             cmp dword ptr [ecx + 0x10], 0
// 007a7adc  e911ffffff           jmp 0x7a79f2
// 007a7ae1  016e6c               add dword ptr [esi + 0x6c], ebp
// 007a7ae4  834674ff             add dword ptr [esi + 0x74], -1
// 007a7ae8  896e68               mov dword ptr [esi + 0x68], ebp
// 007a7aeb  e946fcffff           jmp 0x7a7736
// 007a7af0  837e6800             cmp dword ptr [esi + 0x68], 0
// 007a7af4  744a                 je 0x7a7b40
// 007a7af6  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7af9  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7afc  8a4402ff             mov al, byte ptr [edx + eax - 1]
// 007a7b00  8b8ea0160000         mov ecx, dword ptr [esi + 0x16a0]
// 007a7b06  8b96a4160000         mov edx, dword ptr [esi + 0x16a4]
// 007a7b0c  66c7044a0000         mov word ptr [edx + ecx*2], 0
// 007a7b12  8b96a0160000         mov edx, dword ptr [esi + 0x16a0]
// 007a7b18  8b8e98160000         mov ecx, dword ptr [esi + 0x1698]
// 007a7b1e  880411               mov byte ptr [ecx + edx], al
// 007a7b21  01aea0160000         add dword ptr [esi + 0x16a0], ebp
// 007a7b27  0fb6c0               movzx eax, al
// 007a7b2a  6601ac8694000000     add word ptr [esi + eax*4 + 0x94], bp
// 007a7b32  8d848694000000       lea eax, [esi + eax*4 + 0x94]
// 007a7b39  c7466800000000       mov dword ptr [esi + 0x68], 0
// 007a7b40  8b4e5c               mov ecx, dword ptr [esi + 0x5c]
// 007a7b43  85c9                 test ecx, ecx
// 007a7b45  7c07                 jl 0x7a7b4e
// 007a7b47  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7b4a  03c1                 add eax, ecx
// 007a7b4c  eb02                 jmp 0x7a7b50
// 007a7b4e  33c0                 xor eax, eax
// 007a7b50  33d2                 xor edx, edx
// 007a7b52  83ff04               cmp edi, 4
// 007a7b55  0f94c2               sete dl
// 007a7b58  52                   push edx
// 007a7b59  8b566c               mov edx, dword ptr [esi + 0x6c]
// 007a7b5c  2bd1                 sub edx, ecx
// 007a7b5e  52                   push edx
// 007a7b5f  50                   push eax
// 007a7b60  56                   push esi
// 007a7b61  e89adeffff           call 0x7a5a00
// 007a7b66  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007a7b69  89465c               mov dword ptr [esi + 0x5c], eax
// 007a7b6c  8b06                 mov eax, dword ptr [esi]
// 007a7b6e  83c410               add esp, 0x10
// 007a7b71  e82ae9ffff           call 0x7a64a0
// 007a7b76  8b0e                 mov ecx, dword ptr [esi]
// 007a7b78  33c0                 xor eax, eax
// 007a7b7a  394110               cmp dword ptr [ecx + 0x10], eax
// 007a7b7d  7512                 jne 0x7a7b91
// 007a7b7f  83ff04               cmp edi, 4
// 007a7b82  0f95c0               setne al
// 007a7b85  5f                   pop edi
// 007a7b86  5e                   pop esi
// 007a7b87  5d                   pop ebp
// 007a7b88  5b                   pop ebx
// 007a7b89  83e801               sub eax, 1
// 007a7b8c  83e002               and eax, 2
// 007a7b8f  59                   pop ecx
// 007a7b90  c3                   ret 
// 007a7b91  83ff04               cmp edi, 4
// 007a7b94  0f94c0               sete al
// 007a7b97  5f                   pop edi
// 007a7b98  5e                   pop esi
// 007a7b99  5d                   pop ebp
// 007a7b9a  5b                   pop ebx
// 007a7b9b  8d440001             lea eax, [eax + eax + 1]
// 007a7b9f  59                   pop ecx
// 007a7ba0  c3                   ret 
// library zlib-1.2.3/deflate.c (function _deflate_slow)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: zlib-1.2.3 deflate.c
