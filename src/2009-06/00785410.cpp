// roc 2009-06 00785410  unit: CXTPToolTipContextToolTip  size: 742 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00785410
//
// 00785410  6aff                 push -1
// 00785412  683ca58700           push 0x87a53c
// 00785417  64a100000000         mov eax, dword ptr fs:[0]
// 0078541d  50                   push eax
// 0078541e  83ec78               sub esp, 0x78
// 00785421  53                   push ebx
// 00785422  55                   push ebp
// 00785423  56                   push esi
// 00785424  57                   push edi
// 00785425  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0078542a  33c4                 xor eax, esp
// 0078542c  50                   push eax
// 0078542d  8d84248c000000       lea eax, [esp + 0x8c]
// 00785434  64a300000000         mov dword ptr fs:[0], eax
// 0078543a  8bf1                 mov esi, ecx
// 0078543c  56                   push esi
// 0078543d  8d4c247c             lea ecx, [esp + 0x7c]
// 00785441  e85c44f9ff           call 0x7198a2
// 00785446  8b466c               mov eax, dword ptr [esi + 0x6c]
// 00785449  0598000000           add eax, 0x98
// 0078544e  33ed                 xor ebp, ebp
// 00785450  50                   push eax
// 00785451  8d4c247c             lea ecx, [esp + 0x7c]
// 00785455  89ac2498000000       mov dword ptr [esp + 0x98], ebp
// 0078545c  e8836b0c00           call 0x84bfe4
// 00785461  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 00785468  51                   push ecx
// 00785469  8d542418             lea edx, [esp + 0x18]
// 0078546d  52                   push edx
// 0078546e  8bce                 mov ecx, esi
// 00785470  89442430             mov dword ptr [esp + 0x30], eax
// 00785474  e887f8ffff           call 0x784d00
// 00785479  8d4c2414             lea ecx, [esp + 0x14]
// 0078547d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00785485  ff155cfb8900         call dword ptr [0x89fb5c]
// 0078548b  84c0                 test al, al
// 0078548d  740f                 je 0x78549e
// 0078548f  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 00785496  896e04               mov dword ptr [esi + 4], ebp
// 00785499  e91a020000           jmp 0x7856b8
// 0078549e  8bce                 mov ecx, esi
// 007854a0  e84bffffff           call 0x7853f0
// 007854a5  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 007854a8  8b5144               mov edx, dword ptr [ecx + 0x44]
// 007854ab  8b7948               mov edi, dword ptr [ecx + 0x48]
// 007854ae  8b594c               mov ebx, dword ptr [ecx + 0x4c]
// 007854b1  8b4950               mov ecx, dword ptr [ecx + 0x50]
// 007854b4  8d4c3906             lea ecx, [ecx + edi + 6]
// 007854b8  8b7c2478             mov edi, dword ptr [esp + 0x78]
// 007854bc  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007854c0  8d4c1306             lea ecx, [ebx + edx + 6]
// 007854c4  8bd8                 mov ebx, eax
// 007854c6  2bd9                 sub ebx, ecx
// 007854c8  68100c0000           push 0xc10
// 007854cd  8d54244c             lea edx, [esp + 0x4c]
// 007854d1  894c2444             mov dword ptr [esp + 0x44], ecx
// 007854d5  52                   push edx
// 007854d6  8d4c241c             lea ecx, [esp + 0x1c]
// 007854da  896c2450             mov dword ptr [esp + 0x50], ebp
// 007854de  896c2454             mov dword ptr [esp + 0x54], ebp
// 007854e2  895c2458             mov dword ptr [esp + 0x58], ebx
// 007854e6  896c245c             mov dword ptr [esp + 0x5c], ebp
// 007854ea  83c770               add edi, 0x70
// 007854ed  ff1554fb8900         call dword ptr [0x89fb54]
// 007854f3  50                   push eax
// 007854f4  8d4c2420             lea ecx, [esp + 0x20]
// 007854f8  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007854fe  50                   push eax
// 007854ff  8b07                 mov eax, dword ptr [edi]
// 00785501  8d8c2488000000       lea ecx, [esp + 0x88]
// 00785508  ffd0                 call eax
// 0078550a  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 0078550e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00785512  2b7c244c             sub edi, dword ptr [esp + 0x4c]
// 00785516  2b6c2448             sub ebp, dword ptr [esp + 0x48]
// 0078551a  33c9                 xor ecx, ecx
// 0078551c  398e2c010000         cmp dword ptr [esi + 0x12c], ecx
// 00785522  897c243c             mov dword ptr [esp + 0x3c], edi
// 00785526  0f95c1               setne cl
// 00785529  894c2420             mov dword ptr [esp + 0x20], ecx
// 0078552d  8d8e28010000         lea ecx, [esi + 0x128]
// 00785533  894c2424             mov dword ptr [esp + 0x24], ecx
// 00785537  ff155cfb8900         call dword ptr [0x89fb5c]
// 0078553d  33d2                 xor edx, edx
// 0078553f  84c0                 test al, al
// 00785541  0f94c2               sete dl
// 00785544  837c242000           cmp dword ptr [esp + 0x20], 0
// 00785549  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00785551  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00785559  8954241c             mov dword ptr [esp + 0x1c], edx
// 0078555d  744f                 je 0x7855ae
// 0078555f  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785565  e84679fcff           call 0x74ceb0
// 0078556a  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00785570  89442418             mov dword ptr [esp + 0x18], eax
// 00785574  e8a72c0400           call 0x7c8220
// 00785579  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078557d  33d2                 xor edx, edx
// 0078557f  83f910               cmp ecx, 0x10
// 00785582  0f9ec2               setle dl
// 00785585  89442430             mov dword ptr [esp + 0x30], eax
// 00785589  894c2434             mov dword ptr [esp + 0x34], ecx
// 0078558d  89542418             mov dword ptr [esp + 0x18], edx
// 00785591  85d2                 test edx, edx
// 00785593  740d                 je 0x7855a2
// 00785595  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0078559a  750a                 jne 0x7855a6
// 0078559c  8d6c2803             lea ebp, [eax + ebp + 3]
// 007855a0  eb04                 jmp 0x7855a6
// 007855a2  8d6c2805             lea ebp, [eax + ebp + 5]
// 007855a6  3bf9                 cmp edi, ecx
// 007855a8  7f04                 jg 0x7855ae
// 007855aa  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007855ae  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 007855b3  0f84db000000         je 0x785694
// 007855b9  8b466c               mov eax, dword ptr [esi + 0x6c]
// 007855bc  05a0000000           add eax, 0xa0
// 007855c1  50                   push eax
// 007855c2  8d4c247c             lea ecx, [esp + 0x7c]
// 007855c6  51                   push ecx
// 007855c7  8d4c2470             lea ecx, [esp + 0x70]
// 007855cb  e890b2feff           call 0x770860
// 007855d0  8b742478             mov esi, dword ptr [esp + 0x78]
// 007855d4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007855d8  33c9                 xor ecx, ecx
// 007855da  68200c0000           push 0xc20
// 007855df  8d54245c             lea edx, [esp + 0x5c]
// 007855e3  8d43e7               lea eax, [ebx - 0x19]
// 007855e6  894c245c             mov dword ptr [esp + 0x5c], ecx
// 007855ea  894c2460             mov dword ptr [esp + 0x60], ecx
// 007855ee  894c2468             mov dword ptr [esp + 0x68], ecx
// 007855f2  52                   push edx
// 007855f3  8bcf                 mov ecx, edi
// 007855f5  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 007855fd  89442468             mov dword ptr [esp + 0x68], eax
// 00785601  83c670               add esi, 0x70
// 00785604  ff1554fb8900         call dword ptr [0x89fb54]
// 0078560a  50                   push eax
// 0078560b  8bcf                 mov ecx, edi
// 0078560d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00785613  50                   push eax
// 00785614  8b06                 mov eax, dword ptr [esi]
// 00785616  8d8c2488000000       lea ecx, [esp + 0x88]
// 0078561d  ffd0                 call eax
// 0078561f  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00785623  2b4c245c             sub ecx, dword ptr [esp + 0x5c]
// 00785627  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0078562b  8d440a14             lea eax, [edx + ecx + 0x14]
// 0078562f  8944243c             mov dword ptr [esp + 0x3c], eax
// 00785633  8b442460             mov eax, dword ptr [esp + 0x60]
// 00785637  2b442458             sub eax, dword ptr [esp + 0x58]
// 0078563b  8bd3                 mov edx, ebx
// 0078563d  83c004               add eax, 4
// 00785640  3bd8                 cmp ebx, eax
// 00785642  7c02                 jl 0x785646
// 00785644  8bd0                 mov edx, eax
// 00785646  8b742420             mov esi, dword ptr [esp + 0x20]
// 0078564a  85f6                 test esi, esi
// 0078564c  740e                 je 0x78565c
// 0078564e  837c241800           cmp dword ptr [esp + 0x18], 0
// 00785653  7407                 je 0x78565c
// 00785655  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00785659  41                   inc ecx
// 0078565a  eb02                 jmp 0x78565e
// 0078565c  33c9                 xor ecx, ecx
// 0078565e  83c519               add ebp, 0x19
// 00785661  03ca                 add ecx, edx
// 00785663  3be9                 cmp ebp, ecx
// 00785665  7f1c                 jg 0x785683
// 00785667  3bd8                 cmp ebx, eax
// 00785669  7c02                 jl 0x78566d
// 0078566b  8bd8                 mov ebx, eax
// 0078566d  85f6                 test esi, esi
// 0078566f  740e                 je 0x78567f
// 00785671  837c241800           cmp dword ptr [esp + 0x18], 0
// 00785676  7407                 je 0x78567f
// 00785678  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0078567c  45                   inc ebp
// 0078567d  eb02                 jmp 0x785681
// 0078567f  33ed                 xor ebp, ebp
// 00785681  03eb                 add ebp, ebx
// 00785683  8d4c2468             lea ecx, [esp + 0x68]
// 00785687  c684249400000001     mov byte ptr [esp + 0x94], 1
// 0078568f  e84cb2feff           call 0x7708e0
// 00785694  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00785698  51                   push ecx
// 00785699  8d4c247c             lea ecx, [esp + 0x7c]
// 0078569d  e842690c00           call 0x84bfe4
// 007856a2  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007856a6  036c2440             add ebp, dword ptr [esp + 0x40]
// 007856aa  0344242c             add eax, dword ptr [esp + 0x2c]
// 007856ae  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 007856b5  894604               mov dword ptr [esi + 4], eax
// 007856b8  8d4c2414             lea ecx, [esp + 0x14]
// 007856bc  892e                 mov dword ptr [esi], ebp
// 007856be  ff1510fd8900         call dword ptr [0x89fd10]
// 007856c4  8d4c2478             lea ecx, [esp + 0x78]
// 007856c8  c7842494000000ffffffff mov dword ptr [esp + 0x94], 0xffffffff
// 007856d3  e8c441f9ff           call 0x71989c
// 007856d8  8bc6                 mov eax, esi
// 007856da  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007856e1  64890d00000000       mov dword ptr fs:[0], ecx
// 007856e8  59                   pop ecx
// 007856e9  5f                   pop edi
// 007856ea  5e                   pop esi
// 007856eb  5d                   pop ebp
// 007856ec  5b                   pop ebx
// 007856ed  81c484000000         add esp, 0x84
// 007856f3  c20800               ret 8
// copied from an identical function in another client (function ?GetToolSize@CXTPToolTipContextToolTip@@MAE?AVCSize@@PAUTOOLITEM@1@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp