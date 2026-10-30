// roc 2010-06 00889550  unit: CXTPTabPaintManager::CAppearanceSetPropertyPage  size: 1816 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00889550
//
// 00889550  83ec2c               sub esp, 0x2c
// 00889553  53                   push ebx
// 00889554  55                   push ebp
// 00889555  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00889559  8b4544               mov eax, dword ptr [ebp + 0x44]
// 0088955c  8b554c               mov edx, dword ptr [ebp + 0x4c]
// 0088955f  8bd9                 mov ebx, ecx
// 00889561  8b4d48               mov ecx, dword ptr [ebp + 0x48]
// 00889564  89442414             mov dword ptr [esp + 0x14], eax
// 00889568  8b4550               mov eax, dword ptr [ebp + 0x50]
// 0088956b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0088956f  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00889572  8954241c             mov dword ptr [esp + 0x1c], edx
// 00889576  89442420             mov dword ptr [esp + 0x20], eax
// 0088957a  8b81e4000000         mov eax, dword ptr [ecx + 0xe4]
// 00889580  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 00889586  56                   push esi
// 00889587  57                   push edi
// 00889588  895c2418             mov dword ptr [esp + 0x18], ebx
// 0088958c  83f9ff               cmp ecx, -1
// 0088958f  750c                 jne 0x88959d
// 00889591  8b9030010000         mov edx, dword ptr [eax + 0x130]
// 00889597  89542410             mov dword ptr [esp + 0x10], edx
// 0088959b  eb04                 jmp 0x8895a1
// 0088959d  894c2410             mov dword ptr [esp + 0x10], ecx
// 008895a1  8bb828010000         mov edi, dword ptr [eax + 0x128]
// 008895a7  83ffff               cmp edi, -1
// 008895aa  7506                 jne 0x8895b2
// 008895ac  8bb824010000         mov edi, dword ptr [eax + 0x124]
// 008895b2  8b8840010000         mov ecx, dword ptr [eax + 0x140]
// 008895b8  83f9ff               cmp ecx, -1
// 008895bb  750c                 jne 0x8895c9
// 008895bd  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 008895c3  89442414             mov dword ptr [esp + 0x14], eax
// 008895c7  eb04                 jmp 0x8895cd
// 008895c9  894c2414             mov dword ptr [esp + 0x14], ecx
// 008895cd  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008895d0  8b11                 mov edx, dword ptr [ecx]
// 008895d2  8b4248               mov eax, dword ptr [edx + 0x48]
// 008895d5  ffd0                 call eax
// 008895d7  8b742440             mov esi, dword ptr [esp + 0x40]
// 008895db  83f803               cmp eax, 3
// 008895de  0f8737060000         ja 0x889c1b
// 008895e4  ff2485589c8800       jmp dword ptr [eax*4 + 0x889c58]
// 008895eb  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008895ee  b802000000           mov eax, 2
// 008895f3  396904               cmp dword ptr [ecx + 4], ebp
// 008895f6  750c                 jne 0x889604
// 008895f8  2944241c             sub dword ptr [esp + 0x1c], eax
// 008895fc  29442420             sub dword ptr [esp + 0x20], eax
// 00889600  01442424             add dword ptr [esp + 0x24], eax
// 00889604  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889608  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 0088960b  8b8ae4000000         mov ecx, dword ptr [edx + 0xe4]
// 00889611  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889615  8b19                 mov ebx, dword ptr [ecx]
// 00889617  40                   inc eax
// 00889618  89442430             mov dword ptr [esp + 0x30], eax
// 0088961c  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889620  48                   dec eax
// 00889621  89442434             mov dword ptr [esp + 0x34], eax
// 00889625  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889629  48                   dec eax
// 0088962a  55                   push ebp
// 0088962b  42                   inc edx
// 0088962c  8944243c             mov dword ptr [esp + 0x3c], eax
// 00889630  83ec10               sub esp, 0x10
// 00889633  8bc4                 mov eax, esp
// 00889635  8910                 mov dword ptr [eax], edx
// 00889637  8b542444             mov edx, dword ptr [esp + 0x44]
// 0088963b  895004               mov dword ptr [eax + 4], edx
// 0088963e  8b542448             mov edx, dword ptr [esp + 0x48]
// 00889642  895008               mov dword ptr [eax + 8], edx
// 00889645  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00889649  89500c               mov dword ptr [eax + 0xc], edx
// 0088964c  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0088964f  56                   push esi
// 00889650  ffd0                 call eax
// 00889652  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 00889658  89442444             mov dword ptr [esp + 0x44], eax
// 0088965c  83ffff               cmp edi, -1
// 0088965f  7455                 je 0x8896b6
// 00889661  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889665  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889669  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088966d  2bc8                 sub ecx, eax
// 0088966f  57                   push edi
// 00889670  83e902               sub ecx, 2
// 00889673  51                   push ecx
// 00889674  6a01                 push 1
// 00889676  83c002               add eax, 2
// 00889679  50                   push eax
// 0088967a  52                   push edx
// 0088967b  8bce                 mov ecx, esi
// 0088967d  e808370f00           call 0x97cd8a
// 00889682  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889686  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088968a  8b5604               mov edx, dword ptr [esi + 4]
// 0088968d  57                   push edi
// 0088968e  40                   inc eax
// 0088968f  50                   push eax
// 00889690  41                   inc ecx
// 00889691  51                   push ecx
// 00889692  52                   push edx
// 00889693  ffd3                 call ebx
// 00889695  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889699  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088969d  8b542420             mov edx, dword ptr [esp + 0x20]
// 008896a1  57                   push edi
// 008896a2  2bc8                 sub ecx, eax
// 008896a4  6a01                 push 1
// 008896a6  83e904               sub ecx, 4
// 008896a9  51                   push ecx
// 008896aa  52                   push edx
// 008896ab  83c002               add eax, 2
// 008896ae  50                   push eax
// 008896af  8bce                 mov ecx, esi
// 008896b1  e8d4360f00           call 0x97cd8a
// 008896b6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008896ba  83ffff               cmp edi, -1
// 008896bd  7437                 je 0x8896f6
// 008896bf  8b442420             mov eax, dword ptr [esp + 0x20]
// 008896c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008896c7  8b5604               mov edx, dword ptr [esi + 4]
// 008896ca  57                   push edi
// 008896cb  40                   inc eax
// 008896cc  50                   push eax
// 008896cd  83c1fe               add ecx, -2
// 008896d0  51                   push ecx
// 008896d1  52                   push edx
// 008896d2  ffd3                 call ebx
// 008896d4  8b442420             mov eax, dword ptr [esp + 0x20]
// 008896d8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008896dc  8b542424             mov edx, dword ptr [esp + 0x24]
// 008896e0  2bc8                 sub ecx, eax
// 008896e2  57                   push edi
// 008896e3  83e903               sub ecx, 3
// 008896e6  51                   push ecx
// 008896e7  6a01                 push 1
// 008896e9  83c002               add eax, 2
// 008896ec  50                   push eax
// 008896ed  4a                   dec edx
// 008896ee  52                   push edx
// 008896ef  8bce                 mov ecx, esi
// 008896f1  e894360f00           call 0x97cd8a
// 008896f6  8b442410             mov eax, dword ptr [esp + 0x10]
// 008896fa  83f8ff               cmp eax, -1
// 008896fd  7424                 je 0x889723
// 008896ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889703  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889707  50                   push eax
// 00889708  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088970c  2bc8                 sub ecx, eax
// 0088970e  83e903               sub ecx, 3
// 00889711  51                   push ecx
// 00889712  6a01                 push 1
// 00889714  83c002               add eax, 2
// 00889717  50                   push eax
// 00889718  83c2fe               add edx, -2
// 0088971b  52                   push edx
// 0088971c  8bce                 mov ecx, esi
// 0088971e  e867360f00           call 0x97cd8a
// 00889723  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00889726  396804               cmp dword ptr [eax + 4], ebp
// 00889729  0f85ec040000         jne 0x889c1b
// 0088972f  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00889733  0f85e2040000         jne 0x889c1b
// 00889739  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0088973d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889741  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00889745  51                   push ecx
// 00889746  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0088974a  2bd0                 sub edx, eax
// 0088974c  83ea03               sub edx, 3
// 0088974f  52                   push edx
// 00889750  49                   dec ecx
// 00889751  51                   push ecx
// 00889752  40                   inc eax
// 00889753  50                   push eax
// 00889754  56                   push esi
// 00889755  e8c6e8ffff           call 0x888020
// 0088975a  83c414               add esp, 0x14
// 0088975d  e9b9040000           jmp 0x889c1b
// 00889762  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00889765  b802000000           mov eax, 2
// 0088976a  396a04               cmp dword ptr [edx + 4], ebp
// 0088976d  750c                 jne 0x88977b
// 0088976f  2944241c             sub dword ptr [esp + 0x1c], eax
// 00889773  29442420             sub dword ptr [esp + 0x20], eax
// 00889777  01442428             add dword ptr [esp + 0x28], eax
// 0088977b  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 0088977e  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889784  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889788  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088978c  8b19                 mov ebx, dword ptr [ecx]
// 0088978e  40                   inc eax
// 0088978f  89442430             mov dword ptr [esp + 0x30], eax
// 00889793  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889797  48                   dec eax
// 00889798  89442434             mov dword ptr [esp + 0x34], eax
// 0088979c  8b442428             mov eax, dword ptr [esp + 0x28]
// 008897a0  48                   dec eax
// 008897a1  55                   push ebp
// 008897a2  42                   inc edx
// 008897a3  8944243c             mov dword ptr [esp + 0x3c], eax
// 008897a7  83ec10               sub esp, 0x10
// 008897aa  8bc4                 mov eax, esp
// 008897ac  8910                 mov dword ptr [eax], edx
// 008897ae  8b542444             mov edx, dword ptr [esp + 0x44]
// 008897b2  895004               mov dword ptr [eax + 4], edx
// 008897b5  8b542448             mov edx, dword ptr [esp + 0x48]
// 008897b9  895008               mov dword ptr [eax + 8], edx
// 008897bc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008897c0  89500c               mov dword ptr [eax + 0xc], edx
// 008897c3  8b4318               mov eax, dword ptr [ebx + 0x18]
// 008897c6  56                   push esi
// 008897c7  ffd0                 call eax
// 008897c9  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 008897cf  89442444             mov dword ptr [esp + 0x44], eax
// 008897d3  83ffff               cmp edi, -1
// 008897d6  7455                 je 0x88982d
// 008897d8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008897dc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008897e0  8b542420             mov edx, dword ptr [esp + 0x20]
// 008897e4  57                   push edi
// 008897e5  2bc8                 sub ecx, eax
// 008897e7  6a01                 push 1
// 008897e9  83e902               sub ecx, 2
// 008897ec  51                   push ecx
// 008897ed  52                   push edx
// 008897ee  83c002               add eax, 2
// 008897f1  50                   push eax
// 008897f2  8bce                 mov ecx, esi
// 008897f4  e891350f00           call 0x97cd8a
// 008897f9  8b442420             mov eax, dword ptr [esp + 0x20]
// 008897fd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00889801  8b5604               mov edx, dword ptr [esi + 4]
// 00889804  57                   push edi
// 00889805  40                   inc eax
// 00889806  50                   push eax
// 00889807  41                   inc ecx
// 00889808  51                   push ecx
// 00889809  52                   push edx
// 0088980a  ffd3                 call ebx
// 0088980c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889810  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889814  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889818  2bc8                 sub ecx, eax
// 0088981a  57                   push edi
// 0088981b  83e904               sub ecx, 4
// 0088981e  51                   push ecx
// 0088981f  6a01                 push 1
// 00889821  83c002               add eax, 2
// 00889824  50                   push eax
// 00889825  52                   push edx
// 00889826  8bce                 mov ecx, esi
// 00889828  e85d350f00           call 0x97cd8a
// 0088982d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00889831  83f8ff               cmp eax, -1
// 00889834  7422                 je 0x889858
// 00889836  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0088983a  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088983e  50                   push eax
// 0088983f  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889843  2bc8                 sub ecx, eax
// 00889845  6a01                 push 1
// 00889847  83e902               sub ecx, 2
// 0088984a  51                   push ecx
// 0088984b  83c2fe               add edx, -2
// 0088984e  52                   push edx
// 0088984f  40                   inc eax
// 00889850  50                   push eax
// 00889851  8bce                 mov ecx, esi
// 00889853  e832350f00           call 0x97cd8a
// 00889858  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0088985c  83ffff               cmp edi, -1
// 0088985f  7439                 je 0x88989a
// 00889861  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889865  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889869  8b542428             mov edx, dword ptr [esp + 0x28]
// 0088986d  57                   push edi
// 0088986e  2bc8                 sub ecx, eax
// 00889870  6a01                 push 1
// 00889872  83e903               sub ecx, 3
// 00889875  51                   push ecx
// 00889876  4a                   dec edx
// 00889877  52                   push edx
// 00889878  83c002               add eax, 2
// 0088987b  50                   push eax
// 0088987c  8bce                 mov ecx, esi
// 0088987e  e807350f00           call 0x97cd8a
// 00889883  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889887  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0088988b  8b5604               mov edx, dword ptr [esi + 4]
// 0088988e  57                   push edi
// 0088988f  83c0fe               add eax, -2
// 00889892  50                   push eax
// 00889893  83c102               add ecx, 2
// 00889896  51                   push ecx
// 00889897  52                   push edx
// 00889898  ffd3                 call ebx
// 0088989a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0088989e  83f8ff               cmp eax, -1
// 008898a1  7415                 je 0x8898b8
// 008898a3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008898a7  8b5604               mov edx, dword ptr [esi + 4]
// 008898aa  50                   push eax
// 008898ab  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008898af  48                   dec eax
// 008898b0  50                   push eax
// 008898b1  83c102               add ecx, 2
// 008898b4  51                   push ecx
// 008898b5  52                   push edx
// 008898b6  ffd3                 call ebx
// 008898b8  8b4560               mov eax, dword ptr [ebp + 0x60]
// 008898bb  396804               cmp dword ptr [eax + 4], ebp
// 008898be  0f8557030000         jne 0x889c1b
// 008898c4  837d6400             cmp dword ptr [ebp + 0x64], 0
// 008898c8  0f854d030000         jne 0x889c1b
// 008898ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 008898d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 008898d6  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008898da  2bd0                 sub edx, eax
// 008898dc  51                   push ecx
// 008898dd  83ea03               sub edx, 3
// 008898e0  52                   push edx
// 008898e1  40                   inc eax
// 008898e2  50                   push eax
// 008898e3  8b442430             mov eax, dword ptr [esp + 0x30]
// 008898e7  48                   dec eax
// 008898e8  50                   push eax
// 008898e9  56                   push esi
// 008898ea  e801e7ffff           call 0x887ff0
// 008898ef  83c414               add esp, 0x14
// 008898f2  e924030000           jmp 0x889c1b
// 008898f7  8b4d60               mov ecx, dword ptr [ebp + 0x60]
// 008898fa  396904               cmp dword ptr [ecx + 4], ebp
// 008898fd  750f                 jne 0x88990e
// 008898ff  6a02                 push 2
// 00889901  6a02                 push 2
// 00889903  8d542424             lea edx, [esp + 0x24]
// 00889907  52                   push edx
// 00889908  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 0088990e  8b431c               mov eax, dword ptr [ebx + 0x1c]
// 00889911  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 00889917  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088991b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0088991f  8b19                 mov ebx, dword ptr [ecx]
// 00889921  40                   inc eax
// 00889922  89442430             mov dword ptr [esp + 0x30], eax
// 00889926  8b442424             mov eax, dword ptr [esp + 0x24]
// 0088992a  48                   dec eax
// 0088992b  89442434             mov dword ptr [esp + 0x34], eax
// 0088992f  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889933  48                   dec eax
// 00889934  55                   push ebp
// 00889935  42                   inc edx
// 00889936  8944243c             mov dword ptr [esp + 0x3c], eax
// 0088993a  83ec10               sub esp, 0x10
// 0088993d  8bc4                 mov eax, esp
// 0088993f  8910                 mov dword ptr [eax], edx
// 00889941  8b542444             mov edx, dword ptr [esp + 0x44]
// 00889945  895004               mov dword ptr [eax + 4], edx
// 00889948  8b542448             mov edx, dword ptr [esp + 0x48]
// 0088994c  895008               mov dword ptr [eax + 8], edx
// 0088994f  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00889953  89500c               mov dword ptr [eax + 0xc], edx
// 00889956  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00889959  56                   push esi
// 0088995a  ffd0                 call eax
// 0088995c  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 00889962  89442444             mov dword ptr [esp + 0x44], eax
// 00889966  83ffff               cmp edi, -1
// 00889969  7432                 je 0x88999d
// 0088996b  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088996f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889973  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889977  2bc8                 sub ecx, eax
// 00889979  57                   push edi
// 0088997a  83e902               sub ecx, 2
// 0088997d  51                   push ecx
// 0088997e  6a01                 push 1
// 00889980  40                   inc eax
// 00889981  50                   push eax
// 00889982  52                   push edx
// 00889983  8bce                 mov ecx, esi
// 00889985  e800340f00           call 0x97cd8a
// 0088998a  8b442428             mov eax, dword ptr [esp + 0x28]
// 0088998e  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00889992  8b5604               mov edx, dword ptr [esi + 4]
// 00889995  57                   push edi
// 00889996  48                   dec eax
// 00889997  50                   push eax
// 00889998  41                   inc ecx
// 00889999  51                   push ecx
// 0088999a  52                   push edx
// 0088999b  ffd3                 call ebx
// 0088999d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008899a1  83f8ff               cmp eax, -1
// 008899a4  7422                 je 0x8899c8
// 008899a6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008899aa  8b542428             mov edx, dword ptr [esp + 0x28]
// 008899ae  50                   push eax
// 008899af  8b442420             mov eax, dword ptr [esp + 0x20]
// 008899b3  2bc8                 sub ecx, eax
// 008899b5  6a01                 push 1
// 008899b7  83e904               sub ecx, 4
// 008899ba  51                   push ecx
// 008899bb  4a                   dec edx
// 008899bc  52                   push edx
// 008899bd  83c002               add eax, 2
// 008899c0  50                   push eax
// 008899c1  8bce                 mov ecx, esi
// 008899c3  e8c2330f00           call 0x97cd8a
// 008899c8  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008899cc  83ffff               cmp edi, -1
// 008899cf  7453                 je 0x889a24
// 008899d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008899d5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008899d9  8b542428             mov edx, dword ptr [esp + 0x28]
// 008899dd  57                   push edi
// 008899de  2bc8                 sub ecx, eax
// 008899e0  6a01                 push 1
// 008899e2  83e904               sub ecx, 4
// 008899e5  51                   push ecx
// 008899e6  52                   push edx
// 008899e7  83c002               add eax, 2
// 008899ea  50                   push eax
// 008899eb  8bce                 mov ecx, esi
// 008899ed  e898330f00           call 0x97cd8a
// 008899f2  8b442428             mov eax, dword ptr [esp + 0x28]
// 008899f6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008899fa  8b5604               mov edx, dword ptr [esi + 4]
// 008899fd  57                   push edi
// 008899fe  48                   dec eax
// 008899ff  50                   push eax
// 00889a00  83c1fe               add ecx, -2
// 00889a03  51                   push ecx
// 00889a04  52                   push edx
// 00889a05  ffd3                 call ebx
// 00889a07  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889a0b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889a0f  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889a13  57                   push edi
// 00889a14  2bc8                 sub ecx, eax
// 00889a16  49                   dec ecx
// 00889a17  51                   push ecx
// 00889a18  6a01                 push 1
// 00889a1a  50                   push eax
// 00889a1b  4a                   dec edx
// 00889a1c  52                   push edx
// 00889a1d  8bce                 mov ecx, esi
// 00889a1f  e866330f00           call 0x97cd8a
// 00889a24  8b442410             mov eax, dword ptr [esp + 0x10]
// 00889a28  83f8ff               cmp eax, -1
// 00889a2b  741f                 je 0x889a4c
// 00889a2d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889a31  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889a35  50                   push eax
// 00889a36  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889a3a  2bc8                 sub ecx, eax
// 00889a3c  49                   dec ecx
// 00889a3d  51                   push ecx
// 00889a3e  6a01                 push 1
// 00889a40  50                   push eax
// 00889a41  83c2fe               add edx, -2
// 00889a44  52                   push edx
// 00889a45  8bce                 mov ecx, esi
// 00889a47  e83e330f00           call 0x97cd8a
// 00889a4c  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00889a4f  396804               cmp dword ptr [eax + 4], ebp
// 00889a52  0f85c3010000         jne 0x889c1b
// 00889a58  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00889a5c  0f85b9010000         jne 0x889c1b
// 00889a62  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889a66  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889a6a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00889a6e  51                   push ecx
// 00889a6f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889a73  2bd0                 sub edx, eax
// 00889a75  4a                   dec edx
// 00889a76  52                   push edx
// 00889a77  41                   inc ecx
// 00889a78  51                   push ecx
// 00889a79  40                   inc eax
// 00889a7a  50                   push eax
// 00889a7b  56                   push esi
// 00889a7c  e89fe5ffff           call 0x888020
// 00889a81  83c414               add esp, 0x14
// 00889a84  8344242802           add dword ptr [esp + 0x28], 2
// 00889a89  e98d010000           jmp 0x889c1b
// 00889a8e  8b5560               mov edx, dword ptr [ebp + 0x60]
// 00889a91  396a04               cmp dword ptr [edx + 4], ebp
// 00889a94  750f                 jne 0x889aa5
// 00889a96  6a02                 push 2
// 00889a98  6a02                 push 2
// 00889a9a  8d442424             lea eax, [esp + 0x24]
// 00889a9e  50                   push eax
// 00889a9f  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 00889aa5  8b442424             mov eax, dword ptr [esp + 0x24]
// 00889aa9  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 00889aac  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00889ab0  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00889ab4  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 00889aba  48                   dec eax
// 00889abb  89442434             mov dword ptr [esp + 0x34], eax
// 00889abf  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889ac3  48                   dec eax
// 00889ac4  55                   push ebp
// 00889ac5  8944243c             mov dword ptr [esp + 0x3c], eax
// 00889ac9  83ec10               sub esp, 0x10
// 00889acc  8bc4                 mov eax, esp
// 00889ace  42                   inc edx
// 00889acf  8910                 mov dword ptr [eax], edx
// 00889ad1  8b542448             mov edx, dword ptr [esp + 0x48]
// 00889ad5  43                   inc ebx
// 00889ad6  895804               mov dword ptr [eax + 4], ebx
// 00889ad9  895008               mov dword ptr [eax + 8], edx
// 00889adc  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00889ae0  89500c               mov dword ptr [eax + 0xc], edx
// 00889ae3  8b01                 mov eax, dword ptr [ecx]
// 00889ae5  8b4018               mov eax, dword ptr [eax + 0x18]
// 00889ae8  56                   push esi
// 00889ae9  ffd0                 call eax
// 00889aeb  8b1d5ca19e00         mov ebx, dword ptr [0x9ea15c]
// 00889af1  89442440             mov dword ptr [esp + 0x40], eax
// 00889af5  83ffff               cmp edi, -1
// 00889af8  7432                 je 0x889b2c
// 00889afa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889afe  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889b02  8b542420             mov edx, dword ptr [esp + 0x20]
// 00889b06  57                   push edi
// 00889b07  2bc8                 sub ecx, eax
// 00889b09  6a01                 push 1
// 00889b0b  83e902               sub ecx, 2
// 00889b0e  51                   push ecx
// 00889b0f  52                   push edx
// 00889b10  40                   inc eax
// 00889b11  50                   push eax
// 00889b12  8bce                 mov ecx, esi
// 00889b14  e871320f00           call 0x97cd8a
// 00889b19  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889b1d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889b21  8b5604               mov edx, dword ptr [esi + 4]
// 00889b24  57                   push edi
// 00889b25  40                   inc eax
// 00889b26  50                   push eax
// 00889b27  49                   dec ecx
// 00889b28  51                   push ecx
// 00889b29  52                   push edx
// 00889b2a  ffd3                 call ebx
// 00889b2c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00889b30  83fdff               cmp ebp, -1
// 00889b33  7422                 je 0x889b57
// 00889b35  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889b39  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889b3d  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889b41  2bc8                 sub ecx, eax
// 00889b43  55                   push ebp
// 00889b44  83e904               sub ecx, 4
// 00889b47  51                   push ecx
// 00889b48  6a01                 push 1
// 00889b4a  83c002               add eax, 2
// 00889b4d  50                   push eax
// 00889b4e  4a                   dec edx
// 00889b4f  52                   push edx
// 00889b50  8bce                 mov ecx, esi
// 00889b52  e833320f00           call 0x97cd8a
// 00889b57  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00889b5b  83ffff               cmp edi, -1
// 00889b5e  7436                 je 0x889b96
// 00889b60  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889b64  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00889b68  8b542424             mov edx, dword ptr [esp + 0x24]
// 00889b6c  2bc8                 sub ecx, eax
// 00889b6e  57                   push edi
// 00889b6f  83e904               sub ecx, 4
// 00889b72  51                   push ecx
// 00889b73  6a01                 push 1
// 00889b75  83c002               add eax, 2
// 00889b78  50                   push eax
// 00889b79  52                   push edx
// 00889b7a  8bce                 mov ecx, esi
// 00889b7c  e809320f00           call 0x97cd8a
// 00889b81  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889b85  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889b89  8b5604               mov edx, dword ptr [esi + 4]
// 00889b8c  57                   push edi
// 00889b8d  83c0fe               add eax, -2
// 00889b90  50                   push eax
// 00889b91  49                   dec ecx
// 00889b92  51                   push ecx
// 00889b93  52                   push edx
// 00889b94  ffd3                 call ebx
// 00889b96  83fdff               cmp ebp, -1
// 00889b99  7422                 je 0x889bbd
// 00889b9b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889b9f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889ba3  8b542428             mov edx, dword ptr [esp + 0x28]
// 00889ba7  55                   push ebp
// 00889ba8  2bc8                 sub ecx, eax
// 00889baa  6a01                 push 1
// 00889bac  83e902               sub ecx, 2
// 00889baf  51                   push ecx
// 00889bb0  83c2fe               add edx, -2
// 00889bb3  52                   push edx
// 00889bb4  40                   inc eax
// 00889bb5  50                   push eax
// 00889bb6  8bce                 mov ecx, esi
// 00889bb8  e8cd310f00           call 0x97cd8a
// 00889bbd  83ffff               cmp edi, -1
// 00889bc0  7420                 je 0x889be2
// 00889bc2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00889bc6  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00889bca  8b542428             mov edx, dword ptr [esp + 0x28]
// 00889bce  57                   push edi
// 00889bcf  2bc8                 sub ecx, eax
// 00889bd1  6a01                 push 1
// 00889bd3  83e902               sub ecx, 2
// 00889bd6  51                   push ecx
// 00889bd7  4a                   dec edx
// 00889bd8  52                   push edx
// 00889bd9  40                   inc eax
// 00889bda  50                   push eax
// 00889bdb  8bce                 mov ecx, esi
// 00889bdd  e8a8310f00           call 0x97cd8a
// 00889be2  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 00889be6  8b4560               mov eax, dword ptr [ebp + 0x60]
// 00889be9  396804               cmp dword ptr [eax + 4], ebp
// 00889bec  752d                 jne 0x889c1b
// 00889bee  837d6400             cmp dword ptr [ebp + 0x64], 0
// 00889bf2  7527                 jne 0x889c1b
// 00889bf4  8b442420             mov eax, dword ptr [esp + 0x20]
// 00889bf8  8b542428             mov edx, dword ptr [esp + 0x28]
// 00889bfc  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00889c00  2bd0                 sub edx, eax
// 00889c02  51                   push ecx
// 00889c03  4a                   dec edx
// 00889c04  52                   push edx
// 00889c05  40                   inc eax
// 00889c06  50                   push eax
// 00889c07  8b442428             mov eax, dword ptr [esp + 0x28]
// 00889c0b  40                   inc eax
// 00889c0c  50                   push eax
// 00889c0d  56                   push esi
// 00889c0e  e8dde3ffff           call 0x887ff0
// 00889c13  83c414               add esp, 0x14
// 00889c16  8344242402           add dword ptr [esp + 0x24], 2
// 00889c1b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00889c1f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00889c23  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 00889c26  8b11                 mov edx, dword ptr [ecx]
// 00889c28  6a01                 push 1
// 00889c2a  83ec10               sub esp, 0x10
// 00889c2d  8bc4                 mov eax, esp
// 00889c2f  8938                 mov dword ptr [eax], edi
// 00889c31  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00889c35  897804               mov dword ptr [eax + 4], edi
// 00889c38  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00889c3c  897808               mov dword ptr [eax + 8], edi
// 00889c3f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00889c43  55                   push ebp
// 00889c44  89780c               mov dword ptr [eax + 0xc], edi
// 00889c47  8b4268               mov eax, dword ptr [edx + 0x68]
// 00889c4a  56                   push esi
// 00889c4b  ffd0                 call eax
// 00889c4d  5f                   pop edi
// 00889c4e  5e                   pop esi
// 00889c4f  5d                   pop ebp
// 00889c50  5b                   pop ebx
// 00889c51  83c42c               add esp, 0x2c
// 00889c54  c20800               ret 8
// 00889c57  90                   nop 
// 00889c58  eb95                 jmp 0x889bef
// 00889c5a  8800                 mov byte ptr [eax], al
// 00889c5c  62978800f798         bound edx, qword ptr [edi - 0x6708ff78]
// 00889c62  8800                 mov byte ptr [eax], al
// copied from an identical function in another client (function ?DrawSingleButton@CAppearanceSetPropertyPage@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp