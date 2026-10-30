// roc 2012-06 00989380  unit: CXTPPaintManager  size: 1508 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00989380
//
// 00989380  6aff                 push -1
// 00989382  68a6c0ad00           push 0xadc0a6
// 00989387  64a100000000         mov eax, dword ptr fs:[0]
// 0098938d  50                   push eax
// 0098938e  83ec44               sub esp, 0x44
// 00989391  53                   push ebx
// 00989392  55                   push ebp
// 00989393  56                   push esi
// 00989394  57                   push edi
// 00989395  a1d027e000           mov eax, dword ptr [0xe027d0]
// 0098939a  33c4                 xor eax, esp
// 0098939c  50                   push eax
// 0098939d  8d442458             lea eax, [esp + 0x58]
// 009893a1  64a300000000         mov dword ptr fs:[0], eax
// 009893a7  8be9                 mov ebp, ecx
// 009893a9  8b742470             mov esi, dword ptr [esp + 0x70]
// 009893ad  8b06                 mov eax, dword ptr [esi]
// 009893af  8b5058               mov edx, dword ptr [eax + 0x58]
// 009893b2  8d4c2424             lea ecx, [esp + 0x24]
// 009893b6  51                   push ecx
// 009893b7  8bce                 mov ecx, esi
// 009893b9  ffd2                 call edx
// 009893bb  8d442424             lea eax, [esp + 0x24]
// 009893bf  50                   push eax
// 009893c0  8d4c2424             lea ecx, [esp + 0x24]
// 009893c4  c744246400000000     mov dword ptr [esp + 0x64], 0
// 009893cc  ff158047b200         call dword ptr [0xb24780]
// 009893d2  8d4c2420             lea ecx, [esp + 0x20]
// 009893d6  51                   push ecx
// 009893d7  c644246401           mov byte ptr [esp + 0x64], 1
// 009893dc  e83fe7ffff           call 0x987b20
// 009893e1  83c404               add esp, 4
// 009893e4  8d4c241c             lea ecx, [esp + 0x1c]
// 009893e8  ff158447b200         call dword ptr [0xb24784]
// 009893ee  8d4c2418             lea ecx, [esp + 0x18]
// 009893f2  ff158447b200         call dword ptr [0xb24784]
// 009893f8  83bd9400000000       cmp dword ptr [ebp + 0x94], 0
// 009893ff  c644246003           mov byte ptr [esp + 0x60], 3
// 00989404  7418                 je 0x98941e
// 00989406  8d542418             lea edx, [esp + 0x18]
// 0098940a  52                   push edx
// 0098940b  8d442420             lea eax, [esp + 0x20]
// 0098940f  50                   push eax
// 00989410  8d4c242c             lea ecx, [esp + 0x2c]
// 00989414  51                   push ecx
// 00989415  8bcd                 mov ecx, ebp
// 00989417  e814e7ffff           call 0x987b30
// 0098941c  eb0f                 jmp 0x98942d
// 0098941e  8d542424             lea edx, [esp + 0x24]
// 00989422  52                   push edx
// 00989423  8d4c2420             lea ecx, [esp + 0x20]
// 00989427  ff152045b200         call dword ptr [0xb24520]
// 0098942d  8d44241c             lea eax, [esp + 0x1c]
// 00989431  50                   push eax
// 00989432  8d4c2418             lea ecx, [esp + 0x18]
// 00989436  ff158047b200         call dword ptr [0xb24780]
// 0098943c  8d4c2418             lea ecx, [esp + 0x18]
// 00989440  51                   push ecx
// 00989441  8d4c2474             lea ecx, [esp + 0x74]
// 00989445  c644246404           mov byte ptr [esp + 0x64], 4
// 0098944a  ff158047b200         call dword ptr [0xb24780]
// 00989450  8d542414             lea edx, [esp + 0x14]
// 00989454  52                   push edx
// 00989455  c644246405           mov byte ptr [esp + 0x64], 5
// 0098945a  e8c1e6ffff           call 0x987b20
// 0098945f  8d442474             lea eax, [esp + 0x74]
// 00989463  50                   push eax
// 00989464  e8b7e6ffff           call 0x987b20
// 00989469  83c408               add esp, 8
// 0098946c  83bc248400000000     cmp dword ptr [esp + 0x84], 0
// 00989474  0f8530010000         jne 0x9895aa
// 0098947a  8d4c2420             lea ecx, [esp + 0x20]
// 0098947e  ff156046b200         call dword ptr [0xb24660]
// 00989484  84c0                 test al, al
// 00989486  7407                 je 0x98948f
// 00989488  b8ecf3b400           mov eax, 0xb4f3ec
// 0098948d  eb0a                 jmp 0x989499
// 0098948f  8d4c2414             lea ecx, [esp + 0x14]
// 00989493  ff159847b200         call dword ptr [0xb24798]
// 00989499  50                   push eax
// 0098949a  8d8c2488000000       lea ecx, [esp + 0x88]
// 009894a1  ff15c847b200         call dword ptr [0xb247c8]
// 009894a7  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 009894ab  8d4c2438             lea ecx, [esp + 0x38]
// 009894af  51                   push ecx
// 009894b0  8d8c2488000000       lea ecx, [esp + 0x88]
// 009894b7  ff155846b200         call dword ptr [0xb24658]
// 009894bd  50                   push eax
// 009894be  8d8c248c000000       lea ecx, [esp + 0x8c]
// 009894c5  ff159847b200         call dword ptr [0xb24798]
// 009894cb  8b5608               mov edx, dword ptr [esi + 8]
// 009894ce  8b3d4021b200         mov edi, dword ptr [0xb22140]
// 009894d4  50                   push eax
// 009894d5  52                   push edx
// 009894d6  ffd7                 call edi
// 009894d8  8d8c2484000000       lea ecx, [esp + 0x84]
// 009894df  ff15d047b200         call dword ptr [0xb247d0]
// 009894e5  8d4c2420             lea ecx, [esp + 0x20]
// 009894e9  ff156046b200         call dword ptr [0xb24660]
// 009894ef  84c0                 test al, al
// 009894f1  7407                 je 0x9894fa
// 009894f3  b8ecf3b400           mov eax, 0xb4f3ec
// 009894f8  eb0a                 jmp 0x989504
// 009894fa  8d4c2470             lea ecx, [esp + 0x70]
// 009894fe  ff159847b200         call dword ptr [0xb24798]
// 00989504  50                   push eax
// 00989505  8d4c2470             lea ecx, [esp + 0x70]
// 00989509  ff15c847b200         call dword ptr [0xb247c8]
// 0098950f  8d442428             lea eax, [esp + 0x28]
// 00989513  50                   push eax
// 00989514  8d4c2470             lea ecx, [esp + 0x70]
// 00989518  ff155846b200         call dword ptr [0xb24658]
// 0098951e  50                   push eax
// 0098951f  8d4c2474             lea ecx, [esp + 0x74]
// 00989523  ff159847b200         call dword ptr [0xb24798]
// 00989529  8b4e08               mov ecx, dword ptr [esi + 8]
// 0098952c  50                   push eax
// 0098952d  51                   push ecx
// 0098952e  ffd7                 call edi
// 00989530  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00989534  8b742428             mov esi, dword ptr [esp + 0x28]
// 00989538  8d4c246c             lea ecx, [esp + 0x6c]
// 0098953c  8954242c             mov dword ptr [esp + 0x2c], edx
// 00989540  ff15d047b200         call dword ptr [0xb247d0]
// 00989546  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0098954e  7403                 je 0x989553
// 00989550  83c608               add esi, 8
// 00989553  8b442438             mov eax, dword ptr [esp + 0x38]
// 00989557  3bc6                 cmp eax, esi
// 00989559  7e02                 jle 0x98955d
// 0098955b  8bf0                 mov esi, eax
// 0098955d  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00989565  b818000000           mov eax, 0x18
// 0098956a  89742438             mov dword ptr [esp + 0x38], esi
// 0098956e  8944243c             mov dword ptr [esp + 0x3c], eax
// 00989572  741f                 je 0x989593
// 00989574  89442428             mov dword ptr [esp + 0x28], eax
// 00989578  8974242c             mov dword ptr [esp + 0x2c], esi
// 0098957c  8b742468             mov esi, dword ptr [esp + 0x68]
// 00989580  8d442428             lea eax, [esp + 0x28]
// 00989584  8b08                 mov ecx, dword ptr [eax]
// 00989586  8b5004               mov edx, dword ptr [eax + 4]
// 00989589  890e                 mov dword ptr [esi], ecx
// 0098958b  895604               mov dword ptr [esi + 4], edx
// 0098958e  e97d030000           jmp 0x989910
// 00989593  8b742468             mov esi, dword ptr [esp + 0x68]
// 00989597  8d442438             lea eax, [esp + 0x38]
// 0098959b  8b08                 mov ecx, dword ptr [eax]
// 0098959d  8b5004               mov edx, dword ptr [eax + 4]
// 009895a0  890e                 mov dword ptr [esi], ecx
// 009895a2  895604               mov dword ptr [esi + 4], edx
// 009895a5  e966030000           jmp 0x989910
// 009895aa  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 009895b2  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 009895b6  0f8573010000         jne 0x98972f
// 009895bc  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 009895c3  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009895c7  03c7                 add eax, edi
// 009895c9  99                   cdq 
// 009895ca  2bc2                 sub eax, edx
// 009895cc  8bd8                 mov ebx, eax
// 009895ce  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 009895d2  6a01                 push 1
// 009895d4  6a00                 push 0
// 009895d6  89442438             mov dword ptr [esp + 0x38], eax
// 009895da  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 009895e1  83ec10               sub esp, 0x10
// 009895e4  8944244c             mov dword ptr [esp + 0x4c], eax
// 009895e8  8bc4                 mov eax, esp
// 009895ea  8908                 mov dword ptr [eax], ecx
// 009895ec  894c2440             mov dword ptr [esp + 0x40], ecx
// 009895f0  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 009895f7  897804               mov dword ptr [eax + 4], edi
// 009895fa  8bbc2484000000       mov edi, dword ptr [esp + 0x84]
// 00989601  d1fb                 sar ebx, 1
// 00989603  894808               mov dword ptr [eax + 8], ecx
// 00989606  8d5301               lea edx, [ebx + 1]
// 00989609  89500c               mov dword ptr [eax + 0xc], edx
// 0098960c  8d54242c             lea edx, [esp + 0x2c]
// 00989610  52                   push edx
// 00989611  8d442438             lea eax, [esp + 0x38]
// 00989615  50                   push eax
// 00989616  56                   push esi
// 00989617  57                   push edi
// 00989618  8bcd                 mov ecx, ebp
// 0098961a  e891faffff           call 0x9890b0
// 0098961f  8d4c2470             lea ecx, [esp + 0x70]
// 00989623  51                   push ecx
// 00989624  8d54243c             lea edx, [esp + 0x3c]
// 00989628  52                   push edx
// 00989629  8bcf                 mov ecx, edi
// 0098962b  e8b04eb1ff           call 0x49e4e0
// 00989630  8bbc248c000000       mov edi, dword ptr [esp + 0x8c]
// 00989637  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0098963b  f7df                 neg edi
// 0098963d  1bff                 sbb edi, edi
// 0098963f  83e709               and edi, 9
// 00989642  0338                 add edi, dword ptr [eax]
// 00989644  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 00989648  2bc7                 sub eax, edi
// 0098964a  2b442474             sub eax, dword ptr [esp + 0x74]
// 0098964e  6a00                 push 0
// 00989650  99                   cdq 
// 00989651  2bc2                 sub eax, edx
// 00989653  8b542438             mov edx, dword ptr [esp + 0x38]
// 00989657  6a00                 push 0
// 00989659  83ec10               sub esp, 0x10
// 0098965c  d1f8                 sar eax, 1
// 0098965e  03c8                 add ecx, eax
// 00989660  8bc4                 mov eax, esp
// 00989662  8908                 mov dword ptr [eax], ecx
// 00989664  894c2440             mov dword ptr [esp + 0x40], ecx
// 00989668  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0098966c  895804               mov dword ptr [eax + 4], ebx
// 0098966f  894808               mov dword ptr [eax + 8], ecx
// 00989672  89500c               mov dword ptr [eax + 0xc], edx
// 00989675  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 0098967c  8d842488000000       lea eax, [esp + 0x88]
// 00989683  50                   push eax
// 00989684  8d4c2434             lea ecx, [esp + 0x34]
// 00989688  51                   push ecx
// 00989689  56                   push esi
// 0098968a  52                   push edx
// 0098968b  8bcd                 mov ecx, ebp
// 0098968d  e81efaffff           call 0x9890b0
// 00989692  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0098969a  0f845f020000         je 0x9898ff
// 009896a0  8d4c2418             lea ecx, [esp + 0x18]
// 009896a4  ff156046b200         call dword ptr [0xb24660]
// 009896aa  84c0                 test al, al
// 009896ac  7414                 je 0x9896c2
// 009896ae  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 009896b2  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009896b6  03c1                 add eax, ecx
// 009896b8  99                   cdq 
// 009896b9  2bc2                 sub eax, edx
// 009896bb  8bf8                 mov edi, eax
// 009896bd  d1ff                 sar edi, 1
// 009896bf  4f                   dec edi
// 009896c0  eb08                 jmp 0x9896ca
// 009896c2  8b542428             mov edx, dword ptr [esp + 0x28]
// 009896c6  8d7c3afc             lea edi, [edx + edi - 4]
// 009896ca  8b442434             mov eax, dword ptr [esp + 0x34]
// 009896ce  03c3                 add eax, ebx
// 009896d0  99                   cdq 
// 009896d1  2bc2                 sub eax, edx
// 009896d3  8bd8                 mov ebx, eax
// 009896d5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009896db  d1fb                 sar ebx, 1
// 009896dd  83f8ff               cmp eax, -1
// 009896e0  750f                 jne 0x9896f1
// 009896e2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009896e8  85c9                 test ecx, ecx
// 009896ea  7405                 je 0x9896f1
// 009896ec  e82fb8ffff           call 0x984f20
// 009896f1  8b4d00               mov ecx, dword ptr [ebp]
// 009896f4  8b16                 mov edx, dword ptr [esi]
// 009896f6  6a00                 push 0
// 009896f8  898c2490000000       mov dword ptr [esp + 0x90], ecx
// 009896ff  50                   push eax
// 00989700  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00989706  8bce                 mov ecx, esi
// 00989708  ffd0                 call eax
// 0098970a  8b16                 mov edx, dword ptr [esi]
// 0098970c  50                   push eax
// 0098970d  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00989710  8bce                 mov ecx, esi
// 00989712  ffd0                 call eax
// 00989714  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00989718  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 0098971f  50                   push eax
// 00989720  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 00989726  53                   push ebx
// 00989727  57                   push edi
// 00989728  56                   push esi
// 00989729  51                   push ecx
// 0098972a  e9cc010000           jmp 0x9898fb
// 0098972f  8b442474             mov eax, dword ptr [esp + 0x74]
// 00989733  8d4801               lea ecx, [eax + 1]
// 00989736  894c2448             mov dword ptr [esp + 0x48], ecx
// 0098973a  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0098973e  03c1                 add eax, ecx
// 00989740  99                   cdq 
// 00989741  2bc2                 sub eax, edx
// 00989743  d1f8                 sar eax, 1
// 00989745  89842484000000       mov dword ptr [esp + 0x84], eax
// 0098974c  8d5801               lea ebx, [eax + 1]
// 0098974f  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00989756  49                   dec ecx
// 00989757  8d542414             lea edx, [esp + 0x14]
// 0098975b  89442454             mov dword ptr [esp + 0x54], eax
// 0098975f  89442444             mov dword ptr [esp + 0x44], eax
// 00989763  52                   push edx
// 00989764  8d44242c             lea eax, [esp + 0x2c]
// 00989768  894c2444             mov dword ptr [esp + 0x44], ecx
// 0098976c  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00989770  50                   push eax
// 00989771  897c2444             mov dword ptr [esp + 0x44], edi
// 00989775  e8664db1ff           call 0x49e4e0
// 0098977a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0098977e  8bc1                 mov eax, ecx
// 00989780  2b842484000000       sub eax, dword ptr [esp + 0x84]
// 00989787  6a00                 push 0
// 00989789  2b442430             sub eax, dword ptr [esp + 0x30]
// 0098978d  40                   inc eax
// 0098978e  99                   cdq 
// 0098978f  2bc2                 sub eax, edx
// 00989791  d1f8                 sar eax, 1
// 00989793  2bc8                 sub ecx, eax
// 00989795  8b442448             mov eax, dword ptr [esp + 0x48]
// 00989799  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 0098979d  2bc7                 sub eax, edi
// 0098979f  40                   inc eax
// 009897a0  99                   cdq 
// 009897a1  2bc2                 sub eax, edx
// 009897a3  d1f8                 sar eax, 1
// 009897a5  8bd7                 mov edx, edi
// 009897a7  03d0                 add edx, eax
// 009897a9  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 009897b0  50                   push eax
// 009897b1  83ec10               sub esp, 0x10
// 009897b4  8bc4                 mov eax, esp
// 009897b6  8908                 mov dword ptr [eax], ecx
// 009897b8  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 009897bc  895004               mov dword ptr [eax + 4], edx
// 009897bf  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009897c3  894808               mov dword ptr [eax + 8], ecx
// 009897c6  89500c               mov dword ptr [eax + 0xc], edx
// 009897c9  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 009897d0  8d44242c             lea eax, [esp + 0x2c]
// 009897d4  50                   push eax
// 009897d5  8d4c2438             lea ecx, [esp + 0x38]
// 009897d9  51                   push ecx
// 009897da  56                   push esi
// 009897db  52                   push edx
// 009897dc  8bcd                 mov ecx, ebp
// 009897de  e8cdf8ffff           call 0x9890b0
// 009897e3  8d442470             lea eax, [esp + 0x70]
// 009897e7  50                   push eax
// 009897e8  8d4c243c             lea ecx, [esp + 0x3c]
// 009897ec  51                   push ecx
// 009897ed  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 009897f1  e8ea4cb1ff           call 0x49e4e0
// 009897f6  8b10                 mov edx, dword ptr [eax]
// 009897f8  8b4804               mov ecx, dword ptr [eax + 4]
// 009897fb  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 00989802  f7d8                 neg eax
// 00989804  1bc0                 sbb eax, eax
// 00989806  83e008               and eax, 8
// 00989809  03d0                 add edx, eax
// 0098980b  8b442454             mov eax, dword ptr [esp + 0x54]
// 0098980f  89542428             mov dword ptr [esp + 0x28], edx
// 00989813  8b542448             mov edx, dword ptr [esp + 0x48]
// 00989817  89442444             mov dword ptr [esp + 0x44], eax
// 0098981b  89542438             mov dword ptr [esp + 0x38], edx
// 0098981f  897c243c             mov dword ptr [esp + 0x3c], edi
// 00989823  895c2440             mov dword ptr [esp + 0x40], ebx
// 00989827  8bc3                 mov eax, ebx
// 00989829  2bc2                 sub eax, edx
// 0098982b  2bc1                 sub eax, ecx
// 0098982d  40                   inc eax
// 0098982e  99                   cdq 
// 0098982f  2bc2                 sub eax, edx
// 00989831  d1f8                 sar eax, 1
// 00989833  8bcb                 mov ecx, ebx
// 00989835  2bc8                 sub ecx, eax
// 00989837  8b442454             mov eax, dword ptr [esp + 0x54]
// 0098983b  2bc7                 sub eax, edi
// 0098983d  2b442428             sub eax, dword ptr [esp + 0x28]
// 00989841  6a00                 push 0
// 00989843  40                   inc eax
// 00989844  99                   cdq 
// 00989845  2bc2                 sub eax, edx
// 00989847  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 0098984e  52                   push edx
// 0098984f  83ec10               sub esp, 0x10
// 00989852  d1f8                 sar eax, 1
// 00989854  03f8                 add edi, eax
// 00989856  8bc4                 mov eax, esp
// 00989858  8908                 mov dword ptr [eax], ecx
// 0098985a  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0098985e  897804               mov dword ptr [eax + 4], edi
// 00989861  895808               mov dword ptr [eax + 8], ebx
// 00989864  89480c               mov dword ptr [eax + 0xc], ecx
// 00989867  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 0098986e  8d942488000000       lea edx, [esp + 0x88]
// 00989875  52                   push edx
// 00989876  8d442434             lea eax, [esp + 0x34]
// 0098987a  50                   push eax
// 0098987b  56                   push esi
// 0098987c  51                   push ecx
// 0098987d  8bcd                 mov ecx, ebp
// 0098987f  e82cf8ffff           call 0x9890b0
// 00989884  83bc248c00000000     cmp dword ptr [esp + 0x8c], 0
// 0098988c  7471                 je 0x9898ff
// 0098988e  8b542438             mov edx, dword ptr [esp + 0x38]
// 00989892  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00989896  8bc3                 mov eax, ebx
// 00989898  03c2                 add eax, edx
// 0098989a  99                   cdq 
// 0098989b  2bc2                 sub eax, edx
// 0098989d  8bd8                 mov ebx, eax
// 0098989f  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 009898a5  d1fb                 sar ebx, 1
// 009898a7  83eb02               sub ebx, 2
// 009898aa  8d540ffc             lea edx, [edi + ecx - 4]
// 009898ae  8954243c             mov dword ptr [esp + 0x3c], edx
// 009898b2  83f8ff               cmp eax, -1
// 009898b5  750f                 jne 0x9898c6
// 009898b7  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 009898bd  85c9                 test ecx, ecx
// 009898bf  7405                 je 0x9898c6
// 009898c1  e85ab6ffff           call 0x984f20
// 009898c6  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 009898cd  8b16                 mov edx, dword ptr [esi]
// 009898cf  8b7d00               mov edi, dword ptr [ebp]
// 009898d2  51                   push ecx
// 009898d3  50                   push eax
// 009898d4  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 009898da  8bce                 mov ecx, esi
// 009898dc  ffd0                 call eax
// 009898de  8b16                 mov edx, dword ptr [esi]
// 009898e0  50                   push eax
// 009898e1  8b426c               mov eax, dword ptr [edx + 0x6c]
// 009898e4  8bce                 mov ecx, esi
// 009898e6  ffd0                 call eax
// 009898e8  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 009898ec  8b542478             mov edx, dword ptr [esp + 0x78]
// 009898f0  50                   push eax
// 009898f1  8b87f4000000         mov eax, dword ptr [edi + 0xf4]
// 009898f7  51                   push ecx
// 009898f8  53                   push ebx
// 009898f9  56                   push esi
// 009898fa  52                   push edx
// 009898fb  8bcd                 mov ecx, ebp
// 009898fd  ffd0                 call eax
// 009898ff  8b742468             mov esi, dword ptr [esp + 0x68]
// 00989903  c70600000000         mov dword ptr [esi], 0
// 00989909  c7460400000000       mov dword ptr [esi + 4], 0
// 00989910  8d4c2470             lea ecx, [esp + 0x70]
// 00989914  ff15d047b200         call dword ptr [0xb247d0]
// 0098991a  8d4c2414             lea ecx, [esp + 0x14]
// 0098991e  ff15d047b200         call dword ptr [0xb247d0]
// 00989924  8d4c2418             lea ecx, [esp + 0x18]
// 00989928  ff15d047b200         call dword ptr [0xb247d0]
// 0098992e  8d4c241c             lea ecx, [esp + 0x1c]
// 00989932  ff15d047b200         call dword ptr [0xb247d0]
// 00989938  8d4c2420             lea ecx, [esp + 0x20]
// 0098993c  ff15d047b200         call dword ptr [0xb247d0]
// 00989942  8d4c2424             lea ecx, [esp + 0x24]
// 00989946  ff15d047b200         call dword ptr [0xb247d0]
// 0098994c  8bc6                 mov eax, esi
// 0098994e  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00989952  64890d00000000       mov dword ptr fs:[0], ecx
// 00989959  59                   pop ecx
// 0098995a  5f                   pop edi
// 0098995b  5e                   pop esi
// 0098995c  5d                   pop ebp
// 0098995d  5b                   pop ebx
// 0098995e  83c450               add esp, 0x50
// 00989961  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawControlText2@CXTPPaintManager@@IAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp