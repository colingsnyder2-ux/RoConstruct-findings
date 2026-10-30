// roc 2011-06 008da490  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 1816 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008da490
//
// 008da490  83ec2c               sub esp, 0x2c
// 008da493  53                   push ebx
// 008da494  55                   push ebp
// 008da495  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 008da499  8b4544               mov eax, dword ptr [ebp + 0x44]
// 008da49c  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 008da49f  8bd9                 mov ebx, ecx
// 008da4a1  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 008da4a4  89442414             mov dword ptr [esp + 0x14], eax
// 008da4a8  8b4550               mov eax, dword ptr [ebp + 0x50]
// 008da4ab  894c2418             mov dword ptr [esp + 0x18], ecx
// 008da4af  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008da4b2  8954241c             mov dword ptr [esp + 0x1c], edx
// 008da4b6  89442420             mov dword ptr [esp + 0x20], eax
// 008da4ba  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 008da4c0  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 008da4c6  56                   push esi
// 008da4c7  57                   push edi
// 008da4c8  895c2418             mov dword ptr [esp + 0x18], ebx
// 008da4cc  83f9ff               cmp ecx, -1
// 008da4cf  750c                 jne 0x8da4dd
// 008da4d1  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 008da4d7  89542410             mov dword ptr [esp + 0x10], edx
// 008da4db  eb04                 jmp 0x8da4e1
// 008da4dd  894c2410             mov dword ptr [esp + 0x10], ecx
// 008da4e1  8bb828010000         mov edi, dword ptr [eax + 0x128]
// 008da4e7  83ffff               cmp edi, -1
// 008da4ea  7506                 jne 0x8da4f2
// 008da4ec  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 008da4f2  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008da4f8  83f9ff               cmp ecx, -1
// 008da4fb  750c                 jne 0x8da509
// 008da4fd  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 008da503  89442414             mov dword ptr [esp + 0x14], eax
// 008da507  eb04                 jmp 0x8da50d
// 008da509  894c2414             mov dword ptr [esp + 0x14], ecx
// 008da50d  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008da510  8b11                 mov edx, dword ptr [ecx]
// 008da512  8b4248               mov eax, dword ptr [edx + 0x48]
// 008da515  ffd0                 call eax
// 008da517  8b742440             mov esi, dword ptr [esp + 0x40]
// 008da51b  83f803               cmp eax, 3
// 008da51e  0f8737060000         ja 0x8dab5b
// 008da524  ff248598ab8d00       jmp dword ptr [eax*4 + 0x8dab98]
// 008da52b  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008da52e  b802000000           mov eax, 2
// 008da533  396904               cmp dword ptr [ecx + 4], ebp
// 008da536  750c                 jne 0x8da544
// 008da538  2944241c             sub dword ptr [esp + 0x1c], eax
// 008da53c  29442420             sub dword ptr [esp + 0x20], eax
// 008da540  01442424             add dword ptr [esp + 0x24], eax
// 008da544  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da548  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 008da54b  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 008da551  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da555  8b19                 mov ebx, dword ptr [ecx]
// 008da557  40                   inc eax
// 008da558  89442430             mov dword ptr [esp + 0x30], eax
// 008da55c  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da560  48                   dec eax
// 008da561  89442434             mov dword ptr [esp + 0x34], eax
// 008da565  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da569  48                   dec eax
// 008da56a  55                   push ebp
// 008da56b  42                   inc edx
// 008da56c  8944243c             mov dword ptr [esp + 0x3c], eax
// 008da570  83ec10               sub esp, 0x10
// 008da573  8bc4                 mov eax, esp
// 008da575  8910                 mov dword ptr [eax], edx
// 008da577  8b542444             mov edx, dword ptr [esp + 0x44]
// 008da57b  895004               mov dword ptr [eax + 4], edx
// 008da57e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008da582  895008               mov dword ptr [eax + 8], edx
// 008da585  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008da589  89500c               mov dword ptr [eax + 0xc], edx
// 008da58c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008da58f  56                   push esi
// 008da590  ffd0                 call eax
// 008da592  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 008da598  89442444             mov dword ptr [esp + 0x44], eax
// 008da59c  83ffff               cmp edi, -1
// 008da59f  7455                 je 0x8da5f6
// 008da5a1  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da5a5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da5a9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da5ad  2bc8                 sub ecx, eax
// 008da5af  57                   push edi
// 008da5b0  83e902               sub ecx, 2
// 008da5b3  51                   push ecx
// 008da5b4  6a01                 push 1
// 008da5b6  83c002               add eax, 2
// 008da5b9  50                   push eax
// 008da5ba  52                   push edx
// 008da5bb  8bce                 mov ecx, esi
// 008da5bd  e814200f00           call 0x9cc5d6
// 008da5c2  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da5c6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da5ca  8b5604               mov edx, dword ptr [esi + 4]
// 008da5cd  57                   push edi
// 008da5ce  40                   inc eax
// 008da5cf  50                   push eax
// 008da5d0  41                   inc ecx
// 008da5d1  51                   push ecx
// 008da5d2  52                   push edx
// 008da5d3  ffd3                 call ebx
// 008da5d5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da5d9  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da5dd  8b542420             mov edx, dword ptr [esp + 0x20]
// 008da5e1  57                   push edi
// 008da5e2  2bc8                 sub ecx, eax
// 008da5e4  6a01                 push 1
// 008da5e6  83e904               sub ecx, 4
// 008da5e9  51                   push ecx
// 008da5ea  52                   push edx
// 008da5eb  83c002               add eax, 2
// 008da5ee  50                   push eax
// 008da5ef  8bce                 mov ecx, esi
// 008da5f1  e8e01f0f00           call 0x9cc5d6
// 008da5f6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008da5fa  83ffff               cmp edi, -1
// 008da5fd  7437                 je 0x8da636
// 008da5ff  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da603  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da607  8b5604               mov edx, dword ptr [esi + 4]
// 008da60a  57                   push edi
// 008da60b  40                   inc eax
// 008da60c  50                   push eax
// 008da60d  83c1fe               add ecx, -2
// 008da610  51                   push ecx
// 008da611  52                   push edx
// 008da612  ffd3                 call ebx
// 008da614  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da618  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da61c  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da620  2bc8                 sub ecx, eax
// 008da622  57                   push edi
// 008da623  83e903               sub ecx, 3
// 008da626  51                   push ecx
// 008da627  6a01                 push 1
// 008da629  83c002               add eax, 2
// 008da62c  50                   push eax
// 008da62d  4a                   dec edx
// 008da62e  52                   push edx
// 008da62f  8bce                 mov ecx, esi
// 008da631  e8a01f0f00           call 0x9cc5d6
// 008da636  8b442410             mov eax, dword ptr [esp + 0x10]
// 008da63a  83f8ff               cmp eax, -1
// 008da63d  7424                 je 0x8da663
// 008da63f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da643  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da647  50                   push eax
// 008da648  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da64c  2bc8                 sub ecx, eax
// 008da64e  83e903               sub ecx, 3
// 008da651  51                   push ecx
// 008da652  6a01                 push 1
// 008da654  83c002               add eax, 2
// 008da657  50                   push eax
// 008da658  83c2fe               add edx, -2
// 008da65b  52                   push edx
// 008da65c  8bce                 mov ecx, esi
// 008da65e  e8731f0f00           call 0x9cc5d6
// 008da663  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008da666  396804               cmp dword ptr [eax + 4], ebp
// 008da669  0f85ec040000         jne 0x8dab5b
// 008da66f  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008da673  0f85e2040000         jne 0x8dab5b
// 008da679  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da67d  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da681  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008da685  51                   push ecx
// 008da686  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008da68a  2bd0                 sub edx, eax
// 008da68c  83ea03               sub edx, 3
// 008da68f  52                   push edx
// 008da690  49                   dec ecx
// 008da691  51                   push ecx
// 008da692  40                   inc eax
// 008da693  50                   push eax
// 008da694  56                   push esi
// 008da695  e8c6e8ffff           call 0x8d8f60
// 008da69a  83c414               add esp, 0x14
// 008da69d  e9b9040000           jmp 0x8dab5b
// 008da6a2  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008da6a5  b802000000           mov eax, 2
// 008da6aa  396a04               cmp dword ptr [edx + 4], ebp
// 008da6ad  750c                 jne 0x8da6bb
// 008da6af  2944241c             sub dword ptr [esp + 0x1c], eax
// 008da6b3  29442420             sub dword ptr [esp + 0x20], eax
// 008da6b7  01442428             add dword ptr [esp + 0x28], eax
// 008da6bb  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008da6be  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008da6c4  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da6c8  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da6cc  8b19                 mov ebx, dword ptr [ecx]
// 008da6ce  40                   inc eax
// 008da6cf  89442430             mov dword ptr [esp + 0x30], eax
// 008da6d3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da6d7  48                   dec eax
// 008da6d8  89442434             mov dword ptr [esp + 0x34], eax
// 008da6dc  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da6e0  48                   dec eax
// 008da6e1  55                   push ebp
// 008da6e2  42                   inc edx
// 008da6e3  8944243c             mov dword ptr [esp + 0x3c], eax
// 008da6e7  83ec10               sub esp, 0x10
// 008da6ea  8bc4                 mov eax, esp
// 008da6ec  8910                 mov dword ptr [eax], edx
// 008da6ee  8b542444             mov edx, dword ptr [esp + 0x44]
// 008da6f2  895004               mov dword ptr [eax + 4], edx
// 008da6f5  8b542448             mov edx, dword ptr [esp + 0x48]
// 008da6f9  895008               mov dword ptr [eax + 8], edx
// 008da6fc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008da700  89500c               mov dword ptr [eax + 0xc], edx
// 008da703  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008da706  56                   push esi
// 008da707  ffd0                 call eax
// 008da709  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 008da70f  89442444             mov dword ptr [esp + 0x44], eax
// 008da713  83ffff               cmp edi, -1
// 008da716  7455                 je 0x8da76d
// 008da718  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da71c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da720  8b542420             mov edx, dword ptr [esp + 0x20]
// 008da724  57                   push edi
// 008da725  2bc8                 sub ecx, eax
// 008da727  6a01                 push 1
// 008da729  83e902               sub ecx, 2
// 008da72c  51                   push ecx
// 008da72d  52                   push edx
// 008da72e  83c002               add eax, 2
// 008da731  50                   push eax
// 008da732  8bce                 mov ecx, esi
// 008da734  e89d1e0f00           call 0x9cc5d6
// 008da739  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da73d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da741  8b5604               mov edx, dword ptr [esi + 4]
// 008da744  57                   push edi
// 008da745  40                   inc eax
// 008da746  50                   push eax
// 008da747  41                   inc ecx
// 008da748  51                   push ecx
// 008da749  52                   push edx
// 008da74a  ffd3                 call ebx
// 008da74c  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da750  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da754  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da758  2bc8                 sub ecx, eax
// 008da75a  57                   push edi
// 008da75b  83e904               sub ecx, 4
// 008da75e  51                   push ecx
// 008da75f  6a01                 push 1
// 008da761  83c002               add eax, 2
// 008da764  50                   push eax
// 008da765  52                   push edx
// 008da766  8bce                 mov ecx, esi
// 008da768  e8691e0f00           call 0x9cc5d6
// 008da76d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008da771  83f8ff               cmp eax, -1
// 008da774  7422                 je 0x8da798
// 008da776  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da77a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008da77e  50                   push eax
// 008da77f  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da783  2bc8                 sub ecx, eax
// 008da785  6a01                 push 1
// 008da787  83e902               sub ecx, 2
// 008da78a  51                   push ecx
// 008da78b  83c2fe               add edx, -2
// 008da78e  52                   push edx
// 008da78f  40                   inc eax
// 008da790  50                   push eax
// 008da791  8bce                 mov ecx, esi
// 008da793  e83e1e0f00           call 0x9cc5d6
// 008da798  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008da79c  83ffff               cmp edi, -1
// 008da79f  7439                 je 0x8da7da
// 008da7a1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da7a5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da7a9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008da7ad  57                   push edi
// 008da7ae  2bc8                 sub ecx, eax
// 008da7b0  6a01                 push 1
// 008da7b2  83e903               sub ecx, 3
// 008da7b5  51                   push ecx
// 008da7b6  4a                   dec edx
// 008da7b7  52                   push edx
// 008da7b8  83c002               add eax, 2
// 008da7bb  50                   push eax
// 008da7bc  8bce                 mov ecx, esi
// 008da7be  e8131e0f00           call 0x9cc5d6
// 008da7c3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da7c7  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da7cb  8b5604               mov edx, dword ptr [esi + 4]
// 008da7ce  57                   push edi
// 008da7cf  83c0fe               add eax, -2
// 008da7d2  50                   push eax
// 008da7d3  83c102               add ecx, 2
// 008da7d6  51                   push ecx
// 008da7d7  52                   push edx
// 008da7d8  ffd3                 call ebx
// 008da7da  8b442410             mov eax, dword ptr [esp + 0x10]
// 008da7de  83f8ff               cmp eax, -1
// 008da7e1  7415                 je 0x8da7f8
// 008da7e3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da7e7  8b5604               mov edx, dword ptr [esi + 4]
// 008da7ea  50                   push eax
// 008da7eb  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008da7ef  48                   dec eax
// 008da7f0  50                   push eax
// 008da7f1  83c102               add ecx, 2
// 008da7f4  51                   push ecx
// 008da7f5  52                   push edx
// 008da7f6  ffd3                 call ebx
// 008da7f8  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008da7fb  396804               cmp dword ptr [eax + 4], ebp
// 008da7fe  0f8557030000         jne 0x8dab5b
// 008da804  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008da808  0f854d030000         jne 0x8dab5b
// 008da80e  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da812  8b542428             mov edx, dword ptr [esp + 0x28]
// 008da816  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008da81a  2bd0                 sub edx, eax
// 008da81c  51                   push ecx
// 008da81d  83ea03               sub edx, 3
// 008da820  52                   push edx
// 008da821  40                   inc eax
// 008da822  50                   push eax
// 008da823  8b442430             mov eax, dword ptr [esp + 0x30]
// 008da827  48                   dec eax
// 008da828  50                   push eax
// 008da829  56                   push esi
// 008da82a  e801e7ffff           call 0x8d8f30
// 008da82f  83c414               add esp, 0x14
// 008da832  e924030000           jmp 0x8dab5b
// 008da837  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008da83a  396904               cmp dword ptr [ecx + 4], ebp
// 008da83d  750f                 jne 0x8da84e
// 008da83f  6a02                 push 2
// 008da841  6a02                 push 2
// 008da843  8d542424             lea edx, [esp + 0x24]
// 008da847  52                   push edx
// 008da848  ff15e41ba400         call dword ptr [0xa41be4]
// 008da84e  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 008da851  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 008da857  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da85b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da85f  8b19                 mov ebx, dword ptr [ecx]
// 008da861  40                   inc eax
// 008da862  89442430             mov dword ptr [esp + 0x30], eax
// 008da866  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da86a  48                   dec eax
// 008da86b  89442434             mov dword ptr [esp + 0x34], eax
// 008da86f  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da873  48                   dec eax
// 008da874  55                   push ebp
// 008da875  42                   inc edx
// 008da876  8944243c             mov dword ptr [esp + 0x3c], eax
// 008da87a  83ec10               sub esp, 0x10
// 008da87d  8bc4                 mov eax, esp
// 008da87f  8910                 mov dword ptr [eax], edx
// 008da881  8b542444             mov edx, dword ptr [esp + 0x44]
// 008da885  895004               mov dword ptr [eax + 4], edx
// 008da888  8b542448             mov edx, dword ptr [esp + 0x48]
// 008da88c  895008               mov dword ptr [eax + 8], edx
// 008da88f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008da893  89500c               mov dword ptr [eax + 0xc], edx
// 008da896  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008da899  56                   push esi
// 008da89a  ffd0                 call eax
// 008da89c  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 008da8a2  89442444             mov dword ptr [esp + 0x44], eax
// 008da8a6  83ffff               cmp edi, -1
// 008da8a9  7432                 je 0x8da8dd
// 008da8ab  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da8af  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da8b3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da8b7  2bc8                 sub ecx, eax
// 008da8b9  57                   push edi
// 008da8ba  83e902               sub ecx, 2
// 008da8bd  51                   push ecx
// 008da8be  6a01                 push 1
// 008da8c0  40                   inc eax
// 008da8c1  50                   push eax
// 008da8c2  52                   push edx
// 008da8c3  8bce                 mov ecx, esi
// 008da8c5  e80c1d0f00           call 0x9cc5d6
// 008da8ca  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da8ce  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008da8d2  8b5604               mov edx, dword ptr [esi + 4]
// 008da8d5  57                   push edi
// 008da8d6  48                   dec eax
// 008da8d7  50                   push eax
// 008da8d8  41                   inc ecx
// 008da8d9  51                   push ecx
// 008da8da  52                   push edx
// 008da8db  ffd3                 call ebx
// 008da8dd  8b442410             mov eax, dword ptr [esp + 0x10]
// 008da8e1  83f8ff               cmp eax, -1
// 008da8e4  7422                 je 0x8da908
// 008da8e6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da8ea  8b542428             mov edx, dword ptr [esp + 0x28]
// 008da8ee  50                   push eax
// 008da8ef  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da8f3  2bc8                 sub ecx, eax
// 008da8f5  6a01                 push 1
// 008da8f7  83e904               sub ecx, 4
// 008da8fa  51                   push ecx
// 008da8fb  4a                   dec edx
// 008da8fc  52                   push edx
// 008da8fd  83c002               add eax, 2
// 008da900  50                   push eax
// 008da901  8bce                 mov ecx, esi
// 008da903  e8ce1c0f00           call 0x9cc5d6
// 008da908  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008da90c  83ffff               cmp edi, -1
// 008da90f  7453                 je 0x8da964
// 008da911  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da915  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da919  8b542428             mov edx, dword ptr [esp + 0x28]
// 008da91d  57                   push edi
// 008da91e  2bc8                 sub ecx, eax
// 008da920  6a01                 push 1
// 008da922  83e904               sub ecx, 4
// 008da925  51                   push ecx
// 008da926  52                   push edx
// 008da927  83c002               add eax, 2
// 008da92a  50                   push eax
// 008da92b  8bce                 mov ecx, esi
// 008da92d  e8a41c0f00           call 0x9cc5d6
// 008da932  8b442428             mov eax, dword ptr [esp + 0x28]
// 008da936  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da93a  8b5604               mov edx, dword ptr [esi + 4]
// 008da93d  57                   push edi
// 008da93e  48                   dec eax
// 008da93f  50                   push eax
// 008da940  83c1fe               add ecx, -2
// 008da943  51                   push ecx
// 008da944  52                   push edx
// 008da945  ffd3                 call ebx
// 008da947  8b442420             mov eax, dword ptr [esp + 0x20]
// 008da94b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da94f  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da953  57                   push edi
// 008da954  2bc8                 sub ecx, eax
// 008da956  49                   dec ecx
// 008da957  51                   push ecx
// 008da958  6a01                 push 1
// 008da95a  50                   push eax
// 008da95b  4a                   dec edx
// 008da95c  52                   push edx
// 008da95d  8bce                 mov ecx, esi
// 008da95f  e8721c0f00           call 0x9cc5d6
// 008da964  8b442410             mov eax, dword ptr [esp + 0x10]
// 008da968  83f8ff               cmp eax, -1
// 008da96b  741f                 je 0x8da98c
// 008da96d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008da971  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da975  50                   push eax
// 008da976  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da97a  2bc8                 sub ecx, eax
// 008da97c  49                   dec ecx
// 008da97d  51                   push ecx
// 008da97e  6a01                 push 1
// 008da980  50                   push eax
// 008da981  83c2fe               add edx, -2
// 008da984  52                   push edx
// 008da985  8bce                 mov ecx, esi
// 008da987  e84a1c0f00           call 0x9cc5d6
// 008da98c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008da98f  396804               cmp dword ptr [eax + 4], ebp
// 008da992  0f85c3010000         jne 0x8dab5b
// 008da998  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008da99c  0f85b9010000         jne 0x8dab5b
// 008da9a2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008da9a6  8b542424             mov edx, dword ptr [esp + 0x24]
// 008da9aa  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008da9ae  51                   push ecx
// 008da9af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008da9b3  2bd0                 sub edx, eax
// 008da9b5  4a                   dec edx
// 008da9b6  52                   push edx
// 008da9b7  41                   inc ecx
// 008da9b8  51                   push ecx
// 008da9b9  40                   inc eax
// 008da9ba  50                   push eax
// 008da9bb  56                   push esi
// 008da9bc  e89fe5ffff           call 0x8d8f60
// 008da9c1  83c414               add esp, 0x14
// 008da9c4  8344242802           add dword ptr [esp + 0x28], 2
// 008da9c9  e98d010000           jmp 0x8dab5b
// 008da9ce  8b5560               mov edx, dword ptr [ebp + 0x60]
// 008da9d1  396a04               cmp dword ptr [edx + 4], ebp
// 008da9d4  750f                 jne 0x8da9e5
// 008da9d6  6a02                 push 2
// 008da9d8  6a02                 push 2
// 008da9da  8d442424             lea eax, [esp + 0x24]
// 008da9de  50                   push eax
// 008da9df  ff15e41ba400         call dword ptr [0xa41be4]
// 008da9e5  8b442424             mov eax, dword ptr [esp + 0x24]
// 008da9e9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 008da9ec  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008da9f0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008da9f4  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 008da9fa  48                   dec eax
// 008da9fb  89442434             mov dword ptr [esp + 0x34], eax
// 008da9ff  8b442428             mov eax, dword ptr [esp + 0x28]
// 008daa03  48                   dec eax
// 008daa04  55                   push ebp
// 008daa05  8944243c             mov dword ptr [esp + 0x3c], eax
// 008daa09  83ec10               sub esp, 0x10
// 008daa0c  8bc4                 mov eax, esp
// 008daa0e  42                   inc edx
// 008daa0f  8910                 mov dword ptr [eax], edx
// 008daa11  8b542448             mov edx, dword ptr [esp + 0x48]
// 008daa15  43                   inc ebx
// 008daa16  895804               mov dword ptr [eax + 4], ebx
// 008daa19  895008               mov dword ptr [eax + 8], edx
// 008daa1c  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008daa20  89500c               mov dword ptr [eax + 0xc], edx
// 008daa23  8b01                 mov eax, dword ptr [ecx]
// 008daa25  8b4018               mov eax, dword ptr [eax + 0x18]
// 008daa28  56                   push esi
// 008daa29  ffd0                 call eax
// 008daa2b  8b1d0c01a400         mov ebx, dword ptr [0xa4010c]
// 008daa31  89442440             mov dword ptr [esp + 0x40], eax
// 008daa35  83ffff               cmp edi, -1
// 008daa38  7432                 je 0x8daa6c
// 008daa3a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008daa3e  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008daa42  8b542420             mov edx, dword ptr [esp + 0x20]
// 008daa46  57                   push edi
// 008daa47  2bc8                 sub ecx, eax
// 008daa49  6a01                 push 1
// 008daa4b  83e902               sub ecx, 2
// 008daa4e  51                   push ecx
// 008daa4f  52                   push edx
// 008daa50  40                   inc eax
// 008daa51  50                   push eax
// 008daa52  8bce                 mov ecx, esi
// 008daa54  e87d1b0f00           call 0x9cc5d6
// 008daa59  8b442420             mov eax, dword ptr [esp + 0x20]
// 008daa5d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008daa61  8b5604               mov edx, dword ptr [esi + 4]
// 008daa64  57                   push edi
// 008daa65  40                   inc eax
// 008daa66  50                   push eax
// 008daa67  49                   dec ecx
// 008daa68  51                   push ecx
// 008daa69  52                   push edx
// 008daa6a  ffd3                 call ebx
// 008daa6c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008daa70  83fdff               cmp ebp, -1
// 008daa73  7422                 je 0x8daa97
// 008daa75  8b442420             mov eax, dword ptr [esp + 0x20]
// 008daa79  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008daa7d  8b542424             mov edx, dword ptr [esp + 0x24]
// 008daa81  2bc8                 sub ecx, eax
// 008daa83  55                   push ebp
// 008daa84  83e904               sub ecx, 4
// 008daa87  51                   push ecx
// 008daa88  6a01                 push 1
// 008daa8a  83c002               add eax, 2
// 008daa8d  50                   push eax
// 008daa8e  4a                   dec edx
// 008daa8f  52                   push edx
// 008daa90  8bce                 mov ecx, esi
// 008daa92  e83f1b0f00           call 0x9cc5d6
// 008daa97  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008daa9b  83ffff               cmp edi, -1
// 008daa9e  7436                 je 0x8daad6
// 008daaa0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008daaa4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008daaa8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008daaac  2bc8                 sub ecx, eax
// 008daaae  57                   push edi
// 008daaaf  83e904               sub ecx, 4
// 008daab2  51                   push ecx
// 008daab3  6a01                 push 1
// 008daab5  83c002               add eax, 2
// 008daab8  50                   push eax
// 008daab9  52                   push edx
// 008daaba  8bce                 mov ecx, esi
// 008daabc  e8151b0f00           call 0x9cc5d6
// 008daac1  8b442428             mov eax, dword ptr [esp + 0x28]
// 008daac5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008daac9  8b5604               mov edx, dword ptr [esi + 4]
// 008daacc  57                   push edi
// 008daacd  83c0fe               add eax, -2
// 008daad0  50                   push eax
// 008daad1  49                   dec ecx
// 008daad2  51                   push ecx
// 008daad3  52                   push edx
// 008daad4  ffd3                 call ebx
// 008daad6  83fdff               cmp ebp, -1
// 008daad9  7422                 je 0x8daafd
// 008daadb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008daadf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008daae3  8b542428             mov edx, dword ptr [esp + 0x28]
// 008daae7  55                   push ebp
// 008daae8  2bc8                 sub ecx, eax
// 008daaea  6a01                 push 1
// 008daaec  83e902               sub ecx, 2
// 008daaef  51                   push ecx
// 008daaf0  83c2fe               add edx, -2
// 008daaf3  52                   push edx
// 008daaf4  40                   inc eax
// 008daaf5  50                   push eax
// 008daaf6  8bce                 mov ecx, esi
// 008daaf8  e8d91a0f00           call 0x9cc5d6
// 008daafd  83ffff               cmp edi, -1
// 008dab00  7420                 je 0x8dab22
// 008dab02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dab06  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008dab0a  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dab0e  57                   push edi
// 008dab0f  2bc8                 sub ecx, eax
// 008dab11  6a01                 push 1
// 008dab13  83e902               sub ecx, 2
// 008dab16  51                   push ecx
// 008dab17  4a                   dec edx
// 008dab18  52                   push edx
// 008dab19  40                   inc eax
// 008dab1a  50                   push eax
// 008dab1b  8bce                 mov ecx, esi
// 008dab1d  e8b41a0f00           call 0x9cc5d6
// 008dab22  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008dab26  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008dab29  396804               cmp dword ptr [eax + 4], ebp
// 008dab2c  752d                 jne 0x8dab5b
// 008dab2e  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008dab32  7527                 jne 0x8dab5b
// 008dab34  8b442420             mov eax, dword ptr [esp + 0x20]
// 008dab38  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dab3c  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008dab40  2bd0                 sub edx, eax
// 008dab42  51                   push ecx
// 008dab43  4a                   dec edx
// 008dab44  52                   push edx
// 008dab45  40                   inc eax
// 008dab46  50                   push eax
// 008dab47  8b442428             mov eax, dword ptr [esp + 0x28]
// 008dab4b  40                   inc eax
// 008dab4c  50                   push eax
// 008dab4d  56                   push esi
// 008dab4e  e8dde3ffff           call 0x8d8f30
// 008dab53  83c414               add esp, 0x14
// 008dab56  8344242402           add dword ptr [esp + 0x24], 2
// 008dab5b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008dab5f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dab63  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 008dab66  8b11                 mov edx, dword ptr [ecx]
// 008dab68  6a01                 push 1
// 008dab6a  83ec10               sub esp, 0x10
// 008dab6d  8bc4                 mov eax, esp
// 008dab6f  8938                 mov dword ptr [eax], edi
// 008dab71  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 008dab75  897804               mov dword ptr [eax + 4], edi
// 008dab78  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008dab7c  897808               mov dword ptr [eax + 8], edi
// 008dab7f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008dab83  55                   push ebp
// 008dab84  89780c               mov dword ptr [eax + 0xc], edi
// 008dab87  8b4268               mov eax, dword ptr [edx + 0x68]
// 008dab8a  56                   push esi
// 008dab8b  ffd0                 call eax
// 008dab8d  5f                   pop edi
// 008dab8e  5e                   pop esi
// 008dab8f  5d                   pop ebp
// 008dab90  5b                   pop ebx
// 008dab91  83c42c               add esp, 0x2c
// 008dab94  c20800               ret 8
// 008dab97  90                   nop 
// 008dab98  2ba58d00a2a6         sub esp, dword ptr [ebp - 0x595dff73]
// 008dab9e  8d00                 lea eax, [eax]
// 008daba0  37                   aaa 
// 008daba1  a88d                 test al, 0x8d
// 008daba3  00ce                 add dh, cl
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp