// roc 2009-12 008ec1d0  unit: CXTPDialogBar  size: 878 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ec1d0
//
// 008ec1d0  6aff                 push -1
// 008ec1d2  682e679600           push 0x96672e
// 008ec1d7  64a100000000         mov eax, dword ptr fs:[0]
// 008ec1dd  50                   push eax
// 008ec1de  83ec4c               sub esp, 0x4c
// 008ec1e1  53                   push ebx
// 008ec1e2  55                   push ebp
// 008ec1e3  56                   push esi
// 008ec1e4  57                   push edi
// 008ec1e5  a10052b600           mov eax, dword ptr [0xb65200]
// 008ec1ea  33c4                 xor eax, esp
// 008ec1ec  50                   push eax
// 008ec1ed  8d442460             lea eax, [esp + 0x60]
// 008ec1f1  64a300000000         mov dword ptr fs:[0], eax
// 008ec1f7  8bf1                 mov esi, ecx
// 008ec1f9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008ec201  8b6c247c             mov ebp, dword ptr [esp + 0x7c]
// 008ec205  8b96b0010000         mov edx, dword ptr [esi + 0x1b0]
// 008ec20b  8bbeac010000         mov edi, dword ptr [esi + 0x1ac]
// 008ec211  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 008ec217  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 008ec21d  8b9c2480000000       mov ebx, dword ptr [esp + 0x80]
// 008ec224  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec228  03ea                 add ebp, edx
// 008ec22a  03cf                 add ecx, edi
// 008ec22c  03e8                 add ebp, eax
// 008ec22e  03d9                 add ebx, ecx
// 008ec230  83bec401000000       cmp dword ptr [esi + 0x1c4], 0
// 008ec237  89542434             mov dword ptr [esp + 0x34], edx
// 008ec23b  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec23f  750e                 jne 0x8ec24f
// 008ec241  8b442470             mov eax, dword ptr [esp + 0x70]
// 008ec245  8928                 mov dword ptr [eax], ebp
// 008ec247  895804               mov dword ptr [eax + 4], ebx
// 008ec24a  e9d9020000           jmp 0x8ec528
// 008ec24f  56                   push esi
// 008ec250  8d4c2450             lea ecx, [esp + 0x50]
// 008ec254  e87d84f0ff           call 0x7f46d6
// 008ec259  8bce                 mov ecx, esi
// 008ec25b  c744246800000000     mov dword ptr [esp + 0x68], 0
// 008ec263  e82883f1ff           call 0x804590
// 008ec268  8b10                 mov edx, dword ptr [eax]
// 008ec26a  6a00                 push 0
// 008ec26c  8bc8                 mov ecx, eax
// 008ec26e  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 008ec274  56                   push esi
// 008ec275  ffd0                 call eax
// 008ec277  50                   push eax
// 008ec278  8d4c2450             lea ecx, [esp + 0x50]
// 008ec27c  51                   push ecx
// 008ec27d  8d4c2444             lea ecx, [esp + 0x44]
// 008ec281  e8daf3f5ff           call 0x84b660
// 008ec286  8bce                 mov ecx, esi
// 008ec288  c644246801           mov byte ptr [esp + 0x68], 1
// 008ec28d  e8fe82f1ff           call 0x804590
// 008ec292  8b10                 mov edx, dword ptr [eax]
// 008ec294  8b9288000000         mov edx, dword ptr [edx + 0x88]
// 008ec29a  6a00                 push 0
// 008ec29c  56                   push esi
// 008ec29d  8d4c2454             lea ecx, [esp + 0x54]
// 008ec2a1  51                   push ecx
// 008ec2a2  8d4c2430             lea ecx, [esp + 0x30]
// 008ec2a6  51                   push ecx
// 008ec2a7  8bc8                 mov ecx, eax
// 008ec2a9  ffd2                 call edx
// 008ec2ab  8b442428             mov eax, dword ptr [esp + 0x28]
// 008ec2af  8d0c38               lea ecx, [eax + edi]
// 008ec2b2  898ecc010000         mov dword ptr [esi + 0x1cc], ecx
// 008ec2b8  8a4c2478             mov cl, byte ptr [esp + 0x78]
// 008ec2bc  03d8                 add ebx, eax
// 008ec2be  89442414             mov dword ptr [esp + 0x14], eax
// 008ec2c2  8b442474             mov eax, dword ptr [esp + 0x74]
// 008ec2c6  895c2420             mov dword ptr [esp + 0x20], ebx
// 008ec2ca  f6c101               test cl, 1
// 008ec2cd  741b                 je 0x8ec2ea
// 008ec2cf  f6c110               test cl, 0x10
// 008ec2d2  740c                 je 0x8ec2e0
// 008ec2d4  3bc3                 cmp eax, ebx
// 008ec2d6  7e12                 jle 0x8ec2ea
// 008ec2d8  8bd8                 mov ebx, eax
// 008ec2da  895c2420             mov dword ptr [esp + 0x20], ebx
// 008ec2de  eb0a                 jmp 0x8ec2ea
// 008ec2e0  3bc5                 cmp eax, ebp
// 008ec2e2  7e06                 jle 0x8ec2ea
// 008ec2e4  8be8                 mov ebp, eax
// 008ec2e6  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec2ea  f6c102               test cl, 2
// 008ec2ed  740c                 je 0x8ec2fb
// 008ec2ef  3bc5                 cmp eax, ebp
// 008ec2f1  7d10                 jge 0x8ec303
// 008ec2f3  8be8                 mov ebp, eax
// 008ec2f5  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008ec2f9  eb08                 jmp 0x8ec303
// 008ec2fb  3bc3                 cmp eax, ebx
// 008ec2fd  7d04                 jge 0x8ec303
// 008ec2ff  89442420             mov dword ptr [esp + 0x20], eax
// 008ec303  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008ec309  2b6c2434             sub ebp, dword ptr [esp + 0x34]
// 008ec30d  68bd230000           push 0x23bd
// 008ec312  e8e9aff5ff           call 0x847300
// 008ec317  8bc8                 mov ecx, eax
// 008ec319  85c9                 test ecx, ecx
// 008ec31b  7556                 jne 0x8ec373
// 008ec31d  398634010000         cmp dword ptr [esi + 0x134], eax
// 008ec323  0f84a2000000         je 0x8ec3cb
// 008ec329  6874010000           push 0x174
// 008ec32e  e82d75f0ff           call 0x7f3860
// 008ec333  83c404               add esp, 4
// 008ec336  89442478             mov dword ptr [esp + 0x78], eax
// 008ec33a  c644246802           mov byte ptr [esp + 0x68], 2
// 008ec33f  85c0                 test eax, eax
// 008ec341  7409                 je 0x8ec34c
// 008ec343  8bc8                 mov ecx, eax
// 008ec345  e8c6f7ffff           call 0x8ebb10
// 008ec34a  eb02                 jmp 0x8ec34e
// 008ec34c  33c0                 xor eax, eax
// 008ec34e  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008ec354  6a01                 push 1
// 008ec356  6aff                 push -1
// 008ec358  6856fd9900           push 0x99fd56
// 008ec35d  68bd230000           push 0x23bd
// 008ec362  50                   push eax
// 008ec363  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008ec368  e883bcf5ff           call 0x847ff0
// 008ec36d  8bc8                 mov ecx, eax
// 008ec36f  85c9                 test ecx, ecx
// 008ec371  7458                 je 0x8ec3cb
// 008ec373  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 008ec37a  750e                 jne 0x8ec38a
// 008ec37c  8b11                 mov edx, dword ptr [ecx]
// 008ec37e  8b8294000000         mov eax, dword ptr [edx + 0x94]
// 008ec384  6a01                 push 1
// 008ec386  ffd0                 call eax
// 008ec388  eb41                 jmp 0x8ec3cb
// 008ec38a  85c9                 test ecx, ecx
// 008ec38c  743d                 je 0x8ec3cb
// 008ec38e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ec392  99                   cdq 
// 008ec393  2bc2                 sub eax, edx
// 008ec395  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 008ec39b  d1f8                 sar eax, 1
// 008ec39d  8d5402f8             lea edx, [edx + eax - 8]
// 008ec3a1  8d4210               lea eax, [edx + 0x10]
// 008ec3a4  89442438             mov dword ptr [esp + 0x38], eax
// 008ec3a8  83ec10               sub esp, 0x10
// 008ec3ab  8bc4                 mov eax, esp
// 008ec3ad  8d7df0               lea edi, [ebp - 0x10]
// 008ec3b0  8b29                 mov ebp, dword ptr [ecx]
// 008ec3b2  8938                 mov dword ptr [eax], edi
// 008ec3b4  895004               mov dword ptr [eax + 4], edx
// 008ec3b7  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ec3bb  8d5f10               lea ebx, [edi + 0x10]
// 008ec3be  895808               mov dword ptr [eax + 8], ebx
// 008ec3c1  89500c               mov dword ptr [eax + 0xc], edx
// 008ec3c4  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 008ec3c7  ffd0                 call eax
// 008ec3c9  8bef                 mov ebp, edi
// 008ec3cb  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008ec3d1  68bb230000           push 0x23bb
// 008ec3d6  e825aff5ff           call 0x847300
// 008ec3db  8bf8                 mov edi, eax
// 008ec3dd  85ff                 test edi, edi
// 008ec3df  7554                 jne 0x8ec435
// 008ec3e1  6888010000           push 0x188
// 008ec3e6  e87574f0ff           call 0x7f3860
// 008ec3eb  83c404               add esp, 4
// 008ec3ee  89442478             mov dword ptr [esp + 0x78], eax
// 008ec3f2  c644246803           mov byte ptr [esp + 0x68], 3
// 008ec3f7  85c0                 test eax, eax
// 008ec3f9  7409                 je 0x8ec404
// 008ec3fb  8bc8                 mov ecx, eax
// 008ec3fd  e85ef7ffff           call 0x8ebb60
// 008ec402  eb02                 jmp 0x8ec406
// 008ec404  33c0                 xor eax, eax
// 008ec406  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 008ec40c  6a01                 push 1
// 008ec40e  6aff                 push -1
// 008ec410  6856fd9900           push 0x99fd56
// 008ec415  68bb230000           push 0x23bb
// 008ec41a  50                   push eax
// 008ec41b  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008ec420  e8cbbbf5ff           call 0x847ff0
// 008ec425  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 008ec42b  8bf8                 mov edi, eax
// 008ec42d  51                   push ecx
// 008ec42e  8bcf                 mov ecx, edi
// 008ec430  e81bf2f4ff           call 0x83b650
// 008ec435  83bec801000000       cmp dword ptr [esi + 0x1c8], 0
// 008ec43c  7416                 je 0x8ec454
// 008ec43e  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 008ec444  e8078ef1ff           call 0x805250
// 008ec449  85c0                 test eax, eax
// 008ec44b  7407                 je 0x8ec454
// 008ec44d  b801000000           mov eax, 1
// 008ec452  eb02                 jmp 0x8ec456
// 008ec454  33c0                 xor eax, eax
// 008ec456  8b1f                 mov ebx, dword ptr [edi]
// 008ec458  898784010000         mov dword ptr [edi + 0x184], eax
// 008ec45e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008ec462  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 008ec468  034c2424             add ecx, dword ptr [esp + 0x24]
// 008ec46c  99                   cdq 
// 008ec46d  2bc2                 sub eax, edx
// 008ec46f  8b96ac010000         mov edx, dword ptr [esi + 0x1ac]
// 008ec475  d1f8                 sar eax, 1
// 008ec477  8d5402f8             lea edx, [edx + eax - 8]
// 008ec47b  8d4210               lea eax, [edx + 0x10]
// 008ec47e  89442438             mov dword ptr [esp + 0x38], eax
// 008ec482  83ec10               sub esp, 0x10
// 008ec485  8bc4                 mov eax, esp
// 008ec487  8908                 mov dword ptr [eax], ecx
// 008ec489  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008ec48d  895004               mov dword ptr [eax + 4], edx
// 008ec490  8b537c               mov edx, dword ptr [ebx + 0x7c]
// 008ec493  896808               mov dword ptr [eax + 8], ebp
// 008ec496  89480c               mov dword ptr [eax + 0xc], ecx
// 008ec499  8bcf                 mov ecx, edi
// 008ec49b  ffd2                 call edx
// 008ec49d  8d9ee4010000         lea ebx, [esi + 0x1e4]
// 008ec4a3  8bcb                 mov ecx, ebx
// 008ec4a5  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008ec4ab  84c0                 test al, al
// 008ec4ad  741c                 je 0x8ec4cb
// 008ec4af  8d442478             lea eax, [esp + 0x78]
// 008ec4b3  50                   push eax
// 008ec4b4  8bce                 mov ecx, esi
// 008ec4b6  e8c510f1ff           call 0x7fd580
// 008ec4bb  bb01000000           mov ebx, 1
// 008ec4c0  c644246804           mov byte ptr [esp + 0x68], 4
// 008ec4c5  895c2418             mov dword ptr [esp + 0x18], ebx
// 008ec4c9  eb07                 jmp 0x8ec4d2
// 008ec4cb  8bc3                 mov eax, ebx
// 008ec4cd  bb01000000           mov ebx, 1
// 008ec4d2  8bc8                 mov ecx, eax
// 008ec4d4  ff1580de9800         call dword ptr [0x98de80]
// 008ec4da  50                   push eax
// 008ec4db  8bcf                 mov ecx, edi
// 008ec4dd  e84ea2f0ff           call 0x7f6730
// 008ec4e2  895c2468             mov dword ptr [esp + 0x68], ebx
// 008ec4e6  845c2418             test byte ptr [esp + 0x18], bl
// 008ec4ea  740a                 je 0x8ec4f6
// 008ec4ec  8d4c2478             lea ecx, [esp + 0x78]
// 008ec4f0  ff15c0de9800         call dword ptr [0x98dec0]
// 008ec4f6  8b742470             mov esi, dword ptr [esp + 0x70]
// 008ec4fa  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ec4fe  8b542420             mov edx, dword ptr [esp + 0x20]
// 008ec502  890e                 mov dword ptr [esi], ecx
// 008ec504  8d4c243c             lea ecx, [esp + 0x3c]
// 008ec508  895604               mov dword ptr [esi + 4], edx
// 008ec50b  c644246800           mov byte ptr [esp + 0x68], 0
// 008ec510  e8cbf1f5ff           call 0x84b6e0
// 008ec515  8d4c244c             lea ecx, [esp + 0x4c]
// 008ec519  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 008ec521  e8aa81f0ff           call 0x7f46d0
// 008ec526  8bc6                 mov eax, esi
// 008ec528  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008ec52c  64890d00000000       mov dword ptr fs:[0], ecx
// 008ec533  59                   pop ecx
// 008ec534  5f                   pop edi
// 008ec535  5e                   pop esi
// 008ec536  5d                   pop ebp
// 008ec537  5b                   pop ebx
// 008ec538  83c458               add esp, 0x58
// 008ec53b  c21400               ret 0x14
// copied from an identical function in another client (function ?CalcSize@CXTPDialogBar@@IAE?AVCSize@@HKV2@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source/CommandBars/XTPDialogBar.cpp