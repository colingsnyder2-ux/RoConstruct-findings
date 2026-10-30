// roc 2009-06 007c7290  unit: CXTPReportInplaceList  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c7290
//
// 007c7290  6aff                 push -1
// 007c7292  6892e18700           push 0x87e192
// 007c7297  64a100000000         mov eax, dword ptr fs:[0]
// 007c729d  50                   push eax
// 007c729e  83ec74               sub esp, 0x74
// 007c72a1  53                   push ebx
// 007c72a2  55                   push ebp
// 007c72a3  56                   push esi
// 007c72a4  57                   push edi
// 007c72a5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c72aa  33c4                 xor eax, esp
// 007c72ac  50                   push eax
// 007c72ad  8d842488000000       lea eax, [esp + 0x88]
// 007c72b4  64a300000000         mov dword ptr fs:[0], eax
// 007c72ba  8bf1                 mov esi, ecx
// 007c72bc  8b4654               mov eax, dword ptr [esi + 0x54]
// 007c72bf  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 007c72c6  8b5004               mov edx, dword ptr [eax + 4]
// 007c72c9  8d4e54               lea ecx, [esi + 0x54]
// 007c72cc  53                   push ebx
// 007c72cd  ffd2                 call edx
// 007c72cf  8b4314               mov eax, dword ptr [ebx + 0x14]
// 007c72d2  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 007c72d5  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 007c72d8  89442444             mov dword ptr [esp + 0x44], eax
// 007c72dc  8b4320               mov eax, dword ptr [ebx + 0x20]
// 007c72df  33ed                 xor ebp, ebp
// 007c72e1  894c2448             mov dword ptr [esp + 0x48], ecx
// 007c72e5  8954244c             mov dword ptr [esp + 0x4c], edx
// 007c72e9  89442450             mov dword ptr [esp + 0x50], eax
// 007c72ed  396e20               cmp dword ptr [esi + 0x20], ebp
// 007c72f0  7552                 jne 0x7c7344
// 007c72f2  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007c72f5  55                   push ebp
// 007c72f6  55                   push ebp
// 007c72f7  51                   push ecx
// 007c72f8  8d542438             lea edx, [esp + 0x38]
// 007c72fc  52                   push edx
// 007c72fd  680100a040           push 0x40a00001
// 007c7302  6816d28a00           push 0x8ad216
// 007c7307  68981e8f00           push 0x8f1e98
// 007c730c  896c2448             mov dword ptr [esp + 0x48], ebp
// 007c7310  896c244c             mov dword ptr [esp + 0x4c], ebp
// 007c7314  896c2450             mov dword ptr [esp + 0x50], ebp
// 007c7318  896c2454             mov dword ptr [esp + 0x54], ebp
// 007c731c  e8c14b0800           call 0x84bee2
// 007c7321  2500004000           and eax, 0x400000
// 007c7326  0d80000000           or eax, 0x80
// 007c732b  50                   push eax
// 007c732c  8bce                 mov ecx, esi
// 007c732e  e87717f5ff           call 0x718aaa
// 007c7333  8b4658               mov eax, dword ptr [esi + 0x58]
// 007c7336  3bc5                 cmp eax, ebp
// 007c7338  7405                 je 0x7c733f
// 007c733a  8b4020               mov eax, dword ptr [eax + 0x20]
// 007c733d  eb02                 jmp 0x7c7341
// 007c733f  33c0                 xor eax, eax
// 007c7341  894638               mov dword ptr [esi + 0x38], eax
// 007c7344  8b4658               mov eax, dword ptr [esi + 0x58]
// 007c7347  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 007c734d  83c020               add eax, 0x20
// 007c7350  3bc5                 cmp eax, ebp
// 007c7352  7504                 jne 0x7c7358
// 007c7354  33c0                 xor eax, eax
// 007c7356  eb03                 jmp 0x7c735b
// 007c7358  8b4004               mov eax, dword ptr [eax + 4]
// 007c735b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c735e  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007c7364  6a01                 push 1
// 007c7366  50                   push eax
// 007c7367  6a30                 push 0x30
// 007c7369  51                   push ecx
// 007c736a  ffd7                 call edi
// 007c736c  8b5620               mov edx, dword ptr [esi + 0x20]
// 007c736f  55                   push ebp
// 007c7370  55                   push ebp
// 007c7371  6884010000           push 0x184
// 007c7376  52                   push edx
// 007c7377  ffd7                 call edi
// 007c7379  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 007c737d  2b6c2444             sub ebp, dword ptr [esp + 0x44]
// 007c7381  8b4658               mov eax, dword ptr [esi + 0x58]
// 007c7384  50                   push eax
// 007c7385  8d4c2478             lea ecx, [esp + 0x78]
// 007c7389  45                   inc ebp
// 007c738a  e86b4b0800           call 0x84befa
// 007c738f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c7392  6a00                 push 0
// 007c7394  6a00                 push 0
// 007c7396  6a31                 push 0x31
// 007c7398  51                   push ecx
// 007c7399  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 007c73a4  ffd7                 call edi
// 007c73a6  50                   push eax
// 007c73a7  e88a21f5ff           call 0x719536
// 007c73ac  50                   push eax
// 007c73ad  8d542478             lea edx, [esp + 0x78]
// 007c73b1  52                   push edx
// 007c73b2  8d4c246c             lea ecx, [esp + 0x6c]
// 007c73b6  e8a594faff           call 0x770860
// 007c73bb  6a0a                 push 0xa
// 007c73bd  c684249400000001     mov byte ptr [esp + 0x94], 1
// 007c73c5  ff15dced8900         call dword ptr [0x89eddc]
// 007c73cb  8b5660               mov edx, dword ptr [esi + 0x60]
// 007c73ce  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007c73d1  89442420             mov dword ptr [esp + 0x20], eax
// 007c73d5  8b01                 mov eax, dword ptr [ecx]
// 007c73d7  8b406c               mov eax, dword ptr [eax + 0x6c]
// 007c73da  52                   push edx
// 007c73db  8d542420             lea edx, [esp + 0x20]
// 007c73df  52                   push edx
// 007c73e0  ffd0                 call eax
// 007c73e2  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 007c73e5  8b11                 mov edx, dword ptr [ecx]
// 007c73e7  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 007c73ed  53                   push ebx
// 007c73ee  c684249400000002     mov byte ptr [esp + 0x94], 2
// 007c73f6  ffd0                 call eax
// 007c73f8  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007c73ff  89442424             mov dword ptr [esp + 0x24], eax
// 007c7403  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007c740b  e8100e0000           call 0x7c8220
// 007c7410  85c0                 test eax, eax
// 007c7412  0f8e2e010000         jle 0x7c7546
// 007c7418  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c741c  51                   push ecx
// 007c741d  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 007c7424  e8370d0000           call 0x7c8160
// 007c7429  8bd8                 mov ebx, eax
// 007c742b  8d5320               lea edx, [ebx + 0x20]
// 007c742e  52                   push edx
// 007c742f  8d4c2418             lea ecx, [esp + 0x18]
// 007c7433  ff15e4fc8900         call dword ptr [0x89fce4]
// 007c7439  8d4c2414             lea ecx, [esp + 0x14]
// 007c743d  c684249000000003     mov byte ptr [esp + 0x90], 3
// 007c7445  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c744b  50                   push eax
// 007c744c  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c744f  6a00                 push 0
// 007c7451  6880010000           push 0x180
// 007c7456  50                   push eax
// 007c7457  ffd7                 call edi
// 007c7459  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c745c  53                   push ebx
// 007c745d  50                   push eax
// 007c745e  689a010000           push 0x19a
// 007c7463  51                   push ecx
// 007c7464  89442438             mov dword ptr [esp + 0x38], eax
// 007c7468  ffd7                 call edi
// 007c746a  8d54242c             lea edx, [esp + 0x2c]
// 007c746e  52                   push edx
// 007c746f  8d4c2418             lea ecx, [esp + 0x18]
// 007c7473  ff1554fb8900         call dword ptr [0x89fb54]
// 007c7479  50                   push eax
// 007c747a  8d4c241c             lea ecx, [esp + 0x1c]
// 007c747e  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c7484  50                   push eax
// 007c7485  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 007c748c  50                   push eax
// 007c748d  ff1550e18900         call dword ptr [0x89e150]
// 007c7493  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007c7497  8b542420             mov edx, dword ptr [esp + 0x20]
// 007c749b  03ca                 add ecx, edx
// 007c749d  3be9                 cmp ebp, ecx
// 007c749f  7f34                 jg 0x7c74d5
// 007c74a1  8d44243c             lea eax, [esp + 0x3c]
// 007c74a5  50                   push eax
// 007c74a6  8d4c2418             lea ecx, [esp + 0x18]
// 007c74aa  ff1554fb8900         call dword ptr [0x89fb54]
// 007c74b0  50                   push eax
// 007c74b1  8d4c241c             lea ecx, [esp + 0x1c]
// 007c74b5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c74bb  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 007c74c2  50                   push eax
// 007c74c3  51                   push ecx
// 007c74c4  ff1550e18900         call dword ptr [0x89e150]
// 007c74ca  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007c74ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c74d2  8d2c02               lea ebp, [edx + eax]
// 007c74d5  837c2424ff           cmp dword ptr [esp + 0x24], -1
// 007c74da  7519                 jne 0x7c74f5
// 007c74dc  8d4c2414             lea ecx, [esp + 0x14]
// 007c74e0  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c74e6  50                   push eax
// 007c74e7  8d4c2420             lea ecx, [esp + 0x20]
// 007c74eb  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007c74f1  85c0                 test eax, eax
// 007c74f3  7409                 je 0x7c74fe
// 007c74f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007c74f9  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 007c74fc  7512                 jne 0x7c7510
// 007c74fe  8b542428             mov edx, dword ptr [esp + 0x28]
// 007c7502  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c7505  6a00                 push 0
// 007c7507  52                   push edx
// 007c7508  6886010000           push 0x186
// 007c750d  50                   push eax
// 007c750e  ffd7                 call edi
// 007c7510  8d4c2414             lea ecx, [esp + 0x14]
// 007c7514  c684249000000002     mov byte ptr [esp + 0x90], 2
// 007c751c  ff1510fd8900         call dword ptr [0x89fd10]
// 007c7522  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007c7526  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 007c752d  43                   inc ebx
// 007c752e  895c2418             mov dword ptr [esp + 0x18], ebx
// 007c7532  e8e90c0000           call 0x7c8220
// 007c7537  3bd8                 cmp ebx, eax
// 007c7539  0f8cd9feffff         jl 0x7c7418
// 007c753f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 007c7546  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c7549  6a00                 push 0
// 007c754b  6a00                 push 0
// 007c754d  68a1010000           push 0x1a1
// 007c7552  51                   push ecx
// 007c7553  ffd7                 call edi
// 007c7555  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c7559  6a00                 push 0
// 007c755b  6a00                 push 0
// 007c755d  89442430             mov dword ptr [esp + 0x30], eax
// 007c7561  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c7564  688b010000           push 0x18b
// 007c7569  50                   push eax
// 007c756a  89542458             mov dword ptr [esp + 0x58], edx
// 007c756e  ffd7                 call edi
// 007c7570  83f80a               cmp eax, 0xa
// 007c7573  7e07                 jle 0x7c757c
// 007c7575  b80a000000           mov eax, 0xa
// 007c757a  eb0f                 jmp 0x7c758b
// 007c757c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c757f  6a00                 push 0
// 007c7581  6a00                 push 0
// 007c7583  688b010000           push 0x18b
// 007c7588  51                   push ecx
// 007c7589  ffd7                 call edi
// 007c758b  0faf442428           imul eax, dword ptr [esp + 0x28]
// 007c7590  8b542450             mov edx, dword ptr [esp + 0x50]
// 007c7594  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c7598  8d440202             lea eax, [edx + eax + 2]
// 007c759c  2bcd                 sub ecx, ebp
// 007c759e  8d542444             lea edx, [esp + 0x44]
// 007c75a2  894c2444             mov dword ptr [esp + 0x44], ecx
// 007c75a6  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007c75a9  52                   push edx
// 007c75aa  89442454             mov dword ptr [esp + 0x54], eax
// 007c75ae  e81f1af5ff           call 0x718fd2
// 007c75b3  8d442444             lea eax, [esp + 0x44]
// 007c75b7  50                   push eax
// 007c75b8  8d4c2458             lea ecx, [esp + 0x58]
// 007c75bc  51                   push ecx
// 007c75bd  e8dea3f9ff           call 0x7619a0
// 007c75c2  8bc8                 mov ecx, eax
// 007c75c4  e8379ff9ff           call 0x761500
// 007c75c9  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c75cd  8b442460             mov eax, dword ptr [esp + 0x60]
// 007c75d1  3bc8                 cmp ecx, eax
// 007c75d3  8b3df8ed8900         mov edi, dword ptr [0x89edf8]
// 007c75d9  7e27                 jle 0x7c7602
// 007c75db  8b542458             mov edx, dword ptr [esp + 0x58]
// 007c75df  03c2                 add eax, edx
// 007c75e1  99                   cdq 
// 007c75e2  2bc2                 sub eax, edx
// 007c75e4  8b542448             mov edx, dword ptr [esp + 0x48]
// 007c75e8  d1f8                 sar eax, 1
// 007c75ea  3bd0                 cmp edx, eax
// 007c75ec  7e14                 jle 0x7c7602
// 007c75ee  8b4318               mov eax, dword ptr [ebx + 0x18]
// 007c75f1  2b4320               sub eax, dword ptr [ebx + 0x20]
// 007c75f4  2bc1                 sub eax, ecx
// 007c75f6  03c2                 add eax, edx
// 007c75f8  50                   push eax
// 007c75f9  6a00                 push 0
// 007c75fb  8d44244c             lea eax, [esp + 0x4c]
// 007c75ff  50                   push eax
// 007c7600  ffd7                 call edi
// 007c7602  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007c7606  8b442454             mov eax, dword ptr [esp + 0x54]
// 007c760a  3bc8                 cmp ecx, eax
// 007c760c  7d0c                 jge 0x7c761a
// 007c760e  2bc1                 sub eax, ecx
// 007c7610  6a00                 push 0
// 007c7612  50                   push eax
// 007c7613  8d4c244c             lea ecx, [esp + 0x4c]
// 007c7617  51                   push ecx
// 007c7618  ffd7                 call edi
// 007c761a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c761e  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007c7622  3bc8                 cmp ecx, eax
// 007c7624  7e0c                 jle 0x7c7632
// 007c7626  6a00                 push 0
// 007c7628  2bc1                 sub eax, ecx
// 007c762a  50                   push eax
// 007c762b  8d54244c             lea edx, [esp + 0x4c]
// 007c762f  52                   push edx
// 007c7630  ffd7                 call edi
// 007c7632  8bce                 mov ecx, esi
// 007c7634  e8a117f5ff           call 0x718dda
// 007c7639  8b4620               mov eax, dword ptr [esi + 0x20]
// 007c763c  85c0                 test eax, eax
// 007c763e  7462                 je 0x7c76a2
// 007c7640  8b3d34ed8900         mov edi, dword ptr [0x89ed34]
// 007c7646  6a00                 push 0
// 007c7648  6af8                 push -8
// 007c764a  50                   push eax
// 007c764b  ffd7                 call edi
// 007c764d  6a00                 push 0
// 007c764f  6800000080           push 0x80000000
// 007c7654  6800000040           push 0x40000000
// 007c7659  8bce                 mov ecx, esi
// 007c765b  e8521bf5ff           call 0x7191b2
// 007c7660  8b4658               mov eax, dword ptr [esi + 0x58]
// 007c7663  8b4020               mov eax, dword ptr [eax + 0x20]
// 007c7666  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007c7669  50                   push eax
// 007c766a  6af8                 push -8
// 007c766c  51                   push ecx
// 007c766d  ffd7                 call edi
// 007c766f  8b442448             mov eax, dword ptr [esp + 0x48]
// 007c7673  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007c7677  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 007c767b  6850020000           push 0x250
// 007c7680  2bc8                 sub ecx, eax
// 007c7682  51                   push ecx
// 007c7683  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 007c7687  2bd1                 sub edx, ecx
// 007c7689  52                   push edx
// 007c768a  50                   push eax
// 007c768b  a1b4fb8900           mov eax, dword ptr [0x89fbb4]
// 007c7690  51                   push ecx
// 007c7691  50                   push eax
// 007c7692  8bce                 mov ecx, esi
// 007c7694  e86b17f5ff           call 0x718e04
// 007c7699  56                   push esi
// 007c769a  e8d1b3faff           call 0x772a70
// 007c769f  83c404               add esp, 4
// 007c76a2  8d4c241c             lea ecx, [esp + 0x1c]
// 007c76a6  ff1510fd8900         call dword ptr [0x89fd10]
// 007c76ac  8d4c2464             lea ecx, [esp + 0x64]
// 007c76b0  c684249000000000     mov byte ptr [esp + 0x90], 0
// 007c76b8  e82392faff           call 0x7708e0
// 007c76bd  8d4c2474             lea ecx, [esp + 0x74]
// 007c76c1  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 007c76cc  e823480800           call 0x84bef4
// 007c76d1  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007c76d8  64890d00000000       mov dword ptr fs:[0], ecx
// 007c76df  59                   pop ecx
// 007c76e0  5f                   pop edi
// 007c76e1  5e                   pop esi
// 007c76e2  5d                   pop ebp
// 007c76e3  5b                   pop ebx
// 007c76e4  81c480000000         add esp, 0x80
// 007c76ea  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPReportInplaceList@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraints@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp