// roc 2012-06 00a28570  unit: CXTPReportPaintManager  size: 1129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a28570
//
// 00a28570  6aff                 push -1
// 00a28572  687b4bae00           push 0xae4b7b
// 00a28577  64a100000000         mov eax, dword ptr fs:[0]
// 00a2857d  50                   push eax
// 00a2857e  83ec44               sub esp, 0x44
// 00a28581  53                   push ebx
// 00a28582  55                   push ebp
// 00a28583  56                   push esi
// 00a28584  57                   push edi
// 00a28585  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2858a  33c4                 xor eax, esp
// 00a2858c  50                   push eax
// 00a2858d  8d442458             lea eax, [esp + 0x58]
// 00a28591  64a300000000         mov dword ptr fs:[0], eax
// 00a28597  8bf1                 mov esi, ecx
// 00a28599  8b442468             mov eax, dword ptr [esp + 0x68]
// 00a2859d  8b5824               mov ebx, dword ptr [eax + 0x24]
// 00a285a0  8b7810               mov edi, dword ptr [eax + 0x10]
// 00a285a3  83c8ff               or eax, 0xffffffff
// 00a285a6  89442424             mov dword ptr [esp + 0x24], eax
// 00a285aa  89442428             mov dword ptr [esp + 0x28], eax
// 00a285ae  8d442470             lea eax, [esp + 0x70]
// 00a285b2  50                   push eax
// 00a285b3  8d4c244c             lea ecx, [esp + 0x4c]
// 00a285b7  51                   push ecx
// 00a285b8  895c2428             mov dword ptr [esp + 0x28], ebx
// 00a285bc  33ed                 xor ebp, ebp
// 00a285be  ff15ec3ab200         call dword ptr [0xb23aec]
// 00a285c4  8b17                 mov edx, dword ptr [edi]
// 00a285c6  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00a285cc  8bcf                 mov ecx, edi
// 00a285ce  ffd0                 call eax
// 00a285d0  85c0                 test eax, eax
// 00a285d2  7546                 jne 0xa2861a
// 00a285d4  8b842480000000       mov eax, dword ptr [esp + 0x80]
// 00a285db  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a285df  8b33                 mov esi, dword ptr [ebx]
// 00a285e1  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00a285e5  f7d8                 neg eax
// 00a285e7  1bc0                 sbb eax, eax
// 00a285e9  83e010               and eax, 0x10
// 00a285ec  0b4128               or eax, dword ptr [ecx + 0x28]
// 00a285ef  8d542448             lea edx, [esp + 0x48]
// 00a285f3  0d00080400           or eax, 0x40800
// 00a285f8  50                   push eax
// 00a285f9  52                   push edx
// 00a285fa  8bcf                 mov ecx, edi
// 00a285fc  83c670               add esi, 0x70
// 00a285ff  ff155846b200         call dword ptr [0xb24658]
// 00a28605  50                   push eax
// 00a28606  8bcf                 mov ecx, edi
// 00a28608  ff159847b200         call dword ptr [0xb24798]
// 00a2860e  50                   push eax
// 00a2860f  8b06                 mov eax, dword ptr [esi]
// 00a28611  8bcb                 mov ecx, ebx
// 00a28613  ffd0                 call eax
// 00a28615  e9a9030000           jmp 0xa289c3
// 00a2861a  8b5308               mov edx, dword ptr [ebx + 8]
// 00a2861d  8d4c2440             lea ecx, [esp + 0x40]
// 00a28621  51                   push ecx
// 00a28622  6a01                 push 1
// 00a28624  68ecf3b400           push 0xb4f3ec
// 00a28629  52                   push edx
// 00a2862a  ff154021b200         call dword ptr [0xb22140]
// 00a28630  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00a28634  68ecf3b400           push 0xb4f3ec
// 00a28639  50                   push eax
// 00a2863a  8d4c2424             lea ecx, [esp + 0x24]
// 00a2863e  51                   push ecx
// 00a2863f  e85cd39eff           call 0x4159a0
// 00a28644  83c40c               add esp, 0xc
// 00a28647  6a20                 push 0x20
// 00a28649  33db                 xor ebx, ebx
// 00a2864b  6a0d                 push 0xd
// 00a2864d  8d4c2424             lea ecx, [esp + 0x24]
// 00a28651  895c2468             mov dword ptr [esp + 0x68], ebx
// 00a28655  ff15344db200         call dword ptr [0xb24d34]
// 00a2865b  8b16                 mov edx, dword ptr [esi]
// 00a2865d  8b92fc000000         mov edx, dword ptr [edx + 0xfc]
// 00a28663  6a01                 push 1
// 00a28665  8d442420             lea eax, [esp + 0x20]
// 00a28669  50                   push eax
// 00a2866a  57                   push edi
// 00a2866b  8bce                 mov ecx, esi
// 00a2866d  ffd2                 call edx
// 00a2866f  8d4c2434             lea ecx, [esp + 0x34]
// 00a28673  ff158447b200         call dword ptr [0xb24784]
// 00a28679  8d4c2418             lea ecx, [esp + 0x18]
// 00a2867d  ff158447b200         call dword ptr [0xb24784]
// 00a28683  8d4c241c             lea ecx, [esp + 0x1c]
// 00a28687  c644246002           mov byte ptr [esp + 0x60], 2
// 00a2868c  ff155846b200         call dword ptr [0xb24658]
// 00a28692  8d7801               lea edi, [eax + 1]
// 00a28695  57                   push edi
// 00a28696  8d4c2420             lea ecx, [esp + 0x20]
// 00a2869a  ff15ac43b200         call dword ptr [0xb243ac]
// 00a286a0  57                   push edi
// 00a286a1  8d4c2438             lea ecx, [esp + 0x38]
// 00a286a5  89442430             mov dword ptr [esp + 0x30], eax
// 00a286a9  ff15ac43b200         call dword ptr [0xb243ac]
// 00a286af  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a286b3  8bf8                 mov edi, eax
// 00a286b5  8a02                 mov al, byte ptr [edx]
// 00a286b7  897c2430             mov dword ptr [esp + 0x30], edi
// 00a286bb  88442417             mov byte ptr [esp + 0x17], al
// 00a286bf  84c0                 test al, al
// 00a286c1  0f8471020000         je 0xa28938
// 00a286c7  83c9ff               or ecx, 0xffffffff
// 00a286ca  2bca                 sub ecx, edx
// 00a286cc  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a286d0  eb04                 jmp 0xa286d6
// 00a286d2  8a442417             mov al, byte ptr [esp + 0x17]
// 00a286d6  45                   inc ebp
// 00a286d7  3c20                 cmp al, 0x20
// 00a286d9  7416                 je 0xa286f1
// 00a286db  3c09                 cmp al, 9
// 00a286dd  7412                 je 0xa286f1
// 00a286df  3c0a                 cmp al, 0xa
// 00a286e1  740e                 je 0xa286f1
// 00a286e3  88041f               mov byte ptr [edi + ebx], al
// 00a286e6  c6441f0100           mov byte ptr [edi + ebx + 1], 0
// 00a286eb  43                   inc ebx
// 00a286ec  e934020000           jmp 0xa28925
// 00a286f1  803f00               cmp byte ptr [edi], 0
// 00a286f4  7508                 jne 0xa286fe
// 00a286f6  3c0a                 cmp al, 0xa
// 00a286f8  0f8527020000         jne 0xa28925
// 00a286fe  8d4c2418             lea ecx, [esp + 0x18]
// 00a28702  ff156046b200         call dword ptr [0xb24660]
// 00a28708  84c0                 test al, al
// 00a2870a  740c                 je 0xa28718
// 00a2870c  8bc5                 mov eax, ebp
// 00a2870e  2bc3                 sub eax, ebx
// 00a28710  89442424             mov dword ptr [esp + 0x24], eax
// 00a28714  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a28718  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a2871c  53                   push ebx
// 00a2871d  57                   push edi
// 00a2871e  50                   push eax
// 00a2871f  e8fcbbffff           call 0xa24320
// 00a28724  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a2872b  2b4c247c             sub ecx, dword ptr [esp + 0x7c]
// 00a2872f  83c40c               add esp, 0xc
// 00a28732  3bc1                 cmp eax, ecx
// 00a28734  89442438             mov dword ptr [esp + 0x38], eax
// 00a28738  7e0a                 jle 0xa28744
// 00a2873a  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 00a28742  750b                 jne 0xa2874f
// 00a28744  807c24170a           cmp byte ptr [esp + 0x17], 0xa
// 00a28749  0f85f7000000         jne 0xa28846
// 00a2874f  8d4c2418             lea ecx, [esp + 0x18]
// 00a28753  ff156046b200         call dword ptr [0xb24660]
// 00a28759  84c0                 test al, al
// 00a2875b  756a                 jne 0xa287c7
// 00a2875d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a28761  8b3e                 mov edi, dword ptr [esi]
// 00a28763  8d542418             lea edx, [esp + 0x18]
// 00a28767  52                   push edx
// 00a28768  50                   push eax
// 00a28769  81c7ec000000         add edi, 0xec
// 00a2876f  e8bcbaffff           call 0xa24230
// 00a28774  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a28778  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00a2877c  83c408               add esp, 8
// 00a2877f  50                   push eax
// 00a28780  49                   dec ecx
// 00a28781  51                   push ecx
// 00a28782  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a28786  4a                   dec edx
// 00a28787  52                   push edx
// 00a28788  8b542458             mov edx, dword ptr [esp + 0x58]
// 00a2878c  83ec10               sub esp, 0x10
// 00a2878f  8bc4                 mov eax, esp
// 00a28791  8908                 mov dword ptr [eax], ecx
// 00a28793  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a28797  895004               mov dword ptr [eax + 4], edx
// 00a2879a  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a2879e  894808               mov dword ptr [eax + 8], ecx
// 00a287a1  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a287a8  89500c               mov dword ptr [eax + 0xc], edx
// 00a287ab  8b17                 mov edx, dword ptr [edi]
// 00a287ad  8d442438             lea eax, [esp + 0x38]
// 00a287b1  50                   push eax
// 00a287b2  51                   push ecx
// 00a287b3  8bce                 mov ecx, esi
// 00a287b5  ffd2                 call edx
// 00a287b7  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a287bb  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a287bf  0144244c             add dword ptr [esp + 0x4c], eax
// 00a287c3  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a287c7  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a287cb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a287cf  50                   push eax
// 00a287d0  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a287d4  03c8                 add ecx, eax
// 00a287d6  8b16                 mov edx, dword ptr [esi]
// 00a287d8  03cd                 add ecx, ebp
// 00a287da  51                   push ecx
// 00a287db  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00a287e1  8bfd                 mov edi, ebp
// 00a287e3  2bfb                 sub edi, ebx
// 00a287e5  8d4fff               lea ecx, [edi - 1]
// 00a287e8  51                   push ecx
// 00a287e9  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a287ed  83ec10               sub esp, 0x10
// 00a287f0  8bc4                 mov eax, esp
// 00a287f2  8908                 mov dword ptr [eax], ecx
// 00a287f4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a287f8  894804               mov dword ptr [eax + 4], ecx
// 00a287fb  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a287ff  894808               mov dword ptr [eax + 8], ecx
// 00a28802  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a28806  89480c               mov dword ptr [eax + 0xc], ecx
// 00a28809  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a28810  8d442438             lea eax, [esp + 0x38]
// 00a28814  50                   push eax
// 00a28815  51                   push ecx
// 00a28816  8bce                 mov ecx, esi
// 00a28818  ffd2                 call edx
// 00a2881a  3bfd                 cmp edi, ebp
// 00a2881c  7410                 je 0xa2882e
// 00a2881e  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a28822  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a28826  0144244c             add dword ptr [esp + 0x4c], eax
// 00a2882a  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a2882e  8d4c2418             lea ecx, [esp + 0x18]
// 00a28832  ff150448b200         call dword ptr [0xb24804]
// 00a28838  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a2883c  c60200               mov byte ptr [edx], 0
// 00a2883f  8bfa                 mov edi, edx
// 00a28841  e9dd000000           jmp 0xa28923
// 00a28846  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a2884a  8d442418             lea eax, [esp + 0x18]
// 00a2884e  50                   push eax
// 00a2884f  51                   push ecx
// 00a28850  e8dbb9ffff           call 0xa24230
// 00a28855  83c408               add esp, 8
// 00a28858  8d4c2418             lea ecx, [esp + 0x18]
// 00a2885c  89442438             mov dword ptr [esp + 0x38], eax
// 00a28860  ff156046b200         call dword ptr [0xb24660]
// 00a28866  84c0                 test al, al
// 00a28868  750f                 jne 0xa28879
// 00a2886a  68ecf3b400           push 0xb4f3ec
// 00a2886f  8d4c241c             lea ecx, [esp + 0x1c]
// 00a28873  ff157442b200         call dword ptr [0xb24274]
// 00a28879  57                   push edi
// 00a2887a  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2887e  ff157442b200         call dword ptr [0xb24274]
// 00a28884  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a28888  8d542418             lea edx, [esp + 0x18]
// 00a2888c  52                   push edx
// 00a2888d  50                   push eax
// 00a2888e  e89db9ffff           call 0xa24230
// 00a28893  8b8c2480000000       mov ecx, dword ptr [esp + 0x80]
// 00a2889a  2b4c2478             sub ecx, dword ptr [esp + 0x78]
// 00a2889e  83c408               add esp, 8
// 00a288a1  3bc1                 cmp eax, ecx
// 00a288a3  7e77                 jle 0xa2891c
// 00a288a5  83bc248000000000     cmp dword ptr [esp + 0x80], 0
// 00a288ad  746d                 je 0xa2891c
// 00a288af  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a288b3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a288b7  8b16                 mov edx, dword ptr [esi]
// 00a288b9  50                   push eax
// 00a288ba  8b442428             mov eax, dword ptr [esp + 0x28]
// 00a288be  49                   dec ecx
// 00a288bf  51                   push ecx
// 00a288c0  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00a288c4  8b92ec000000         mov edx, dword ptr [edx + 0xec]
// 00a288ca  48                   dec eax
// 00a288cb  50                   push eax
// 00a288cc  83ec10               sub esp, 0x10
// 00a288cf  8bc4                 mov eax, esp
// 00a288d1  8908                 mov dword ptr [eax], ecx
// 00a288d3  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a288d7  894804               mov dword ptr [eax + 4], ecx
// 00a288da  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a288de  894808               mov dword ptr [eax + 8], ecx
// 00a288e1  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a288e5  89480c               mov dword ptr [eax + 0xc], ecx
// 00a288e8  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a288ef  8d442438             lea eax, [esp + 0x38]
// 00a288f3  50                   push eax
// 00a288f4  51                   push ecx
// 00a288f5  8bce                 mov ecx, esi
// 00a288f7  ffd2                 call edx
// 00a288f9  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a288fd  8b442444             mov eax, dword ptr [esp + 0x44]
// 00a28901  0144244c             add dword ptr [esp + 0x4c], eax
// 00a28905  8bd5                 mov edx, ebp
// 00a28907  894c2448             mov dword ptr [esp + 0x48], ecx
// 00a2890b  2bd3                 sub edx, ebx
// 00a2890d  57                   push edi
// 00a2890e  8d4c241c             lea ecx, [esp + 0x1c]
// 00a28912  89542428             mov dword ptr [esp + 0x28], edx
// 00a28916  ff157847b200         call dword ptr [0xb24778]
// 00a2891c  896c2428             mov dword ptr [esp + 0x28], ebp
// 00a28920  c60700               mov byte ptr [edi], 0
// 00a28923  33db                 xor ebx, ebx
// 00a28925  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a28929  8a0428               mov al, byte ptr [eax + ebp]
// 00a2892c  88442417             mov byte ptr [esp + 0x17], al
// 00a28930  84c0                 test al, al
// 00a28932  0f859afdffff         jne 0xa286d2
// 00a28938  8d4c2418             lea ecx, [esp + 0x18]
// 00a2893c  ff155846b200         call dword ptr [0xb24658]
// 00a28942  85c0                 test eax, eax
// 00a28944  745f                 je 0xa289a5
// 00a28946  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a2894a  8b3e                 mov edi, dword ptr [esi]
// 00a2894c  8d4c2418             lea ecx, [esp + 0x18]
// 00a28950  51                   push ecx
// 00a28951  52                   push edx
// 00a28952  81c7ec000000         add edi, 0xec
// 00a28958  e8d3b8ffff           call 0xa24230
// 00a2895d  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00a28961  83c408               add esp, 8
// 00a28964  50                   push eax
// 00a28965  ff155846b200         call dword ptr [0xb24658]
// 00a2896b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00a2896f  8b542450             mov edx, dword ptr [esp + 0x50]
// 00a28973  50                   push eax
// 00a28974  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a28978  48                   dec eax
// 00a28979  50                   push eax
// 00a2897a  83ec10               sub esp, 0x10
// 00a2897d  8bc4                 mov eax, esp
// 00a2897f  8908                 mov dword ptr [eax], ecx
// 00a28981  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 00a28985  895004               mov dword ptr [eax + 4], edx
// 00a28988  8b542470             mov edx, dword ptr [esp + 0x70]
// 00a2898c  894808               mov dword ptr [eax + 8], ecx
// 00a2898f  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00a28996  89500c               mov dword ptr [eax + 0xc], edx
// 00a28999  8b17                 mov edx, dword ptr [edi]
// 00a2899b  8d442438             lea eax, [esp + 0x38]
// 00a2899f  50                   push eax
// 00a289a0  51                   push ecx
// 00a289a1  8bce                 mov ecx, esi
// 00a289a3  ffd2                 call edx
// 00a289a5  8d4c2418             lea ecx, [esp + 0x18]
// 00a289a9  ff15d047b200         call dword ptr [0xb247d0]
// 00a289af  8d4c2434             lea ecx, [esp + 0x34]
// 00a289b3  ff15d047b200         call dword ptr [0xb247d0]
// 00a289b9  8d4c241c             lea ecx, [esp + 0x1c]
// 00a289bd  ff15d047b200         call dword ptr [0xb247d0]
// 00a289c3  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a289c7  64890d00000000       mov dword ptr fs:[0], ecx
// 00a289ce  59                   pop ecx
// 00a289cf  5f                   pop edi
// 00a289d0  5e                   pop esi
// 00a289d1  5d                   pop ebp
// 00a289d2  5b                   pop ebx
// 00a289d3  83c450               add esp, 0x50
// 00a289d6  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawMultiLineText@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp