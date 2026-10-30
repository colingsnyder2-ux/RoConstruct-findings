// roc 2009-06 007a73e0  unit: CXTPControlGalleryOffice2007Theme  size: 3974 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007a73e0
//
// 007a73e0  81ecec000000         sub esp, 0xec
// 007a73e6  53                   push ebx
// 007a73e7  55                   push ebp
// 007a73e8  56                   push esi
// 007a73e9  8bb42400010000       mov esi, dword ptr [esp + 0x100]
// 007a73f0  57                   push edi
// 007a73f1  8bf9                 mov edi, ecx
// 007a73f3  8bce                 mov ecx, esi
// 007a73f5  897c241c             mov dword ptr [esp + 0x1c], edi
// 007a73f9  e822920600           call 0x810620
// 007a73fe  83f805               cmp eax, 5
// 007a7401  7422                 je 0x7a7425
// 007a7403  83f806               cmp eax, 6
// 007a7406  741d                 je 0x7a7425
// 007a7408  8b842400010000       mov eax, dword ptr [esp + 0x100]
// 007a740f  56                   push esi
// 007a7410  50                   push eax
// 007a7411  8bcf                 mov ecx, edi
// 007a7413  e8986dffff           call 0x79e1b0
// 007a7418  5f                   pop edi
// 007a7419  5e                   pop esi
// 007a741a  5d                   pop ebp
// 007a741b  5b                   pop ebx
// 007a741c  81c4ec000000         add esp, 0xec
// 007a7422  c20800               ret 8
// 007a7425  33c9                 xor ecx, ecx
// 007a7427  83f805               cmp eax, 5
// 007a742a  8b4660               mov eax, dword ptr [esi + 0x60]
// 007a742d  0f94c1               sete cl
// 007a7430  33db                 xor ebx, ebx
// 007a7432  8be9                 mov ebp, ecx
// 007a7434  896c2410             mov dword ptr [esp + 0x10], ebp
// 007a7438  3bc3                 cmp eax, ebx
// 007a743a  7411                 je 0x7a744d
// 007a743c  8b5658               mov edx, dword ptr [esi + 0x58]
// 007a743f  89542420             mov dword ptr [esp + 0x20], edx
// 007a7443  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 007a744b  eb0f                 jmp 0x7a745c
// 007a744d  8b4658               mov eax, dword ptr [esi + 0x58]
// 007a7450  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 007a7458  89442434             mov dword ptr [esp + 0x34], eax
// 007a745c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007a745f  2b4e1c               sub ecx, dword ptr [esi + 0x1c]
// 007a7462  85c9                 test ecx, ecx
// 007a7464  0f8eef0e0000         jle 0x7a8359
// 007a746a  8b5608               mov edx, dword ptr [esi + 8]
// 007a746d  2b560c               sub edx, dword ptr [esi + 0xc]
// 007a7470  2b5604               sub edx, dword ptr [esi + 4]
// 007a7473  42                   inc edx
// 007a7474  85d2                 test edx, edx
// 007a7476  7e14                 jle 0x7a748c
// 007a7478  8b06                 mov eax, dword ptr [esi]
// 007a747a  8b5004               mov edx, dword ptr [eax + 4]
// 007a747d  8bce                 mov ecx, esi
// 007a747f  ffd2                 call edx
// 007a7481  85c0                 test eax, eax
// 007a7483  7407                 je 0x7a748c
// 007a7485  bf01000000           mov edi, 1
// 007a748a  eb02                 jmp 0x7a748e
// 007a748c  33ff                 xor edi, edi
// 007a748e  8b5634               mov edx, dword ptr [esi + 0x34]
// 007a7491  8b4638               mov eax, dword ptr [esi + 0x38]
// 007a7494  8bca                 mov ecx, edx
// 007a7496  2bc8                 sub ecx, eax
// 007a7498  2b4628               sub eax, dword ptr [esi + 0x28]
// 007a749b  897c2414             mov dword ptr [esp + 0x14], edi
// 007a749f  898c249c000000       mov dword ptr [esp + 0x9c], ecx
// 007a74a6  898424c4000000       mov dword ptr [esp + 0xc4], eax
// 007a74ad  3bfb                 cmp edi, ebx
// 007a74af  7405                 je 0x7a74b6
// 007a74b1  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 007a74b4  7e0e                 jle 0x7a74c4
// 007a74b6  899c249c000000       mov dword ptr [esp + 0x9c], ebx
// 007a74bd  899c24c4000000       mov dword ptr [esp + 0xc4], ebx
// 007a74c4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007a74c8  8b782c               mov edi, dword ptr [eax + 0x2c]
// 007a74cb  688c239000           push 0x90238c
// 007a74d0  8bcf                 mov ecx, edi
// 007a74d2  897c243c             mov dword ptr [esp + 0x3c], edi
// 007a74d6  e8e5c8ffff           call 0x7a3dc0
// 007a74db  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 007a74e2  3bc3                 cmp eax, ebx
// 007a74e4  0f846f0e0000         je 0x7a8359
// 007a74ea  395e5c               cmp dword ptr [esi + 0x5c], ebx
// 007a74ed  0f842c070000         je 0x7a7c1f
// 007a74f3  b868239000           mov eax, 0x902368
// 007a74f8  3beb                 cmp ebp, ebx
// 007a74fa  7505                 jne 0x7a7501
// 007a74fc  b844239000           mov eax, 0x902344
// 007a7501  50                   push eax
// 007a7502  8bcf                 mov ecx, edi
// 007a7504  e8b7c8ffff           call 0x7a3dc0
// 007a7509  89442418             mov dword ptr [esp + 0x18], eax
// 007a750d  3bc3                 cmp eax, ebx
// 007a750f  0f84440e0000         je 0x7a8359
// 007a7515  8b2d00ee8900         mov ebp, dword ptr [0x89ee00]
// 007a751b  8d5e48               lea ebx, [esi + 0x48]
// 007a751e  53                   push ebx
// 007a751f  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 007a7526  51                   push ecx
// 007a7527  ffd5                 call ebp
// 007a7529  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a752d  6a02                 push 2
// 007a752f  6a00                 push 0
// 007a7531  8d9424d4000000       lea edx, [esp + 0xd4]
// 007a7538  bf01000000           mov edi, 1
// 007a753d  52                   push edx
// 007a753e  897c2438             mov dword ptr [esp + 0x38], edi
// 007a7542  e879e80500           call 0x805dc0
// 007a7547  83ec10               sub esp, 0x10
// 007a754a  8bcc                 mov ecx, esp
// 007a754c  8939                 mov dword ptr [ecx], edi
// 007a754e  33d2                 xor edx, edx
// 007a7550  895104               mov dword ptr [ecx + 4], edx
// 007a7553  8bd7                 mov edx, edi
// 007a7555  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 007a755c  895108               mov dword ptr [ecx + 8], edx
// 007a755f  33d2                 xor edx, edx
// 007a7561  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7564  8b10                 mov edx, dword ptr [eax]
// 007a7566  83ec10               sub esp, 0x10
// 007a7569  8bcc                 mov ecx, esp
// 007a756b  8911                 mov dword ptr [ecx], edx
// 007a756d  8b5004               mov edx, dword ptr [eax + 4]
// 007a7570  895104               mov dword ptr [ecx + 4], edx
// 007a7573  8b5008               mov edx, dword ptr [eax + 8]
// 007a7576  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7579  895108               mov dword ptr [ecx + 8], edx
// 007a757c  89410c               mov dword ptr [ecx + 0xc], eax
// 007a757f  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 007a7586  51                   push ecx
// 007a7587  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a758b  57                   push edi
// 007a758c  e8ffe00500           call 0x805690
// 007a7591  53                   push ebx
// 007a7592  8d942490000000       lea edx, [esp + 0x90]
// 007a7599  52                   push edx
// 007a759a  ffd5                 call ebp
// 007a759c  6a00                 push 0
// 007a759e  6aff                 push -1
// 007a75a0  8d842494000000       lea eax, [esp + 0x94]
// 007a75a7  50                   push eax
// 007a75a8  ff15bced8900         call dword ptr [0x89edbc]
// 007a75ae  837c241000           cmp dword ptr [esp + 0x10], 0
// 007a75b3  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007a75ba  8b84248c000000       mov eax, dword ptr [esp + 0x8c]
// 007a75c1  8b5628               mov edx, dword ptr [esi + 0x28]
// 007a75c4  894c2450             mov dword ptr [esp + 0x50], ecx
// 007a75c8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007a75cf  8944244c             mov dword ptr [esp + 0x4c], eax
// 007a75d3  8944245c             mov dword ptr [esp + 0x5c], eax
// 007a75d7  8b462c               mov eax, dword ptr [esi + 0x2c]
// 007a75da  894c2454             mov dword ptr [esp + 0x54], ecx
// 007a75de  894c2464             mov dword ptr [esp + 0x64], ecx
// 007a75e2  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a75e9  89442460             mov dword ptr [esp + 0x60], eax
// 007a75ed  89542458             mov dword ptr [esp + 0x58], edx
// 007a75f1  894c2468             mov dword ptr [esp + 0x68], ecx
// 007a75f5  b81c239000           mov eax, 0x90231c
// 007a75fa  7505                 jne 0x7a7601
// 007a75fc  b8f4229000           mov eax, 0x9022f4
// 007a7601  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a7605  50                   push eax
// 007a7606  e8b5c7ffff           call 0x7a3dc0
// 007a760b  33db                 xor ebx, ebx
// 007a760d  8944241c             mov dword ptr [esp + 0x1c], eax
// 007a7611  3bc3                 cmp eax, ebx
// 007a7613  0f84400d0000         je 0x7a8359
// 007a7619  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a761d  7509                 jne 0x7a7628
// 007a761f  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a7623  e997000000           jmp 0x7a76bf
// 007a7628  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a762c  83f93c               cmp ecx, 0x3c
// 007a762f  750a                 jne 0x7a763b
// 007a7631  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007a7639  eb29                 jmp 0x7a7664
// 007a763b  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a763f  83f83c               cmp eax, 0x3c
// 007a7642  750a                 jne 0x7a764e
// 007a7644  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007a764c  eb16                 jmp 0x7a7664
// 007a764e  3bc3                 cmp eax, ebx
// 007a7650  7f0a                 jg 0x7a765c
// 007a7652  3bcb                 cmp ecx, ebx
// 007a7654  7f06                 jg 0x7a765c
// 007a7656  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a765a  eb63                 jmp 0x7a76bf
// 007a765c  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007a7664  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7668  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a766c  6a04                 push 4
// 007a766e  52                   push edx
// 007a766f  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a7676  be03000000           mov esi, 3
// 007a767b  50                   push eax
// 007a767c  8bee                 mov ebp, esi
// 007a767e  e83de70500           call 0x805dc0
// 007a7683  83ec10               sub esp, 0x10
// 007a7686  8bcc                 mov ecx, esp
// 007a7688  8931                 mov dword ptr [ecx], esi
// 007a768a  896904               mov dword ptr [ecx + 4], ebp
// 007a768d  8bd6                 mov edx, esi
// 007a768f  895108               mov dword ptr [ecx + 8], edx
// 007a7692  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7695  8b10                 mov edx, dword ptr [eax]
// 007a7697  83ec10               sub esp, 0x10
// 007a769a  8bcc                 mov ecx, esp
// 007a769c  8911                 mov dword ptr [ecx], edx
// 007a769e  8b5004               mov edx, dword ptr [eax + 4]
// 007a76a1  895104               mov dword ptr [ecx + 4], edx
// 007a76a4  8b5008               mov edx, dword ptr [eax + 8]
// 007a76a7  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a76aa  895108               mov dword ptr [ecx + 8], edx
// 007a76ad  89410c               mov dword ptr [ecx + 0xc], eax
// 007a76b0  8d4c246c             lea ecx, [esp + 0x6c]
// 007a76b4  51                   push ecx
// 007a76b5  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a76b9  57                   push edi
// 007a76ba  e8d1df0500           call 0x805690
// 007a76bf  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007a76c3  8b442454             mov eax, dword ptr [esp + 0x54]
// 007a76c7  8d4410f7             lea eax, [eax + edx - 9]
// 007a76cb  99                   cdq 
// 007a76cc  2bc2                 sub eax, edx
// 007a76ce  8b542450             mov edx, dword ptr [esp + 0x50]
// 007a76d2  8bc8                 mov ecx, eax
// 007a76d4  8b442458             mov eax, dword ptr [esp + 0x58]
// 007a76d8  8d4410f7             lea eax, [eax + edx - 9]
// 007a76dc  be09000000           mov esi, 9
// 007a76e1  99                   cdq 
// 007a76e2  8bee                 mov ebp, esi
// 007a76e4  55                   push ebp
// 007a76e5  2bc2                 sub eax, edx
// 007a76e7  56                   push esi
// 007a76e8  d1f8                 sar eax, 1
// 007a76ea  d1f9                 sar ecx, 1
// 007a76ec  50                   push eax
// 007a76ed  51                   push ecx
// 007a76ee  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 007a76f5  e86649caff           call 0x44c060
// 007a76fa  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a76fe  7505                 jne 0x7a7705
// 007a7700  8d46fb               lea eax, [esi - 5]
// 007a7703  eb0a                 jmp 0x7a770f
// 007a7705  33c0                 xor eax, eax
// 007a7707  395c2410             cmp dword ptr [esp + 0x10], ebx
// 007a770b  0f95c0               setne al
// 007a770e  40                   inc eax
// 007a770f  50                   push eax
// 007a7710  33c9                 xor ecx, ecx
// 007a7712  83ec10               sub esp, 0x10
// 007a7715  8bc4                 mov eax, esp
// 007a7717  8908                 mov dword ptr [eax], ecx
// 007a7719  894804               mov dword ptr [eax + 4], ecx
// 007a771c  8bce                 mov ecx, esi
// 007a771e  894808               mov dword ptr [eax + 8], ecx
// 007a7721  89480c               mov dword ptr [eax + 0xc], ecx
// 007a7724  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 007a772b  51                   push ecx
// 007a772c  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007a7730  895c2440             mov dword ptr [esp + 0x40], ebx
// 007a7734  895c2444             mov dword ptr [esp + 0x44], ebx
// 007a7738  895c2448             mov dword ptr [esp + 0x48], ebx
// 007a773c  e85ffcffff           call 0x7a73a0
// 007a7741  83c418               add esp, 0x18
// 007a7744  68ff00ff00           push 0xff00ff
// 007a7749  8d542428             lea edx, [esp + 0x28]
// 007a774d  52                   push edx
// 007a774e  8b10                 mov edx, dword ptr [eax]
// 007a7750  83ec10               sub esp, 0x10
// 007a7753  8bcc                 mov ecx, esp
// 007a7755  8911                 mov dword ptr [ecx], edx
// 007a7757  8b5004               mov edx, dword ptr [eax + 4]
// 007a775a  895104               mov dword ptr [ecx + 4], edx
// 007a775d  8b5008               mov edx, dword ptr [eax + 8]
// 007a7760  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7763  895108               mov dword ptr [ecx + 8], edx
// 007a7766  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7769  8d8c2404010000       lea ecx, [esp + 0x104]
// 007a7770  51                   push ecx
// 007a7771  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 007a7778  57                   push edi
// 007a7779  e882eb0500           call 0x806300
// 007a777e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a7782  7509                 jne 0x7a778d
// 007a7784  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a7788  e99f000000           jmp 0x7a782c
// 007a778d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a7791  83f93d               cmp ecx, 0x3d
// 007a7794  750a                 jne 0x7a77a0
// 007a7796  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007a779e  eb29                 jmp 0x7a77c9
// 007a77a0  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a77a4  83f83d               cmp eax, 0x3d
// 007a77a7  750a                 jne 0x7a77b3
// 007a77a9  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007a77b1  eb16                 jmp 0x7a77c9
// 007a77b3  3bc3                 cmp eax, ebx
// 007a77b5  7f0a                 jg 0x7a77c1
// 007a77b7  3bcb                 cmp ecx, ebx
// 007a77b9  7f06                 jg 0x7a77c1
// 007a77bb  895c2410             mov dword ptr [esp + 0x10], ebx
// 007a77bf  eb6b                 jmp 0x7a782c
// 007a77c1  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007a77c9  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a77cd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a77d1  6a04                 push 4
// 007a77d3  bb03000000           mov ebx, 3
// 007a77d8  52                   push edx
// 007a77d9  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a77e0  50                   push eax
// 007a77e1  8bf3                 mov esi, ebx
// 007a77e3  8beb                 mov ebp, ebx
// 007a77e5  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007a77e9  e8d2e50500           call 0x805dc0
// 007a77ee  83ec10               sub esp, 0x10
// 007a77f1  8bcc                 mov ecx, esp
// 007a77f3  8931                 mov dword ptr [ecx], esi
// 007a77f5  896904               mov dword ptr [ecx + 4], ebp
// 007a77f8  895908               mov dword ptr [ecx + 8], ebx
// 007a77fb  83ec10               sub esp, 0x10
// 007a77fe  8bd3                 mov edx, ebx
// 007a7800  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7803  8b10                 mov edx, dword ptr [eax]
// 007a7805  8bcc                 mov ecx, esp
// 007a7807  8911                 mov dword ptr [ecx], edx
// 007a7809  8b5004               mov edx, dword ptr [eax + 4]
// 007a780c  895104               mov dword ptr [ecx + 4], edx
// 007a780f  8b5008               mov edx, dword ptr [eax + 8]
// 007a7812  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7815  895108               mov dword ptr [ecx + 8], edx
// 007a7818  89410c               mov dword ptr [ecx + 0xc], eax
// 007a781b  8d4c247c             lea ecx, [esp + 0x7c]
// 007a781f  51                   push ecx
// 007a7820  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a7824  57                   push edi
// 007a7825  e866de0500           call 0x805690
// 007a782a  33db                 xor ebx, ebx
// 007a782c  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007a7830  8b442464             mov eax, dword ptr [esp + 0x64]
// 007a7834  8d4410f7             lea eax, [eax + edx - 9]
// 007a7838  99                   cdq 
// 007a7839  2bc2                 sub eax, edx
// 007a783b  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a783f  8bc8                 mov ecx, eax
// 007a7841  8b442468             mov eax, dword ptr [esp + 0x68]
// 007a7845  8d4410f7             lea eax, [eax + edx - 9]
// 007a7849  be09000000           mov esi, 9
// 007a784e  99                   cdq 
// 007a784f  8bee                 mov ebp, esi
// 007a7851  55                   push ebp
// 007a7852  2bc2                 sub eax, edx
// 007a7854  56                   push esi
// 007a7855  d1f8                 sar eax, 1
// 007a7857  d1f9                 sar ecx, 1
// 007a7859  50                   push eax
// 007a785a  51                   push ecx
// 007a785b  8d8c24ec000000       lea ecx, [esp + 0xec]
// 007a7862  e8f947caff           call 0x44c060
// 007a7867  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a786b  7505                 jne 0x7a7872
// 007a786d  8d46ff               lea eax, [esi - 1]
// 007a7870  eb0c                 jmp 0x7a787e
// 007a7872  33c0                 xor eax, eax
// 007a7874  395c2410             cmp dword ptr [esp + 0x10], ebx
// 007a7878  0f95c0               setne al
// 007a787b  83c005               add eax, 5
// 007a787e  50                   push eax
// 007a787f  33c9                 xor ecx, ecx
// 007a7881  83ec10               sub esp, 0x10
// 007a7884  8bc4                 mov eax, esp
// 007a7886  8908                 mov dword ptr [eax], ecx
// 007a7888  894804               mov dword ptr [eax + 4], ecx
// 007a788b  8bce                 mov ecx, esi
// 007a788d  894808               mov dword ptr [eax + 8], ecx
// 007a7890  89480c               mov dword ptr [eax + 0xc], ecx
// 007a7893  8d8c24e0000000       lea ecx, [esp + 0xe0]
// 007a789a  51                   push ecx
// 007a789b  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007a789f  895c2440             mov dword ptr [esp + 0x40], ebx
// 007a78a3  895c2444             mov dword ptr [esp + 0x44], ebx
// 007a78a7  895c2448             mov dword ptr [esp + 0x48], ebx
// 007a78ab  e8f0faffff           call 0x7a73a0
// 007a78b0  83c418               add esp, 0x18
// 007a78b3  68ff00ff00           push 0xff00ff
// 007a78b8  8d542428             lea edx, [esp + 0x28]
// 007a78bc  52                   push edx
// 007a78bd  8b10                 mov edx, dword ptr [eax]
// 007a78bf  83ec10               sub esp, 0x10
// 007a78c2  8bcc                 mov ecx, esp
// 007a78c4  8911                 mov dword ptr [ecx], edx
// 007a78c6  8b5004               mov edx, dword ptr [eax + 4]
// 007a78c9  895104               mov dword ptr [ecx + 4], edx
// 007a78cc  8b5008               mov edx, dword ptr [eax + 8]
// 007a78cf  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a78d2  895108               mov dword ptr [ecx + 8], edx
// 007a78d5  89410c               mov dword ptr [ecx + 0xc], eax
// 007a78d8  8d8c24f4000000       lea ecx, [esp + 0xf4]
// 007a78df  51                   push ecx
// 007a78e0  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 007a78e7  57                   push edi
// 007a78e8  e813ea0500           call 0x806300
// 007a78ed  8b442458             mov eax, dword ptr [esp + 0x58]
// 007a78f1  8b94248c000000       mov edx, dword ptr [esp + 0x8c]
// 007a78f8  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007a78ff  8b35fced8900         mov esi, dword ptr [0x89edfc]
// 007a7905  89442440             mov dword ptr [esp + 0x40], eax
// 007a7909  8954243c             mov dword ptr [esp + 0x3c], edx
// 007a790d  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a7911  8d44243c             lea eax, [esp + 0x3c]
// 007a7915  50                   push eax
// 007a7916  894c2448             mov dword ptr [esp + 0x48], ecx
// 007a791a  8954244c             mov dword ptr [esp + 0x4c], edx
// 007a791e  ffd6                 call esi
// 007a7920  85c0                 test eax, eax
// 007a7922  0f85310a0000         jne 0x7a8359
// 007a7928  8b542440             mov edx, dword ptr [esp + 0x40]
// 007a792c  8bac24c4000000       mov ebp, dword ptr [esp + 0xc4]
// 007a7933  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007a7937  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007a793b  899424b0000000       mov dword ptr [esp + 0xb0], edx
// 007a7942  03d5                 add edx, ebp
// 007a7944  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 007a7948  896c246c             mov dword ptr [esp + 0x6c], ebp
// 007a794c  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 007a7950  896c2474             mov dword ptr [esp + 0x74], ebp
// 007a7954  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 007a795b  899424b8000000       mov dword ptr [esp + 0xb8], edx
// 007a7962  89542470             mov dword ptr [esp + 0x70], edx
// 007a7966  03d5                 add edx, ebp
// 007a7968  41                   inc ecx
// 007a7969  89542478             mov dword ptr [esp + 0x78], edx
// 007a796d  89542428             mov dword ptr [esp + 0x28], edx
// 007a7971  48                   dec eax
// 007a7972  898c24b4000000       mov dword ptr [esp + 0xb4], ecx
// 007a7979  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007a797d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007a7981  8d9424ac000000       lea edx, [esp + 0xac]
// 007a7988  52                   push edx
// 007a7989  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 007a7990  89442428             mov dword ptr [esp + 0x28], eax
// 007a7994  894c2434             mov dword ptr [esp + 0x34], ecx
// 007a7998  ffd6                 call esi
// 007a799a  85c0                 test eax, eax
// 007a799c  7576                 jne 0x7a7a14
// 007a799e  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a79a2  7470                 je 0x7a7a14
// 007a79a4  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 007a79a9  7569                 jne 0x7a7a14
// 007a79ab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a79af  6a02                 push 2
// 007a79b1  be01000000           mov esi, 1
// 007a79b6  56                   push esi
// 007a79b7  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a79be  33db                 xor ebx, ebx
// 007a79c0  50                   push eax
// 007a79c1  8bee                 mov ebp, esi
// 007a79c3  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 007a79ca  e8f1e30500           call 0x805dc0
// 007a79cf  83ec10               sub esp, 0x10
// 007a79d2  8bcc                 mov ecx, esp
// 007a79d4  8931                 mov dword ptr [ecx], esi
// 007a79d6  895904               mov dword ptr [ecx + 4], ebx
// 007a79d9  896908               mov dword ptr [ecx + 8], ebp
// 007a79dc  83ec10               sub esp, 0x10
// 007a79df  8bd3                 mov edx, ebx
// 007a79e1  89510c               mov dword ptr [ecx + 0xc], edx
// 007a79e4  8b10                 mov edx, dword ptr [eax]
// 007a79e6  8bcc                 mov ecx, esp
// 007a79e8  8911                 mov dword ptr [ecx], edx
// 007a79ea  8b5004               mov edx, dword ptr [eax + 4]
// 007a79ed  895104               mov dword ptr [ecx + 4], edx
// 007a79f0  8b5008               mov edx, dword ptr [eax + 8]
// 007a79f3  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a79f6  895108               mov dword ptr [ecx + 8], edx
// 007a79f9  89410c               mov dword ptr [ecx + 0xc], eax
// 007a79fc  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 007a7a03  51                   push ecx
// 007a7a04  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a7a08  57                   push edi
// 007a7a09  e882dc0500           call 0x805690
// 007a7a0e  8b35fced8900         mov esi, dword ptr [0x89edfc]
// 007a7a14  8d54246c             lea edx, [esp + 0x6c]
// 007a7a18  52                   push edx
// 007a7a19  ffd6                 call esi
// 007a7a1b  85c0                 test eax, eax
// 007a7a1d  0f857a010000         jne 0x7a7b9d
// 007a7a23  39442414             cmp dword ptr [esp + 0x14], eax
// 007a7a27  7504                 jne 0x7a7a2d
// 007a7a29  33ed                 xor ebp, ebp
// 007a7a2b  eb2e                 jmp 0x7a7a5b
// 007a7a2d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a7a31  83f940               cmp ecx, 0x40
// 007a7a34  7505                 jne 0x7a7a3b
// 007a7a36  8d69c3               lea ebp, [ecx - 0x3d]
// 007a7a39  eb1f                 jmp 0x7a7a5a
// 007a7a3b  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a7a3f  83f840               cmp eax, 0x40
// 007a7a42  7505                 jne 0x7a7a49
// 007a7a44  8d68c2               lea ebp, [eax - 0x3e]
// 007a7a47  eb11                 jmp 0x7a7a5a
// 007a7a49  85c0                 test eax, eax
// 007a7a4b  7f08                 jg 0x7a7a55
// 007a7a4d  85c9                 test ecx, ecx
// 007a7a4f  7f04                 jg 0x7a7a55
// 007a7a51  33ed                 xor ebp, ebp
// 007a7a53  eb06                 jmp 0x7a7a5b
// 007a7a55  bd01000000           mov ebp, 1
// 007a7a5a  4d                   dec ebp
// 007a7a5b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a7a5f  68d0229000           push 0x9022d0
// 007a7a64  e857c3ffff           call 0x7a3dc0
// 007a7a69  8bf0                 mov esi, eax
// 007a7a6b  85f6                 test esi, esi
// 007a7a6d  0f84e6080000         je 0x7a8359
// 007a7a73  6a03                 push 3
// 007a7a75  55                   push ebp
// 007a7a76  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a7a7d  bb05000000           mov ebx, 5
// 007a7a82  50                   push eax
// 007a7a83  8bce                 mov ecx, esi
// 007a7a85  899c24b4000000       mov dword ptr [esp + 0xb4], ebx
// 007a7a8c  e82fe30500           call 0x805dc0
// 007a7a91  83ec10               sub esp, 0x10
// 007a7a94  8bcc                 mov ecx, esp
// 007a7a96  8919                 mov dword ptr [ecx], ebx
// 007a7a98  8bd3                 mov edx, ebx
// 007a7a9a  895104               mov dword ptr [ecx + 4], edx
// 007a7a9d  895108               mov dword ptr [ecx + 8], edx
// 007a7aa0  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7aa3  8b10                 mov edx, dword ptr [eax]
// 007a7aa5  83ec10               sub esp, 0x10
// 007a7aa8  8bcc                 mov ecx, esp
// 007a7aaa  8911                 mov dword ptr [ecx], edx
// 007a7aac  8b5004               mov edx, dword ptr [eax + 4]
// 007a7aaf  895104               mov dword ptr [ecx + 4], edx
// 007a7ab2  8b5008               mov edx, dword ptr [eax + 8]
// 007a7ab5  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7ab8  895108               mov dword ptr [ecx + 8], edx
// 007a7abb  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7abe  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007a7ac5  51                   push ecx
// 007a7ac6  57                   push edi
// 007a7ac7  8bce                 mov ecx, esi
// 007a7ac9  e8c2db0500           call 0x805690
// 007a7ace  8b542478             mov edx, dword ptr [esp + 0x78]
// 007a7ad2  2b542470             sub edx, dword ptr [esp + 0x70]
// 007a7ad6  83fa0a               cmp edx, 0xa
// 007a7ad9  0f8ebe000000         jle 0x7a7b9d
// 007a7adf  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a7ae3  68a4229000           push 0x9022a4
// 007a7ae8  e8d3c2ffff           call 0x7a3dc0
// 007a7aed  8bd8                 mov ebx, eax
// 007a7aef  8d8424c4000000       lea eax, [esp + 0xc4]
// 007a7af6  50                   push eax
// 007a7af7  8d4c2470             lea ecx, [esp + 0x70]
// 007a7afb  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 007a7b06  e88548c7ff           call 0x41c390
// 007a7b0b  8b7004               mov esi, dword ptr [eax + 4]
// 007a7b0e  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 007a7b15  51                   push ecx
// 007a7b16  8d4c2470             lea ecx, [esp + 0x70]
// 007a7b1a  83ee04               sub esi, 4
// 007a7b1d  e86e48c7ff           call 0x41c390
// 007a7b22  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007a7b29  8b00                 mov eax, dword ptr [eax]
// 007a7b2b  52                   push edx
// 007a7b2c  b908000000           mov ecx, 8
// 007a7b31  51                   push ecx
// 007a7b32  83e803               sub eax, 3
// 007a7b35  56                   push esi
// 007a7b36  50                   push eax
// 007a7b37  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007a7b3e  e81d45caff           call 0x44c060
// 007a7b43  6a03                 push 3
// 007a7b45  55                   push ebp
// 007a7b46  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a7b4d  33f6                 xor esi, esi
// 007a7b4f  50                   push eax
// 007a7b50  8bcb                 mov ecx, ebx
// 007a7b52  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 007a7b59  e862e20500           call 0x805dc0
// 007a7b5e  83ec10               sub esp, 0x10
// 007a7b61  8bcc                 mov ecx, esp
// 007a7b63  8931                 mov dword ptr [ecx], esi
// 007a7b65  33d2                 xor edx, edx
// 007a7b67  895104               mov dword ptr [ecx + 4], edx
// 007a7b6a  895108               mov dword ptr [ecx + 8], edx
// 007a7b6d  83ec10               sub esp, 0x10
// 007a7b70  8bd6                 mov edx, esi
// 007a7b72  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7b75  8b10                 mov edx, dword ptr [eax]
// 007a7b77  8bcc                 mov ecx, esp
// 007a7b79  8911                 mov dword ptr [ecx], edx
// 007a7b7b  8b5004               mov edx, dword ptr [eax + 4]
// 007a7b7e  895104               mov dword ptr [ecx + 4], edx
// 007a7b81  8b5008               mov edx, dword ptr [eax + 8]
// 007a7b84  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7b87  895108               mov dword ptr [ecx + 8], edx
// 007a7b8a  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7b8d  8d8c249c000000       lea ecx, [esp + 0x9c]
// 007a7b94  51                   push ecx
// 007a7b95  57                   push edi
// 007a7b96  8bcb                 mov ecx, ebx
// 007a7b98  e8f3da0500           call 0x805690
// 007a7b9d  8d542424             lea edx, [esp + 0x24]
// 007a7ba1  52                   push edx
// 007a7ba2  ff15fced8900         call dword ptr [0x89edfc]
// 007a7ba8  85c0                 test eax, eax
// 007a7baa  0f85a9070000         jne 0x7a8359
// 007a7bb0  33db                 xor ebx, ebx
// 007a7bb2  395c2414             cmp dword ptr [esp + 0x14], ebx
// 007a7bb6  0f849d070000         je 0x7a8359
// 007a7bbc  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 007a7bc1  0f8592070000         jne 0x7a8359
// 007a7bc7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a7bcb  6a02                 push 2
// 007a7bcd  be01000000           mov esi, 1
// 007a7bd2  56                   push esi
// 007a7bd3  8d8424d4000000       lea eax, [esp + 0xd4]
// 007a7bda  50                   push eax
// 007a7bdb  8bee                 mov ebp, esi
// 007a7bdd  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 007a7be4  e8d7e10500           call 0x805dc0
// 007a7be9  83ec10               sub esp, 0x10
// 007a7bec  8bcc                 mov ecx, esp
// 007a7bee  8931                 mov dword ptr [ecx], esi
// 007a7bf0  895904               mov dword ptr [ecx + 4], ebx
// 007a7bf3  896908               mov dword ptr [ecx + 8], ebp
// 007a7bf6  8bd3                 mov edx, ebx
// 007a7bf8  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7bfb  8b10                 mov edx, dword ptr [eax]
// 007a7bfd  83ec10               sub esp, 0x10
// 007a7c00  8bcc                 mov ecx, esp
// 007a7c02  8911                 mov dword ptr [ecx], edx
// 007a7c04  8b5004               mov edx, dword ptr [eax + 4]
// 007a7c07  895104               mov dword ptr [ecx + 4], edx
// 007a7c0a  8b5008               mov edx, dword ptr [eax + 8]
// 007a7c0d  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7c10  895108               mov dword ptr [ecx + 8], edx
// 007a7c13  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7c16  8d4c2444             lea ecx, [esp + 0x44]
// 007a7c1a  e92f070000           jmp 0x7a834e
// 007a7c1f  b880229000           mov eax, 0x902280
// 007a7c24  3beb                 cmp ebp, ebx
// 007a7c26  7505                 jne 0x7a7c2d
// 007a7c28  b85c229000           mov eax, 0x90225c
// 007a7c2d  50                   push eax
// 007a7c2e  8bcf                 mov ecx, edi
// 007a7c30  e88bc1ffff           call 0x7a3dc0
// 007a7c35  89442418             mov dword ptr [esp + 0x18], eax
// 007a7c39  3bc3                 cmp eax, ebx
// 007a7c3b  751f                 jne 0x7a7c5c
// 007a7c3d  8b942400010000       mov edx, dword ptr [esp + 0x100]
// 007a7c44  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a7c48  56                   push esi
// 007a7c49  52                   push edx
// 007a7c4a  e86165ffff           call 0x79e1b0
// 007a7c4f  5f                   pop edi
// 007a7c50  5e                   pop esi
// 007a7c51  5d                   pop ebp
// 007a7c52  5b                   pop ebx
// 007a7c53  81c4ec000000         add esp, 0xec
// 007a7c59  c20800               ret 8
// 007a7c5c  8b2d00ee8900         mov ebp, dword ptr [0x89ee00]
// 007a7c62  8d5e48               lea ebx, [esi + 0x48]
// 007a7c65  53                   push ebx
// 007a7c66  8d8424e0000000       lea eax, [esp + 0xe0]
// 007a7c6d  50                   push eax
// 007a7c6e  ffd5                 call ebp
// 007a7c70  6a02                 push 2
// 007a7c72  33ff                 xor edi, edi
// 007a7c74  57                   push edi
// 007a7c75  8d4c242c             lea ecx, [esp + 0x2c]
// 007a7c79  51                   push ecx
// 007a7c7a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a7c7e  c784249400000001000000 mov dword ptr [esp + 0x94], 1
// 007a7c89  e832e10500           call 0x805dc0
// 007a7c8e  83ec10               sub esp, 0x10
// 007a7c91  8bcc                 mov ecx, esp
// 007a7c93  8939                 mov dword ptr [ecx], edi
// 007a7c95  8bbc2410010000       mov edi, dword ptr [esp + 0x110]
// 007a7c9c  ba01000000           mov edx, 1
// 007a7ca1  895104               mov dword ptr [ecx + 4], edx
// 007a7ca4  33d2                 xor edx, edx
// 007a7ca6  895108               mov dword ptr [ecx + 8], edx
// 007a7ca9  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007a7cb0  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7cb3  8b10                 mov edx, dword ptr [eax]
// 007a7cb5  83ec10               sub esp, 0x10
// 007a7cb8  8bcc                 mov ecx, esp
// 007a7cba  8911                 mov dword ptr [ecx], edx
// 007a7cbc  8b5004               mov edx, dword ptr [eax + 4]
// 007a7cbf  895104               mov dword ptr [ecx + 4], edx
// 007a7cc2  8b5008               mov edx, dword ptr [eax + 8]
// 007a7cc5  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7cc8  895108               mov dword ptr [ecx + 8], edx
// 007a7ccb  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7cce  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 007a7cd5  51                   push ecx
// 007a7cd6  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a7cda  57                   push edi
// 007a7cdb  e8b0d90500           call 0x805690
// 007a7ce0  53                   push ebx
// 007a7ce1  8d942490000000       lea edx, [esp + 0x90]
// 007a7ce8  52                   push edx
// 007a7ce9  ffd5                 call ebp
// 007a7ceb  6aff                 push -1
// 007a7ced  6a00                 push 0
// 007a7cef  8d842494000000       lea eax, [esp + 0x94]
// 007a7cf6  50                   push eax
// 007a7cf7  ff15bced8900         call dword ptr [0x89edbc]
// 007a7cfd  837c241000           cmp dword ptr [esp + 0x10], 0
// 007a7d02  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007a7d09  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007a7d10  8b5628               mov edx, dword ptr [esi + 0x28]
// 007a7d13  89442470             mov dword ptr [esp + 0x70], eax
// 007a7d17  89442460             mov dword ptr [esp + 0x60], eax
// 007a7d1b  8b842494000000       mov eax, dword ptr [esp + 0x94]
// 007a7d22  894c246c             mov dword ptr [esp + 0x6c], ecx
// 007a7d26  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 007a7d2d  89542474             mov dword ptr [esp + 0x74], edx
// 007a7d31  8b562c               mov edx, dword ptr [esi + 0x2c]
// 007a7d34  89442464             mov dword ptr [esp + 0x64], eax
// 007a7d38  894c2478             mov dword ptr [esp + 0x78], ecx
// 007a7d3c  8954245c             mov dword ptr [esp + 0x5c], edx
// 007a7d40  894c2468             mov dword ptr [esp + 0x68], ecx
// 007a7d44  b830229000           mov eax, 0x902230
// 007a7d49  7505                 jne 0x7a7d50
// 007a7d4b  b804229000           mov eax, 0x902204
// 007a7d50  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a7d54  50                   push eax
// 007a7d55  e866c0ffff           call 0x7a3dc0
// 007a7d5a  33f6                 xor esi, esi
// 007a7d5c  8944241c             mov dword ptr [esp + 0x1c], eax
// 007a7d60  3bc6                 cmp eax, esi
// 007a7d62  0f84f1050000         je 0x7a8359
// 007a7d68  39742414             cmp dword ptr [esp + 0x14], esi
// 007a7d6c  7509                 jne 0x7a7d77
// 007a7d6e  89742410             mov dword ptr [esp + 0x10], esi
// 007a7d72  e99a000000           jmp 0x7a7e11
// 007a7d77  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a7d7b  83f93c               cmp ecx, 0x3c
// 007a7d7e  750a                 jne 0x7a7d8a
// 007a7d80  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007a7d88  eb29                 jmp 0x7a7db3
// 007a7d8a  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a7d8e  83f83c               cmp eax, 0x3c
// 007a7d91  750a                 jne 0x7a7d9d
// 007a7d93  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007a7d9b  eb16                 jmp 0x7a7db3
// 007a7d9d  3bc6                 cmp eax, esi
// 007a7d9f  7f0a                 jg 0x7a7dab
// 007a7da1  3bce                 cmp ecx, esi
// 007a7da3  7f06                 jg 0x7a7dab
// 007a7da5  89742410             mov dword ptr [esp + 0x10], esi
// 007a7da9  eb66                 jmp 0x7a7e11
// 007a7dab  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007a7db3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007a7db7  6a04                 push 4
// 007a7db9  51                   push ecx
// 007a7dba  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007a7dbe  8d942484000000       lea edx, [esp + 0x84]
// 007a7dc5  bb03000000           mov ebx, 3
// 007a7dca  52                   push edx
// 007a7dcb  8beb                 mov ebp, ebx
// 007a7dcd  e8eedf0500           call 0x805dc0
// 007a7dd2  83ec10               sub esp, 0x10
// 007a7dd5  8bcc                 mov ecx, esp
// 007a7dd7  8919                 mov dword ptr [ecx], ebx
// 007a7dd9  896904               mov dword ptr [ecx + 4], ebp
// 007a7ddc  8bd3                 mov edx, ebx
// 007a7dde  895108               mov dword ptr [ecx + 8], edx
// 007a7de1  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7de4  8b10                 mov edx, dword ptr [eax]
// 007a7de6  83ec10               sub esp, 0x10
// 007a7de9  8bcc                 mov ecx, esp
// 007a7deb  8911                 mov dword ptr [ecx], edx
// 007a7ded  8b5004               mov edx, dword ptr [eax + 4]
// 007a7df0  895104               mov dword ptr [ecx + 4], edx
// 007a7df3  8b5008               mov edx, dword ptr [eax + 8]
// 007a7df6  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7df9  895108               mov dword ptr [ecx + 8], edx
// 007a7dfc  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7dff  8d8c248c000000       lea ecx, [esp + 0x8c]
// 007a7e06  51                   push ecx
// 007a7e07  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a7e0b  57                   push edi
// 007a7e0c  e87fd80500           call 0x805690
// 007a7e11  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 007a7e15  8b442474             mov eax, dword ptr [esp + 0x74]
// 007a7e19  8d4410f7             lea eax, [eax + edx - 9]
// 007a7e1d  99                   cdq 
// 007a7e1e  2bc2                 sub eax, edx
// 007a7e20  8b542470             mov edx, dword ptr [esp + 0x70]
// 007a7e24  8bc8                 mov ecx, eax
// 007a7e26  8b442478             mov eax, dword ptr [esp + 0x78]
// 007a7e2a  8d4410f7             lea eax, [eax + edx - 9]
// 007a7e2e  bb09000000           mov ebx, 9
// 007a7e33  99                   cdq 
// 007a7e34  8beb                 mov ebp, ebx
// 007a7e36  55                   push ebp
// 007a7e37  2bc2                 sub eax, edx
// 007a7e39  53                   push ebx
// 007a7e3a  d1f8                 sar eax, 1
// 007a7e3c  d1f9                 sar ecx, 1
// 007a7e3e  50                   push eax
// 007a7e3f  51                   push ecx
// 007a7e40  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 007a7e47  e81442caff           call 0x44c060
// 007a7e4c  39742414             cmp dword ptr [esp + 0x14], esi
// 007a7e50  7505                 jne 0x7a7e57
// 007a7e52  8d4303               lea eax, [ebx + 3]
// 007a7e55  eb0c                 jmp 0x7a7e63
// 007a7e57  33c0                 xor eax, eax
// 007a7e59  39742410             cmp dword ptr [esp + 0x10], esi
// 007a7e5d  0f95c0               setne al
// 007a7e60  83c009               add eax, 9
// 007a7e63  50                   push eax
// 007a7e64  33c9                 xor ecx, ecx
// 007a7e66  83ec10               sub esp, 0x10
// 007a7e69  8bc4                 mov eax, esp
// 007a7e6b  8908                 mov dword ptr [eax], ecx
// 007a7e6d  894804               mov dword ptr [eax + 4], ecx
// 007a7e70  8bcb                 mov ecx, ebx
// 007a7e72  894808               mov dword ptr [eax + 8], ecx
// 007a7e75  89480c               mov dword ptr [eax + 0xc], ecx
// 007a7e78  8d8c2490000000       lea ecx, [esp + 0x90]
// 007a7e7f  51                   push ecx
// 007a7e80  8974243c             mov dword ptr [esp + 0x3c], esi
// 007a7e84  89742440             mov dword ptr [esp + 0x40], esi
// 007a7e88  89742444             mov dword ptr [esp + 0x44], esi
// 007a7e8c  89742448             mov dword ptr [esp + 0x48], esi
// 007a7e90  e80bf5ffff           call 0x7a73a0
// 007a7e95  83c418               add esp, 0x18
// 007a7e98  68ff00ff00           push 0xff00ff
// 007a7e9d  8d542428             lea edx, [esp + 0x28]
// 007a7ea1  52                   push edx
// 007a7ea2  8b10                 mov edx, dword ptr [eax]
// 007a7ea4  83ec10               sub esp, 0x10
// 007a7ea7  8bcc                 mov ecx, esp
// 007a7ea9  8911                 mov dword ptr [ecx], edx
// 007a7eab  8b5004               mov edx, dword ptr [eax + 4]
// 007a7eae  895104               mov dword ptr [ecx + 4], edx
// 007a7eb1  8b5008               mov edx, dword ptr [eax + 8]
// 007a7eb4  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7eb7  895108               mov dword ptr [ecx + 8], edx
// 007a7eba  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7ebd  8d8c2404010000       lea ecx, [esp + 0x104]
// 007a7ec4  51                   push ecx
// 007a7ec5  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 007a7ecc  57                   push edi
// 007a7ecd  e82ee40500           call 0x806300
// 007a7ed2  39742414             cmp dword ptr [esp + 0x14], esi
// 007a7ed6  7509                 jne 0x7a7ee1
// 007a7ed8  89742410             mov dword ptr [esp + 0x10], esi
// 007a7edc  e9a2000000           jmp 0x7a7f83
// 007a7ee1  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a7ee5  83f93d               cmp ecx, 0x3d
// 007a7ee8  750a                 jne 0x7a7ef4
// 007a7eea  c744241003000000     mov dword ptr [esp + 0x10], 3
// 007a7ef2  eb29                 jmp 0x7a7f1d
// 007a7ef4  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a7ef8  83f83d               cmp eax, 0x3d
// 007a7efb  750a                 jne 0x7a7f07
// 007a7efd  c744241002000000     mov dword ptr [esp + 0x10], 2
// 007a7f05  eb16                 jmp 0x7a7f1d
// 007a7f07  3bc6                 cmp eax, esi
// 007a7f09  7f0a                 jg 0x7a7f15
// 007a7f0b  3bce                 cmp ecx, esi
// 007a7f0d  7f06                 jg 0x7a7f15
// 007a7f0f  89742410             mov dword ptr [esp + 0x10], esi
// 007a7f13  eb6e                 jmp 0x7a7f83
// 007a7f15  c744241001000000     mov dword ptr [esp + 0x10], 1
// 007a7f1d  8b542410             mov edx, dword ptr [esp + 0x10]
// 007a7f21  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007a7f25  6a04                 push 4
// 007a7f27  bd03000000           mov ebp, 3
// 007a7f2c  52                   push edx
// 007a7f2d  8d8424e4000000       lea eax, [esp + 0xe4]
// 007a7f34  50                   push eax
// 007a7f35  8bdd                 mov ebx, ebp
// 007a7f37  8bf5                 mov esi, ebp
// 007a7f39  89ac2494000000       mov dword ptr [esp + 0x94], ebp
// 007a7f40  e87bde0500           call 0x805dc0
// 007a7f45  83ec10               sub esp, 0x10
// 007a7f48  8bcc                 mov ecx, esp
// 007a7f4a  8919                 mov dword ptr [ecx], ebx
// 007a7f4c  897104               mov dword ptr [ecx + 4], esi
// 007a7f4f  896908               mov dword ptr [ecx + 8], ebp
// 007a7f52  83ec10               sub esp, 0x10
// 007a7f55  8bd5                 mov edx, ebp
// 007a7f57  89510c               mov dword ptr [ecx + 0xc], edx
// 007a7f5a  8b10                 mov edx, dword ptr [eax]
// 007a7f5c  8bcc                 mov ecx, esp
// 007a7f5e  8911                 mov dword ptr [ecx], edx
// 007a7f60  8b5004               mov edx, dword ptr [eax + 4]
// 007a7f63  895104               mov dword ptr [ecx + 4], edx
// 007a7f66  8b5008               mov edx, dword ptr [eax + 8]
// 007a7f69  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a7f6c  895108               mov dword ptr [ecx + 8], edx
// 007a7f6f  89410c               mov dword ptr [ecx + 0xc], eax
// 007a7f72  8d4c247c             lea ecx, [esp + 0x7c]
// 007a7f76  51                   push ecx
// 007a7f77  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007a7f7b  57                   push edi
// 007a7f7c  e80fd70500           call 0x805690
// 007a7f81  33f6                 xor esi, esi
// 007a7f83  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007a7f87  8b442464             mov eax, dword ptr [esp + 0x64]
// 007a7f8b  8d4410f7             lea eax, [eax + edx - 9]
// 007a7f8f  99                   cdq 
// 007a7f90  2bc2                 sub eax, edx
// 007a7f92  8b542460             mov edx, dword ptr [esp + 0x60]
// 007a7f96  8bc8                 mov ecx, eax
// 007a7f98  8b442468             mov eax, dword ptr [esp + 0x68]
// 007a7f9c  8d4410f7             lea eax, [eax + edx - 9]
// 007a7fa0  bb09000000           mov ebx, 9
// 007a7fa5  99                   cdq 
// 007a7fa6  8beb                 mov ebp, ebx
// 007a7fa8  55                   push ebp
// 007a7fa9  2bc2                 sub eax, edx
// 007a7fab  53                   push ebx
// 007a7fac  d1f8                 sar eax, 1
// 007a7fae  d1f9                 sar ecx, 1
// 007a7fb0  50                   push eax
// 007a7fb1  51                   push ecx
// 007a7fb2  8d8c24dc000000       lea ecx, [esp + 0xdc]
// 007a7fb9  e8a240caff           call 0x44c060
// 007a7fbe  39742414             cmp dword ptr [esp + 0x14], esi
// 007a7fc2  7505                 jne 0x7a7fc9
// 007a7fc4  8d4307               lea eax, [ebx + 7]
// 007a7fc7  eb0c                 jmp 0x7a7fd5
// 007a7fc9  33c0                 xor eax, eax
// 007a7fcb  39742410             cmp dword ptr [esp + 0x10], esi
// 007a7fcf  0f95c0               setne al
// 007a7fd2  83c00d               add eax, 0xd
// 007a7fd5  50                   push eax
// 007a7fd6  33c9                 xor ecx, ecx
// 007a7fd8  83ec10               sub esp, 0x10
// 007a7fdb  8bc4                 mov eax, esp
// 007a7fdd  8908                 mov dword ptr [eax], ecx
// 007a7fdf  894804               mov dword ptr [eax + 4], ecx
// 007a7fe2  8bcb                 mov ecx, ebx
// 007a7fe4  894808               mov dword ptr [eax + 8], ecx
// 007a7fe7  89480c               mov dword ptr [eax + 0xc], ecx
// 007a7fea  8d8c2490000000       lea ecx, [esp + 0x90]
// 007a7ff1  51                   push ecx
// 007a7ff2  8974243c             mov dword ptr [esp + 0x3c], esi
// 007a7ff6  89742440             mov dword ptr [esp + 0x40], esi
// 007a7ffa  89742444             mov dword ptr [esp + 0x44], esi
// 007a7ffe  89742448             mov dword ptr [esp + 0x48], esi
// 007a8002  e899f3ffff           call 0x7a73a0
// 007a8007  83c418               add esp, 0x18
// 007a800a  68ff00ff00           push 0xff00ff
// 007a800f  8d542428             lea edx, [esp + 0x28]
// 007a8013  52                   push edx
// 007a8014  8b10                 mov edx, dword ptr [eax]
// 007a8016  83ec10               sub esp, 0x10
// 007a8019  8bcc                 mov ecx, esp
// 007a801b  8911                 mov dword ptr [ecx], edx
// 007a801d  8b5004               mov edx, dword ptr [eax + 4]
// 007a8020  895104               mov dword ptr [ecx + 4], edx
// 007a8023  8b5008               mov edx, dword ptr [eax + 8]
// 007a8026  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a8029  895108               mov dword ptr [ecx + 8], edx
// 007a802c  89410c               mov dword ptr [ecx + 0xc], eax
// 007a802f  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 007a8036  51                   push ecx
// 007a8037  8b8c24d8000000       mov ecx, dword ptr [esp + 0xd8]
// 007a803e  57                   push edi
// 007a803f  e8bce20500           call 0x806300
// 007a8044  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 007a804b  8b542474             mov edx, dword ptr [esp + 0x74]
// 007a804f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007a8053  8b1dfced8900         mov ebx, dword ptr [0x89edfc]
// 007a8059  89442450             mov dword ptr [esp + 0x50], eax
// 007a805d  8954244c             mov dword ptr [esp + 0x4c], edx
// 007a8061  8b942498000000       mov edx, dword ptr [esp + 0x98]
// 007a8068  8d44244c             lea eax, [esp + 0x4c]
// 007a806c  50                   push eax
// 007a806d  894c2458             mov dword ptr [esp + 0x58], ecx
// 007a8071  8954245c             mov dword ptr [esp + 0x5c], edx
// 007a8075  ffd3                 call ebx
// 007a8077  85c0                 test eax, eax
// 007a8079  0f85da020000         jne 0x7a8359
// 007a807f  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007a8083  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 007a8087  8b9424c4000000       mov edx, dword ptr [esp + 0xc4]
// 007a808e  894c2424             mov dword ptr [esp + 0x24], ecx
// 007a8092  03ca                 add ecx, edx
// 007a8094  8b542458             mov edx, dword ptr [esp + 0x58]
// 007a8098  8d45ff               lea eax, [ebp - 1]
// 007a809b  896c2440             mov dword ptr [esp + 0x40], ebp
// 007a809f  8bac249c000000       mov ebp, dword ptr [esp + 0x9c]
// 007a80a6  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007a80aa  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007a80ae  03cd                 add ecx, ebp
// 007a80b0  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 007a80b4  894c2444             mov dword ptr [esp + 0x44], ecx
// 007a80b8  898c24ac000000       mov dword ptr [esp + 0xac], ecx
// 007a80bf  89442428             mov dword ptr [esp + 0x28], eax
// 007a80c3  42                   inc edx
// 007a80c4  898424b0000000       mov dword ptr [esp + 0xb0], eax
// 007a80cb  8b442454             mov eax, dword ptr [esp + 0x54]
// 007a80cf  8d4c2424             lea ecx, [esp + 0x24]
// 007a80d3  51                   push ecx
// 007a80d4  89542434             mov dword ptr [esp + 0x34], edx
// 007a80d8  896c244c             mov dword ptr [esp + 0x4c], ebp
// 007a80dc  898424b8000000       mov dword ptr [esp + 0xb8], eax
// 007a80e3  899424bc000000       mov dword ptr [esp + 0xbc], edx
// 007a80ea  ffd3                 call ebx
// 007a80ec  85c0                 test eax, eax
// 007a80ee  756a                 jne 0x7a815a
// 007a80f0  39742414             cmp dword ptr [esp + 0x14], esi
// 007a80f4  7464                 je 0x7a815a
// 007a80f6  837c24203e           cmp dword ptr [esp + 0x20], 0x3e
// 007a80fb  755d                 jne 0x7a815a
// 007a80fd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a8101  6a02                 push 2
// 007a8103  8d5801               lea ebx, [eax + 1]
// 007a8106  53                   push ebx
// 007a8107  8d942484000000       lea edx, [esp + 0x84]
// 007a810e  52                   push edx
// 007a810f  33f6                 xor esi, esi
// 007a8111  33ed                 xor ebp, ebp
// 007a8113  e8a8dc0500           call 0x805dc0
// 007a8118  83ec10               sub esp, 0x10
// 007a811b  8bcc                 mov ecx, esp
// 007a811d  8931                 mov dword ptr [ecx], esi
// 007a811f  895904               mov dword ptr [ecx + 4], ebx
// 007a8122  896908               mov dword ptr [ecx + 8], ebp
// 007a8125  83ec10               sub esp, 0x10
// 007a8128  8bd3                 mov edx, ebx
// 007a812a  89510c               mov dword ptr [ecx + 0xc], edx
// 007a812d  8b10                 mov edx, dword ptr [eax]
// 007a812f  8bcc                 mov ecx, esp
// 007a8131  8911                 mov dword ptr [ecx], edx
// 007a8133  8b5004               mov edx, dword ptr [eax + 4]
// 007a8136  895104               mov dword ptr [ecx + 4], edx
// 007a8139  8b5008               mov edx, dword ptr [eax + 8]
// 007a813c  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a813f  895108               mov dword ptr [ecx + 8], edx
// 007a8142  89410c               mov dword ptr [ecx + 0xc], eax
// 007a8145  8d4c2444             lea ecx, [esp + 0x44]
// 007a8149  51                   push ecx
// 007a814a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a814e  57                   push edi
// 007a814f  e83cd50500           call 0x805690
// 007a8154  8b1dfced8900         mov ebx, dword ptr [0x89edfc]
// 007a815a  8d54243c             lea edx, [esp + 0x3c]
// 007a815e  52                   push edx
// 007a815f  ffd3                 call ebx
// 007a8161  85c0                 test eax, eax
// 007a8163  0f8577010000         jne 0x7a82e0
// 007a8169  39442414             cmp dword ptr [esp + 0x14], eax
// 007a816d  7504                 jne 0x7a8173
// 007a816f  33ed                 xor ebp, ebp
// 007a8171  eb2e                 jmp 0x7a81a1
// 007a8173  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007a8177  83f940               cmp ecx, 0x40
// 007a817a  7505                 jne 0x7a8181
// 007a817c  8d69c3               lea ebp, [ecx - 0x3d]
// 007a817f  eb1f                 jmp 0x7a81a0
// 007a8181  8b442434             mov eax, dword ptr [esp + 0x34]
// 007a8185  83f840               cmp eax, 0x40
// 007a8188  7505                 jne 0x7a818f
// 007a818a  8d68c2               lea ebp, [eax - 0x3e]
// 007a818d  eb11                 jmp 0x7a81a0
// 007a818f  85c0                 test eax, eax
// 007a8191  7f08                 jg 0x7a819b
// 007a8193  85c9                 test ecx, ecx
// 007a8195  7f04                 jg 0x7a819b
// 007a8197  33ed                 xor ebp, ebp
// 007a8199  eb06                 jmp 0x7a81a1
// 007a819b  bd01000000           mov ebp, 1
// 007a81a0  4d                   dec ebp
// 007a81a1  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a81a5  68e0219000           push 0x9021e0
// 007a81aa  e811bcffff           call 0x7a3dc0
// 007a81af  8bf0                 mov esi, eax
// 007a81b1  85f6                 test esi, esi
// 007a81b3  0f84a0010000         je 0x7a8359
// 007a81b9  6a03                 push 3
// 007a81bb  55                   push ebp
// 007a81bc  8d8424e4000000       lea eax, [esp + 0xe4]
// 007a81c3  bb05000000           mov ebx, 5
// 007a81c8  50                   push eax
// 007a81c9  8bce                 mov ecx, esi
// 007a81cb  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 007a81d2  e8e9db0500           call 0x805dc0
// 007a81d7  83ec10               sub esp, 0x10
// 007a81da  8bcc                 mov ecx, esp
// 007a81dc  8919                 mov dword ptr [ecx], ebx
// 007a81de  8bd3                 mov edx, ebx
// 007a81e0  895104               mov dword ptr [ecx + 4], edx
// 007a81e3  895108               mov dword ptr [ecx + 8], edx
// 007a81e6  89510c               mov dword ptr [ecx + 0xc], edx
// 007a81e9  8b10                 mov edx, dword ptr [eax]
// 007a81eb  83ec10               sub esp, 0x10
// 007a81ee  8bcc                 mov ecx, esp
// 007a81f0  8911                 mov dword ptr [ecx], edx
// 007a81f2  8b5004               mov edx, dword ptr [eax + 4]
// 007a81f5  895104               mov dword ptr [ecx + 4], edx
// 007a81f8  8b5008               mov edx, dword ptr [eax + 8]
// 007a81fb  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a81fe  895108               mov dword ptr [ecx + 8], edx
// 007a8201  89410c               mov dword ptr [ecx + 0xc], eax
// 007a8204  8d4c245c             lea ecx, [esp + 0x5c]
// 007a8208  51                   push ecx
// 007a8209  57                   push edi
// 007a820a  8bce                 mov ecx, esi
// 007a820c  e87fd40500           call 0x805690
// 007a8211  8b542444             mov edx, dword ptr [esp + 0x44]
// 007a8215  2b54243c             sub edx, dword ptr [esp + 0x3c]
// 007a8219  83fa0a               cmp edx, 0xa
// 007a821c  0f8ebe000000         jle 0x7a82e0
// 007a8222  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007a8226  68b4219000           push 0x9021b4
// 007a822b  e890bbffff           call 0x7a3dc0
// 007a8230  8bd8                 mov ebx, eax
// 007a8232  8d8424c4000000       lea eax, [esp + 0xc4]
// 007a8239  50                   push eax
// 007a823a  8d4c2440             lea ecx, [esp + 0x40]
// 007a823e  c78424a400000008000000 mov dword ptr [esp + 0xa4], 8
// 007a8249  e84241c7ff           call 0x41c390
// 007a824e  8b7004               mov esi, dword ptr [eax + 4]
// 007a8251  8d8c24bc000000       lea ecx, [esp + 0xbc]
// 007a8258  51                   push ecx
// 007a8259  8d4c2440             lea ecx, [esp + 0x40]
// 007a825d  83ee04               sub esi, 4
// 007a8260  e82b41c7ff           call 0x41c390
// 007a8265  8b9424a0000000       mov edx, dword ptr [esp + 0xa0]
// 007a826c  8b00                 mov eax, dword ptr [eax]
// 007a826e  52                   push edx
// 007a826f  b908000000           mov ecx, 8
// 007a8274  51                   push ecx
// 007a8275  83e803               sub eax, 3
// 007a8278  56                   push esi
// 007a8279  50                   push eax
// 007a827a  8d8c24ec000000       lea ecx, [esp + 0xec]
// 007a8281  e8da3dcaff           call 0x44c060
// 007a8286  6a03                 push 3
// 007a8288  55                   push ebp
// 007a8289  8d8424a4000000       lea eax, [esp + 0xa4]
// 007a8290  33f6                 xor esi, esi
// 007a8292  50                   push eax
// 007a8293  8bcb                 mov ecx, ebx
// 007a8295  89b42494000000       mov dword ptr [esp + 0x94], esi
// 007a829c  e81fdb0500           call 0x805dc0
// 007a82a1  83ec10               sub esp, 0x10
// 007a82a4  8bcc                 mov ecx, esp
// 007a82a6  8931                 mov dword ptr [ecx], esi
// 007a82a8  33d2                 xor edx, edx
// 007a82aa  895104               mov dword ptr [ecx + 4], edx
// 007a82ad  895108               mov dword ptr [ecx + 8], edx
// 007a82b0  83ec10               sub esp, 0x10
// 007a82b3  8bd6                 mov edx, esi
// 007a82b5  89510c               mov dword ptr [ecx + 0xc], edx
// 007a82b8  8b10                 mov edx, dword ptr [eax]
// 007a82ba  8bcc                 mov ecx, esp
// 007a82bc  8911                 mov dword ptr [ecx], edx
// 007a82be  8b5004               mov edx, dword ptr [eax + 4]
// 007a82c1  895104               mov dword ptr [ecx + 4], edx
// 007a82c4  8b5008               mov edx, dword ptr [eax + 8]
// 007a82c7  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a82ca  895108               mov dword ptr [ecx + 8], edx
// 007a82cd  89410c               mov dword ptr [ecx + 0xc], eax
// 007a82d0  8d8c24fc000000       lea ecx, [esp + 0xfc]
// 007a82d7  51                   push ecx
// 007a82d8  57                   push edi
// 007a82d9  8bcb                 mov ecx, ebx
// 007a82db  e8b0d30500           call 0x805690
// 007a82e0  8d9424ac000000       lea edx, [esp + 0xac]
// 007a82e7  52                   push edx
// 007a82e8  ff15fced8900         call dword ptr [0x89edfc]
// 007a82ee  85c0                 test eax, eax
// 007a82f0  7567                 jne 0x7a8359
// 007a82f2  39442414             cmp dword ptr [esp + 0x14], eax
// 007a82f6  7461                 je 0x7a8359
// 007a82f8  837c24203f           cmp dword ptr [esp + 0x20], 0x3f
// 007a82fd  755a                 jne 0x7a8359
// 007a82ff  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007a8303  8d5801               lea ebx, [eax + 1]
// 007a8306  6a02                 push 2
// 007a8308  53                   push ebx
// 007a8309  8d842484000000       lea eax, [esp + 0x84]
// 007a8310  50                   push eax
// 007a8311  33f6                 xor esi, esi
// 007a8313  33ed                 xor ebp, ebp
// 007a8315  e8a6da0500           call 0x805dc0
// 007a831a  83ec10               sub esp, 0x10
// 007a831d  8bcc                 mov ecx, esp
// 007a831f  8931                 mov dword ptr [ecx], esi
// 007a8321  895904               mov dword ptr [ecx + 4], ebx
// 007a8324  896908               mov dword ptr [ecx + 8], ebp
// 007a8327  8bd3                 mov edx, ebx
// 007a8329  89510c               mov dword ptr [ecx + 0xc], edx
// 007a832c  8b10                 mov edx, dword ptr [eax]
// 007a832e  83ec10               sub esp, 0x10
// 007a8331  8bcc                 mov ecx, esp
// 007a8333  8911                 mov dword ptr [ecx], edx
// 007a8335  8b5004               mov edx, dword ptr [eax + 4]
// 007a8338  895104               mov dword ptr [ecx + 4], edx
// 007a833b  8b5008               mov edx, dword ptr [eax + 8]
// 007a833e  8b400c               mov eax, dword ptr [eax + 0xc]
// 007a8341  895108               mov dword ptr [ecx + 8], edx
// 007a8344  89410c               mov dword ptr [ecx + 0xc], eax
// 007a8347  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 007a834e  51                   push ecx
// 007a834f  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007a8353  57                   push edi
// 007a8354  e837d30500           call 0x805690
// 007a8359  5f                   pop edi
// 007a835a  5e                   pop esi
// 007a835b  5d                   pop ebp
// 007a835c  5b                   pop ebx
// 007a835d  81c4ec000000         add esp, 0xec
// 007a8363  c20800               ret 8
// copied from an identical function in another client (function ?DrawScrollBar@CXTPControlGalleryOffice2007Theme@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp