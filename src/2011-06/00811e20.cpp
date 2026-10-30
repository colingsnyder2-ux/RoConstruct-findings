// roc 2011-06 00811e20  unit: CXTPPaintManager  size: 1147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00811e20
//
// 00811e20  6aff                 push -1
// 00811e22  687925a000           push 0xa02579
// 00811e27  64a100000000         mov eax, dword ptr fs:[0]
// 00811e2d  50                   push eax
// 00811e2e  83ec48               sub esp, 0x48
// 00811e31  53                   push ebx
// 00811e32  55                   push ebp
// 00811e33  56                   push esi
// 00811e34  57                   push edi
// 00811e35  a12058c900           mov eax, dword ptr [0xc95820]
// 00811e3a  33c4                 xor eax, esp
// 00811e3c  50                   push eax
// 00811e3d  8d44245c             lea eax, [esp + 0x5c]
// 00811e41  64a300000000         mov dword ptr fs:[0], eax
// 00811e47  8bf9                 mov edi, ecx
// 00811e49  837c247800           cmp dword ptr [esp + 0x78], 0
// 00811e4e  8b742474             mov esi, dword ptr [esp + 0x74]
// 00811e52  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00811e58  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00811e5e  0f841c020000         je 0x812080
// 00811e64  83f802               cmp eax, 2
// 00811e67  751b                 jne 0x811e84
// 00811e69  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00811e6d  8b07                 mov eax, dword ptr [edi]
// 00811e6f  8b4058               mov eax, dword ptr [eax + 0x58]
// 00811e72  6a01                 push 1
// 00811e74  56                   push esi
// 00811e75  51                   push ecx
// 00811e76  8d542430             lea edx, [esp + 0x30]
// 00811e7a  52                   push edx
// 00811e7b  8bcf                 mov ecx, edi
// 00811e7d  ffd0                 call eax
// 00811e7f  e9e6010000           jmp 0x81206a
// 00811e84  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00811e8a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00811e90  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00811e96  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00811e9c  89442444             mov dword ptr [esp + 0x44], eax
// 00811ea0  89442434             mov dword ptr [esp + 0x34], eax
// 00811ea4  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00811eaa  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00811eae  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00811eb4  83c302               add ebx, 2
// 00811eb7  89542440             mov dword ptr [esp + 0x40], edx
// 00811ebb  894c2448             mov dword ptr [esp + 0x48], ecx
// 00811ebf  89542430             mov dword ptr [esp + 0x30], edx
// 00811ec3  894c2438             mov dword ptr [esp + 0x38], ecx
// 00811ec7  83f8ff               cmp eax, -1
// 00811eca  750f                 jne 0x811edb
// 00811ecc  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00811ed2  85c9                 test ecx, ecx
// 00811ed4  7405                 je 0x811edb
// 00811ed6  e885adffff           call 0x80cc60
// 00811edb  8bce                 mov ecx, esi
// 00811edd  89442478             mov dword ptr [esp + 0x78], eax
// 00811ee1  e8da990800           call 0x89b8c0
// 00811ee6  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 00811eea  85c0                 test eax, eax
// 00811eec  0f84ab000000         je 0x811f9d
// 00811ef2  8b16                 mov edx, dword ptr [esi]
// 00811ef4  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 00811efa  8d442414             lea eax, [esp + 0x14]
// 00811efe  50                   push eax
// 00811eff  8bce                 mov ecx, esi
// 00811f01  ffd2                 call edx
// 00811f03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00811f07  8b06                 mov eax, dword ptr [esi]
// 00811f09  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 00811f0f  51                   push ecx
// 00811f10  8bce                 mov ecx, esi
// 00811f12  ffd2                 call edx
// 00811f14  8bd8                 mov ebx, eax
// 00811f16  8bcb                 mov ecx, ebx
// 00811f18  e8b3220900           call 0x8a41d0
// 00811f1d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00811f22  8bcb                 mov ecx, ebx
// 00811f24  89442470             mov dword ptr [esp + 0x70], eax
// 00811f28  e863740500           call 0x869390
// 00811f2d  8bc8                 mov ecx, eax
// 00811f2f  8b442470             mov eax, dword ptr [esp + 0x70]
// 00811f33  99                   cdq 
// 00811f34  f7f9                 idiv ecx
// 00811f36  8b542440             mov edx, dword ptr [esp + 0x40]
// 00811f3a  6a01                 push 1
// 00811f3c  6a00                 push 0
// 00811f3e  6a00                 push 0
// 00811f40  89442424             mov dword ptr [esp + 0x24], eax
// 00811f44  8b442454             mov eax, dword ptr [esp + 0x54]
// 00811f48  03c2                 add eax, edx
// 00811f4a  99                   cdq 
// 00811f4b  2bc2                 sub eax, edx
// 00811f4d  8bc8                 mov ecx, eax
// 00811f4f  8b442424             mov eax, dword ptr [esp + 0x24]
// 00811f53  99                   cdq 
// 00811f54  2bc2                 sub eax, edx
// 00811f56  8b542448             mov edx, dword ptr [esp + 0x48]
// 00811f5a  83c203               add edx, 3
// 00811f5d  89542430             mov dword ptr [esp + 0x30], edx
// 00811f61  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 00811f68  52                   push edx
// 00811f69  8b542428             mov edx, dword ptr [esp + 0x28]
// 00811f6d  6a00                 push 0
// 00811f6f  6a00                 push 0
// 00811f71  53                   push ebx
// 00811f72  52                   push edx
// 00811f73  8b542434             mov edx, dword ptr [esp + 0x34]
// 00811f77  d1f9                 sar ecx, 1
// 00811f79  d1f8                 sar eax, 1
// 00811f7b  2bc8                 sub ecx, eax
// 00811f7d  8b07                 mov eax, dword ptr [edi]
// 00811f7f  52                   push edx
// 00811f80  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00811f86  51                   push ecx
// 00811f87  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00811f8b  51                   push ecx
// 00811f8c  55                   push ebp
// 00811f8d  8bcf                 mov ecx, edi
// 00811f8f  ffd2                 call edx
// 00811f91  8b442414             mov eax, dword ptr [esp + 0x14]
// 00811f95  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00811f99  8d5c0106             lea ebx, [ecx + eax + 6]
// 00811f9d  8b16                 mov edx, dword ptr [esi]
// 00811f9f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00811fa5  8bce                 mov ecx, esi
// 00811fa7  ffd0                 call eax
// 00811fa9  85c0                 test eax, eax
// 00811fab  0f84b9000000         je 0x81206a
// 00811fb1  85ff                 test edi, edi
// 00811fb3  7510                 jne 0x811fc5
// 00811fb5  6a11                 push 0x11
// 00811fb7  ff153001a400         call dword ptr [0xa40130]
// 00811fbd  50                   push eax
// 00811fbe  e8a58bffff           call 0x80ab68
// 00811fc3  eb06                 jmp 0x811fcb
// 00811fc5  8d87f0000000         lea eax, [edi + 0xf0]
// 00811fcb  50                   push eax
// 00811fcc  55                   push ebp
// 00811fcd  8d4c241c             lea ecx, [esp + 0x1c]
// 00811fd1  e84ab10400           call 0x85d120
// 00811fd6  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00811fdc  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00811fe2  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00811fe8  8b5500               mov edx, dword ptr [ebp]
// 00811feb  51                   push ecx
// 00811fec  50                   push eax
// 00811fed  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00811ff4  6a00                 push 0
// 00811ff6  6a00                 push 0
// 00811ff8  50                   push eax
// 00811ff9  89942484000000       mov dword ptr [esp + 0x84], edx
// 00812000  8b17                 mov edx, dword ptr [edi]
// 00812002  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00812008  6a00                 push 0
// 0081200a  6a00                 push 0
// 0081200c  8bcf                 mov ecx, edi
// 0081200e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00812019  ffd2                 call edx
// 0081201b  50                   push eax
// 0081201c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00812020  8b5038               mov edx, dword ptr [eax + 0x38]
// 00812023  8bcd                 mov ecx, ebp
// 00812025  ffd2                 call edx
// 00812027  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0081202b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0081202f  6a00                 push 0
// 00812031  6a00                 push 0
// 00812033  6a00                 push 0
// 00812035  6a01                 push 1
// 00812037  83ec10               sub esp, 0x10
// 0081203a  8bc4                 mov eax, esp
// 0081203c  8918                 mov dword ptr [eax], ebx
// 0081203e  894804               mov dword ptr [eax + 4], ecx
// 00812041  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00812045  56                   push esi
// 00812046  895008               mov dword ptr [eax + 8], edx
// 00812049  55                   push ebp
// 0081204a  8d54244c             lea edx, [esp + 0x4c]
// 0081204e  89480c               mov dword ptr [eax + 0xc], ecx
// 00812051  52                   push edx
// 00812052  8bcf                 mov ecx, edi
// 00812054  e827f6ffff           call 0x811680
// 00812059  8d4c2414             lea ecx, [esp + 0x14]
// 0081205d  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00812065  e836b10400           call 0x85d1a0
// 0081206a  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 0081206e  c70000000000         mov dword ptr [eax], 0
// 00812074  c7400400000000       mov dword ptr [eax + 4], 0
// 0081207b  e905020000           jmp 0x812285
// 00812080  8b16                 mov edx, dword ptr [esi]
// 00812082  8b5258               mov edx, dword ptr [edx + 0x58]
// 00812085  33c9                 xor ecx, ecx
// 00812087  83f802               cmp eax, 2
// 0081208a  0f94c1               sete cl
// 0081208d  8d442474             lea eax, [esp + 0x74]
// 00812091  50                   push eax
// 00812092  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00812096  8bce                 mov ecx, esi
// 00812098  ffd2                 call edx
// 0081209a  8d442474             lea eax, [esp + 0x74]
// 0081209e  50                   push eax
// 0081209f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 008120a7  e894d7ffff           call 0x80f840
// 008120ac  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 008120b0  83c404               add esp, 4
// 008120b3  8d8fa4000000         lea ecx, [edi + 0xa4]
// 008120b9  51                   push ecx
// 008120ba  55                   push ebp
// 008120bb  8d4c2454             lea ecx, [esp + 0x54]
// 008120bf  e85cb00400           call 0x85d120
// 008120c4  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 008120ca  c644246402           mov byte ptr [esp + 0x64], 2
// 008120cf  85c0                 test eax, eax
// 008120d1  7e06                 jle 0x8120d9
// 008120d3  89442470             mov dword ptr [esp + 0x70], eax
// 008120d7  eb21                 jmp 0x8120fa
// 008120d9  8b4508               mov eax, dword ptr [ebp + 8]
// 008120dc  8d542424             lea edx, [esp + 0x24]
// 008120e0  52                   push edx
// 008120e1  6a01                 push 1
// 008120e3  686056a600           push 0xa65660
// 008120e8  50                   push eax
// 008120e9  ff153801a400         call dword ptr [0xa40138]
// 008120ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008120f3  83c107               add ecx, 7
// 008120f6  894c2470             mov dword ptr [esp + 0x70], ecx
// 008120fa  8d87f0000000         lea eax, [edi + 0xf0]
// 00812100  50                   push eax
// 00812101  8d4c2450             lea ecx, [esp + 0x50]
// 00812105  e8269b0400           call 0x85bc30
// 0081210a  8b16                 mov edx, dword ptr [esi]
// 0081210c  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00812112  8bce                 mov ecx, esi
// 00812114  ffd0                 call eax
// 00812116  8bd8                 mov ebx, eax
// 00812118  85db                 test ebx, ebx
// 0081211a  7449                 je 0x812165
// 0081211c  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 00812123  7540                 jne 0x812165
// 00812125  8b5508               mov edx, dword ptr [ebp + 8]
// 00812128  8d4c2424             lea ecx, [esp + 0x24]
// 0081212c  51                   push ecx
// 0081212d  6a01                 push 1
// 0081212f  686056a600           push 0xa65660
// 00812134  52                   push edx
// 00812135  ff153801a400         call dword ptr [0xa40138]
// 0081213b  8b442428             mov eax, dword ptr [esp + 0x28]
// 0081213f  83c007               add eax, 7
// 00812142  39442470             cmp dword ptr [esp + 0x70], eax
// 00812146  7f1d                 jg 0x812165
// 00812148  6a01                 push 1
// 0081214a  686056a600           push 0xa65660
// 0081214f  8d4c241c             lea ecx, [esp + 0x1c]
// 00812153  51                   push ecx
// 00812154  8bcd                 mov ecx, ebp
// 00812156  e8d5dfffff           call 0x810130
// 0081215b  8b4004               mov eax, dword ptr [eax + 4]
// 0081215e  83c007               add eax, 7
// 00812161  89442470             mov dword ptr [esp + 0x70], eax
// 00812165  8d542424             lea edx, [esp + 0x24]
// 00812169  52                   push edx
// 0081216a  8d4c2478             lea ecx, [esp + 0x78]
// 0081216e  ff15a826a400         call dword ptr [0xa426a8]
// 00812174  50                   push eax
// 00812175  8d4c247c             lea ecx, [esp + 0x7c]
// 00812179  ff15c82da400         call dword ptr [0xa42dc8]
// 0081217f  50                   push eax
// 00812180  8b4508               mov eax, dword ptr [ebp + 8]
// 00812183  50                   push eax
// 00812184  ff153801a400         call dword ptr [0xa40138]
// 0081218a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0081218e  83c505               add ebp, 5
// 00812191  837c247800           cmp dword ptr [esp + 0x78], 0
// 00812196  7443                 je 0x8121db
// 00812198  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0081219e  8b17                 mov edx, dword ptr [edi]
// 008121a0  50                   push eax
// 008121a1  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 008121a7  8bcf                 mov ecx, edi
// 008121a9  ffd0                 call eax
// 008121ab  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 008121b1  03f8                 add edi, eax
// 008121b3  03fd                 add edi, ebp
// 008121b5  39be80010000         cmp dword ptr [esi + 0x180], edi
// 008121bb  7410                 je 0x8121cd
// 008121bd  89be80010000         mov dword ptr [esi + 0x180], edi
// 008121c3  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 008121cd  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 008121d3  8d0c06               lea ecx, [esi + eax]
// 008121d6  e983000000           jmp 0x81225e
// 008121db  8bce                 mov ecx, esi
// 008121dd  e8de960800           call 0x89b8c0
// 008121e2  8bf8                 mov edi, eax
// 008121e4  85ff                 test edi, edi
// 008121e6  7418                 je 0x812200
// 008121e8  8b06                 mov eax, dword ptr [esi]
// 008121ea  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 008121f0  8d4c2424             lea ecx, [esp + 0x24]
// 008121f4  51                   push ecx
// 008121f5  8bce                 mov ecx, esi
// 008121f7  ffd2                 call edx
// 008121f9  8b00                 mov eax, dword ptr [eax]
// 008121fb  83c004               add eax, 4
// 008121fe  eb02                 jmp 0x812202
// 00812200  33c0                 xor eax, eax
// 00812202  f7db                 neg ebx
// 00812204  1bdb                 sbb ebx, ebx
// 00812206  23dd                 and ebx, ebp
// 00812208  03d8                 add ebx, eax
// 0081220a  85ff                 test edi, edi
// 0081220c  7432                 je 0x812240
// 0081220e  8b06                 mov eax, dword ptr [esi]
// 00812210  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00812216  8d4c242c             lea ecx, [esp + 0x2c]
// 0081221a  51                   push ecx
// 0081221b  8bce                 mov ecx, esi
// 0081221d  ffd2                 call edx
// 0081221f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00812223  3b4804               cmp ecx, dword ptr [eax + 4]
// 00812226  7f18                 jg 0x812240
// 00812228  8b16                 mov edx, dword ptr [esi]
// 0081222a  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 00812230  8d44243c             lea eax, [esp + 0x3c]
// 00812234  50                   push eax
// 00812235  8bce                 mov ecx, esi
// 00812237  ffd2                 call edx
// 00812239  8b4004               mov eax, dword ptr [eax + 4]
// 0081223c  89442470             mov dword ptr [esp + 0x70], eax
// 00812240  399e80010000         cmp dword ptr [esi + 0x180], ebx
// 00812246  7410                 je 0x812258
// 00812248  899e80010000         mov dword ptr [esi + 0x180], ebx
// 0081224e  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 00812258  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 0081225e  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 00812262  8b542470             mov edx, dword ptr [esp + 0x70]
// 00812266  890e                 mov dword ptr [esi], ecx
// 00812268  8d4c244c             lea ecx, [esp + 0x4c]
// 0081226c  895604               mov dword ptr [esi + 4], edx
// 0081226f  c644246401           mov byte ptr [esp + 0x64], 1
// 00812274  e827af0400           call 0x85d1a0
// 00812279  8d4c2474             lea ecx, [esp + 0x74]
// 0081227d  ff15082ea400         call dword ptr [0xa42e08]
// 00812283  8bc6                 mov eax, esi
// 00812285  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00812289  64890d00000000       mov dword ptr fs:[0], ecx
// 00812290  59                   pop ecx
// 00812291  5f                   pop edi
// 00812292  5e                   pop esi
// 00812293  5d                   pop ebp
// 00812294  5b                   pop ebx
// 00812295  83c454               add esp, 0x54
// 00812298  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp