// roc 2009-06 00724f90  unit: CXTPPaintManager  size: 1147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00724f90
//
// 00724f90  6aff                 push -1
// 00724f92  68c94f8700           push 0x874fc9
// 00724f97  64a100000000         mov eax, dword ptr fs:[0]
// 00724f9d  50                   push eax
// 00724f9e  83ec48               sub esp, 0x48
// 00724fa1  53                   push ebx
// 00724fa2  55                   push ebp
// 00724fa3  56                   push esi
// 00724fa4  57                   push edi
// 00724fa5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00724faa  33c4                 xor eax, esp
// 00724fac  50                   push eax
// 00724fad  8d44245c             lea eax, [esp + 0x5c]
// 00724fb1  64a300000000         mov dword ptr fs:[0], eax
// 00724fb7  8bf9                 mov edi, ecx
// 00724fb9  837c247800           cmp dword ptr [esp + 0x78], 0
// 00724fbe  8b742474             mov esi, dword ptr [esp + 0x74]
// 00724fc2  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00724fc8  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00724fce  0f841c020000         je 0x7251f0
// 00724fd4  83f802               cmp eax, 2
// 00724fd7  751b                 jne 0x724ff4
// 00724fd9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00724fdd  8b07                 mov eax, dword ptr [edi]
// 00724fdf  8b4058               mov eax, dword ptr [eax + 0x58]
// 00724fe2  6a01                 push 1
// 00724fe4  56                   push esi
// 00724fe5  51                   push ecx
// 00724fe6  8d542430             lea edx, [esp + 0x30]
// 00724fea  52                   push edx
// 00724feb  8bcf                 mov ecx, edi
// 00724fed  ffd0                 call eax
// 00724fef  e9e6010000           jmp 0x7251da
// 00724ff4  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00724ffa  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00725000  8b9ec0000000         mov ebx, dword ptr [esi + 0xc0]
// 00725006  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 0072500c  89442444             mov dword ptr [esp + 0x44], eax
// 00725010  89442434             mov dword ptr [esp + 0x34], eax
// 00725014  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0072501a  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0072501e  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00725024  83c302               add ebx, 2
// 00725027  89542440             mov dword ptr [esp + 0x40], edx
// 0072502b  894c2448             mov dword ptr [esp + 0x48], ecx
// 0072502f  89542430             mov dword ptr [esp + 0x30], edx
// 00725033  894c2438             mov dword ptr [esp + 0x38], ecx
// 00725037  83f8ff               cmp eax, -1
// 0072503a  750f                 jne 0x72504b
// 0072503c  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00725042  85c9                 test ecx, ecx
// 00725044  7405                 je 0x72504b
// 00725046  e855aeffff           call 0x71fea0
// 0072504b  8bce                 mov ecx, esi
// 0072504d  89442478             mov dword ptr [esp + 0x78], eax
// 00725051  e86a60ffff           call 0x71b0c0
// 00725056  8b6c2470             mov ebp, dword ptr [esp + 0x70]
// 0072505a  85c0                 test eax, eax
// 0072505c  0f84ab000000         je 0x72510d
// 00725062  8b16                 mov edx, dword ptr [esi]
// 00725064  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 0072506a  8d442414             lea eax, [esp + 0x14]
// 0072506e  50                   push eax
// 0072506f  8bce                 mov ecx, esi
// 00725071  ffd2                 call edx
// 00725073  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00725077  8b06                 mov eax, dword ptr [esi]
// 00725079  8b90a8000000         mov edx, dword ptr [eax + 0xa8]
// 0072507f  51                   push ecx
// 00725080  8bce                 mov ecx, esi
// 00725082  ffd2                 call edx
// 00725084  8bd8                 mov ebx, eax
// 00725086  8bcb                 mov ecx, ebx
// 00725088  e8237e0200           call 0x74ceb0
// 0072508d  0faf442414           imul eax, dword ptr [esp + 0x14]
// 00725092  8bcb                 mov ecx, ebx
// 00725094  89442470             mov dword ptr [esp + 0x70], eax
// 00725098  e883310a00           call 0x7c8220
// 0072509d  8bc8                 mov ecx, eax
// 0072509f  8b442470             mov eax, dword ptr [esp + 0x70]
// 007250a3  99                   cdq 
// 007250a4  f7f9                 idiv ecx
// 007250a6  8b542440             mov edx, dword ptr [esp + 0x40]
// 007250aa  6a01                 push 1
// 007250ac  6a00                 push 0
// 007250ae  6a00                 push 0
// 007250b0  89442424             mov dword ptr [esp + 0x24], eax
// 007250b4  8b442454             mov eax, dword ptr [esp + 0x54]
// 007250b8  03c2                 add eax, edx
// 007250ba  99                   cdq 
// 007250bb  2bc2                 sub eax, edx
// 007250bd  8bc8                 mov ecx, eax
// 007250bf  8b442424             mov eax, dword ptr [esp + 0x24]
// 007250c3  99                   cdq 
// 007250c4  2bc2                 sub eax, edx
// 007250c6  8b542448             mov edx, dword ptr [esp + 0x48]
// 007250ca  83c203               add edx, 3
// 007250cd  89542430             mov dword ptr [esp + 0x30], edx
// 007250d1  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 007250d8  52                   push edx
// 007250d9  8b542428             mov edx, dword ptr [esp + 0x28]
// 007250dd  6a00                 push 0
// 007250df  6a00                 push 0
// 007250e1  53                   push ebx
// 007250e2  52                   push edx
// 007250e3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007250e7  d1f9                 sar ecx, 1
// 007250e9  d1f8                 sar eax, 1
// 007250eb  2bc8                 sub ecx, eax
// 007250ed  8b07                 mov eax, dword ptr [edi]
// 007250ef  52                   push edx
// 007250f0  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 007250f6  51                   push ecx
// 007250f7  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007250fb  51                   push ecx
// 007250fc  55                   push ebp
// 007250fd  8bcf                 mov ecx, edi
// 007250ff  ffd2                 call edx
// 00725101  8b442414             mov eax, dword ptr [esp + 0x14]
// 00725105  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00725109  8d5c0106             lea ebx, [ecx + eax + 6]
// 0072510d  8b16                 mov edx, dword ptr [esi]
// 0072510f  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00725115  8bce                 mov ecx, esi
// 00725117  ffd0                 call eax
// 00725119  85c0                 test eax, eax
// 0072511b  0f84b9000000         je 0x7251da
// 00725121  85ff                 test edi, edi
// 00725123  7510                 jne 0x725135
// 00725125  6a11                 push 0x11
// 00725127  ff1534e18900         call dword ptr [0x89e134]
// 0072512d  50                   push eax
// 0072512e  e80344ffff           call 0x719536
// 00725133  eb06                 jmp 0x72513b
// 00725135  8d87f0000000         lea eax, [edi + 0xf0]
// 0072513b  50                   push eax
// 0072513c  55                   push ebp
// 0072513d  8d4c241c             lea ecx, [esp + 0x1c]
// 00725141  e81ab70400           call 0x770860
// 00725146  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0072514c  8b8800010000         mov ecx, dword ptr [eax + 0x100]
// 00725152  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00725158  8b5500               mov edx, dword ptr [ebp]
// 0072515b  51                   push ecx
// 0072515c  50                   push eax
// 0072515d  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00725164  6a00                 push 0
// 00725166  6a00                 push 0
// 00725168  50                   push eax
// 00725169  89942484000000       mov dword ptr [esp + 0x84], edx
// 00725170  8b17                 mov edx, dword ptr [edi]
// 00725172  8b9280000000         mov edx, dword ptr [edx + 0x80]
// 00725178  6a00                 push 0
// 0072517a  6a00                 push 0
// 0072517c  8bcf                 mov ecx, edi
// 0072517e  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00725189  ffd2                 call edx
// 0072518b  50                   push eax
// 0072518c  8b442474             mov eax, dword ptr [esp + 0x74]
// 00725190  8b5038               mov edx, dword ptr [eax + 0x38]
// 00725193  8bcd                 mov ecx, ebp
// 00725195  ffd2                 call edx
// 00725197  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0072519b  8b542434             mov edx, dword ptr [esp + 0x34]
// 0072519f  6a00                 push 0
// 007251a1  6a00                 push 0
// 007251a3  6a00                 push 0
// 007251a5  6a01                 push 1
// 007251a7  83ec10               sub esp, 0x10
// 007251aa  8bc4                 mov eax, esp
// 007251ac  8918                 mov dword ptr [eax], ebx
// 007251ae  894804               mov dword ptr [eax + 4], ecx
// 007251b1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 007251b5  56                   push esi
// 007251b6  895008               mov dword ptr [eax + 8], edx
// 007251b9  55                   push ebp
// 007251ba  8d54244c             lea edx, [esp + 0x4c]
// 007251be  89480c               mov dword ptr [eax + 0xc], ecx
// 007251c1  52                   push edx
// 007251c2  8bcf                 mov ecx, edi
// 007251c4  e827f6ffff           call 0x7247f0
// 007251c9  8d4c2414             lea ecx, [esp + 0x14]
// 007251cd  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 007251d5  e806b70400           call 0x7708e0
// 007251da  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007251de  c70000000000         mov dword ptr [eax], 0
// 007251e4  c7400400000000       mov dword ptr [eax + 4], 0
// 007251eb  e905020000           jmp 0x7253f5
// 007251f0  8b16                 mov edx, dword ptr [esi]
// 007251f2  8b5258               mov edx, dword ptr [edx + 0x58]
// 007251f5  33c9                 xor ecx, ecx
// 007251f7  83f802               cmp eax, 2
// 007251fa  0f94c1               sete cl
// 007251fd  8d442474             lea eax, [esp + 0x74]
// 00725201  50                   push eax
// 00725202  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00725206  8bce                 mov ecx, esi
// 00725208  ffd2                 call edx
// 0072520a  8d442474             lea eax, [esp + 0x74]
// 0072520e  50                   push eax
// 0072520f  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00725217  e8f4d7ffff           call 0x722a10
// 0072521c  8b6c2474             mov ebp, dword ptr [esp + 0x74]
// 00725220  83c404               add esp, 4
// 00725223  8d8fa4000000         lea ecx, [edi + 0xa4]
// 00725229  51                   push ecx
// 0072522a  55                   push ebp
// 0072522b  8d4c2454             lea ecx, [esp + 0x54]
// 0072522f  e82cb60400           call 0x770860
// 00725234  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 0072523a  c644246402           mov byte ptr [esp + 0x64], 2
// 0072523f  85c0                 test eax, eax
// 00725241  7e06                 jle 0x725249
// 00725243  89442470             mov dword ptr [esp + 0x70], eax
// 00725247  eb21                 jmp 0x72526a
// 00725249  8b4508               mov eax, dword ptr [ebp + 8]
// 0072524c  8d542424             lea edx, [esp + 0x24]
// 00725250  52                   push edx
// 00725251  6a01                 push 1
// 00725253  68f8338b00           push 0x8b33f8
// 00725258  50                   push eax
// 00725259  ff1550e18900         call dword ptr [0x89e150]
// 0072525f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00725263  83c107               add ecx, 7
// 00725266  894c2470             mov dword ptr [esp + 0x70], ecx
// 0072526a  8d87f0000000         lea eax, [edi + 0xf0]
// 00725270  50                   push eax
// 00725271  8d4c2450             lea ecx, [esp + 0x50]
// 00725275  e876a10400           call 0x76f3f0
// 0072527a  8b16                 mov edx, dword ptr [esi]
// 0072527c  8b8284000000         mov eax, dword ptr [edx + 0x84]
// 00725282  8bce                 mov ecx, esi
// 00725284  ffd0                 call eax
// 00725286  8bd8                 mov ebx, eax
// 00725288  85db                 test ebx, ebx
// 0072528a  7449                 je 0x7252d5
// 0072528c  83bf1401000000       cmp dword ptr [edi + 0x114], 0
// 00725293  7540                 jne 0x7252d5
// 00725295  8b5508               mov edx, dword ptr [ebp + 8]
// 00725298  8d4c2424             lea ecx, [esp + 0x24]
// 0072529c  51                   push ecx
// 0072529d  6a01                 push 1
// 0072529f  68f8338b00           push 0x8b33f8
// 007252a4  52                   push edx
// 007252a5  ff1550e18900         call dword ptr [0x89e150]
// 007252ab  8b442428             mov eax, dword ptr [esp + 0x28]
// 007252af  83c007               add eax, 7
// 007252b2  39442470             cmp dword ptr [esp + 0x70], eax
// 007252b6  7f1d                 jg 0x7252d5
// 007252b8  6a01                 push 1
// 007252ba  68f8338b00           push 0x8b33f8
// 007252bf  8d4c241c             lea ecx, [esp + 0x1c]
// 007252c3  51                   push ecx
// 007252c4  8bcd                 mov ecx, ebp
// 007252c6  e895e0ffff           call 0x723360
// 007252cb  8b4004               mov eax, dword ptr [eax + 4]
// 007252ce  83c007               add eax, 7
// 007252d1  89442470             mov dword ptr [esp + 0x70], eax
// 007252d5  8d542424             lea edx, [esp + 0x24]
// 007252d9  52                   push edx
// 007252da  8d4c2478             lea ecx, [esp + 0x78]
// 007252de  ff1554fb8900         call dword ptr [0x89fb54]
// 007252e4  50                   push eax
// 007252e5  8d4c247c             lea ecx, [esp + 0x7c]
// 007252e9  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007252ef  50                   push eax
// 007252f0  8b4508               mov eax, dword ptr [ebp + 8]
// 007252f3  50                   push eax
// 007252f4  ff1550e18900         call dword ptr [0x89e150]
// 007252fa  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007252fe  83c505               add ebp, 5
// 00725301  837c247800           cmp dword ptr [esp + 0x78], 0
// 00725306  7443                 je 0x72534b
// 00725308  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 0072530e  8b17                 mov edx, dword ptr [edi]
// 00725310  50                   push eax
// 00725311  8b8204010000         mov eax, dword ptr [edx + 0x104]
// 00725317  8bcf                 mov ecx, edi
// 00725319  ffd0                 call eax
// 0072531b  8bbf80000000         mov edi, dword ptr [edi + 0x80]
// 00725321  03f8                 add edi, eax
// 00725323  03fd                 add edi, ebp
// 00725325  39be80010000         cmp dword ptr [esi + 0x180], edi
// 0072532b  7410                 je 0x72533d
// 0072532d  89be80010000         mov dword ptr [esi + 0x180], edi
// 00725333  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 0072533d  8bb660010000         mov esi, dword ptr [esi + 0x160]
// 00725343  8d0c06               lea ecx, [esi + eax]
// 00725346  e983000000           jmp 0x7253ce
// 0072534b  8bce                 mov ecx, esi
// 0072534d  e86e5dffff           call 0x71b0c0
// 00725352  8bf8                 mov edi, eax
// 00725354  85ff                 test edi, edi
// 00725356  7418                 je 0x725370
// 00725358  8b06                 mov eax, dword ptr [esi]
// 0072535a  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00725360  8d4c2424             lea ecx, [esp + 0x24]
// 00725364  51                   push ecx
// 00725365  8bce                 mov ecx, esi
// 00725367  ffd2                 call edx
// 00725369  8b00                 mov eax, dword ptr [eax]
// 0072536b  83c004               add eax, 4
// 0072536e  eb02                 jmp 0x725372
// 00725370  33c0                 xor eax, eax
// 00725372  f7db                 neg ebx
// 00725374  1bdb                 sbb ebx, ebx
// 00725376  23dd                 and ebx, ebp
// 00725378  03d8                 add ebx, eax
// 0072537a  85ff                 test edi, edi
// 0072537c  7432                 je 0x7253b0
// 0072537e  8b06                 mov eax, dword ptr [esi]
// 00725380  8b90c8000000         mov edx, dword ptr [eax + 0xc8]
// 00725386  8d4c242c             lea ecx, [esp + 0x2c]
// 0072538a  51                   push ecx
// 0072538b  8bce                 mov ecx, esi
// 0072538d  ffd2                 call edx
// 0072538f  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00725393  3b4804               cmp ecx, dword ptr [eax + 4]
// 00725396  7f18                 jg 0x7253b0
// 00725398  8b16                 mov edx, dword ptr [esi]
// 0072539a  8b92c8000000         mov edx, dword ptr [edx + 0xc8]
// 007253a0  8d44243c             lea eax, [esp + 0x3c]
// 007253a4  50                   push eax
// 007253a5  8bce                 mov ecx, esi
// 007253a7  ffd2                 call edx
// 007253a9  8b4004               mov eax, dword ptr [eax + 4]
// 007253ac  89442470             mov dword ptr [esp + 0x70], eax
// 007253b0  399e80010000         cmp dword ptr [esi + 0x180], ebx
// 007253b6  7410                 je 0x7253c8
// 007253b8  899e80010000         mov dword ptr [esi + 0x180], ebx
// 007253be  c7868401000001000000 mov dword ptr [esi + 0x184], 1
// 007253c8  8b8e60010000         mov ecx, dword ptr [esi + 0x160]
// 007253ce  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007253d2  8b542470             mov edx, dword ptr [esp + 0x70]
// 007253d6  890e                 mov dword ptr [esi], ecx
// 007253d8  8d4c244c             lea ecx, [esp + 0x4c]
// 007253dc  895604               mov dword ptr [esi + 4], edx
// 007253df  c644246401           mov byte ptr [esp + 0x64], 1
// 007253e4  e8f7b40400           call 0x7708e0
// 007253e9  8d4c2474             lea ecx, [esp + 0x74]
// 007253ed  ff1510fd8900         call dword ptr [0x89fd10]
// 007253f3  8bc6                 mov eax, esi
// 007253f5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007253f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00725400  59                   pop ecx
// 00725401  5f                   pop edi
// 00725402  5e                   pop esi
// 00725403  5d                   pop ebp
// 00725404  5b                   pop ebx
// 00725405  83c454               add esp, 0x54
// 00725408  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlEdit@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@PAVCXTPControlEdit@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp