// roc 2009-12 008b4e70  unit: CXTPDockingPaneSplitterContainer  size: 1044 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4e70
//
// 008b4e70  6aff                 push -1
// 008b4e72  68f8309600           push 0x9630f8
// 008b4e77  64a100000000         mov eax, dword ptr fs:[0]
// 008b4e7d  50                   push eax
// 008b4e7e  83ec50               sub esp, 0x50
// 008b4e81  53                   push ebx
// 008b4e82  55                   push ebp
// 008b4e83  56                   push esi
// 008b4e84  57                   push edi
// 008b4e85  a10052b600           mov eax, dword ptr [0xb65200]
// 008b4e8a  33c4                 xor eax, esp
// 008b4e8c  50                   push eax
// 008b4e8d  8d442464             lea eax, [esp + 0x64]
// 008b4e91  64a300000000         mov dword ptr fs:[0], eax
// 008b4e97  8bf1                 mov esi, ecx
// 008b4e99  e8a2b9ffff           call 0x8b0840
// 008b4e9e  8b80d4000000         mov eax, dword ptr [eax + 0xd4]
// 008b4ea4  8b4028               mov eax, dword ptr [eax + 0x28]
// 008b4ea7  8bce                 mov ecx, esi
// 008b4ea9  89442420             mov dword ptr [esp + 0x20], eax
// 008b4ead  e88eb9ffff           call 0x8b0840
// 008b4eb2  8bc8                 mov ecx, eax
// 008b4eb4  e8d737f8ff           call 0x838690
// 008b4eb9  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 008b4ebd  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008b4ec1  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 008b4ec5  894e1c               mov dword ptr [esi + 0x1c], ecx
// 008b4ec8  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b4ecf  8bf8                 mov edi, eax
// 008b4ed1  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 008b4ed8  895620               mov dword ptr [esi + 0x20], edx
// 008b4edb  894624               mov dword ptr [esi + 0x24], eax
// 008b4ede  894e28               mov dword ptr [esi + 0x28], ecx
// 008b4ee1  8bce                 mov ecx, esi
// 008b4ee3  895e14               mov dword ptr [esi + 0x14], ebx
// 008b4ee6  e855b9ffff           call 0x8b0840
// 008b4eeb  33d2                 xor edx, edx
// 008b4eed  3990e8000000         cmp dword ptr [eax + 0xe8], edx
// 008b4ef3  6a0a                 push 0xa
// 008b4ef5  0f94c2               sete dl
// 008b4ef8  8d4c244c             lea ecx, [esp + 0x4c]
// 008b4efc  8bea                 mov ebp, edx
// 008b4efe  e8bd47f8ff           call 0x8396c0
// 008b4f03  8bce                 mov ecx, esi
// 008b4f05  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 008b4f0d  e87e58faff           call 0x85a790
// 008b4f12  89442414             mov dword ptr [esp + 0x14], eax
// 008b4f16  85c0                 test eax, eax
// 008b4f18  744d                 je 0x8b4f67
// 008b4f1a  8d9b00000000         lea ebx, [ebx]
// 008b4f20  8d442414             lea eax, [esp + 0x14]
// 008b4f24  50                   push eax
// 008b4f25  8bce                 mov ecx, esi
// 008b4f27  e8e4df0300           call 0x8f2f10
// 008b4f2c  8bd8                 mov ebx, eax
// 008b4f2e  8b13                 mov edx, dword ptr [ebx]
// 008b4f30  8b4214               mov eax, dword ptr [edx + 0x14]
// 008b4f33  8bcb                 mov ecx, ebx
// 008b4f35  ffd0                 call eax
// 008b4f37  85c0                 test eax, eax
// 008b4f39  750a                 jne 0x8b4f45
// 008b4f3b  53                   push ebx
// 008b4f3c  8d4c244c             lea ecx, [esp + 0x4c]
// 008b4f40  e83bec0000           call 0x8c3b80
// 008b4f45  85ed                 test ebp, ebp
// 008b4f47  7513                 jne 0x8b4f5c
// 008b4f49  8b13                 mov edx, dword ptr [ebx]
// 008b4f4b  8b4208               mov eax, dword ptr [edx + 8]
// 008b4f4e  57                   push edi
// 008b4f4f  8bcb                 mov ecx, ebx
// 008b4f51  ffd0                 call eax
// 008b4f53  85c0                 test eax, eax
// 008b4f55  7405                 je 0x8b4f5c
// 008b4f57  bd01000000           mov ebp, 1
// 008b4f5c  837c241400           cmp dword ptr [esp + 0x14], 0
// 008b4f61  75bd                 jne 0x8b4f20
// 008b4f63  8b5c2474             mov ebx, dword ptr [esp + 0x74]
// 008b4f67  837c245400           cmp dword ptr [esp + 0x54], 0
// 008b4f6c  0f84eb020000         je 0x8b525d
// 008b4f72  8bce                 mov ecx, esi
// 008b4f74  e8c7b8ffff           call 0x8b0840
// 008b4f79  85a8e8000000         test dword ptr [eax + 0xe8], ebp
// 008b4f7f  7436                 je 0x8b4fb7
// 008b4f81  8d4c2438             lea ecx, [esp + 0x38]
// 008b4f85  e8a662f9ff           call 0x84b230
// 008b4f8a  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008b4f91  8b28                 mov ebp, dword ptr [eax]
// 008b4f93  8b17                 mov edx, dword ptr [edi]
// 008b4f95  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b4f98  51                   push ecx
// 008b4f99  83ec10               sub esp, 0x10
// 008b4f9c  8bcc                 mov ecx, esp
// 008b4f9e  8929                 mov dword ptr [ecx], ebp
// 008b4fa0  8b6804               mov ebp, dword ptr [eax + 4]
// 008b4fa3  896904               mov dword ptr [ecx + 4], ebp
// 008b4fa6  8b6808               mov ebp, dword ptr [eax + 8]
// 008b4fa9  8b400c               mov eax, dword ptr [eax + 0xc]
// 008b4fac  896908               mov dword ptr [ecx + 8], ebp
// 008b4faf  89410c               mov dword ptr [ecx + 0xc], eax
// 008b4fb2  53                   push ebx
// 008b4fb3  8bcf                 mov ecx, edi
// 008b4fb5  ffd2                 call edx
// 008b4fb7  8b442454             mov eax, dword ptr [esp + 0x54]
// 008b4fbb  33ff                 xor edi, edi
// 008b4fbd  3bc7                 cmp eax, edi
// 008b4fbf  0f8498020000         je 0x8b525d
// 008b4fc5  83f801               cmp eax, 1
// 008b4fc8  7555                 jne 0x8b501f
// 008b4fca  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008b4fce  33c9                 xor ecx, ecx
// 008b4fd0  3bc7                 cmp eax, edi
// 008b4fd2  0f95c1               setne cl
// 008b4fd5  3bcf                 cmp ecx, edi
// 008b4fd7  7505                 jne 0x8b4fde
// 008b4fd9  e82eebf3ff           call 0x7f3b0c
// 008b4fde  8b4808               mov ecx, dword ptr [eax + 8]
// 008b4fe1  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b4fe8  8b742478             mov esi, dword ptr [esp + 0x78]
// 008b4fec  8b11                 mov edx, dword ptr [ecx]
// 008b4fee  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b4ff1  50                   push eax
// 008b4ff2  83ec10               sub esp, 0x10
// 008b4ff5  8bc4                 mov eax, esp
// 008b4ff7  8930                 mov dword ptr [eax], esi
// 008b4ff9  8bb42490000000       mov esi, dword ptr [esp + 0x90]
// 008b5000  897004               mov dword ptr [eax + 4], esi
// 008b5003  8bb42494000000       mov esi, dword ptr [esp + 0x94]
// 008b500a  897008               mov dword ptr [eax + 8], esi
// 008b500d  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 008b5014  53                   push ebx
// 008b5015  89700c               mov dword ptr [eax + 0xc], esi
// 008b5018  ffd2                 call edx
// 008b501a  e93e020000           jmp 0x8b525d
// 008b501f  397e74               cmp dword ptr [esi + 0x74], edi
// 008b5022  0f8535020000         jne 0x8b525d
// 008b5028  8b5670               mov edx, dword ptr [esi + 0x70]
// 008b502b  8d442418             lea eax, [esp + 0x18]
// 008b502f  50                   push eax
// 008b5030  8d4c2420             lea ecx, [esp + 0x20]
// 008b5034  51                   push ecx
// 008b5035  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008b503c  6a01                 push 1
// 008b503e  52                   push edx
// 008b503f  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 008b5046  83ec10               sub esp, 0x10
// 008b5049  8bc4                 mov eax, esp
// 008b504b  8908                 mov dword ptr [eax], ecx
// 008b504d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008b5054  895004               mov dword ptr [eax + 4], edx
// 008b5057  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 008b505e  894808               mov dword ptr [eax + 8], ecx
// 008b5061  89500c               mov dword ptr [eax + 0xc], edx
// 008b5064  8d442468             lea eax, [esp + 0x68]
// 008b5068  50                   push eax
// 008b5069  8bce                 mov ecx, esi
// 008b506b  c7467401000000       mov dword ptr [esi + 0x74], 1
// 008b5072  897c2440             mov dword ptr [esp + 0x40], edi
// 008b5076  897c243c             mov dword ptr [esp + 0x3c], edi
// 008b507a  e8c1b7ffff           call 0x8b0840
// 008b507f  50                   push eax
// 008b5080  e88bf4ffff           call 0x8b4510
// 008b5085  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008b5088  8b442474             mov eax, dword ptr [esp + 0x74]
// 008b508c  8b9424a4000000       mov edx, dword ptr [esp + 0xa4]
// 008b5093  8b9c24a0000000       mov ebx, dword ptr [esp + 0xa0]
// 008b509a  8bac24ac000000       mov ebp, dword ptr [esp + 0xac]
// 008b50a1  894c244c             mov dword ptr [esp + 0x4c], ecx
// 008b50a5  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008b50ac  83c428               add esp, 0x28
// 008b50af  89442414             mov dword ptr [esp + 0x14], eax
// 008b50b3  8954242c             mov dword ptr [esp + 0x2c], edx
// 008b50b7  894c2430             mov dword ptr [esp + 0x30], ecx
// 008b50bb  85c0                 test eax, eax
// 008b50bd  0f8493010000         je 0x8b5256
// 008b50c3  8b38                 mov edi, dword ptr [eax]
// 008b50c5  897c2414             mov dword ptr [esp + 0x14], edi
// 008b50c9  8b4808               mov ecx, dword ptr [eax + 8]
// 008b50cc  8b5130               mov edx, dword ptr [ecx + 0x30]
// 008b50cf  8bc2                 mov eax, edx
// 008b50d1  f7d8                 neg eax
// 008b50d3  85d2                 test edx, edx
// 008b50d5  7e35                 jle 0x8b510c
// 008b50d7  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b50db  85ff                 test edi, edi
// 008b50dd  7504                 jne 0x8b50e3
// 008b50df  33c0                 xor eax, eax
// 008b50e1  eb0a                 jmp 0x8b50ed
// 008b50e3  8bc2                 mov eax, edx
// 008b50e5  0faf442418           imul eax, dword ptr [esp + 0x18]
// 008b50ea  99                   cdq 
// 008b50eb  f7ff                 idiv edi
// 008b50ed  2b7930               sub edi, dword ptr [ecx + 0x30]
// 008b50f0  33d2                 xor edx, edx
// 008b50f2  897c241c             mov dword ptr [esp + 0x1c], edi
// 008b50f6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 008b50fa  2bf8                 sub edi, eax
// 008b50fc  85ff                 test edi, edi
// 008b50fe  0f9ec2               setle dl
// 008b5101  4a                   dec edx
// 008b5102  23d7                 and edx, edi
// 008b5104  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008b5108  89542418             mov dword ptr [esp + 0x18], edx
// 008b510c  837e7000             cmp dword ptr [esi + 0x70], 0
// 008b5110  7467                 je 0x8b5179
// 008b5112  85ff                 test edi, edi
// 008b5114  750d                 jne 0x8b5123
// 008b5116  8bbc2480000000       mov edi, dword ptr [esp + 0x80]
// 008b511d  897c2430             mov dword ptr [esp + 0x30], edi
// 008b5121  eb08                 jmp 0x8b512b
// 008b5123  03c3                 add eax, ebx
// 008b5125  89442430             mov dword ptr [esp + 0x30], eax
// 008b5129  8bf8                 mov edi, eax
// 008b512b  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b5132  8b11                 mov edx, dword ptr [ecx]
// 008b5134  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b5137  50                   push eax
// 008b5138  83ec10               sub esp, 0x10
// 008b513b  8bc4                 mov eax, esp
// 008b513d  8918                 mov dword ptr [eax], ebx
// 008b513f  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 008b5143  895804               mov dword ptr [eax + 4], ebx
// 008b5146  897808               mov dword ptr [eax + 8], edi
// 008b5149  89680c               mov dword ptr [eax + 0xc], ebp
// 008b514c  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b5153  50                   push eax
// 008b5154  ffd2                 call edx
// 008b5156  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b515a  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 008b5161  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 008b5165  51                   push ecx
// 008b5166  8d1c07               lea ebx, [edi + eax]
// 008b5169  53                   push ebx
// 008b516a  52                   push edx
// 008b516b  57                   push edi
// 008b516c  8d442448             lea eax, [esp + 0x48]
// 008b5170  50                   push eax
// 008b5171  ff1538ca9800         call dword ptr [0x98ca38]
// 008b5177  eb68                 jmp 0x8b51e1
// 008b5179  85ff                 test edi, edi
// 008b517b  7509                 jne 0x8b5186
// 008b517d  8bac2484000000       mov ebp, dword ptr [esp + 0x84]
// 008b5184  eb07                 jmp 0x8b518d
// 008b5186  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008b518a  8d2c02               lea ebp, [edx + eax]
// 008b518d  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b5194  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008b5198  8b11                 mov edx, dword ptr [ecx]
// 008b519a  8b5224               mov edx, dword ptr [edx + 0x24]
// 008b519d  50                   push eax
// 008b519e  83ec10               sub esp, 0x10
// 008b51a1  8bc4                 mov eax, esp
// 008b51a3  8918                 mov dword ptr [eax], ebx
// 008b51a5  897804               mov dword ptr [eax + 4], edi
// 008b51a8  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008b51ac  897808               mov dword ptr [eax + 8], edi
// 008b51af  89680c               mov dword ptr [eax + 0xc], ebp
// 008b51b2  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008b51b9  50                   push eax
// 008b51ba  ffd2                 call edx
// 008b51bc  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b51c0  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 008b51c7  8b542478             mov edx, dword ptr [esp + 0x78]
// 008b51cb  8d3c28               lea edi, [eax + ebp]
// 008b51ce  57                   push edi
// 008b51cf  51                   push ecx
// 008b51d0  55                   push ebp
// 008b51d1  52                   push edx
// 008b51d2  8d442448             lea eax, [esp + 0x48]
// 008b51d6  50                   push eax
// 008b51d7  ff1538ca9800         call dword ptr [0x98ca38]
// 008b51dd  897c242c             mov dword ptr [esp + 0x2c], edi
// 008b51e1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 008b51e8  833900               cmp dword ptr [ecx], 0
// 008b51eb  745d                 je 0x8b524a
// 008b51ed  8b442424             mov eax, dword ptr [esp + 0x24]
// 008b51f1  85c0                 test eax, eax
// 008b51f3  7455                 je 0x8b524a
// 008b51f5  8b7808               mov edi, dword ptr [eax + 8]
// 008b51f8  8b10                 mov edx, dword ptr [eax]
// 008b51fa  89542424             mov dword ptr [esp + 0x24], edx
// 008b51fe  85ff                 test edi, edi
// 008b5200  7448                 je 0x8b524a
// 008b5202  8d442478             lea eax, [esp + 0x78]
// 008b5206  50                   push eax
// 008b5207  8d4c243c             lea ecx, [esp + 0x3c]
// 008b520b  51                   push ecx
// 008b520c  8bd1                 mov edx, ecx
// 008b520e  52                   push edx
// 008b520f  ff15dcca9800         call dword ptr [0x98cadc]
// 008b5215  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008b5219  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008b521d  8b542440             mov edx, dword ptr [esp + 0x40]
// 008b5221  6a00                 push 0
// 008b5223  2bc8                 sub ecx, eax
// 008b5225  51                   push ecx
// 008b5226  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008b522a  2bd1                 sub edx, ecx
// 008b522c  52                   push edx
// 008b522d  50                   push eax
// 008b522e  a1c4dc9800           mov eax, dword ptr [0x98dcc4]
// 008b5233  51                   push ecx
// 008b5234  50                   push eax
// 008b5235  8bcf                 mov ecx, edi
// 008b5237  e8f0e9f3ff           call 0x7f3c2c
// 008b523c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 008b523f  6a00                 push 0
// 008b5241  6a00                 push 0
// 008b5243  51                   push ecx
// 008b5244  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008b524a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008b524e  85c0                 test eax, eax
// 008b5250  0f856dfeffff         jne 0x8b50c3
// 008b5256  c7467400000000       mov dword ptr [esi + 0x74], 0
// 008b525d  8d4c2448             lea ecx, [esp + 0x48]
// 008b5261  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 008b5269  e88244f8ff           call 0x8396f0
// 008b526e  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008b5272  64890d00000000       mov dword ptr fs:[0], ecx
// 008b5279  59                   pop ecx
// 008b527a  5f                   pop edi
// 008b527b  5e                   pop esi
// 008b527c  5d                   pop ebp
// 008b527d  5b                   pop ebx
// 008b527e  83c45c               add esp, 0x5c
// 008b5281  c21800               ret 0x18
// copied from an identical function in another client (function ?OnSizeParent@CXTPDockingPaneSplitterContainer@@UAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneSplitterContainer.cpp