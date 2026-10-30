// roc 2010-06 007afa10  unit: CXTPPaintManager  size: 1147 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007afa10
//
// 007afa10  6aff                 push -1
// 007afa12  68f9eb9a00           push 0x9aebf9
// 007afa17  64a100000000         mov eax, dword ptr fs:[0]
// 007afa1d  50                   push eax
// 007afa1e  83ec48               sub esp, 0x48
// 007afa21  53                   push ebx
// 007afa22  55                   push ebp
// 007afa23  56                   push esi
// 007afa24  57                   push edi
// 007afa25  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007afa2a  33c4                 xor eax, esp
// 007afa2c  50                   push eax
// 007afa2d  8d44245c             lea eax, [esp + 0x5c]
// 007afa31  64a300000000         mov dword ptr fs:[0], eax
// 007afa37  8bf9                 mov edi, ecx
// 007afa39  837c247800           cmp dword ptr [esp + 0x78], 0
// 007afa3e  8b742474             mov esi, dword ptr [esp + 0x74]
// 007afa42  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007afa48  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007afa4e  0f841c020000         je 0x7afc70
// 007afa54  83f802               cmp eax, 2
// 007afa57  751b                 jne 0x7afa74
// 007afa59  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007afa5d  8b07                 mov eax, dword ptr [edi]
// 007afa5f  8b4058               mov eax, dword ptr [eax + 0x58]
// 007afa62  6a01                 push 1
// 007afa64  56                   push esi
// 007afa65  51                   push ecx
// 007afa66  8d542430             lea edx, [esp + 0x30]
// 007afa6a  52                   push edx
// 007afa6b  8bcf                 mov ecx, edi
// 007afa6d  ffd0                 call eax
// 007afa6f  e9e6010000           jmp 0x7afc5a
// 007afa74  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 007afa7a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007afa80  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 007afa86  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 007afa8c  89442444             mov dword ptr [esp + 0x44], eax
// 007afa90  89442434             mov dword ptr [esp + 0x34], eax
// 007afa94  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007afa9a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007afa9e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 007afaa4  83c302               add ebx, 2
// 007afaa7  89542440             mov dword ptr [esp + 0x40], edx
// 007afaab  894c2448             mov dword ptr [esp + 0x48], ecx
// 007afaaf  89542430             mov dword ptr [esp + 0x30], edx
// 007afab3  894c2438             mov dword ptr [esp + 0x38], ecx
// 007afab7  83f8ff               cmp eax, -1
// 007afaba  750f                 jne 0x7afacb
// 007afabc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007afac2  85c9                 test ecx, ecx
// 007afac4  7405                 je 0x7afacb
// 007afac6  e8c5abffff           call 0x7aa690
// 007afacb  8bce                 mov ecx, esi
// 007afacd  89442478             mov dword ptr [esp + 0x78], eax
// 007afad1  e81aee0800           call 0x83e8f0
// 007afad6  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 007afada  85c0                 test eax, eax
// 007afadc  0f84ab000000         je 0x7afb8d
// 007afae2  8b16                 mov edx, dword ptr [esi]
// 007afae4  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 007afaea  8d442414             lea eax, [esp + 0x14]
// 007afaee  50                   push eax
// 007afaef  8bce                 mov ecx, esi
// 007afaf1  ffd2                 call edx
// 007afaf3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007afaf7  8b06                 mov eax, dword ptr [esi]
// 007afaf9  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 007afaff  51                   push ecx
// 007afb00  8bce                 mov ecx, esi
// 007afb02  ffd2                 call edx
// 007afb04  8bd8                 mov ebx, eax
// 007afb06  8bcb                 mov ecx, ebx
// 007afb08  e843900000           call 0x7b8b50
// 007afb0d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 007afb12  8bcb                 mov ecx, ebx
// 007afb14  89442470             mov dword ptr [esp + 0x70], eax
// 007afb18  e883e60100           call 0x7ce1a0
// 007afb1d  8bc8                 mov ecx, eax
// 007afb1f  8b442470             mov eax, dword ptr [esp + 0x70]
// 007afb23  99                   cdq 
// 007afb24  f7f9                 idiv ecx
// 007afb26  8b542440             mov edx, dword ptr [esp + 0x40]
// 007afb2a  6a01                 push 1
// 007afb2c  6a00                 push 0
// 007afb2e  6a00                 push 0
// 007afb30  89442424             mov dword ptr [esp + 0x24], eax
// 007afb34  8b442454             mov eax, dword ptr [esp + 0x54]
// 007afb38  03c2                 add eax, edx
// 007afb3a  99                   cdq 
// 007afb3b  2bc2                 sub eax, edx
// 007afb3d  8bc8                 mov ecx, eax
// 007afb3f  8b442424             mov eax, dword ptr [esp + 0x24]
// 007afb43  99                   cdq 
// 007afb44  2bc2                 sub eax, edx
// 007afb46  8b542448             mov edx, dword ptr [esp + 0x48]
// 007afb4a  83c203               add edx, 3
// 007afb4d  89542430             mov dword ptr [esp + 0x30], edx
// 007afb51  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007afb58  52                   push edx
// 007afb59  8b542428             mov edx, dword ptr [esp + 0x28]
// 007afb5d  6a00                 push 0
// 007afb5f  6a00                 push 0
// 007afb61  53                   push ebx
// 007afb62  52                   push edx
// 007afb63  8b542434             mov edx, dword ptr [esp + 0x34]
// 007afb67  d1f9                 sar ecx, 1
// 007afb69  d1f8                 sar eax, 1
// 007afb6b  2bc8                 sub ecx, eax
// 007afb6d  8b07                 mov eax, dword ptr [edi]
// 007afb6f  52                   push edx
// 007afb70  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007afb76  51                   push ecx
// 007afb77  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007afb7b  51                   push ecx
// 007afb7c  55                   push ebp
// 007afb7d  8bcf                 mov ecx, edi
// 007afb7f  ffd2                 call edx
// 007afb81  8b442414             mov eax, dword ptr [esp + 0x14]
// 007afb85  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007afb89  8d5c0106             lea ebx, [ecx + eax + 6]
// 007afb8d  8b16                 mov edx, dword ptr [esi]
// 007afb8f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007afb95  8bce                 mov ecx, esi
// 007afb97  ffd0                 call eax
// 007afb99  85c0                 test eax, eax
// 007afb9b  0f84b9000000         je 0x7afc5a
// 007afba1  85ff                 test edi, edi
// 007afba3  7510                 jne 0x7afbb5
// 007afba5  6a11                 push 0x11
// 007afba7  ff1578a19e00         call dword ptr [0x9ea178]
// 007afbad  50                   push eax
// 007afbae  e8f188ffff           call 0x7a84a4
// 007afbb3  eb06                 jmp 0x7afbbb
// 007afbb5  8d87f0000000         lea eax, [edi + 0xf0]
// 007afbbb  50                   push eax
// 007afbbc  55                   push ebp
// 007afbbd  8d4c241c             lea ecx, [esp + 0x1c]
// 007afbc1  e8dafa0400           call 0x7ff6a0
// 007afbc6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007afbcc  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 007afbd2  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007afbd8  8b5500               mov edx, dword ptr [ebp]
// 007afbdb  51                   push ecx
// 007afbdc  50                   push eax
// 007afbdd  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 007afbe4  6a00                 push 0
// 007afbe6  6a00                 push 0
// 007afbe8  50                   push eax
// 007afbe9  89942484000000       mov dword ptr [esp + 0x84], edx
// 007afbf0  8b17                 mov edx, dword ptr [edi]
// 007afbf2  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 007afbf8  6a00                 push 0
// 007afbfa  6a00                 push 0
// 007afbfc  8bcf                 mov ecx, edi
// 007afbfe  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 007afc09  ffd2                 call edx
// 007afc0b  50                   push eax
// 007afc0c  8b442474             mov eax, dword ptr [esp + 0x74]
// 007afc10  8b5038               mov edx, dword ptr [eax + 0x38]
// 007afc13  8bcd                 mov ecx, ebp
// 007afc15  ffd2                 call edx
// 007afc17  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007afc1b  8b542434             mov edx, dword ptr [esp + 0x34]
// 007afc1f  6a00                 push 0
// 007afc21  6a00                 push 0
// 007afc23  6a00                 push 0
// 007afc25  6a01                 push 1
// 007afc27  83ec10               sub esp, 0x10
// 007afc2a  8bc4                 mov eax, esp
// 007afc2c  8918                 mov dword ptr [eax], ebx
// 007afc2e  894804               mov dword ptr [eax + 4], ecx
// 007afc31  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007afc35  56                   push esi
// 007afc36  895008               mov dword ptr [eax + 8], edx
// 007afc39  55                   push ebp
// 007afc3a  8d54244c             lea edx, [esp + 0x4c]
// 007afc3e  89480c               mov dword ptr [eax + 0xc], ecx
// 007afc41  52                   push edx
// 007afc42  8bcf                 mov ecx, edi
// 007afc44  e827f6ffff           call 0x7af270
// 007afc49  8d4c2414             lea ecx, [esp + 0x14]
// 007afc4d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007afc55  e8c6fa0400           call 0x7ff720
// 007afc5a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007afc5e  c70000000000         mov dword ptr [eax], 0
// 007afc64  c7400400000000       mov dword ptr [eax + 4], 0
// 007afc6b  e905020000           jmp 0x7afe75
// 007afc70  8b16                 mov edx, dword ptr [esi]
// 007afc72  8b5258               mov edx, dword ptr [edx + 0x58]
// 007afc75  33c9                 xor ecx, ecx
// 007afc77  83f802               cmp eax, 2
// 007afc7a  0f94c1               sete cl
// 007afc7d  8d442474             lea eax, [esp + 0x74]
// 007afc81  50                   push eax
// 007afc82  894c247c             mov dword ptr [esp + 0x7c], ecx
// 007afc86  8bce                 mov ecx, esi
// 007afc88  ffd2                 call edx
// 007afc8a  8d442474             lea eax, [esp + 0x74]
// 007afc8e  50                   push eax
// 007afc8f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 007afc97  e804d7ffff           call 0x7ad3a0
// 007afc9c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 007afca0  83c404               add esp, 4
// 007afca3  8d8fa4000000         lea ecx, [edi + 0xa4]
// 007afca9  51                   push ecx
// 007afcaa  55                   push ebp
// 007afcab  8d4c2454             lea ecx, [esp + 0x54]
// 007afcaf  e8ecf90400           call 0x7ff6a0
// 007afcb4  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 007afcba  c644246402           mov byte ptr [esp + 0x64], 2
// 007afcbf  85c0                 test eax, eax
// 007afcc1  7e06                 jle 0x7afcc9
// 007afcc3  89442470             mov dword ptr [esp + 0x70], eax
// 007afcc7  eb21                 jmp 0x7afcea
// 007afcc9  8b4508               mov eax, dword ptr [ebp + 8]
// 007afccc  8d542424             lea edx, [esp + 0x24]
// 007afcd0  52                   push edx
// 007afcd1  6a01                 push 1
// 007afcd3  68e86ea000           push 0xa06ee8
// 007afcd8  50                   push eax
// 007afcd9  ff1594a19e00         call dword ptr [0x9ea194]
// 007afcdf  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007afce3  83c107               add ecx, 7
// 007afce6  894c2470             mov dword ptr [esp + 0x70], ecx
// 007afcea  8d87f0000000         lea eax, [edi + 0xf0]
// 007afcf0  50                   push eax
// 007afcf1  8d4c2450             lea ecx, [esp + 0x50]
// 007afcf5  e826e50400           call 0x7fe220
// 007afcfa  8b16                 mov edx, dword ptr [esi]
// 007afcfc  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 007afd02  8bce                 mov ecx, esi
// 007afd04  ffd0                 call eax
// 007afd06  8bd8                 mov ebx, eax
// 007afd08  85db                 test ebx, ebx
// 007afd0a  7449                 je 0x7afd55
// 007afd0c  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 007afd13  7540                 jne 0x7afd55
// 007afd15  8b5508               mov edx, dword ptr [ebp + 8]
// 007afd18  8d4c2424             lea ecx, [esp + 0x24]
// 007afd1c  51                   push ecx
// 007afd1d  6a01                 push 1
// 007afd1f  68e86ea000           push 0xa06ee8
// 007afd24  52                   push edx
// 007afd25  ff1594a19e00         call dword ptr [0x9ea194]
// 007afd2b  8b442428             mov eax, dword ptr [esp + 0x28]
// 007afd2f  83c007               add eax, 7
// 007afd32  39442470             cmp dword ptr [esp + 0x70], eax
// 007afd36  7f1d                 jg 0x7afd55
// 007afd38  6a01                 push 1
// 007afd3a  68e86ea000           push 0xa06ee8
// 007afd3f  8d4c241c             lea ecx, [esp + 0x1c]
// 007afd43  51                   push ecx
// 007afd44  8bcd                 mov ecx, ebp
// 007afd46  e8d5dfffff           call 0x7add20
// 007afd4b  8b4004               mov eax, dword ptr [eax + 4]
// 007afd4e  83c007               add eax, 7
// 007afd51  89442470             mov dword ptr [esp + 0x70], eax
// 007afd55  8d542424             lea edx, [esp + 0x24]
// 007afd59  52                   push edx
// 007afd5a  8d4c2478             lea ecx, [esp + 0x78]
// 007afd5e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007afd64  50                   push eax
// 007afd65  8d4c247c             lea ecx, [esp + 0x7c]
// 007afd69  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007afd6f  50                   push eax
// 007afd70  8b4508               mov eax, dword ptr [ebp + 8]
// 007afd73  50                   push eax
// 007afd74  ff1594a19e00         call dword ptr [0x9ea194]
// 007afd7a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007afd7e  83c505               add ebp, 5
// 007afd81  837c247800           cmp dword ptr [esp + 0x78], 0
// 007afd86  7443                 je 0x7afdcb
// 007afd88  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007afd8e  8b17                 mov edx, dword ptr [edi]
// 007afd90  50                   push eax
// 007afd91  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 007afd97  8bcf                 mov ecx, edi
// 007afd99  ffd0                 call eax
// 007afd9b  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 007afda1  03f8                 add edi, eax
// 007afda3  03fd                 add edi, ebp
// 007afda5  39be80010000         cmp dword ptr [esi + 0x180], edi
// 007afdab  7410                 je 0x7afdbd
// 007afdad  89be80010000         mov dword ptr [esi + 0x180], edi
// 007afdb3  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 007afdbd  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 007afdc3  8d0c06               lea ecx, [esi + eax]
// 007afdc6  e983000000           jmp 0x7afe4e
// 007afdcb  8bce                 mov ecx, esi
// 007afdcd  e81eeb0800           call 0x83e8f0
// 007afdd2  8bf8                 mov edi, eax
// 007afdd4  85ff                 test edi, edi
// 007afdd6  7418                 je 0x7afdf0
// 007afdd8  8b06                 mov eax, dword ptr [esi]
// 007afdda  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 007afde0  8d4c2424             lea ecx, [esp + 0x24]
// 007afde4  51                   push ecx
// 007afde5  8bce                 mov ecx, esi
// 007afde7  ffd2                 call edx
// 007afde9  8b00                 mov eax, dword ptr [eax]
// 007afdeb  83c004               add eax, 4
// 007afdee  eb02                 jmp 0x7afdf2
// 007afdf0  33c0                 xor eax, eax
// 007afdf2  f7db                 neg ebx
// 007afdf4  1bdb                 sbb ebx, ebx
// 007afdf6  23dd                 and ebx, ebp
// 007afdf8  03d8                 add ebx, eax
// 007afdfa  85ff                 test edi, edi
// 007afdfc  7432                 je 0x7afe30
// 007afdfe  8b06                 mov eax, dword ptr [esi]
// 007afe00  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 007afe06  8d4c242c             lea ecx, [esp + 0x2c]
// 007afe0a  51                   push ecx
// 007afe0b  8bce                 mov ecx, esi
// 007afe0d  ffd2                 call edx
// 007afe0f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 007afe13  3b4804               cmp ecx, dword ptr [eax + 4]
// 007afe16  7f18                 jg 0x7afe30
// 007afe18  8b16                 mov edx, dword ptr [esi]
// 007afe1a  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007afe20  8d44243c             lea eax, [esp + 0x3c]
// 007afe24  50                   push eax
// 007afe25  8bce                 mov ecx, esi
// 007afe27  ffd2                 call edx
// 007afe29  8b4004               mov eax, dword ptr [eax + 4]
// 007afe2c  89442470             mov dword ptr [esp + 0x70], eax
// 007afe30  399e80010000         cmp dword ptr [esi + 0x180], ebx
// 007afe36  7410                 je 0x7afe48
// 007afe38  899e80010000         mov dword ptr [esi + 0x180], ebx
// 007afe3e  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 007afe48  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 007afe4e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007afe52  8b542470             mov edx, dword ptr [esp + 0x70]
// 007afe56  890e                 mov dword ptr [esi], ecx
// 007afe58  8d4c244c             lea ecx, [esp + 0x4c]
// 007afe5c  895604               mov dword ptr [esi + 4], edx
// 007afe5f  c644246401           mov byte ptr [esp + 0x64], 1
// 007afe64  e8b7f80400           call 0x7ff720
// 007afe69  8d4c2474             lea ecx, [esp + 0x74]
// 007afe6d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007afe73  8bc6                 mov eax, esi
// 007afe75  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007afe79  64890d00000000       mov dword ptr fs:[0], ecx
// 007afe80  59                   pop ecx
// 007afe81  5f                   pop edi
// 007afe82  5e                   pop esi
// 007afe83  5d                   pop ebp
// 007afe84  5b                   pop ebx
// 007afe85  83c454               add esp, 0x54
// 007afe88  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp