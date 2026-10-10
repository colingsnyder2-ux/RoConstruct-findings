// roc 2008-06 00782130  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 1816 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00782130
//
// 00782130  83ec2c               sub esp, 0x2c
// 00782133  53                   push ebx
// 00782134  55                   push ebp
// 00782135  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00782139  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0078213c  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 0078213f  8bd9                 mov ebx, ecx
// 00782141  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 00782144  89442414             mov dword ptr [esp + 0x14], eax
// 00782148  8b4550               mov eax, dword ptr [ebp + 0x50]
// 0078214b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0078214f  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00782152  8954241c             mov dword ptr [esp + 0x1c], edx
// 00782156  89442420             mov dword ptr [esp + 0x20], eax
// 0078215a  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00782160  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00782166  56                   push esi
// 00782167  57                   push edi
// 00782168  895c2418             mov dword ptr [esp + 0x18], ebx
// 0078216c  83f9ff               cmp ecx, -1
// 0078216f  750c                 jne 0x78217d
// 00782171  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00782177  89542410             mov dword ptr [esp + 0x10], edx
// 0078217b  eb04                 jmp 0x782181
// 0078217d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00782181  8bb828010000         mov edi, dword ptr [eax + 0x128]
// 00782187  83ffff               cmp edi, -1
// 0078218a  7506                 jne 0x782192
// 0078218c  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 00782192  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 00782198  83f9ff               cmp ecx, -1
// 0078219b  750c                 jne 0x7821a9
// 0078219d  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 007821a3  89442414             mov dword ptr [esp + 0x14], eax
// 007821a7  eb04                 jmp 0x7821ad
// 007821a9  894c2414             mov dword ptr [esp + 0x14], ecx
// 007821ad  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007821b0  8b11                 mov edx, dword ptr [ecx]
// 007821b2  8b4248               mov eax, dword ptr [edx + 0x48]
// 007821b5  ffd0                 call eax
// 007821b7  8b742440             mov esi, dword ptr [esp + 0x40]
// 007821bb  83f803               cmp eax, 3
// 007821be  0f8737060000         ja 0x7827fb
// 007821c4  ff248538287800       jmp dword ptr [eax*4 + 0x782838]
// 007821cb  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007821ce  b802000000           mov eax, 2
// 007821d3  396904               cmp dword ptr [ecx + 4], ebp
// 007821d6  750c                 jne 0x7821e4
// 007821d8  2944241c             sub dword ptr [esp + 0x1c], eax
// 007821dc  29442420             sub dword ptr [esp + 0x20], eax
// 007821e0  01442424             add dword ptr [esp + 0x24], eax
// 007821e4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007821e8  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 007821eb  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 007821f1  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007821f5  8b19                 mov ebx, dword ptr [ecx]
// 007821f7  40                   inc eax
// 007821f8  89442430             mov dword ptr [esp + 0x30], eax
// 007821fc  8b442424             mov eax, dword ptr [esp + 0x24]
// 00782200  48                   dec eax
// 00782201  89442434             mov dword ptr [esp + 0x34], eax
// 00782205  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782209  48                   dec eax
// 0078220a  55                   push ebp
// 0078220b  42                   inc edx
// 0078220c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00782210  83ec10               sub esp, 0x10
// 00782213  8bc4                 mov eax, esp
// 00782215  8910                 mov dword ptr [eax], edx
// 00782217  8b542444             mov edx, dword ptr [esp + 0x44]
// 0078221b  895004               mov dword ptr [eax + 4], edx
// 0078221e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00782222  895008               mov dword ptr [eax + 8], edx
// 00782225  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00782229  89500c               mov dword ptr [eax + 0xc], edx
// 0078222c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0078222f  56                   push esi
// 00782230  ffd0                 call eax
// 00782232  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 00782238  89442444             mov dword ptr [esp + 0x44], eax
// 0078223c  83ffff               cmp edi, -1
// 0078223f  7455                 je 0x782296
// 00782241  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782245  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00782249  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078224d  2bc8                 sub ecx, eax
// 0078224f  57                   push edi
// 00782250  83e902               sub ecx, 2
// 00782253  51                   push ecx
// 00782254  6a01                 push 1
// 00782256  83c002               add eax, 2
// 00782259  50                   push eax
// 0078225a  52                   push edx
// 0078225b  8bce                 mov ecx, esi
// 0078225d  e8de9d0300           call 0x7bc040
// 00782262  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782266  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078226a  8b5604               mov edx, dword ptr [esi + 4]
// 0078226d  57                   push edi
// 0078226e  40                   inc eax
// 0078226f  50                   push eax
// 00782270  41                   inc ecx
// 00782271  51                   push ecx
// 00782272  52                   push edx
// 00782273  ffd3                 call ebx
// 00782275  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00782279  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078227d  8b542420             mov edx, dword ptr [esp + 0x20]
// 00782281  57                   push edi
// 00782282  2bc8                 sub ecx, eax
// 00782284  6a01                 push 1
// 00782286  83e904               sub ecx, 4
// 00782289  51                   push ecx
// 0078228a  52                   push edx
// 0078228b  83c002               add eax, 2
// 0078228e  50                   push eax
// 0078228f  8bce                 mov ecx, esi
// 00782291  e8aa9d0300           call 0x7bc040
// 00782296  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078229a  83ffff               cmp edi, -1
// 0078229d  7437                 je 0x7822d6
// 0078229f  8b442420             mov eax, dword ptr [esp + 0x20]
// 007822a3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007822a7  8b5604               mov edx, dword ptr [esi + 4]
// 007822aa  57                   push edi
// 007822ab  40                   inc eax
// 007822ac  50                   push eax
// 007822ad  83c1fe               add ecx, -2
// 007822b0  51                   push ecx
// 007822b1  52                   push edx
// 007822b2  ffd3                 call ebx
// 007822b4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007822b8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007822bc  8b542424             mov edx, dword ptr [esp + 0x24]
// 007822c0  2bc8                 sub ecx, eax
// 007822c2  57                   push edi
// 007822c3  83e903               sub ecx, 3
// 007822c6  51                   push ecx
// 007822c7  6a01                 push 1
// 007822c9  83c002               add eax, 2
// 007822cc  50                   push eax
// 007822cd  4a                   dec edx
// 007822ce  52                   push edx
// 007822cf  8bce                 mov ecx, esi
// 007822d1  e86a9d0300           call 0x7bc040
// 007822d6  8b442410             mov eax, dword ptr [esp + 0x10]
// 007822da  83f8ff               cmp eax, -1
// 007822dd  7424                 je 0x782303
// 007822df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007822e3  8b542424             mov edx, dword ptr [esp + 0x24]
// 007822e7  50                   push eax
// 007822e8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007822ec  2bc8                 sub ecx, eax
// 007822ee  83e903               sub ecx, 3
// 007822f1  51                   push ecx
// 007822f2  6a01                 push 1
// 007822f4  83c002               add eax, 2
// 007822f7  50                   push eax
// 007822f8  83c2fe               add edx, -2
// 007822fb  52                   push edx
// 007822fc  8bce                 mov ecx, esi
// 007822fe  e83d9d0300           call 0x7bc040
// 00782303  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00782306  396804               cmp dword ptr [eax + 4], ebp
// 00782309  0f85ec040000         jne 0x7827fb
// 0078230f  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00782313  0f85e2040000         jne 0x7827fb
// 00782319  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078231d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00782321  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00782325  51                   push ecx
// 00782326  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0078232a  2bd0                 sub edx, eax
// 0078232c  83ea03               sub edx, 3
// 0078232f  52                   push edx
// 00782330  49                   dec ecx
// 00782331  51                   push ecx
// 00782332  40                   inc eax
// 00782333  50                   push eax
// 00782334  56                   push esi
// 00782335  e8d6e8ffff           call 0x780c10
// 0078233a  83c414               add esp, 0x14
// 0078233d  e9b9040000           jmp 0x7827fb
// 00782342  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00782345  b802000000           mov eax, 2
// 0078234a  396a04               cmp dword ptr [edx + 4], ebp
// 0078234d  750c                 jne 0x78235b
// 0078234f  2944241c             sub dword ptr [esp + 0x1c], eax
// 00782353  29442420             sub dword ptr [esp + 0x20], eax
// 00782357  01442428             add dword ptr [esp + 0x28], eax
// 0078235b  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0078235e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00782364  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782368  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0078236c  8b19                 mov ebx, dword ptr [ecx]
// 0078236e  40                   inc eax
// 0078236f  89442430             mov dword ptr [esp + 0x30], eax
// 00782373  8b442424             mov eax, dword ptr [esp + 0x24]
// 00782377  48                   dec eax
// 00782378  89442434             mov dword ptr [esp + 0x34], eax
// 0078237c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782380  48                   dec eax
// 00782381  55                   push ebp
// 00782382  42                   inc edx
// 00782383  8944243c             mov dword ptr [esp + 0x3c], eax
// 00782387  83ec10               sub esp, 0x10
// 0078238a  8bc4                 mov eax, esp
// 0078238c  8910                 mov dword ptr [eax], edx
// 0078238e  8b542444             mov edx, dword ptr [esp + 0x44]
// 00782392  895004               mov dword ptr [eax + 4], edx
// 00782395  8b542448             mov edx, dword ptr [esp + 0x48]
// 00782399  895008               mov dword ptr [eax + 8], edx
// 0078239c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007823a0  89500c               mov dword ptr [eax + 0xc], edx
// 007823a3  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007823a6  56                   push esi
// 007823a7  ffd0                 call eax
// 007823a9  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 007823af  89442444             mov dword ptr [esp + 0x44], eax
// 007823b3  83ffff               cmp edi, -1
// 007823b6  7455                 je 0x78240d
// 007823b8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007823bc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007823c0  8b542420             mov edx, dword ptr [esp + 0x20]
// 007823c4  57                   push edi
// 007823c5  2bc8                 sub ecx, eax
// 007823c7  6a01                 push 1
// 007823c9  83e902               sub ecx, 2
// 007823cc  51                   push ecx
// 007823cd  52                   push edx
// 007823ce  83c002               add eax, 2
// 007823d1  50                   push eax
// 007823d2  8bce                 mov ecx, esi
// 007823d4  e8679c0300           call 0x7bc040
// 007823d9  8b442420             mov eax, dword ptr [esp + 0x20]
// 007823dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007823e1  8b5604               mov edx, dword ptr [esi + 4]
// 007823e4  57                   push edi
// 007823e5  40                   inc eax
// 007823e6  50                   push eax
// 007823e7  41                   inc ecx
// 007823e8  51                   push ecx
// 007823e9  52                   push edx
// 007823ea  ffd3                 call ebx
// 007823ec  8b442420             mov eax, dword ptr [esp + 0x20]
// 007823f0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007823f4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007823f8  2bc8                 sub ecx, eax
// 007823fa  57                   push edi
// 007823fb  83e904               sub ecx, 4
// 007823fe  51                   push ecx
// 007823ff  6a01                 push 1
// 00782401  83c002               add eax, 2
// 00782404  50                   push eax
// 00782405  52                   push edx
// 00782406  8bce                 mov ecx, esi
// 00782408  e8339c0300           call 0x7bc040
// 0078240d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782411  83f8ff               cmp eax, -1
// 00782414  7422                 je 0x782438
// 00782416  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078241a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078241e  50                   push eax
// 0078241f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782423  2bc8                 sub ecx, eax
// 00782425  6a01                 push 1
// 00782427  83e902               sub ecx, 2
// 0078242a  51                   push ecx
// 0078242b  83c2fe               add edx, -2
// 0078242e  52                   push edx
// 0078242f  40                   inc eax
// 00782430  50                   push eax
// 00782431  8bce                 mov ecx, esi
// 00782433  e8089c0300           call 0x7bc040
// 00782438  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078243c  83ffff               cmp edi, -1
// 0078243f  7439                 je 0x78247a
// 00782441  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00782445  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782449  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078244d  57                   push edi
// 0078244e  2bc8                 sub ecx, eax
// 00782450  6a01                 push 1
// 00782452  83e903               sub ecx, 3
// 00782455  51                   push ecx
// 00782456  4a                   dec edx
// 00782457  52                   push edx
// 00782458  83c002               add eax, 2
// 0078245b  50                   push eax
// 0078245c  8bce                 mov ecx, esi
// 0078245e  e8dd9b0300           call 0x7bc040
// 00782463  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782467  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078246b  8b5604               mov edx, dword ptr [esi + 4]
// 0078246e  57                   push edi
// 0078246f  83c0fe               add eax, -2
// 00782472  50                   push eax
// 00782473  83c102               add ecx, 2
// 00782476  51                   push ecx
// 00782477  52                   push edx
// 00782478  ffd3                 call ebx
// 0078247a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078247e  83f8ff               cmp eax, -1
// 00782481  7415                 je 0x782498
// 00782483  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00782487  8b5604               mov edx, dword ptr [esi + 4]
// 0078248a  50                   push eax
// 0078248b  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0078248f  48                   dec eax
// 00782490  50                   push eax
// 00782491  83c102               add ecx, 2
// 00782494  51                   push ecx
// 00782495  52                   push edx
// 00782496  ffd3                 call ebx
// 00782498  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0078249b  396804               cmp dword ptr [eax + 4], ebp
// 0078249e  0f8557030000         jne 0x7827fb
// 007824a4  837d6400             cmp dword ptr [ebp + 0x64], 0
// 007824a8  0f854d030000         jne 0x7827fb
// 007824ae  8b442420             mov eax, dword ptr [esp + 0x20]
// 007824b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007824b6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007824ba  2bd0                 sub edx, eax
// 007824bc  51                   push ecx
// 007824bd  83ea03               sub edx, 3
// 007824c0  52                   push edx
// 007824c1  40                   inc eax
// 007824c2  50                   push eax
// 007824c3  8b442430             mov eax, dword ptr [esp + 0x30]
// 007824c7  48                   dec eax
// 007824c8  50                   push eax
// 007824c9  56                   push esi
// 007824ca  e811e7ffff           call 0x780be0
// 007824cf  83c414               add esp, 0x14
// 007824d2  e924030000           jmp 0x7827fb
// 007824d7  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 007824da  396904               cmp dword ptr [ecx + 4], ebp
// 007824dd  750f                 jne 0x7824ee
// 007824df  6a02                 push 2
// 007824e1  6a02                 push 2
// 007824e3  8d542424             lea edx, [esp + 0x24]
// 007824e7  52                   push edx
// 007824e8  ff15282d8000         call dword ptr [0x802d28]
// 007824ee  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 007824f1  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 007824f7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007824fb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007824ff  8b19                 mov ebx, dword ptr [ecx]
// 00782501  40                   inc eax
// 00782502  89442430             mov dword ptr [esp + 0x30], eax
// 00782506  8b442424             mov eax, dword ptr [esp + 0x24]
// 0078250a  48                   dec eax
// 0078250b  89442434             mov dword ptr [esp + 0x34], eax
// 0078250f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782513  48                   dec eax
// 00782514  55                   push ebp
// 00782515  42                   inc edx
// 00782516  8944243c             mov dword ptr [esp + 0x3c], eax
// 0078251a  83ec10               sub esp, 0x10
// 0078251d  8bc4                 mov eax, esp
// 0078251f  8910                 mov dword ptr [eax], edx
// 00782521  8b542444             mov edx, dword ptr [esp + 0x44]
// 00782525  895004               mov dword ptr [eax + 4], edx
// 00782528  8b542448             mov edx, dword ptr [esp + 0x48]
// 0078252c  895008               mov dword ptr [eax + 8], edx
// 0078252f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00782533  89500c               mov dword ptr [eax + 0xc], edx
// 00782536  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00782539  56                   push esi
// 0078253a  ffd0                 call eax
// 0078253c  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 00782542  89442444             mov dword ptr [esp + 0x44], eax
// 00782546  83ffff               cmp edi, -1
// 00782549  7432                 je 0x78257d
// 0078254b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078254f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00782553  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00782557  2bc8                 sub ecx, eax
// 00782559  57                   push edi
// 0078255a  83e902               sub ecx, 2
// 0078255d  51                   push ecx
// 0078255e  6a01                 push 1
// 00782560  40                   inc eax
// 00782561  50                   push eax
// 00782562  52                   push edx
// 00782563  8bce                 mov ecx, esi
// 00782565  e8d69a0300           call 0x7bc040
// 0078256a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0078256e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00782572  8b5604               mov edx, dword ptr [esi + 4]
// 00782575  57                   push edi
// 00782576  48                   dec eax
// 00782577  50                   push eax
// 00782578  41                   inc ecx
// 00782579  51                   push ecx
// 0078257a  52                   push edx
// 0078257b  ffd3                 call ebx
// 0078257d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782581  83f8ff               cmp eax, -1
// 00782584  7422                 je 0x7825a8
// 00782586  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0078258a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078258e  50                   push eax
// 0078258f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782593  2bc8                 sub ecx, eax
// 00782595  6a01                 push 1
// 00782597  83e904               sub ecx, 4
// 0078259a  51                   push ecx
// 0078259b  4a                   dec edx
// 0078259c  52                   push edx
// 0078259d  83c002               add eax, 2
// 007825a0  50                   push eax
// 007825a1  8bce                 mov ecx, esi
// 007825a3  e8989a0300           call 0x7bc040
// 007825a8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007825ac  83ffff               cmp edi, -1
// 007825af  7453                 je 0x782604
// 007825b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007825b5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007825b9  8b542428             mov edx, dword ptr [esp + 0x28]
// 007825bd  57                   push edi
// 007825be  2bc8                 sub ecx, eax
// 007825c0  6a01                 push 1
// 007825c2  83e904               sub ecx, 4
// 007825c5  51                   push ecx
// 007825c6  52                   push edx
// 007825c7  83c002               add eax, 2
// 007825ca  50                   push eax
// 007825cb  8bce                 mov ecx, esi
// 007825cd  e86e9a0300           call 0x7bc040
// 007825d2  8b442428             mov eax, dword ptr [esp + 0x28]
// 007825d6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007825da  8b5604               mov edx, dword ptr [esi + 4]
// 007825dd  57                   push edi
// 007825de  48                   dec eax
// 007825df  50                   push eax
// 007825e0  83c1fe               add ecx, -2
// 007825e3  51                   push ecx
// 007825e4  52                   push edx
// 007825e5  ffd3                 call ebx
// 007825e7  8b442420             mov eax, dword ptr [esp + 0x20]
// 007825eb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007825ef  8b542424             mov edx, dword ptr [esp + 0x24]
// 007825f3  57                   push edi
// 007825f4  2bc8                 sub ecx, eax
// 007825f6  49                   dec ecx
// 007825f7  51                   push ecx
// 007825f8  6a01                 push 1
// 007825fa  50                   push eax
// 007825fb  4a                   dec edx
// 007825fc  52                   push edx
// 007825fd  8bce                 mov ecx, esi
// 007825ff  e83c9a0300           call 0x7bc040
// 00782604  8b442410             mov eax, dword ptr [esp + 0x10]
// 00782608  83f8ff               cmp eax, -1
// 0078260b  741f                 je 0x78262c
// 0078260d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00782611  8b542424             mov edx, dword ptr [esp + 0x24]
// 00782615  50                   push eax
// 00782616  8b442424             mov eax, dword ptr [esp + 0x24]
// 0078261a  2bc8                 sub ecx, eax
// 0078261c  49                   dec ecx
// 0078261d  51                   push ecx
// 0078261e  6a01                 push 1
// 00782620  50                   push eax
// 00782621  83c2fe               add edx, -2
// 00782624  52                   push edx
// 00782625  8bce                 mov ecx, esi
// 00782627  e8149a0300           call 0x7bc040
// 0078262c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 0078262f  396804               cmp dword ptr [eax + 4], ebp
// 00782632  0f85c3010000         jne 0x7827fb
// 00782638  837d6400             cmp dword ptr [ebp + 0x64], 0
// 0078263c  0f85b9010000         jne 0x7827fb
// 00782642  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00782646  8b542424             mov edx, dword ptr [esp + 0x24]
// 0078264a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0078264e  51                   push ecx
// 0078264f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782653  2bd0                 sub edx, eax
// 00782655  4a                   dec edx
// 00782656  52                   push edx
// 00782657  41                   inc ecx
// 00782658  51                   push ecx
// 00782659  40                   inc eax
// 0078265a  50                   push eax
// 0078265b  56                   push esi
// 0078265c  e8afe5ffff           call 0x780c10
// 00782661  83c414               add esp, 0x14
// 00782664  8344242802           add dword ptr [esp + 0x28], 2
// 00782669  e98d010000           jmp 0x7827fb
// 0078266e  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00782671  396a04               cmp dword ptr [edx + 4], ebp
// 00782674  750f                 jne 0x782685
// 00782676  6a02                 push 2
// 00782678  6a02                 push 2
// 0078267a  8d442424             lea eax, [esp + 0x24]
// 0078267e  50                   push eax
// 0078267f  ff15282d8000         call dword ptr [0x802d28]
// 00782685  8b442424             mov eax, dword ptr [esp + 0x24]
// 00782689  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0078268c  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00782690  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00782694  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 0078269a  48                   dec eax
// 0078269b  89442434             mov dword ptr [esp + 0x34], eax
// 0078269f  8b442428             mov eax, dword ptr [esp + 0x28]
// 007826a3  48                   dec eax
// 007826a4  55                   push ebp
// 007826a5  8944243c             mov dword ptr [esp + 0x3c], eax
// 007826a9  83ec10               sub esp, 0x10
// 007826ac  8bc4                 mov eax, esp
// 007826ae  42                   inc edx
// 007826af  8910                 mov dword ptr [eax], edx
// 007826b1  8b542448             mov edx, dword ptr [esp + 0x48]
// 007826b5  43                   inc ebx
// 007826b6  895804               mov dword ptr [eax + 4], ebx
// 007826b9  895008               mov dword ptr [eax + 8], edx
// 007826bc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007826c0  89500c               mov dword ptr [eax + 0xc], edx
// 007826c3  8b01                 mov eax, dword ptr [ecx]
// 007826c5  8b4018               mov eax, dword ptr [eax + 0x18]
// 007826c8  56                   push esi
// 007826c9  ffd0                 call eax
// 007826cb  8b1db8208000         mov ebx, dword ptr [0x8020b8]
// 007826d1  89442440             mov dword ptr [esp + 0x40], eax
// 007826d5  83ffff               cmp edi, -1
// 007826d8  7432                 je 0x78270c
// 007826da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007826de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007826e2  8b542420             mov edx, dword ptr [esp + 0x20]
// 007826e6  57                   push edi
// 007826e7  2bc8                 sub ecx, eax
// 007826e9  6a01                 push 1
// 007826eb  83e902               sub ecx, 2
// 007826ee  51                   push ecx
// 007826ef  52                   push edx
// 007826f0  40                   inc eax
// 007826f1  50                   push eax
// 007826f2  8bce                 mov ecx, esi
// 007826f4  e847990300           call 0x7bc040
// 007826f9  8b442420             mov eax, dword ptr [esp + 0x20]
// 007826fd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782701  8b5604               mov edx, dword ptr [esi + 4]
// 00782704  57                   push edi
// 00782705  40                   inc eax
// 00782706  50                   push eax
// 00782707  49                   dec ecx
// 00782708  51                   push ecx
// 00782709  52                   push edx
// 0078270a  ffd3                 call ebx
// 0078270c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00782710  83fdff               cmp ebp, -1
// 00782713  7422                 je 0x782737
// 00782715  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782719  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0078271d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00782721  2bc8                 sub ecx, eax
// 00782723  55                   push ebp
// 00782724  83e904               sub ecx, 4
// 00782727  51                   push ecx
// 00782728  6a01                 push 1
// 0078272a  83c002               add eax, 2
// 0078272d  50                   push eax
// 0078272e  4a                   dec edx
// 0078272f  52                   push edx
// 00782730  8bce                 mov ecx, esi
// 00782732  e809990300           call 0x7bc040
// 00782737  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0078273b  83ffff               cmp edi, -1
// 0078273e  7436                 je 0x782776
// 00782740  8b442420             mov eax, dword ptr [esp + 0x20]
// 00782744  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00782748  8b542424             mov edx, dword ptr [esp + 0x24]
// 0078274c  2bc8                 sub ecx, eax
// 0078274e  57                   push edi
// 0078274f  83e904               sub ecx, 4
// 00782752  51                   push ecx
// 00782753  6a01                 push 1
// 00782755  83c002               add eax, 2
// 00782758  50                   push eax
// 00782759  52                   push edx
// 0078275a  8bce                 mov ecx, esi
// 0078275c  e8df980300           call 0x7bc040
// 00782761  8b442428             mov eax, dword ptr [esp + 0x28]
// 00782765  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782769  8b5604               mov edx, dword ptr [esi + 4]
// 0078276c  57                   push edi
// 0078276d  83c0fe               add eax, -2
// 00782770  50                   push eax
// 00782771  49                   dec ecx
// 00782772  51                   push ecx
// 00782773  52                   push edx
// 00782774  ffd3                 call ebx
// 00782776  83fdff               cmp ebp, -1
// 00782779  7422                 je 0x78279d
// 0078277b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078277f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00782783  8b542428             mov edx, dword ptr [esp + 0x28]
// 00782787  55                   push ebp
// 00782788  2bc8                 sub ecx, eax
// 0078278a  6a01                 push 1
// 0078278c  83e902               sub ecx, 2
// 0078278f  51                   push ecx
// 00782790  83c2fe               add edx, -2
// 00782793  52                   push edx
// 00782794  40                   inc eax
// 00782795  50                   push eax
// 00782796  8bce                 mov ecx, esi
// 00782798  e8a3980300           call 0x7bc040
// 0078279d  83ffff               cmp edi, -1
// 007827a0  7420                 je 0x7827c2
// 007827a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007827a6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007827aa  8b542428             mov edx, dword ptr [esp + 0x28]
// 007827ae  57                   push edi
// 007827af  2bc8                 sub ecx, eax
// 007827b1  6a01                 push 1
// 007827b3  83e902               sub ecx, 2
// 007827b6  51                   push ecx
// 007827b7  4a                   dec edx
// 007827b8  52                   push edx
// 007827b9  40                   inc eax
// 007827ba  50                   push eax
// 007827bb  8bce                 mov ecx, esi
// 007827bd  e87e980300           call 0x7bc040
// 007827c2  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007827c6  8b4560               mov eax, dword ptr [ebp + 0x60]
// 007827c9  396804               cmp dword ptr [eax + 4], ebp
// 007827cc  752d                 jne 0x7827fb
// 007827ce  837d6400             cmp dword ptr [ebp + 0x64], 0
// 007827d2  7527                 jne 0x7827fb
// 007827d4  8b442420             mov eax, dword ptr [esp + 0x20]
// 007827d8  8b542428             mov edx, dword ptr [esp + 0x28]
// 007827dc  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007827e0  2bd0                 sub edx, eax
// 007827e2  51                   push ecx
// 007827e3  4a                   dec edx
// 007827e4  52                   push edx
// 007827e5  40                   inc eax
// 007827e6  50                   push eax
// 007827e7  8b442428             mov eax, dword ptr [esp + 0x28]
// 007827eb  40                   inc eax
// 007827ec  50                   push eax
// 007827ed  56                   push esi
// 007827ee  e8ede3ffff           call 0x780be0
// 007827f3  83c414               add esp, 0x14
// 007827f6  8344242402           add dword ptr [esp + 0x24], 2
// 007827fb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007827ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00782803  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00782806  8b11                 mov edx, dword ptr [ecx]
// 00782808  6a01                 push 1
// 0078280a  83ec10               sub esp, 0x10
// 0078280d  8bc4                 mov eax, esp
// 0078280f  8938                 mov dword ptr [eax], edi
// 00782811  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00782815  897804               mov dword ptr [eax + 4], edi
// 00782818  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0078281c  897808               mov dword ptr [eax + 8], edi
// 0078281f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00782823  55                   push ebp
// 00782824  89780c               mov dword ptr [eax + 0xc], edi
// 00782827  8b4268               mov eax, dword ptr [edx + 0x68]
// 0078282a  56                   push esi
// 0078282b  ffd0                 call eax
// 0078282d  5f                   pop edi
// 0078282e  5e                   pop esi
// 0078282f  5d                   pop ebp
// 00782830  5b                   pop ebx
// 00782831  83c42c               add esp, 0x2c
// 00782834  c20800               ret 8
// 00782837  90                   nop 
// 00782838  cb                   retf 
// 00782839  217800               and dword ptr [eax], edi
// 0078283c  42                   inc edx
// 0078283d  237800               and edi, dword ptr [eax]
// 00782840  d7                   xlatb 
// 00782841  2478                 and al, 0x78
// 00782843  006e26               add byte ptr [esi + 0x26], ch
// 00782846  7800                 js 0x782848
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleButton@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp
