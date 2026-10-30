// roc 2012-06 00a54090  unit: CXTPTabPaintManager::CAppearanceSetVisualStudio2005  size: 1852 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a54090
//
// 00a54090  83ec78               sub esp, 0x78
// 00a54093  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a5409a  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a5409d  53                   push ebx
// 00a5409e  8b5850               mov ebx, dword ptr [eax + 0x50]
// 00a540a1  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a540a5  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00a540a8  55                   push ebp
// 00a540a9  8b6844               mov ebp, dword ptr [eax + 0x44]
// 00a540ac  89542434             mov dword ptr [esp + 0x34], edx
// 00a540b0  8b91e4000000         mov edx, dword ptr [ecx + 0xe4]
// 00a540b6  8b8a4c010000         mov ecx, dword ptr [edx + 0x14c]
// 00a540bc  56                   push esi
// 00a540bd  57                   push edi
// 00a540be  8b784c               mov edi, dword ptr [eax + 0x4c]
// 00a540c1  896c2438             mov dword ptr [esp + 0x38], ebp
// 00a540c5  83f9ff               cmp ecx, -1
// 00a540c8  7506                 jne 0xa540d0
// 00a540ca  8b8a48010000         mov ecx, dword ptr [edx + 0x148]
// 00a540d0  894c2410             mov dword ptr [esp + 0x10], ecx
// 00a540d4  8b8a64010000         mov ecx, dword ptr [edx + 0x164]
// 00a540da  83f9ff               cmp ecx, -1
// 00a540dd  7506                 jne 0xa540e5
// 00a540df  8b8a60010000         mov ecx, dword ptr [edx + 0x160]
// 00a540e5  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a540e9  8b8a70010000         mov ecx, dword ptr [edx + 0x170]
// 00a540ef  83f9ff               cmp ecx, -1
// 00a540f2  7506                 jne 0xa540fa
// 00a540f4  8b8a6c010000         mov ecx, dword ptr [edx + 0x16c]
// 00a540fa  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a540fe  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00a54101  394104               cmp dword ptr [ecx + 4], eax
// 00a54104  7528                 jne 0xa5412e
// 00a54106  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 00a5410c  83f8ff               cmp eax, -1
// 00a5410f  750c                 jne 0xa5411d
// 00a54111  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 00a54117  89542410             mov dword ptr [esp + 0x10], edx
// 00a5411b  eb04                 jmp 0xa54121
// 00a5411d  89442410             mov dword ptr [esp + 0x10], eax
// 00a54121  b8ffffff00           mov eax, 0xffffff
// 00a54126  89442414             mov dword ptr [esp + 0x14], eax
// 00a5412a  89442418             mov dword ptr [esp + 0x18], eax
// 00a5412e  8b01                 mov eax, dword ptr [ecx]
// 00a54130  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a54133  ffd2                 call edx
// 00a54135  8bb4248c000000       mov esi, dword ptr [esp + 0x8c]
// 00a5413c  b903000000           mov ecx, 3
// 00a54141  3bc1                 cmp eax, ecx
// 00a54143  0f8731060000         ja 0xa5477a
// 00a54149  ff2485bc47a500       jmp dword ptr [eax*4 + 0xa547bc]
// 00a54150  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a54154  8bc3                 mov eax, ebx
// 00a54156  2bc1                 sub eax, ecx
// 00a54158  99                   cdq 
// 00a54159  2bc2                 sub eax, edx
// 00a5415b  8bd8                 mov ebx, eax
// 00a5415d  d1fb                 sar ebx, 1
// 00a5415f  8d441ffc             lea eax, [edi + ebx - 4]
// 00a54163  89442448             mov dword ptr [esp + 0x48], eax
// 00a54167  8d4101               lea eax, [ecx + 1]
// 00a5416a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a54171  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a54174  8b11                 mov edx, dword ptr [ecx]
// 00a54176  89442420             mov dword ptr [esp + 0x20], eax
// 00a5417a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a5417e  b803000000           mov eax, 3
// 00a54183  2bc3                 sub eax, ebx
// 00a54185  89442424             mov dword ptr [esp + 0x24], eax
// 00a54189  89442450             mov dword ptr [esp + 0x50], eax
// 00a5418d  8d441bfa             lea eax, [ebx + ebx - 6]
// 00a54191  89442428             mov dword ptr [esp + 0x28], eax
// 00a54195  89442454             mov dword ptr [esp + 0x54], eax
// 00a54199  b8feffffff           mov eax, 0xfffffffe
// 00a5419e  89442460             mov dword ptr [esp + 0x60], eax
// 00a541a2  89442470             mov dword ptr [esp + 0x70], eax
// 00a541a6  b802000000           mov eax, 2
// 00a541ab  2bc3                 sub eax, ebx
// 00a541ad  2bef                 sub ebp, edi
// 00a541af  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a541b3  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a541ba  03c0                 add eax, eax
// 00a541bc  83c50e               add ebp, 0xe
// 00a541bf  896c2468             mov dword ptr [esp + 0x68], ebp
// 00a541c3  bdfdffffff           mov ebp, 0xfffffffd
// 00a541c8  89442430             mov dword ptr [esp + 0x30], eax
// 00a541cc  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a541d3  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a541d6  6a00                 push 0
// 00a541d8  c744245cfcffffff     mov dword ptr [esp + 0x5c], 0xfffffffc
// 00a541e0  c744246004000000     mov dword ptr [esp + 0x60], 4
// 00a541e8  c744246801000000     mov dword ptr [esp + 0x68], 1
// 00a541f0  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00a541f8  c7442478ffffffff     mov dword ptr [esp + 0x78], 0xffffffff
// 00a54200  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a54204  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00a5420b  ffd0                 call eax
// 00a5420d  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a54214  50                   push eax
// 00a54215  6a08                 push 8
// 00a54217  8d4c2454             lea ecx, [esp + 0x54]
// 00a5421b  51                   push ecx
// 00a5421c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a54220  52                   push edx
// 00a54221  56                   push esi
// 00a54222  e869daffff           call 0xa51c90
// 00a54227  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a5422b  6a08                 push 8
// 00a5422d  8d44244c             lea eax, [esp + 0x4c]
// 00a54231  50                   push eax
// 00a54232  51                   push ecx
// 00a54233  56                   push esi
// 00a54234  e877d8ffff           call 0xa51ab0
// 00a54239  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a5423d  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a54241  6a04                 push 4
// 00a54243  8d541ffb             lea edx, [edi + ebx - 5]
// 00a54247  89442460             mov dword ptr [esp + 0x60], eax
// 00a5424b  8d44245c             lea eax, [esp + 0x5c]
// 00a5424f  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a54253  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a54257  50                   push eax
// 00a54258  89542460             mov dword ptr [esp + 0x60], edx
// 00a5425c  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54260  bffeffffff           mov edi, 0xfffffffe
// 00a54265  51                   push ecx
// 00a54266  89542470             mov dword ptr [esp + 0x70], edx
// 00a5426a  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a5426e  c744247803000000     mov dword ptr [esp + 0x78], 3
// 00a54276  897c247c             mov dword ptr [esp + 0x7c], edi
// 00a5427a  c784248000000001000000 mov dword ptr [esp + 0x80], 1
// 00a54285  56                   push esi
// 00a54286  e825d8ffff           call 0xa51ab0
// 00a5428b  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a5428f  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a54293  83c207               add edx, 7
// 00a54296  8d4c58ff             lea ecx, [eax + ebx*2 - 1]
// 00a5429a  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a5429e  89542468             mov dword ptr [esp + 0x68], edx
// 00a542a2  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00a542a6  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a542aa  897c2470             mov dword ptr [esp + 0x70], edi
// 00a542ae  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00a542b6  897c2478             mov dword ptr [esp + 0x78], edi
// 00a542ba  897c247c             mov dword ptr [esp + 0x7c], edi
// 00a542be  89942480000000       mov dword ptr [esp + 0x80], edx
// 00a542c5  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a542cc  6a04                 push 4
// 00a542ce  8d4c246c             lea ecx, [esp + 0x6c]
// 00a542d2  e994040000           jmp 0xa5476b
// 00a542d7  8bc3                 mov eax, ebx
// 00a542d9  2b44243c             sub eax, dword ptr [esp + 0x3c]
// 00a542dd  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00a542e1  99                   cdq 
// 00a542e2  2bc2                 sub eax, edx
// 00a542e4  d1f8                 sar eax, 1
// 00a542e6  8d5438fc             lea edx, [eax + edi - 4]
// 00a542ea  89542448             mov dword ptr [esp + 0x48], edx
// 00a542ee  8d53ff               lea edx, [ebx - 1]
// 00a542f1  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a542f5  8bd1                 mov edx, ecx
// 00a542f7  2bd0                 sub edx, eax
// 00a542f9  89542430             mov dword ptr [esp + 0x30], edx
// 00a542fd  89542450             mov dword ptr [esp + 0x50], edx
// 00a54301  03d2                 add edx, edx
// 00a54303  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a54307  89542454             mov dword ptr [esp + 0x54], edx
// 00a5430b  bafcffffff           mov edx, 0xfffffffc
// 00a54310  89542458             mov dword ptr [esp + 0x58], edx
// 00a54314  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a54318  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a5431c  89442420             mov dword ptr [esp + 0x20], eax
// 00a54320  b902000000           mov ecx, 2
// 00a54325  2bc8                 sub ecx, eax
// 00a54327  8d4400fc             lea eax, [eax + eax - 4]
// 00a5432b  2bd7                 sub edx, edi
// 00a5432d  89442434             mov dword ptr [esp + 0x34], eax
// 00a54331  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a54338  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a5433f  89542428             mov dword ptr [esp + 0x28], edx
// 00a54343  83c210               add edx, 0x10
// 00a54346  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a5434a  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a54351  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00a54354  89542468             mov dword ptr [esp + 0x68], edx
// 00a54358  8b11                 mov edx, dword ptr [ecx]
// 00a5435a  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a5435d  bdfdffffff           mov ebp, 0xfffffffd
// 00a54362  6a00                 push 0
// 00a54364  896c2464             mov dword ptr [esp + 0x64], ebp
// 00a54368  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00a54370  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00a54378  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a5437c  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00a54384  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a54388  ffd0                 call eax
// 00a5438a  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a54391  50                   push eax
// 00a54392  6a08                 push 8
// 00a54394  8d4c2454             lea ecx, [esp + 0x54]
// 00a54398  51                   push ecx
// 00a54399  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a5439d  52                   push edx
// 00a5439e  56                   push esi
// 00a5439f  e8ecd8ffff           call 0xa51c90
// 00a543a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a543a8  6a08                 push 8
// 00a543aa  8d44244c             lea eax, [esp + 0x4c]
// 00a543ae  50                   push eax
// 00a543af  51                   push ecx
// 00a543b0  56                   push esi
// 00a543b1  e8fad6ffff           call 0xa51ab0
// 00a543b6  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a543ba  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a543be  8d443afb             lea eax, [edx + edi - 5]
// 00a543c2  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a543c6  89442458             mov dword ptr [esp + 0x58], eax
// 00a543ca  8d43ff               lea eax, [ebx - 1]
// 00a543cd  6a04                 push 4
// 00a543cf  89442460             mov dword ptr [esp + 0x60], eax
// 00a543d3  8d44245c             lea eax, [esp + 0x5c]
// 00a543d7  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a543db  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a543df  50                   push eax
// 00a543e0  51                   push ecx
// 00a543e1  89542470             mov dword ptr [esp + 0x70], edx
// 00a543e5  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a543e9  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a543ed  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a543f1  c7842480000000ffffffff mov dword ptr [esp + 0x80], 0xffffffff
// 00a543fc  56                   push esi
// 00a543fd  e8aed6ffff           call 0xa51ab0
// 00a54402  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54406  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a5440a  8d0412               lea eax, [edx + edx]
// 00a5440d  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a54411  2bd8                 sub ebx, eax
// 00a54413  8b442454             mov eax, dword ptr [esp + 0x54]
// 00a54417  83c7f9               add edi, -7
// 00a5441a  43                   inc ebx
// 00a5441b  83c10f               add ecx, 0xf
// 00a5441e  894c2470             mov dword ptr [esp + 0x70], ecx
// 00a54422  c744247400000000     mov dword ptr [esp + 0x74], 0
// 00a5442a  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a5442e  c744247c01000000     mov dword ptr [esp + 0x7c], 1
// 00a54436  c7842480000000feffffff mov dword ptr [esp + 0x80], 0xfffffffe
// 00a54441  c784248400000002000000 mov dword ptr [esp + 0x84], 2
// 00a5444c  e9fe020000           jmp 0xa5474f
// 00a54451  8bc7                 mov eax, edi
// 00a54453  2bc5                 sub eax, ebp
// 00a54455  99                   cdq 
// 00a54456  2bc2                 sub eax, edx
// 00a54458  8bf8                 mov edi, eax
// 00a5445a  d1ff                 sar edi, 1
// 00a5445c  8d441ffc             lea eax, [edi + ebx - 4]
// 00a54460  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a54464  8d443ffb             lea eax, [edi + edi - 5]
// 00a54468  89442434             mov dword ptr [esp + 0x34], eax
// 00a5446c  89442450             mov dword ptr [esp + 0x50], eax
// 00a54470  8bc1                 mov eax, ecx
// 00a54472  2bc7                 sub eax, edi
// 00a54474  89442430             mov dword ptr [esp + 0x30], eax
// 00a54478  89442454             mov dword ptr [esp + 0x54], eax
// 00a5447c  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a54480  2bc3                 sub eax, ebx
// 00a54482  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a54486  83c010               add eax, 0x10
// 00a54489  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a5448d  b802000000           mov eax, 2
// 00a54492  2bc7                 sub eax, edi
// 00a54494  8d0c00               lea ecx, [eax + eax]
// 00a54497  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a5449b  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a544a2  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00a544a9  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 00a544ac  8b11                 mov edx, dword ptr [ecx]
// 00a544ae  896c2448             mov dword ptr [esp + 0x48], ebp
// 00a544b2  bdfdffffff           mov ebp, 0xfffffffd
// 00a544b7  89442424             mov dword ptr [esp + 0x24], eax
// 00a544bb  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a544c2  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a544c5  6a00                 push 0
// 00a544c7  c744245c04000000     mov dword ptr [esp + 0x5c], 4
// 00a544cf  c7442460fcffffff     mov dword ptr [esp + 0x60], 0xfffffffc
// 00a544d7  c744246401000000     mov dword ptr [esp + 0x64], 1
// 00a544df  896c2468             mov dword ptr [esp + 0x68], ebp
// 00a544e3  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00a544eb  c7442474ffffffff     mov dword ptr [esp + 0x74], 0xffffffff
// 00a544f3  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a544f7  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a544fb  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00a54502  ffd0                 call eax
// 00a54504  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a5450b  50                   push eax
// 00a5450c  6a08                 push 8
// 00a5450e  8d4c2454             lea ecx, [esp + 0x54]
// 00a54512  51                   push ecx
// 00a54513  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a54517  52                   push edx
// 00a54518  56                   push esi
// 00a54519  e872d7ffff           call 0xa51c90
// 00a5451e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a54522  6a08                 push 8
// 00a54524  8d44244c             lea eax, [esp + 0x4c]
// 00a54528  50                   push eax
// 00a54529  51                   push ecx
// 00a5452a  56                   push esi
// 00a5452b  e880d5ffff           call 0xa51ab0
// 00a54530  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a54534  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a54538  8d441ffb             lea eax, [edi + ebx - 5]
// 00a5453c  89542458             mov dword ptr [esp + 0x58], edx
// 00a54540  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a54544  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a54548  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a5454c  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a54550  6a05                 push 5
// 00a54552  8d4c245c             lea ecx, [esp + 0x5c]
// 00a54556  89542468             mov dword ptr [esp + 0x68], edx
// 00a5455a  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a5455e  83c00e               add eax, 0xe
// 00a54561  51                   push ecx
// 00a54562  c744247003000000     mov dword ptr [esp + 0x70], 3
// 00a5456a  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a5456e  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00a54576  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a5457a  c784248000000000000000 mov dword ptr [esp + 0x80], 0
// 00a54585  89842484000000       mov dword ptr [esp + 0x84], eax
// 00a5458c  52                   push edx
// 00a5458d  56                   push esi
// 00a5458e  e81dd5ffff           call 0xa51ab0
// 00a54593  8b442458             mov eax, dword ptr [esp + 0x58]
// 00a54597  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a5459b  8d4c78fe             lea ecx, [eax + edi*2 - 2]
// 00a5459f  b8feffffff           mov eax, 0xfffffffe
// 00a545a4  83c205               add edx, 5
// 00a545a7  89442470             mov dword ptr [esp + 0x70], eax
// 00a545ab  89442474             mov dword ptr [esp + 0x74], eax
// 00a545af  8b442448             mov eax, dword ptr [esp + 0x48]
// 00a545b3  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a545b7  6a03                 push 3
// 00a545b9  8d54246c             lea edx, [esp + 0x6c]
// 00a545bd  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00a545c1  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a545c5  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a545c9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a545cd  52                   push edx
// 00a545ce  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a545d5  50                   push eax
// 00a545d6  e996010000           jmp 0xa54771
// 00a545db  8bc7                 mov eax, edi
// 00a545dd  2bc5                 sub eax, ebp
// 00a545df  99                   cdq 
// 00a545e0  2bc2                 sub eax, edx
// 00a545e2  d1f8                 sar eax, 1
// 00a545e4  8d57ff               lea edx, [edi - 1]
// 00a545e7  89542448             mov dword ptr [esp + 0x48], edx
// 00a545eb  8d5418fc             lea edx, [eax + ebx - 4]
// 00a545ef  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a545f3  8bd1                 mov edx, ecx
// 00a545f5  2bd0                 sub edx, eax
// 00a545f7  8d2c12               lea ebp, [edx + edx]
// 00a545fa  89542430             mov dword ptr [esp + 0x30], edx
// 00a545fe  89542454             mov dword ptr [esp + 0x54], edx
// 00a54602  894c2478             mov dword ptr [esp + 0x78], ecx
// 00a54606  8d4c00fc             lea ecx, [eax + eax - 4]
// 00a5460a  bafcffffff           mov edx, 0xfffffffc
// 00a5460f  89542458             mov dword ptr [esp + 0x58], edx
// 00a54613  8954245c             mov dword ptr [esp + 0x5c], edx
// 00a54617  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5461b  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a5461f  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 00a54626  89442420             mov dword ptr [esp + 0x20], eax
// 00a5462a  2bd3                 sub edx, ebx
// 00a5462c  b902000000           mov ecx, 2
// 00a54631  2bc8                 sub ecx, eax
// 00a54633  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 00a5463a  83c210               add edx, 0x10
// 00a5463d  894c2424             mov dword ptr [esp + 0x24], ecx
// 00a54641  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a54648  8b4860               mov ecx, dword ptr [eax + 0x60]
// 00a5464b  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a5464f  8954246c             mov dword ptr [esp + 0x6c], edx
// 00a54653  8b11                 mov edx, dword ptr [ecx]
// 00a54655  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a54658  896c2434             mov dword ptr [esp + 0x34], ebp
// 00a5465c  896c2450             mov dword ptr [esp + 0x50], ebp
// 00a54660  bdfdffffff           mov ebp, 0xfffffffd
// 00a54665  6a00                 push 0
// 00a54667  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 00a5466f  896c2468             mov dword ptr [esp + 0x68], ebp
// 00a54673  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00a5467b  c744247401000000     mov dword ptr [esp + 0x74], 1
// 00a54683  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a54687  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00a5468e  ffd0                 call eax
// 00a54690  8b942494000000       mov edx, dword ptr [esp + 0x94]
// 00a54697  50                   push eax
// 00a54698  6a08                 push 8
// 00a5469a  8d4c2454             lea ecx, [esp + 0x54]
// 00a5469e  51                   push ecx
// 00a5469f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a546a3  52                   push edx
// 00a546a4  56                   push esi
// 00a546a5  e8e6d5ffff           call 0xa51c90
// 00a546aa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00a546ae  6a08                 push 8
// 00a546b0  8d44244c             lea eax, [esp + 0x4c]
// 00a546b4  50                   push eax
// 00a546b5  51                   push ecx
// 00a546b6  56                   push esi
// 00a546b7  e8f4d3ffff           call 0xa51ab0
// 00a546bc  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a546c0  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a546c4  8d47ff               lea eax, [edi - 1]
// 00a546c7  89442458             mov dword ptr [esp + 0x58], eax
// 00a546cb  8d441afb             lea eax, [edx + ebx - 5]
// 00a546cf  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a546d3  6a04                 push 4
// 00a546d5  89442460             mov dword ptr [esp + 0x60], eax
// 00a546d9  8d44245c             lea eax, [esp + 0x5c]
// 00a546dd  894c2464             mov dword ptr [esp + 0x64], ecx
// 00a546e1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a546e5  50                   push eax
// 00a546e6  51                   push ecx
// 00a546e7  89542470             mov dword ptr [esp + 0x70], edx
// 00a546eb  896c2474             mov dword ptr [esp + 0x74], ebp
// 00a546ef  896c2478             mov dword ptr [esp + 0x78], ebp
// 00a546f3  c744247cffffffff     mov dword ptr [esp + 0x7c], 0xffffffff
// 00a546fb  89ac2480000000       mov dword ptr [esp + 0x80], ebp
// 00a54702  56                   push esi
// 00a54703  e8a8d3ffff           call 0xa51ab0
// 00a54708  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a5470c  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a54710  8d0412               lea eax, [edx + edx]
// 00a54713  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a54717  2bf8                 sub edi, eax
// 00a54719  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a5471d  47                   inc edi
// 00a5471e  83c3f8               add ebx, -8
// 00a54721  c744247000000000     mov dword ptr [esp + 0x70], 0
// 00a54729  894c2474             mov dword ptr [esp + 0x74], ecx
// 00a5472d  c744247801000000     mov dword ptr [esp + 0x78], 1
// 00a54735  896c247c             mov dword ptr [esp + 0x7c], ebp
// 00a54739  c784248000000002000000 mov dword ptr [esp + 0x80], 2
// 00a54744  c7842484000000feffffff mov dword ptr [esp + 0x84], 0xfffffffe
// 00a5474f  8d4c2468             lea ecx, [esp + 0x68]
// 00a54753  6a05                 push 5
// 00a54755  89842490000000       mov dword ptr [esp + 0x90], eax
// 00a5475c  8994248c000000       mov dword ptr [esp + 0x8c], edx
// 00a54763  895c2470             mov dword ptr [esp + 0x70], ebx
// 00a54767  897c246c             mov dword ptr [esp + 0x6c], edi
// 00a5476b  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00a5476f  51                   push ecx
// 00a54770  52                   push edx
// 00a54771  56                   push esi
// 00a54772  e839d3ffff           call 0xa51ab0
// 00a54777  83c430               add esp, 0x30
// 00a5477a  8b942490000000       mov edx, dword ptr [esp + 0x90]
// 00a54781  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a54785  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 00a54788  8b5a44               mov ebx, dword ptr [edx + 0x44]
// 00a5478b  8b39                 mov edi, dword ptr [ecx]
// 00a5478d  6a01                 push 1
// 00a5478f  83ec10               sub esp, 0x10
// 00a54792  8bc4                 mov eax, esp
// 00a54794  8918                 mov dword ptr [eax], ebx
// 00a54796  8b5a48               mov ebx, dword ptr [edx + 0x48]
// 00a54799  895804               mov dword ptr [eax + 4], ebx
// 00a5479c  8b5a4c               mov ebx, dword ptr [edx + 0x4c]
// 00a5479f  895808               mov dword ptr [eax + 8], ebx
// 00a547a2  8b5a50               mov ebx, dword ptr [edx + 0x50]
// 00a547a5  52                   push edx
// 00a547a6  8b5768               mov edx, dword ptr [edi + 0x68]
// 00a547a9  56                   push esi
// 00a547aa  89580c               mov dword ptr [eax + 0xc], ebx
// 00a547ad  ffd2                 call edx
// 00a547af  5f                   pop edi
// 00a547b0  5e                   pop esi
// 00a547b1  5d                   pop ebp
// 00a547b2  5b                   pop ebx
// 00a547b3  83c478               add esp, 0x78
// 00a547b6  c20800               ret 8
// 00a547b9  8d4900               lea ecx, [ecx]
// 00a547bc  d7                   xlatb 
// 00a547bd  42                   inc edx
// 00a547be  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a547bf  00db                 add bl, bl
// 00a547c1  45                   inc ebp
// 00a547c2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a547c3  005041               add byte ptr [eax + 0x41], dl
// 00a547c6  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a547c7  005144               add byte ptr [ecx + 0x44], dl
// 00a547ca  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetVisualStudio2005@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp