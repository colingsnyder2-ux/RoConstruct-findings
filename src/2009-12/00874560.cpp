// roc 2009-12 00874560  unit: CXTPRibbonTheme  size: 745 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00874560
//
// 00874560  83ec24               sub esp, 0x24
// 00874563  8b442430             mov eax, dword ptr [esp + 0x30]
// 00874567  53                   push ebx
// 00874568  55                   push ebp
// 00874569  56                   push esi
// 0087456a  8bd9                 mov ebx, ecx
// 0087456c  57                   push edi
// 0087456d  895c2410             mov dword ptr [esp + 0x10], ebx
// 00874571  85c0                 test eax, eax
// 00874573  0f859e020000         jne 0x874817
// 00874579  8b742448             mov esi, dword ptr [esp + 0x48]
// 0087457d  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 00874583  83f802               cmp eax, 2
// 00874586  7439                 je 0x8745c1
// 00874588  83f803               cmp eax, 3
// 0087458b  7434                 je 0x8745c1
// 0087458d  83f805               cmp eax, 5
// 00874590  742f                 je 0x8745c1
// 00874592  c744244000000000     mov dword ptr [esp + 0x40], 0
// 0087459a  b8e015a000           mov eax, 0xa015e0
// 0087459f  50                   push eax
// 008745a0  e85ba70000           call 0x87ed00
// 008745a5  8bf8                 mov edi, eax
// 008745a7  85ff                 test edi, edi
// 008745a9  7525                 jne 0x8745d0
// 008745ab  8b442450             mov eax, dword ptr [esp + 0x50]
// 008745af  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008745b3  8b542444             mov edx, dword ptr [esp + 0x44]
// 008745b7  50                   push eax
// 008745b8  51                   push ecx
// 008745b9  56                   push esi
// 008745ba  52                   push edx
// 008745bb  57                   push edi
// 008745bc  e96b020000           jmp 0x87482c
// 008745c1  c744244001000000     mov dword ptr [esp + 0x40], 1
// 008745c9  b8c415a000           mov eax, 0xa015c4
// 008745ce  ebcf                 jmp 0x87459f
// 008745d0  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 008745d5  754f                 jne 0x874626
// 008745d7  8b442450             mov eax, dword ptr [esp + 0x50]
// 008745db  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008745df  8b10                 mov edx, dword ptr [eax]
// 008745e1  8b7004               mov esi, dword ptr [eax + 4]
// 008745e4  8b29                 mov ebp, dword ptr [ecx]
// 008745e6  83ec10               sub esp, 0x10
// 008745e9  837c245000           cmp dword ptr [esp + 0x50], 0
// 008745ee  8bc4                 mov eax, esp
// 008745f0  751a                 jne 0x87460c
// 008745f2  8d7af4               lea edi, [edx - 0xc]
// 008745f5  8938                 mov dword ptr [eax], edi
// 008745f7  33db                 xor ebx, ebx
// 008745f9  895804               mov dword ptr [eax + 4], ebx
// 008745fc  895008               mov dword ptr [eax + 8], edx
// 008745ff  8b557c               mov edx, dword ptr [ebp + 0x7c]
// 00874602  89700c               mov dword ptr [eax + 0xc], esi
// 00874605  ffd2                 call edx
// 00874607  e9f0010000           jmp 0x8747fc
// 0087460c  33ff                 xor edi, edi
// 0087460e  8938                 mov dword ptr [eax], edi
// 00874610  8d5ef4               lea ebx, [esi - 0xc]
// 00874613  895804               mov dword ptr [eax + 4], ebx
// 00874616  895008               mov dword ptr [eax + 8], edx
// 00874619  89700c               mov dword ptr [eax + 0xc], esi
// 0087461c  8b457c               mov eax, dword ptr [ebp + 0x7c]
// 0087461f  ffd0                 call eax
// 00874621  e9d6010000           jmp 0x8747fc
// 00874626  8b742444             mov esi, dword ptr [esp + 0x44]
// 0087462a  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 00874630  8b96c4000000         mov edx, dword ptr [esi + 0xc4]
// 00874636  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 0087463c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00874640  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00874646  89542418             mov dword ptr [esp + 0x18], edx
// 0087464a  8b16                 mov edx, dword ptr [esi]
// 0087464c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00874650  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 00874656  894c2420             mov dword ptr [esp + 0x20], ecx
// 0087465a  8bce                 mov ecx, esi
// 0087465c  ffd0                 call eax
// 0087465e  85c0                 test eax, eax
// 00874660  7407                 je 0x874669
// 00874662  b802000000           mov eax, 2
// 00874667  eb0f                 jmp 0x874678
// 00874669  8b16                 mov edx, dword ptr [esi]
// 0087466b  8b426c               mov eax, dword ptr [edx + 0x6c]
// 0087466e  8bce                 mov ecx, esi
// 00874670  ffd0                 call eax
// 00874672  f7d8                 neg eax
// 00874674  1bc0                 sbb eax, eax
// 00874676  f7d8                 neg eax
// 00874678  bb03000000           mov ebx, 3
// 0087467d  53                   push ebx
// 0087467e  50                   push eax
// 0087467f  8d4c242c             lea ecx, [esp + 0x2c]
// 00874683  51                   push ecx
// 00874684  8bcf                 mov ecx, edi
// 00874686  8beb                 mov ebp, ebx
// 00874688  e833c20600           call 0x8e08c0
// 0087468d  83ec10               sub esp, 0x10
// 00874690  8bcc                 mov ecx, esp
// 00874692  8919                 mov dword ptr [ecx], ebx
// 00874694  896904               mov dword ptr [ecx + 4], ebp
// 00874697  8bd3                 mov edx, ebx
// 00874699  895108               mov dword ptr [ecx + 8], edx
// 0087469c  89510c               mov dword ptr [ecx + 0xc], edx
// 0087469f  8b10                 mov edx, dword ptr [eax]
// 008746a1  83ec10               sub esp, 0x10
// 008746a4  8bcc                 mov ecx, esp
// 008746a6  8911                 mov dword ptr [ecx], edx
// 008746a8  8b5004               mov edx, dword ptr [eax + 4]
// 008746ab  895104               mov dword ptr [ecx + 4], edx
// 008746ae  8b5008               mov edx, dword ptr [eax + 8]
// 008746b1  8b400c               mov eax, dword ptr [eax + 0xc]
// 008746b4  895108               mov dword ptr [ecx + 8], edx
// 008746b7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008746bb  89410c               mov dword ptr [ecx + 0xc], eax
// 008746be  8d4c2434             lea ecx, [esp + 0x34]
// 008746c2  51                   push ecx
// 008746c3  52                   push edx
// 008746c4  8bcf                 mov ecx, edi
// 008746c6  e8c5ba0600           call 0x8e0190
// 008746cb  8b06                 mov eax, dword ptr [esi]
// 008746cd  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008746d3  8bce                 mov ecx, esi
// 008746d5  ffd2                 call edx
// 008746d7  85c0                 test eax, eax
// 008746d9  7405                 je 0x8746e0
// 008746db  8d432b               lea eax, [ebx + 0x2b]
// 008746de  eb10                 jmp 0x8746f0
// 008746e0  8b06                 mov eax, dword ptr [esi]
// 008746e2  8b506c               mov edx, dword ptr [eax + 0x6c]
// 008746e5  8bce                 mov ecx, esi
// 008746e7  ffd2                 call edx
// 008746e9  f7d8                 neg eax
// 008746eb  1bc0                 sbb eax, eax
// 008746ed  83c02e               add eax, 0x2e
// 008746f0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008746f4  50                   push eax
// 008746f5  8bcb                 mov ecx, ebx
// 008746f7  e8448ff8ff           call 0x7fd640
// 008746fc  837c244000           cmp dword ptr [esp + 0x40], 0
// 00874701  8944244c             mov dword ptr [esp + 0x4c], eax
// 00874705  8b442450             mov eax, dword ptr [esp + 0x50]
// 00874709  8b08                 mov ecx, dword ptr [eax]
// 0087470b  894c2450             mov dword ptr [esp + 0x50], ecx
// 0087470f  750b                 jne 0x87471c
// 00874711  6a00                 push 0
// 00874713  6aff                 push -1
// 00874715  8d54241c             lea edx, [esp + 0x1c]
// 00874719  52                   push edx
// 0087471a  eb09                 jmp 0x874725
// 0087471c  6aff                 push -1
// 0087471e  6a00                 push 0
// 00874720  8d44241c             lea eax, [esp + 0x1c]
// 00874724  50                   push eax
// 00874725  ff156ccc9800         call dword ptr [0x98cc6c]
// 0087472b  8b742414             mov esi, dword ptr [esp + 0x14]
// 0087472f  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00874733  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00874737  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0087473b  8b542448             mov edx, dword ptr [esp + 0x48]
// 0087473f  2bc6                 sub eax, esi
// 00874741  2bcf                 sub ecx, edi
// 00874743  46                   inc esi
// 00874744  47                   inc edi
// 00874745  8d2c06               lea ebp, [esi + eax]
// 00874748  8b8200010000         mov eax, dword ptr [edx + 0x100]
// 0087474e  03cf                 add ecx, edi
// 00874750  894c2430             mov dword ptr [esp + 0x30], ecx
// 00874754  83f802               cmp eax, 2
// 00874757  7412                 je 0x87476b
// 00874759  83f803               cmp eax, 3
// 0087475c  740d                 je 0x87476b
// 0087475e  c744244400000000     mov dword ptr [esp + 0x44], 0
// 00874766  83f805               cmp eax, 5
// 00874769  7508                 jne 0x874773
// 0087476b  c744244401000000     mov dword ptr [esp + 0x44], 1
// 00874773  6a14                 push 0x14
// 00874775  8bcb                 mov ecx, ebx
// 00874777  e8c48ef8ff           call 0x7fd640
// 0087477c  8b542444             mov edx, dword ptr [esp + 0x44]
// 00874780  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00874784  50                   push eax
// 00874785  8b442454             mov eax, dword ptr [esp + 0x54]
// 00874789  50                   push eax
// 0087478a  83ec10               sub esp, 0x10
// 0087478d  8bc4                 mov eax, esp
// 0087478f  8930                 mov dword ptr [eax], esi
// 00874791  8b742454             mov esi, dword ptr [esp + 0x54]
// 00874795  897804               mov dword ptr [eax + 4], edi
// 00874798  896808               mov dword ptr [eax + 8], ebp
// 0087479b  52                   push edx
// 0087479c  89480c               mov dword ptr [eax + 0xc], ecx
// 0087479f  56                   push esi
// 008747a0  8bcb                 mov ecx, ebx
// 008747a2  e8d9000100           call 0x884880
// 008747a7  8b442448             mov eax, dword ptr [esp + 0x48]
// 008747ab  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008747b1  83f802               cmp eax, 2
// 008747b4  740e                 je 0x8747c4
// 008747b6  83f803               cmp eax, 3
// 008747b9  7409                 je 0x8747c4
// 008747bb  83f805               cmp eax, 5
// 008747be  7404                 je 0x8747c4
// 008747c0  33c9                 xor ecx, ecx
// 008747c2  eb05                 jmp 0x8747c9
// 008747c4  b901000000           mov ecx, 1
// 008747c9  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008747cd  8b442450             mov eax, dword ptr [esp + 0x50]
// 008747d1  52                   push edx
// 008747d2  8b542418             mov edx, dword ptr [esp + 0x18]
// 008747d6  50                   push eax
// 008747d7  83ec10               sub esp, 0x10
// 008747da  8bc4                 mov eax, esp
// 008747dc  8910                 mov dword ptr [eax], edx
// 008747de  8b542430             mov edx, dword ptr [esp + 0x30]
// 008747e2  895004               mov dword ptr [eax + 4], edx
// 008747e5  8b542434             mov edx, dword ptr [esp + 0x34]
// 008747e9  895008               mov dword ptr [eax + 8], edx
// 008747ec  8b542438             mov edx, dword ptr [esp + 0x38]
// 008747f0  51                   push ecx
// 008747f1  56                   push esi
// 008747f2  8bcb                 mov ecx, ebx
// 008747f4  89500c               mov dword ptr [eax + 0xc], edx
// 008747f7  e884000100           call 0x884880
// 008747fc  8b442438             mov eax, dword ptr [esp + 0x38]
// 00874800  c70000000000         mov dword ptr [eax], 0
// 00874806  c7400400000000       mov dword ptr [eax + 4], 0
// 0087480d  5f                   pop edi
// 0087480e  5e                   pop esi
// 0087480f  5d                   pop ebp
// 00874810  5b                   pop ebx
// 00874811  83c424               add esp, 0x24
// 00874814  c21c00               ret 0x1c
// 00874817  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0087481b  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0087481f  51                   push ecx
// 00874820  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00874824  52                   push edx
// 00874825  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00874829  51                   push ecx
// 0087482a  52                   push edx
// 0087482b  50                   push eax
// 0087482c  8b442450             mov eax, dword ptr [esp + 0x50]
// 00874830  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00874834  50                   push eax
// 00874835  56                   push esi
// 00874836  8bcb                 mov ecx, ebx
// 00874838  e833020100           call 0x884a70
// 0087483d  5f                   pop edi
// 0087483e  8bc6                 mov eax, esi
// 00874840  5e                   pop esi
// 00874841  5d                   pop ebp
// 00874842  5b                   pop ebx
// 00874843  83c424               add esp, 0x24
// 00874846  c21c00               ret 0x1c
// copied from an identical function in another client (function ?DrawSpecialControl@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@W4XTPSpecialControl@@PAVCXTPControl@@PAVCXTPCommandBar@@HPAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp