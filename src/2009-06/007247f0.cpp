// roc 2009-06 007247f0  unit: CXTPPaintManager  size: 903 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007247f0
//
// 007247f0  6aff                 push -1
// 007247f2  68924f8700           push 0x874f92
// 007247f7  64a100000000         mov eax, dword ptr fs:[0]
// 007247fd  50                   push eax
// 007247fe  83ec1c               sub esp, 0x1c
// 00724801  53                   push ebx
// 00724802  55                   push ebp
// 00724803  56                   push esi
// 00724804  57                   push edi
// 00724805  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0072480a  33c4                 xor eax, esp
// 0072480c  50                   push eax
// 0072480d  8d442430             lea eax, [esp + 0x30]
// 00724811  64a300000000         mov dword ptr fs:[0], eax
// 00724817  8bd9                 mov ebx, ecx
// 00724819  8b742448             mov esi, dword ptr [esp + 0x48]
// 0072481d  8b06                 mov eax, dword ptr [esi]
// 0072481f  8b5058               mov edx, dword ptr [eax + 0x58]
// 00724822  8d4c2414             lea ecx, [esp + 0x14]
// 00724826  51                   push ecx
// 00724827  8bce                 mov ecx, esi
// 00724829  ffd2                 call edx
// 0072482b  8d442414             lea eax, [esp + 0x14]
// 0072482f  50                   push eax
// 00724830  8d4c244c             lea ecx, [esp + 0x4c]
// 00724834  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0072483c  ff15e4fc8900         call dword ptr [0x89fce4]
// 00724842  8d4c2448             lea ecx, [esp + 0x48]
// 00724846  51                   push ecx
// 00724847  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0072484c  e8bfe1ffff           call 0x722a10
// 00724851  83c404               add esp, 4
// 00724854  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00724859  0f85c6000000         jne 0x724925
// 0072485f  8d4c2448             lea ecx, [esp + 0x48]
// 00724863  ff155cfb8900         call dword ptr [0x89fb5c]
// 00724869  84c0                 test al, al
// 0072486b  7407                 je 0x724874
// 0072486d  b8f8338b00           mov eax, 0x8b33f8
// 00724872  eb0a                 jmp 0x72487e
// 00724874  8d4c2448             lea ecx, [esp + 0x48]
// 00724878  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0072487e  50                   push eax
// 0072487f  8d4c2468             lea ecx, [esp + 0x68]
// 00724883  ff1508fd8900         call dword ptr [0x89fd08]
// 00724889  8d542420             lea edx, [esp + 0x20]
// 0072488d  52                   push edx
// 0072488e  8d4c2468             lea ecx, [esp + 0x68]
// 00724892  ff1554fb8900         call dword ptr [0x89fb54]
// 00724898  50                   push eax
// 00724899  8d4c246c             lea ecx, [esp + 0x6c]
// 0072489d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007248a3  50                   push eax
// 007248a4  8b442450             mov eax, dword ptr [esp + 0x50]
// 007248a8  8b4808               mov ecx, dword ptr [eax + 8]
// 007248ab  51                   push ecx
// 007248ac  ff1550e18900         call dword ptr [0x89e150]
// 007248b2  8b742420             mov esi, dword ptr [esp + 0x20]
// 007248b6  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007248ba  8d4c2464             lea ecx, [esp + 0x64]
// 007248be  89742418             mov dword ptr [esp + 0x18], esi
// 007248c2  897c241c             mov dword ptr [esp + 0x1c], edi
// 007248c6  ff1510fd8900         call dword ptr [0x89fd10]
// 007248cc  837c246800           cmp dword ptr [esp + 0x68], 0
// 007248d1  7415                 je 0x7248e8
// 007248d3  33d2                 xor edx, edx
// 007248d5  39938c000000         cmp dword ptr [ebx + 0x8c], edx
// 007248db  0f94c2               sete dl
// 007248de  8d541208             lea edx, [edx + edx + 8]
// 007248e2  03f2                 add esi, edx
// 007248e4  89742418             mov dword ptr [esp + 0x18], esi
// 007248e8  837c246000           cmp dword ptr [esp + 0x60], 0
// 007248ed  741f                 je 0x72490e
// 007248ef  89742424             mov dword ptr [esp + 0x24], esi
// 007248f3  8b742440             mov esi, dword ptr [esp + 0x40]
// 007248f7  8d442420             lea eax, [esp + 0x20]
// 007248fb  897c2420             mov dword ptr [esp + 0x20], edi
// 007248ff  8b08                 mov ecx, dword ptr [eax]
// 00724901  8b5004               mov edx, dword ptr [eax + 4]
// 00724904  890e                 mov dword ptr [esi], ecx
// 00724906  895604               mov dword ptr [esi + 4], edx
// 00724909  e93d020000           jmp 0x724b4b
// 0072490e  8b742440             mov esi, dword ptr [esp + 0x40]
// 00724912  8d442418             lea eax, [esp + 0x18]
// 00724916  8b08                 mov ecx, dword ptr [eax]
// 00724918  8b5004               mov edx, dword ptr [eax + 4]
// 0072491b  890e                 mov dword ptr [esi], ecx
// 0072491d  895604               mov dword ptr [esi + 4], edx
// 00724920  e926020000           jmp 0x724b4b
// 00724925  837c246000           cmp dword ptr [esp + 0x60], 0
// 0072492a  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 0072492e  0f85e0000000         jne 0x724a14
// 00724934  8d442448             lea eax, [esp + 0x48]
// 00724938  50                   push eax
// 00724939  8d4c2424             lea ecx, [esp + 0x24]
// 0072493d  51                   push ecx
// 0072493e  8bcd                 mov ecx, ebp
// 00724940  e8bbded3ff           call 0x462800
// 00724945  8b7c2468             mov edi, dword ptr [esp + 0x68]
// 00724949  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0072494d  f7df                 neg edi
// 0072494f  1bff                 sbb edi, edi
// 00724951  83e705               and edi, 5
// 00724954  0338                 add edi, dword ptr [eax]
// 00724956  837c246400           cmp dword ptr [esp + 0x64], 0
// 0072495b  7411                 je 0x72496e
// 0072495d  8bc1                 mov eax, ecx
// 0072495f  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00724963  2bc7                 sub eax, edi
// 00724965  99                   cdq 
// 00724966  2bc2                 sub eax, edx
// 00724968  d1f8                 sar eax, 1
// 0072496a  0144244c             add dword ptr [esp + 0x4c], eax
// 0072496e  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 00724972  6a00                 push 0
// 00724974  6a00                 push 0
// 00724976  83ec10               sub esp, 0x10
// 00724979  8bc4                 mov eax, esp
// 0072497b  8910                 mov dword ptr [eax], edx
// 0072497d  8b542468             mov edx, dword ptr [esp + 0x68]
// 00724981  895004               mov dword ptr [eax + 4], edx
// 00724984  894808               mov dword ptr [eax + 8], ecx
// 00724987  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0072498b  89480c               mov dword ptr [eax + 0xc], ecx
// 0072498e  8d542460             lea edx, [esp + 0x60]
// 00724992  52                   push edx
// 00724993  8d442430             lea eax, [esp + 0x30]
// 00724997  50                   push eax
// 00724998  56                   push esi
// 00724999  55                   push ebp
// 0072499a  8bcb                 mov ecx, ebx
// 0072499c  e88ff5ffff           call 0x723f30
// 007249a1  837c246800           cmp dword ptr [esp + 0x68], 0
// 007249a6  0f848e010000         je 0x724b3a
// 007249ac  8b542450             mov edx, dword ptr [esp + 0x50]
// 007249b0  8b442458             mov eax, dword ptr [esp + 0x58]
// 007249b4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007249b8  03c2                 add eax, edx
// 007249ba  99                   cdq 
// 007249bb  03cf                 add ecx, edi
// 007249bd  2bc2                 sub eax, edx
// 007249bf  8bf8                 mov edi, eax
// 007249c1  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 007249c7  d1ff                 sar edi, 1
// 007249c9  894c2420             mov dword ptr [esp + 0x20], ecx
// 007249cd  83f8ff               cmp eax, -1
// 007249d0  750f                 jne 0x7249e1
// 007249d2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 007249d8  85c9                 test ecx, ecx
// 007249da  7405                 je 0x7249e1
// 007249dc  e8bfb4ffff           call 0x71fea0
// 007249e1  8b16                 mov edx, dword ptr [esi]
// 007249e3  8b2b                 mov ebp, dword ptr [ebx]
// 007249e5  6a00                 push 0
// 007249e7  50                   push eax
// 007249e8  8b82b4000000         mov eax, dword ptr [edx + 0xb4]
// 007249ee  8bce                 mov ecx, esi
// 007249f0  ffd0                 call eax
// 007249f2  8b16                 mov edx, dword ptr [esi]
// 007249f4  50                   push eax
// 007249f5  8b426c               mov eax, dword ptr [edx + 0x6c]
// 007249f8  8bce                 mov ecx, esi
// 007249fa  ffd0                 call eax
// 007249fc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00724a00  8b542450             mov edx, dword ptr [esp + 0x50]
// 00724a04  50                   push eax
// 00724a05  8b85f4000000         mov eax, dword ptr [ebp + 0xf4]
// 00724a0b  57                   push edi
// 00724a0c  51                   push ecx
// 00724a0d  56                   push esi
// 00724a0e  52                   push edx
// 00724a0f  e922010000           jmp 0x724b36
// 00724a14  8b542450             mov edx, dword ptr [esp + 0x50]
// 00724a18  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00724a1c  8b442454             mov eax, dword ptr [esp + 0x54]
// 00724a20  894c2420             mov dword ptr [esp + 0x20], ecx
// 00724a24  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00724a28  89542424             mov dword ptr [esp + 0x24], edx
// 00724a2c  8d542448             lea edx, [esp + 0x48]
// 00724a30  89442428             mov dword ptr [esp + 0x28], eax
// 00724a34  52                   push edx
// 00724a35  8d44241c             lea eax, [esp + 0x1c]
// 00724a39  894c2430             mov dword ptr [esp + 0x30], ecx
// 00724a3d  50                   push eax
// 00724a3e  8bcd                 mov ecx, ebp
// 00724a40  e8bbddd3ff           call 0x462800
// 00724a45  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00724a49  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00724a4d  f7d9                 neg ecx
// 00724a4f  1bc9                 sbb ecx, ecx
// 00724a51  8bc7                 mov eax, edi
// 00724a53  2b44241c             sub eax, dword ptr [esp + 0x1c]
// 00724a57  83e105               and ecx, 5
// 00724a5a  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00724a5e  014c2418             add dword ptr [esp + 0x18], ecx
// 00724a62  40                   inc eax
// 00724a63  99                   cdq 
// 00724a64  2bc2                 sub eax, edx
// 00724a66  d1f8                 sar eax, 1
// 00724a68  8bcf                 mov ecx, edi
// 00724a6a  2bc8                 sub ecx, eax
// 00724a6c  837c246400           cmp dword ptr [esp + 0x64], 0
// 00724a71  894c244c             mov dword ptr [esp + 0x4c], ecx
// 00724a75  7416                 je 0x724a8d
// 00724a77  8b442458             mov eax, dword ptr [esp + 0x58]
// 00724a7b  2b442450             sub eax, dword ptr [esp + 0x50]
// 00724a7f  2b442418             sub eax, dword ptr [esp + 0x18]
// 00724a83  40                   inc eax
// 00724a84  99                   cdq 
// 00724a85  2bc2                 sub eax, edx
// 00724a87  d1f8                 sar eax, 1
// 00724a89  01442450             add dword ptr [esp + 0x50], eax
// 00724a8d  8b542460             mov edx, dword ptr [esp + 0x60]
// 00724a91  6a00                 push 0
// 00724a93  52                   push edx
// 00724a94  8b542460             mov edx, dword ptr [esp + 0x60]
// 00724a98  83ec10               sub esp, 0x10
// 00724a9b  8bc4                 mov eax, esp
// 00724a9d  8908                 mov dword ptr [eax], ecx
// 00724a9f  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00724aa3  894804               mov dword ptr [eax + 4], ecx
// 00724aa6  897808               mov dword ptr [eax + 8], edi
// 00724aa9  89500c               mov dword ptr [eax + 0xc], edx
// 00724aac  8d442460             lea eax, [esp + 0x60]
// 00724ab0  50                   push eax
// 00724ab1  8d4c2430             lea ecx, [esp + 0x30]
// 00724ab5  51                   push ecx
// 00724ab6  56                   push esi
// 00724ab7  55                   push ebp
// 00724ab8  8bcb                 mov ecx, ebx
// 00724aba  e871f4ffff           call 0x723f30
// 00724abf  837c246800           cmp dword ptr [esp + 0x68], 0
// 00724ac4  7474                 je 0x724b3a
// 00724ac6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00724aca  8b442420             mov eax, dword ptr [esp + 0x20]
// 00724ace  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00724ad2  03c2                 add eax, edx
// 00724ad4  99                   cdq 
// 00724ad5  2bc2                 sub eax, edx
// 00724ad7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00724adb  8bf8                 mov edi, eax
// 00724add  8d4411ff             lea eax, [ecx + edx - 1]
// 00724ae1  89442424             mov dword ptr [esp + 0x24], eax
// 00724ae5  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 00724aeb  d1ff                 sar edi, 1
// 00724aed  83f8ff               cmp eax, -1
// 00724af0  750f                 jne 0x724b01
// 00724af2  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00724af8  85c9                 test ecx, ecx
// 00724afa  7405                 je 0x724b01
// 00724afc  e89fb3ffff           call 0x71fea0
// 00724b01  8b542460             mov edx, dword ptr [esp + 0x60]
// 00724b05  8b0b                 mov ecx, dword ptr [ebx]
// 00724b07  52                   push edx
// 00724b08  50                   push eax
// 00724b09  8b06                 mov eax, dword ptr [esi]
// 00724b0b  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00724b11  894c2470             mov dword ptr [esp + 0x70], ecx
// 00724b15  8bce                 mov ecx, esi
// 00724b17  ffd2                 call edx
// 00724b19  50                   push eax
// 00724b1a  8b06                 mov eax, dword ptr [esi]
// 00724b1c  8b506c               mov edx, dword ptr [eax + 0x6c]
// 00724b1f  8bce                 mov ecx, esi
// 00724b21  ffd2                 call edx
// 00724b23  8b542474             mov edx, dword ptr [esp + 0x74]
// 00724b27  50                   push eax
// 00724b28  8b442434             mov eax, dword ptr [esp + 0x34]
// 00724b2c  50                   push eax
// 00724b2d  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 00724b33  57                   push edi
// 00724b34  56                   push esi
// 00724b35  55                   push ebp
// 00724b36  8bcb                 mov ecx, ebx
// 00724b38  ffd0                 call eax
// 00724b3a  8b742440             mov esi, dword ptr [esp + 0x40]
// 00724b3e  c70600000000         mov dword ptr [esi], 0
// 00724b44  c7460400000000       mov dword ptr [esi + 4], 0
// 00724b4b  8d4c2448             lea ecx, [esp + 0x48]
// 00724b4f  ff1510fd8900         call dword ptr [0x89fd10]
// 00724b55  8d4c2414             lea ecx, [esp + 0x14]
// 00724b59  ff1510fd8900         call dword ptr [0x89fd10]
// 00724b5f  8bc6                 mov eax, esi
// 00724b61  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00724b65  64890d00000000       mov dword ptr fs:[0], ecx
// 00724b6c  59                   pop ecx
// 00724b6d  5f                   pop edi
// 00724b6e  5e                   pop esi
// 00724b6f  5d                   pop ebp
// 00724b70  5b                   pop ebx
// 00724b71  83c428               add esp, 0x28
// 00724b74  c22c00               ret 0x2c
// copied from an identical function in another client (function ?DrawControlText@CXTPPaintManager@@QAE?AVCSize@@PAVCDC@@PAVCXTPControl@@VCRect@@HHHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp