// roc 2008-06 00780350  unit: CXTPTabPaintManager  size: 1724 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00780350
//
// 00780350  83ec28               sub esp, 0x28
// 00780353  53                   push ebx
// 00780354  55                   push ebp
// 00780355  56                   push esi
// 00780356  8b742438             mov esi, dword ptr [esp + 0x38]
// 0078035a  8b06                 mov eax, dword ptr [esi]
// 0078035c  8b5040               mov edx, dword ptr [eax + 0x40]
// 0078035f  8be9                 mov ebp, ecx
// 00780361  57                   push edi
// 00780362  8bce                 mov ecx, esi
// 00780364  896c2414             mov dword ptr [esp + 0x14], ebp
// 00780368  ffd2                 call edx
// 0078036a  85c0                 test eax, eax
// 0078036c  7437                 je 0x7803a5
// 0078036e  8b06                 mov eax, dword ptr [esi]
// 00780370  8b5048               mov edx, dword ptr [eax + 0x48]
// 00780373  bf02000000           mov edi, 2
// 00780378  8bce                 mov ecx, esi
// 0078037a  8d5fff               lea ebx, [edi - 1]
// 0078037d  8bef                 mov ebp, edi
// 0078037f  ffd2                 call edx
// 00780381  50                   push eax
// 00780382  83ec10               sub esp, 0x10
// 00780385  8bc4                 mov eax, esp
// 00780387  8938                 mov dword ptr [eax], edi
// 00780389  895804               mov dword ptr [eax + 4], ebx
// 0078038c  896808               mov dword ptr [eax + 8], ebp
// 0078038f  8bcf                 mov ecx, edi
// 00780391  89480c               mov dword ptr [eax + 0xc], ecx
// 00780394  8d442458             lea eax, [esp + 0x58]
// 00780398  50                   push eax
// 00780399  e8c2110000           call 0x781560
// 0078039e  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007803a2  83c418               add esp, 0x18
// 007803a5  8b16                 mov edx, dword ptr [esi]
// 007803a7  8b4248               mov eax, dword ptr [edx + 0x48]
// 007803aa  8bce                 mov ecx, esi
// 007803ac  ffd0                 call eax
// 007803ae  8b4d50               mov ecx, dword ptr [ebp + 0x50]
// 007803b1  8b5554               mov edx, dword ptr [ebp + 0x54]
// 007803b4  50                   push eax
// 007803b5  83ec10               sub esp, 0x10
// 007803b8  8bc4                 mov eax, esp
// 007803ba  8908                 mov dword ptr [eax], ecx
// 007803bc  8b4d58               mov ecx, dword ptr [ebp + 0x58]
// 007803bf  895004               mov dword ptr [eax + 4], edx
// 007803c2  8b555c               mov edx, dword ptr [ebp + 0x5c]
// 007803c5  894808               mov dword ptr [eax + 8], ecx
// 007803c8  89500c               mov dword ptr [eax + 0xc], edx
// 007803cb  8d442458             lea eax, [esp + 0x58]
// 007803cf  50                   push eax
// 007803d0  e88b110000           call 0x781560
// 007803d5  83c418               add esp, 0x18
// 007803d8  8bce                 mov ecx, esi
// 007803da  e881acffff           call 0x77b060
// 007803df  83f804               cmp eax, 4
// 007803e2  7537                 jne 0x78041b
// 007803e4  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007803e8  8b542448             mov edx, dword ptr [esp + 0x48]
// 007803ec  83ec10               sub esp, 0x10
// 007803ef  8bc4                 mov eax, esp
// 007803f1  8908                 mov dword ptr [eax], ecx
// 007803f3  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007803f7  895004               mov dword ptr [eax + 4], edx
// 007803fa  8b542460             mov edx, dword ptr [esp + 0x60]
// 007803fe  894808               mov dword ptr [eax + 8], ecx
// 00780401  89500c               mov dword ptr [eax + 0xc], edx
// 00780404  8b442450             mov eax, dword ptr [esp + 0x50]
// 00780408  50                   push eax
// 00780409  56                   push esi
// 0078040a  8bcd                 mov ecx, ebp
// 0078040c  e8fff5ffff           call 0x77fa10
// 00780411  5f                   pop edi
// 00780412  5e                   pop esi
// 00780413  5d                   pop ebp
// 00780414  5b                   pop ebx
// 00780415  83c428               add esp, 0x28
// 00780418  c21800               ret 0x18
// 0078041b  33db                 xor ebx, ebx
// 0078041d  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 00780420  7e55                 jle 0x780477
// 00780422  85db                 test ebx, ebx
// 00780424  7c0d                 jl 0x780433
// 00780426  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00780429  7d08                 jge 0x780433
// 0078042b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0078042e  8b3c99               mov edi, dword ptr [ecx + ebx*4]
// 00780431  eb02                 jmp 0x780435
// 00780433  33ff                 xor edi, edi
// 00780435  8bcf                 mov ecx, edi
// 00780437  e8a4daf8ff           call 0x70dee0
// 0078043c  85c0                 test eax, eax
// 0078043e  7415                 je 0x780455
// 00780440  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00780446  8b11                 mov edx, dword ptr [ecx]
// 00780448  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078044c  8b5218               mov edx, dword ptr [edx + 0x18]
// 0078044f  57                   push edi
// 00780450  50                   push eax
// 00780451  ffd2                 call edx
// 00780453  eb02                 jmp 0x780457
// 00780455  33c0                 xor eax, eax
// 00780457  8bcf                 mov ecx, edi
// 00780459  894724               mov dword ptr [edi + 0x24], eax
// 0078045c  894720               mov dword ptr [edi + 0x20], eax
// 0078045f  e87cdaf8ff           call 0x70dee0
// 00780464  85c0                 test eax, eax
// 00780466  7409                 je 0x780471
// 00780468  8b85b4000000         mov eax, dword ptr [ebp + 0xb4]
// 0078046e  014720               add dword ptr [edi + 0x20], eax
// 00780471  43                   inc ebx
// 00780472  3b5e5c               cmp ebx, dword ptr [esi + 0x5c]
// 00780475  7cab                 jl 0x780422
// 00780477  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 0078047b  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00780481  8b11                 mov edx, dword ptr [ecx]
// 00780483  8b5208               mov edx, dword ptr [edx + 8]
// 00780486  56                   push esi
// 00780487  83ec10               sub esp, 0x10
// 0078048a  8bc4                 mov eax, esp
// 0078048c  8938                 mov dword ptr [eax], edi
// 0078048e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00780492  897804               mov dword ptr [eax + 4], edi
// 00780495  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00780499  897808               mov dword ptr [eax + 8], edi
// 0078049c  8b7c2464             mov edi, dword ptr [esp + 0x64]
// 007804a0  89780c               mov dword ptr [eax + 0xc], edi
// 007804a3  8d44243c             lea eax, [esp + 0x3c]
// 007804a7  50                   push eax
// 007804a8  ffd2                 call edx
// 007804aa  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007804ae  8b08                 mov ecx, dword ptr [eax]
// 007804b0  894e24               mov dword ptr [esi + 0x24], ecx
// 007804b3  8b5004               mov edx, dword ptr [eax + 4]
// 007804b6  895628               mov dword ptr [esi + 0x28], edx
// 007804b9  8b4808               mov ecx, dword ptr [eax + 8]
// 007804bc  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007804bf  8b500c               mov edx, dword ptr [eax + 0xc]
// 007804c2  895630               mov dword ptr [esi + 0x30], edx
// 007804c5  7537                 jne 0x7804fe
// 007804c7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007804cb  8b542448             mov edx, dword ptr [esp + 0x48]
// 007804cf  83ec10               sub esp, 0x10
// 007804d2  8bc4                 mov eax, esp
// 007804d4  8908                 mov dword ptr [eax], ecx
// 007804d6  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007804da  895004               mov dword ptr [eax + 4], edx
// 007804dd  8b542460             mov edx, dword ptr [esp + 0x60]
// 007804e1  894808               mov dword ptr [eax + 8], ecx
// 007804e4  89500c               mov dword ptr [eax + 0xc], edx
// 007804e7  56                   push esi
// 007804e8  8d44243c             lea eax, [esp + 0x3c]
// 007804ec  50                   push eax
// 007804ed  8bcd                 mov ecx, ebp
// 007804ef  e89cf1ffff           call 0x77f690
// 007804f4  5f                   pop edi
// 007804f5  5e                   pop esi
// 007804f6  5d                   pop ebp
// 007804f7  5b                   pop ebx
// 007804f8  83c428               add esp, 0x28
// 007804fb  c21800               ret 0x18
// 007804fe  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00780504  8b11                 mov edx, dword ptr [ecx]
// 00780506  8b5210               mov edx, dword ptr [edx + 0x10]
// 00780509  8d442418             lea eax, [esp + 0x18]
// 0078050d  50                   push eax
// 0078050e  ffd2                 call edx
// 00780510  8b8de0000000         mov ecx, dword ptr [ebp + 0xe0]
// 00780516  8b01                 mov eax, dword ptr [ecx]
// 00780518  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0078051b  56                   push esi
// 0078051c  ffd2                 call edx
// 0078051e  8bd8                 mov ebx, eax
// 00780520  8b06                 mov eax, dword ptr [esi]
// 00780522  8b5048               mov edx, dword ptr [eax + 0x48]
// 00780525  8bce                 mov ecx, esi
// 00780527  895c2414             mov dword ptr [esp + 0x14], ebx
// 0078052b  ffd2                 call edx
// 0078052d  83f802               cmp eax, 2
// 00780530  7411                 je 0x780543
// 00780532  8b06                 mov eax, dword ptr [esi]
// 00780534  8b5048               mov edx, dword ptr [eax + 0x48]
// 00780537  8bce                 mov ecx, esi
// 00780539  ffd2                 call edx
// 0078053b  85c0                 test eax, eax
// 0078053d  0f8568020000         jne 0x7807ab
// 00780543  8b442448             mov eax, dword ptr [esp + 0x48]
// 00780547  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0078054b  8b16                 mov edx, dword ptr [esi]
// 0078054d  8d3c01               lea edi, [ecx + eax]
// 00780550  8b4248               mov eax, dword ptr [edx + 0x48]
// 00780553  8bce                 mov ecx, esi
// 00780555  897c243c             mov dword ptr [esp + 0x3c], edi
// 00780559  ffd0                 call eax
// 0078055b  83f802               cmp eax, 2
// 0078055e  750e                 jne 0x78056e
// 00780560  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00780564  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 00780568  2bfb                 sub edi, ebx
// 0078056a  897c243c             mov dword ptr [esp + 0x3c], edi
// 0078056e  03fb                 add edi, ebx
// 00780570  8bce                 mov ecx, esi
// 00780572  897c2410             mov dword ptr [esp + 0x10], edi
// 00780576  e8e5aaffff           call 0x77b060
// 0078057b  83f801               cmp eax, 1
// 0078057e  7551                 jne 0x7805d1
// 00780580  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00780584  2b442444             sub eax, dword ptr [esp + 0x44]
// 00780588  8b7e70               mov edi, dword ptr [esi + 0x70]
// 0078058b  2b442418             sub eax, dword ptr [esp + 0x18]
// 0078058f  2b442420             sub eax, dword ptr [esp + 0x20]
// 00780593  83ef01               sub edi, 1
// 00780596  89442440             mov dword ptr [esp + 0x40], eax
// 0078059a  782c                 js 0x7805c8
// 0078059c  8d642400             lea esp, [esp]
// 007805a0  85ff                 test edi, edi
// 007805a2  7c0d                 jl 0x7805b1
// 007805a4  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 007805a7  7d08                 jge 0x7805b1
// 007805a9  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007805ac  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 007805af  eb02                 jmp 0x7805b3
// 007805b1  33c9                 xor ecx, ecx
// 007805b3  8b11                 mov edx, dword ptr [ecx]
// 007805b5  8b5204               mov edx, dword ptr [edx + 4]
// 007805b8  8d442440             lea eax, [esp + 0x40]
// 007805bc  50                   push eax
// 007805bd  ffd2                 call edx
// 007805bf  83ef01               sub edi, 1
// 007805c2  79dc                 jns 0x7805a0
// 007805c4  8b442440             mov eax, dword ptr [esp + 0x40]
// 007805c8  50                   push eax
// 007805c9  56                   push esi
// 007805ca  8bcd                 mov ecx, ebp
// 007805cc  e8aff9ffff           call 0x77ff80
// 007805d1  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007805d5  8b542448             mov edx, dword ptr [esp + 0x48]
// 007805d9  83ec10               sub esp, 0x10
// 007805dc  8bc4                 mov eax, esp
// 007805de  8908                 mov dword ptr [eax], ecx
// 007805e0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007805e4  895004               mov dword ptr [eax + 4], edx
// 007805e7  8b542460             mov edx, dword ptr [esp + 0x60]
// 007805eb  894808               mov dword ptr [eax + 8], ecx
// 007805ee  89500c               mov dword ptr [eax + 0xc], edx
// 007805f1  56                   push esi
// 007805f2  8d44243c             lea eax, [esp + 0x3c]
// 007805f6  50                   push eax
// 007805f7  8bcd                 mov ecx, ebp
// 007805f9  e892f0ffff           call 0x77f690
// 007805fe  837e1400             cmp dword ptr [esi + 0x14], 0
// 00780602  8b08                 mov ecx, dword ptr [eax]
// 00780604  894e24               mov dword ptr [esi + 0x24], ecx
// 00780607  8b5004               mov edx, dword ptr [eax + 4]
// 0078060a  895628               mov dword ptr [esi + 0x28], edx
// 0078060d  8b4808               mov ecx, dword ptr [eax + 8]
// 00780610  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00780613  8b500c               mov edx, dword ptr [eax + 0xc]
// 00780616  895630               mov dword ptr [esi + 0x30], edx
// 00780619  7d71                 jge 0x78068c
// 0078061b  8bce                 mov ecx, esi
// 0078061d  e87ebbffff           call 0x77c1a0
// 00780622  8b4e2c               mov ecx, dword ptr [esi + 0x2c]
// 00780625  2b4e24               sub ecx, dword ptr [esi + 0x24]
// 00780628  8b5614               mov edx, dword ptr [esi + 0x14]
// 0078062b  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 0078062f  03d0                 add edx, eax
// 00780631  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00780635  3bd1                 cmp edx, ecx
// 00780637  7d53                 jge 0x78068c
// 00780639  8b542448             mov edx, dword ptr [esp + 0x48]
// 0078063d  2bc8                 sub ecx, eax
// 0078063f  33c0                 xor eax, eax
// 00780641  85c9                 test ecx, ecx
// 00780643  0f9fc0               setg al
// 00780646  83ec10               sub esp, 0x10
// 00780649  48                   dec eax
// 0078064a  23c1                 and eax, ecx
// 0078064c  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00780650  894614               mov dword ptr [esi + 0x14], eax
// 00780653  8bc4                 mov eax, esp
// 00780655  8908                 mov dword ptr [eax], ecx
// 00780657  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 0078065b  895004               mov dword ptr [eax + 4], edx
// 0078065e  8b542460             mov edx, dword ptr [esp + 0x60]
// 00780662  894808               mov dword ptr [eax + 8], ecx
// 00780665  89500c               mov dword ptr [eax + 0xc], edx
// 00780668  56                   push esi
// 00780669  8d44243c             lea eax, [esp + 0x3c]
// 0078066d  50                   push eax
// 0078066e  8bcd                 mov ecx, ebp
// 00780670  e81bf0ffff           call 0x77f690
// 00780675  8b08                 mov ecx, dword ptr [eax]
// 00780677  894e24               mov dword ptr [esi + 0x24], ecx
// 0078067a  8b5004               mov edx, dword ptr [eax + 4]
// 0078067d  895628               mov dword ptr [esi + 0x28], edx
// 00780680  8b4808               mov ecx, dword ptr [eax + 8]
// 00780683  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00780686  8b500c               mov edx, dword ptr [eax + 0xc]
// 00780689  895630               mov dword ptr [esi + 0x30], edx
// 0078068c  8b7e24               mov edi, dword ptr [esi + 0x24]
// 0078068f  037e14               add edi, dword ptr [esi + 0x14]
// 00780692  8bce                 mov ecx, esi
// 00780694  037c2418             add edi, dword ptr [esp + 0x18]
// 00780698  e8c3a9ffff           call 0x77b060
// 0078069d  83f805               cmp eax, 5
// 007806a0  0f85b0000000         jne 0x780756
// 007806a6  8b06                 mov eax, dword ptr [esi]
// 007806a8  8b5048               mov edx, dword ptr [eax + 0x48]
// 007806ab  8bce                 mov ecx, esi
// 007806ad  ffd2                 call edx
// 007806af  85c0                 test eax, eax
// 007806b1  750d                 jne 0x7806c0
// 007806b3  8b4630               mov eax, dword ptr [esi + 0x30]
// 007806b6  2b442424             sub eax, dword ptr [esp + 0x24]
// 007806ba  89442410             mov dword ptr [esp + 0x10], eax
// 007806be  eb0b                 jmp 0x7806cb
// 007806c0  8b4628               mov eax, dword ptr [esi + 0x28]
// 007806c3  03442424             add eax, dword ptr [esp + 0x24]
// 007806c7  8944243c             mov dword ptr [esp + 0x3c], eax
// 007806cb  33ed                 xor ebp, ebp
// 007806cd  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007806d0  0f8e2c030000         jle 0x780a02
// 007806d6  8d041f               lea eax, [edi + ebx]
// 007806d9  89442440             mov dword ptr [esp + 0x40], eax
// 007806dd  8d4900               lea ecx, [ecx]
// 007806e0  85ed                 test ebp, ebp
// 007806e2  7c0d                 jl 0x7806f1
// 007806e4  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007806e7  7d08                 jge 0x7806f1
// 007806e9  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007806ec  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 007806ef  eb02                 jmp 0x7806f3
// 007806f1  33db                 xor ebx, ebx
// 007806f3  8b16                 mov edx, dword ptr [esi]
// 007806f5  8b4248               mov eax, dword ptr [edx + 0x48]
// 007806f8  8bce                 mov ecx, esi
// 007806fa  ffd0                 call eax
// 007806fc  83ec10               sub esp, 0x10
// 007806ff  85c0                 test eax, eax
// 00780701  8bc4                 mov eax, esp
// 00780703  8938                 mov dword ptr [eax], edi
// 00780705  7518                 jne 0x78071f
// 00780707  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078070b  8bca                 mov ecx, edx
// 0078070d  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00780710  894804               mov dword ptr [eax + 4], ecx
// 00780713  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00780717  894808               mov dword ptr [eax + 8], ecx
// 0078071a  89500c               mov dword ptr [eax + 0xc], edx
// 0078071d  eb16                 jmp 0x780735
// 0078071f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00780723  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00780726  895004               mov dword ptr [eax + 4], edx
// 00780729  03ca                 add ecx, edx
// 0078072b  8b542450             mov edx, dword ptr [esp + 0x50]
// 0078072f  895008               mov dword ptr [eax + 8], edx
// 00780732  89480c               mov dword ptr [eax + 0xc], ecx
// 00780735  8bcb                 mov ecx, ebx
// 00780737  e8c4adffff           call 0x77b500
// 0078073c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00780740  01442440             add dword ptr [esp + 0x40], eax
// 00780744  45                   inc ebp
// 00780745  03f8                 add edi, eax
// 00780747  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 0078074a  7c94                 jl 0x7806e0
// 0078074c  5f                   pop edi
// 0078074d  5e                   pop esi
// 0078074e  5d                   pop ebp
// 0078074f  5b                   pop ebx
// 00780750  83c428               add esp, 0x28
// 00780753  c21800               ret 0x18
// 00780756  33ed                 xor ebp, ebp
// 00780758  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 0078075b  0f8ea1020000         jle 0x780a02
// 00780761  85ed                 test ebp, ebp
// 00780763  7c0d                 jl 0x780772
// 00780765  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00780768  7d08                 jge 0x780772
// 0078076a  8b4658               mov eax, dword ptr [esi + 0x58]
// 0078076d  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 00780770  eb02                 jmp 0x780774
// 00780772  33db                 xor ebx, ebx
// 00780774  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00780777  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0078077b  83ec10               sub esp, 0x10
// 0078077e  8bc4                 mov eax, esp
// 00780780  03cf                 add ecx, edi
// 00780782  8938                 mov dword ptr [eax], edi
// 00780784  895004               mov dword ptr [eax + 4], edx
// 00780787  894808               mov dword ptr [eax + 8], ecx
// 0078078a  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0078078e  89480c               mov dword ptr [eax + 0xc], ecx
// 00780791  8bcb                 mov ecx, ebx
// 00780793  e868adffff           call 0x77b500
// 00780798  037b20               add edi, dword ptr [ebx + 0x20]
// 0078079b  45                   inc ebp
// 0078079c  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 0078079f  7cc0                 jl 0x780761
// 007807a1  5f                   pop edi
// 007807a2  5e                   pop esi
// 007807a3  5d                   pop ebp
// 007807a4  5b                   pop ebx
// 007807a5  83c428               add esp, 0x28
// 007807a8  c21800               ret 0x18
// 007807ab  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007807af  8b442444             mov eax, dword ptr [esp + 0x44]
// 007807b3  8d3c10               lea edi, [eax + edx]
// 007807b6  8b16                 mov edx, dword ptr [esi]
// 007807b8  8b4248               mov eax, dword ptr [edx + 0x48]
// 007807bb  8bce                 mov ecx, esi
// 007807bd  897c243c             mov dword ptr [esp + 0x3c], edi
// 007807c1  ffd0                 call eax
// 007807c3  83f803               cmp eax, 3
// 007807c6  750e                 jne 0x7807d6
// 007807c8  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 007807cc  2b7c241c             sub edi, dword ptr [esp + 0x1c]
// 007807d0  2bfb                 sub edi, ebx
// 007807d2  897c243c             mov dword ptr [esp + 0x3c], edi
// 007807d6  03fb                 add edi, ebx
// 007807d8  8bce                 mov ecx, esi
// 007807da  897c2410             mov dword ptr [esp + 0x10], edi
// 007807de  e87da8ffff           call 0x77b060
// 007807e3  83f801               cmp eax, 1
// 007807e6  754d                 jne 0x780835
// 007807e8  8b442450             mov eax, dword ptr [esp + 0x50]
// 007807ec  2b442418             sub eax, dword ptr [esp + 0x18]
// 007807f0  8b7e70               mov edi, dword ptr [esi + 0x70]
// 007807f3  2b442420             sub eax, dword ptr [esp + 0x20]
// 007807f7  2b442448             sub eax, dword ptr [esp + 0x48]
// 007807fb  83ef01               sub edi, 1
// 007807fe  89442440             mov dword ptr [esp + 0x40], eax
// 00780802  7828                 js 0x78082c
// 00780804  85ff                 test edi, edi
// 00780806  7c0d                 jl 0x780815
// 00780808  3b7e70               cmp edi, dword ptr [esi + 0x70]
// 0078080b  7d08                 jge 0x780815
// 0078080d  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 00780810  8b0cb9               mov ecx, dword ptr [ecx + edi*4]
// 00780813  eb02                 jmp 0x780817
// 00780815  33c9                 xor ecx, ecx
// 00780817  8b11                 mov edx, dword ptr [ecx]
// 00780819  8b5204               mov edx, dword ptr [edx + 4]
// 0078081c  8d442440             lea eax, [esp + 0x40]
// 00780820  50                   push eax
// 00780821  ffd2                 call edx
// 00780823  83ef01               sub edi, 1
// 00780826  79dc                 jns 0x780804
// 00780828  8b442440             mov eax, dword ptr [esp + 0x40]
// 0078082c  50                   push eax
// 0078082d  56                   push esi
// 0078082e  8bcd                 mov ecx, ebp
// 00780830  e84bf7ffff           call 0x77ff80
// 00780835  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00780839  8b542448             mov edx, dword ptr [esp + 0x48]
// 0078083d  83ec10               sub esp, 0x10
// 00780840  8bc4                 mov eax, esp
// 00780842  8908                 mov dword ptr [eax], ecx
// 00780844  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00780848  895004               mov dword ptr [eax + 4], edx
// 0078084b  8b542460             mov edx, dword ptr [esp + 0x60]
// 0078084f  894808               mov dword ptr [eax + 8], ecx
// 00780852  89500c               mov dword ptr [eax + 0xc], edx
// 00780855  56                   push esi
// 00780856  8d44243c             lea eax, [esp + 0x3c]
// 0078085a  50                   push eax
// 0078085b  8bcd                 mov ecx, ebp
// 0078085d  e82eeeffff           call 0x77f690
// 00780862  837e1400             cmp dword ptr [esi + 0x14], 0
// 00780866  8b08                 mov ecx, dword ptr [eax]
// 00780868  894e24               mov dword ptr [esi + 0x24], ecx
// 0078086b  8b5004               mov edx, dword ptr [eax + 4]
// 0078086e  895628               mov dword ptr [esi + 0x28], edx
// 00780871  8b4808               mov ecx, dword ptr [eax + 8]
// 00780874  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00780877  8b500c               mov edx, dword ptr [eax + 0xc]
// 0078087a  895630               mov dword ptr [esi + 0x30], edx
// 0078087d  7d71                 jge 0x7808f0
// 0078087f  8bce                 mov ecx, esi
// 00780881  e81ab9ffff           call 0x77c1a0
// 00780886  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00780889  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0078088c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0078088f  2b4c2418             sub ecx, dword ptr [esp + 0x18]
// 00780893  03d0                 add edx, eax
// 00780895  2b4c2420             sub ecx, dword ptr [esp + 0x20]
// 00780899  3bd1                 cmp edx, ecx
// 0078089b  7d53                 jge 0x7808f0
// 0078089d  8b542448             mov edx, dword ptr [esp + 0x48]
// 007808a1  2bc8                 sub ecx, eax
// 007808a3  33c0                 xor eax, eax
// 007808a5  85c9                 test ecx, ecx
// 007808a7  0f9fc0               setg al
// 007808aa  83ec10               sub esp, 0x10
// 007808ad  48                   dec eax
// 007808ae  23c1                 and eax, ecx
// 007808b0  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007808b4  894614               mov dword ptr [esi + 0x14], eax
// 007808b7  8bc4                 mov eax, esp
// 007808b9  8908                 mov dword ptr [eax], ecx
// 007808bb  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007808bf  895004               mov dword ptr [eax + 4], edx
// 007808c2  8b542460             mov edx, dword ptr [esp + 0x60]
// 007808c6  894808               mov dword ptr [eax + 8], ecx
// 007808c9  89500c               mov dword ptr [eax + 0xc], edx
// 007808cc  56                   push esi
// 007808cd  8d44243c             lea eax, [esp + 0x3c]
// 007808d1  50                   push eax
// 007808d2  8bcd                 mov ecx, ebp
// 007808d4  e8b7edffff           call 0x77f690
// 007808d9  8b08                 mov ecx, dword ptr [eax]
// 007808db  894e24               mov dword ptr [esi + 0x24], ecx
// 007808de  8b5004               mov edx, dword ptr [eax + 4]
// 007808e1  895628               mov dword ptr [esi + 0x28], edx
// 007808e4  8b4808               mov ecx, dword ptr [eax + 8]
// 007808e7  894e2c               mov dword ptr [esi + 0x2c], ecx
// 007808ea  8b500c               mov edx, dword ptr [eax + 0xc]
// 007808ed  895630               mov dword ptr [esi + 0x30], edx
// 007808f0  8b7e28               mov edi, dword ptr [esi + 0x28]
// 007808f3  037e14               add edi, dword ptr [esi + 0x14]
// 007808f6  8bce                 mov ecx, esi
// 007808f8  037c2418             add edi, dword ptr [esp + 0x18]
// 007808fc  e85fa7ffff           call 0x77b060
// 00780901  83f805               cmp eax, 5
// 00780904  0f85b1000000         jne 0x7809bb
// 0078090a  8b06                 mov eax, dword ptr [esi]
// 0078090c  8b5048               mov edx, dword ptr [eax + 0x48]
// 0078090f  8bce                 mov ecx, esi
// 00780911  ffd2                 call edx
// 00780913  83f801               cmp eax, 1
// 00780916  750d                 jne 0x780925
// 00780918  8b462c               mov eax, dword ptr [esi + 0x2c]
// 0078091b  2b442424             sub eax, dword ptr [esp + 0x24]
// 0078091f  89442410             mov dword ptr [esp + 0x10], eax
// 00780923  eb0b                 jmp 0x780930
// 00780925  8b4624               mov eax, dword ptr [esi + 0x24]
// 00780928  03442424             add eax, dword ptr [esp + 0x24]
// 0078092c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00780930  33ed                 xor ebp, ebp
// 00780932  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 00780935  0f8ec7000000         jle 0x780a02
// 0078093b  8d041f               lea eax, [edi + ebx]
// 0078093e  89442440             mov dword ptr [esp + 0x40], eax
// 00780942  85ed                 test ebp, ebp
// 00780944  7c0d                 jl 0x780953
// 00780946  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00780949  7d08                 jge 0x780953
// 0078094b  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0078094e  8b1ca9               mov ebx, dword ptr [ecx + ebp*4]
// 00780951  eb02                 jmp 0x780955
// 00780953  33db                 xor ebx, ebx
// 00780955  8b16                 mov edx, dword ptr [esi]
// 00780957  8b4248               mov eax, dword ptr [edx + 0x48]
// 0078095a  8bce                 mov ecx, esi
// 0078095c  ffd0                 call eax
// 0078095e  83ec10               sub esp, 0x10
// 00780961  83f801               cmp eax, 1
// 00780964  8bc4                 mov eax, esp
// 00780966  751a                 jne 0x780982
// 00780968  8b542420             mov edx, dword ptr [esp + 0x20]
// 0078096c  8bca                 mov ecx, edx
// 0078096e  2b4b20               sub ecx, dword ptr [ebx + 0x20]
// 00780971  8908                 mov dword ptr [eax], ecx
// 00780973  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00780977  897804               mov dword ptr [eax + 4], edi
// 0078097a  895008               mov dword ptr [eax + 8], edx
// 0078097d  89480c               mov dword ptr [eax + 0xc], ecx
// 00780980  eb18                 jmp 0x78099a
// 00780982  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00780986  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 00780989  8910                 mov dword ptr [eax], edx
// 0078098b  03ca                 add ecx, edx
// 0078098d  8b542450             mov edx, dword ptr [esp + 0x50]
// 00780991  897804               mov dword ptr [eax + 4], edi
// 00780994  894808               mov dword ptr [eax + 8], ecx
// 00780997  89500c               mov dword ptr [eax + 0xc], edx
// 0078099a  8bcb                 mov ecx, ebx
// 0078099c  e85fabffff           call 0x77b500
// 007809a1  8b442414             mov eax, dword ptr [esp + 0x14]
// 007809a5  01442440             add dword ptr [esp + 0x40], eax
// 007809a9  45                   inc ebp
// 007809aa  03f8                 add edi, eax
// 007809ac  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007809af  7c91                 jl 0x780942
// 007809b1  5f                   pop edi
// 007809b2  5e                   pop esi
// 007809b3  5d                   pop ebp
// 007809b4  5b                   pop ebx
// 007809b5  83c428               add esp, 0x28
// 007809b8  c21800               ret 0x18
// 007809bb  33ed                 xor ebp, ebp
// 007809bd  396e5c               cmp dword ptr [esi + 0x5c], ebp
// 007809c0  7e40                 jle 0x780a02
// 007809c2  85ed                 test ebp, ebp
// 007809c4  7c0d                 jl 0x7809d3
// 007809c6  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 007809c9  7d08                 jge 0x7809d3
// 007809cb  8b4658               mov eax, dword ptr [esi + 0x58]
// 007809ce  8b1ca8               mov ebx, dword ptr [eax + ebp*4]
// 007809d1  eb02                 jmp 0x7809d5
// 007809d3  33db                 xor ebx, ebx
// 007809d5  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007809d9  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 007809dc  83ec10               sub esp, 0x10
// 007809df  8bc4                 mov eax, esp
// 007809e1  8910                 mov dword ptr [eax], edx
// 007809e3  8b542420             mov edx, dword ptr [esp + 0x20]
// 007809e7  03cf                 add ecx, edi
// 007809e9  897804               mov dword ptr [eax + 4], edi
// 007809ec  895008               mov dword ptr [eax + 8], edx
// 007809ef  89480c               mov dword ptr [eax + 0xc], ecx
// 007809f2  8bcb                 mov ecx, ebx
// 007809f4  e807abffff           call 0x77b500
// 007809f9  037b20               add edi, dword ptr [ebx + 0x20]
// 007809fc  45                   inc ebp
// 007809fd  3b6e5c               cmp ebp, dword ptr [esi + 0x5c]
// 00780a00  7cc0                 jl 0x7809c2
// 00780a02  5f                   pop edi
// 00780a03  5e                   pop esi
// 00780a04  5d                   pop ebp
// 00780a05  5b                   pop ebx
// 00780a06  83c428               add esp, 0x28
// 00780a09  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionTabControlEx@CXTPTabPaintManager@@IAEXPAVCXTPTabManager@@PAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
