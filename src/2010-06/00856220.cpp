// roc 2010-06 00856220  unit: CXTPReportInplaceList  size: 1117 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00856220
//
// 00856220  6aff                 push -1
// 00856222  68b2829b00           push 0x9b82b2
// 00856227  64a100000000         mov eax, dword ptr fs:[0]
// 0085622d  50                   push eax
// 0085622e  83ec74               sub esp, 0x74
// 00856231  53                   push ebx
// 00856232  55                   push ebp
// 00856233  56                   push esi
// 00856234  57                   push edi
// 00856235  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0085623a  33c4                 xor eax, esp
// 0085623c  50                   push eax
// 0085623d  8d842488000000       lea eax, [esp + 0x88]
// 00856244  64a300000000         mov dword ptr fs:[0], eax
// 0085624a  8bf1                 mov esi, ecx
// 0085624c  8b4654               mov eax, dword ptr [esi + 0x54]
// 0085624f  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 00856256  8b5004               mov edx, dword ptr [eax + 4]
// 00856259  8d4e54               lea ecx, [esi + 0x54]
// 0085625c  53                   push ebx
// 0085625d  ffd2                 call edx
// 0085625f  8b4314               mov eax, dword ptr [ebx + 0x14]
// 00856262  8b4b18               mov ecx, dword ptr [ebx + 0x18]
// 00856265  8b531c               mov edx, dword ptr [ebx + 0x1c]
// 00856268  89442444             mov dword ptr [esp + 0x44], eax
// 0085626c  8b4320               mov eax, dword ptr [ebx + 0x20]
// 0085626f  33ed                 xor ebp, ebp
// 00856271  894c2448             mov dword ptr [esp + 0x48], ecx
// 00856275  8954244c             mov dword ptr [esp + 0x4c], edx
// 00856279  89442450             mov dword ptr [esp + 0x50], eax
// 0085627d  396e20               cmp dword ptr [esi + 0x20], ebp
// 00856280  7552                 jne 0x8562d4
// 00856282  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00856285  55                   push ebp
// 00856286  55                   push ebp
// 00856287  51                   push ecx
// 00856288  8d542438             lea edx, [esp + 0x38]
// 0085628c  52                   push edx
// 0085628d  680100a040           push 0x40a00001
// 00856292  68fe08a000           push 0xa008fe
// 00856297  68086ba500           push 0xa56b08
// 0085629c  896c2448             mov dword ptr [esp + 0x48], ebp
// 008562a0  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008562a4  896c2450             mov dword ptr [esp + 0x50], ebp
// 008562a8  896c2454             mov dword ptr [esp + 0x54], ebp
// 008562ac  e8336b1200           call 0x97cde4
// 008562b1  2500004000           and eax, 0x400000
// 008562b6  0d80000000           or eax, 0x80
// 008562bb  50                   push eax
// 008562bc  8bce                 mov ecx, esi
// 008562be  e84f17f5ff           call 0x7a7a12
// 008562c3  8b4658               mov eax, dword ptr [esi + 0x58]
// 008562c6  3bc5                 cmp eax, ebp
// 008562c8  7405                 je 0x8562cf
// 008562ca  8b4020               mov eax, dword ptr [eax + 0x20]
// 008562cd  eb02                 jmp 0x8562d1
// 008562cf  33c0                 xor eax, eax
// 008562d1  894638               mov dword ptr [esi + 0x38], eax
// 008562d4  8b4658               mov eax, dword ptr [esi + 0x58]
// 008562d7  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 008562dd  83c020               add eax, 0x20
// 008562e0  3bc5                 cmp eax, ebp
// 008562e2  7504                 jne 0x8562e8
// 008562e4  33c0                 xor eax, eax
// 008562e6  eb03                 jmp 0x8562eb
// 008562e8  8b4004               mov eax, dword ptr [eax + 4]
// 008562eb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008562ee  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 008562f4  6a01                 push 1
// 008562f6  50                   push eax
// 008562f7  6a30                 push 0x30
// 008562f9  51                   push ecx
// 008562fa  ffd7                 call edi
// 008562fc  8b5620               mov edx, dword ptr [esi + 0x20]
// 008562ff  55                   push ebp
// 00856300  55                   push ebp
// 00856301  6884010000           push 0x184
// 00856306  52                   push edx
// 00856307  ffd7                 call edi
// 00856309  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 0085630d  2b6c2444             sub ebp, dword ptr [esp + 0x44]
// 00856311  8b4658               mov eax, dword ptr [esi + 0x58]
// 00856314  50                   push eax
// 00856315  8d4c2478             lea ecx, [esp + 0x78]
// 00856319  45                   inc ebp
// 0085631a  e87d6a1200           call 0x97cd9c
// 0085631f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00856322  6a00                 push 0
// 00856324  6a00                 push 0
// 00856326  6a31                 push 0x31
// 00856328  51                   push ecx
// 00856329  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 00856334  ffd7                 call edi
// 00856336  50                   push eax
// 00856337  e86821f5ff           call 0x7a84a4
// 0085633c  50                   push eax
// 0085633d  8d542478             lea edx, [esp + 0x78]
// 00856341  52                   push edx
// 00856342  8d4c246c             lea ecx, [esp + 0x6c]
// 00856346  e85593faff           call 0x7ff6a0
// 0085634b  6a0a                 push 0xa
// 0085634d  c684249400000001     mov byte ptr [esp + 0x94], 1
// 00856355  ff156cba9e00         call dword ptr [0x9eba6c]
// 0085635b  8b5660               mov edx, dword ptr [esi + 0x60]
// 0085635e  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00856361  89442420             mov dword ptr [esp + 0x20], eax
// 00856365  8b01                 mov eax, dword ptr [ecx]
// 00856367  8b406c               mov eax, dword ptr [eax + 0x6c]
// 0085636a  52                   push edx
// 0085636b  8d542420             lea edx, [esp + 0x20]
// 0085636f  52                   push edx
// 00856370  ffd0                 call eax
// 00856372  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00856375  8b11                 mov edx, dword ptr [ecx]
// 00856377  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 0085637d  53                   push ebx
// 0085637e  c684249400000002     mov byte ptr [esp + 0x94], 2
// 00856386  ffd0                 call eax
// 00856388  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 0085638f  89442424             mov dword ptr [esp + 0x24], eax
// 00856393  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0085639b  e8007ef7ff           call 0x7ce1a0
// 008563a0  85c0                 test eax, eax
// 008563a2  0f8e2e010000         jle 0x8564d6
// 008563a8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008563ac  51                   push ecx
// 008563ad  8b8c24a0000000       mov ecx, dword ptr [esp + 0xa0]
// 008563b4  e817b9faff           call 0x801cd0
// 008563b9  8bd8                 mov ebx, eax
// 008563bb  8d5320               lea edx, [ebx + 0x20]
// 008563be  52                   push edx
// 008563bf  8d4c2418             lea ecx, [esp + 0x18]
// 008563c3  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 008563c9  8d4c2414             lea ecx, [esp + 0x14]
// 008563cd  c684249000000003     mov byte ptr [esp + 0x90], 3
// 008563d5  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008563db  50                   push eax
// 008563dc  8b4620               mov eax, dword ptr [esi + 0x20]
// 008563df  6a00                 push 0
// 008563e1  6880010000           push 0x180
// 008563e6  50                   push eax
// 008563e7  ffd7                 call edi
// 008563e9  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008563ec  53                   push ebx
// 008563ed  50                   push eax
// 008563ee  689a010000           push 0x19a
// 008563f3  51                   push ecx
// 008563f4  89442438             mov dword ptr [esp + 0x38], eax
// 008563f8  ffd7                 call edi
// 008563fa  8d54242c             lea edx, [esp + 0x2c]
// 008563fe  52                   push edx
// 008563ff  8d4c2418             lea ecx, [esp + 0x18]
// 00856403  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00856409  50                   push eax
// 0085640a  8d4c241c             lea ecx, [esp + 0x1c]
// 0085640e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00856414  50                   push eax
// 00856415  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0085641c  50                   push eax
// 0085641d  ff1594a19e00         call dword ptr [0x9ea194]
// 00856423  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00856427  8b542420             mov edx, dword ptr [esp + 0x20]
// 0085642b  03ca                 add ecx, edx
// 0085642d  3be9                 cmp ebp, ecx
// 0085642f  7f34                 jg 0x856465
// 00856431  8d44243c             lea eax, [esp + 0x3c]
// 00856435  50                   push eax
// 00856436  8d4c2418             lea ecx, [esp + 0x18]
// 0085643a  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00856440  50                   push eax
// 00856441  8d4c241c             lea ecx, [esp + 0x1c]
// 00856445  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0085644b  8b8c2484000000       mov ecx, dword ptr [esp + 0x84]
// 00856452  50                   push eax
// 00856453  51                   push ecx
// 00856454  ff1594a19e00         call dword ptr [0x9ea194]
// 0085645a  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0085645e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00856462  8d2c02               lea ebp, [edx + eax]
// 00856465  837c2424ff           cmp dword ptr [esp + 0x24], -1
// 0085646a  7519                 jne 0x856485
// 0085646c  8d4c2414             lea ecx, [esp + 0x14]
// 00856470  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00856476  50                   push eax
// 00856477  8d4c2420             lea ecx, [esp + 0x20]
// 0085647b  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00856481  85c0                 test eax, eax
// 00856483  7409                 je 0x85648e
// 00856485  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00856489  3b4b24               cmp ecx, dword ptr [ebx + 0x24]
// 0085648c  7512                 jne 0x8564a0
// 0085648e  8b542428             mov edx, dword ptr [esp + 0x28]
// 00856492  8b4620               mov eax, dword ptr [esi + 0x20]
// 00856495  6a00                 push 0
// 00856497  52                   push edx
// 00856498  6886010000           push 0x186
// 0085649d  50                   push eax
// 0085649e  ffd7                 call edi
// 008564a0  8d4c2414             lea ecx, [esp + 0x14]
// 008564a4  c684249000000002     mov byte ptr [esp + 0x90], 2
// 008564ac  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 008564b2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008564b6  8b8c249c000000       mov ecx, dword ptr [esp + 0x9c]
// 008564bd  43                   inc ebx
// 008564be  895c2418             mov dword ptr [esp + 0x18], ebx
// 008564c2  e8d97cf7ff           call 0x7ce1a0
// 008564c7  3bd8                 cmp ebx, eax
// 008564c9  0f8cd9feffff         jl 0x8563a8
// 008564cf  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008564d6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008564d9  6a00                 push 0
// 008564db  6a00                 push 0
// 008564dd  68a1010000           push 0x1a1
// 008564e2  51                   push ecx
// 008564e3  ffd7                 call edi
// 008564e5  8b542450             mov edx, dword ptr [esp + 0x50]
// 008564e9  6a00                 push 0
// 008564eb  6a00                 push 0
// 008564ed  89442430             mov dword ptr [esp + 0x30], eax
// 008564f1  8b4620               mov eax, dword ptr [esi + 0x20]
// 008564f4  688b010000           push 0x18b
// 008564f9  50                   push eax
// 008564fa  89542458             mov dword ptr [esp + 0x58], edx
// 008564fe  ffd7                 call edi
// 00856500  83f80a               cmp eax, 0xa
// 00856503  7e07                 jle 0x85650c
// 00856505  b80a000000           mov eax, 0xa
// 0085650a  eb0f                 jmp 0x85651b
// 0085650c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085650f  6a00                 push 0
// 00856511  6a00                 push 0
// 00856513  688b010000           push 0x18b
// 00856518  51                   push ecx
// 00856519  ffd7                 call edi
// 0085651b  0faf442428           imul eax, dword ptr [esp + 0x28]
// 00856520  8b542450             mov edx, dword ptr [esp + 0x50]
// 00856524  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00856528  8d440202             lea eax, [edx + eax + 2]
// 0085652c  2bcd                 sub ecx, ebp
// 0085652e  8d542444             lea edx, [esp + 0x44]
// 00856532  894c2444             mov dword ptr [esp + 0x44], ecx
// 00856536  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00856539  52                   push edx
// 0085653a  89442454             mov dword ptr [esp + 0x54], eax
// 0085653e  e8fd19f5ff           call 0x7a7f40
// 00856543  8d442444             lea eax, [esp + 0x44]
// 00856547  50                   push eax
// 00856548  8d4c2458             lea ecx, [esp + 0x58]
// 0085654c  51                   push ecx
// 0085654d  e87ea3f9ff           call 0x7f08d0
// 00856552  8bc8                 mov ecx, eax
// 00856554  e8d79ef9ff           call 0x7f0430
// 00856559  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0085655d  8b442460             mov eax, dword ptr [esp + 0x60]
// 00856561  3bc8                 cmp ecx, eax
// 00856563  8b3d40bc9e00         mov edi, dword ptr [0x9ebc40]
// 00856569  7e27                 jle 0x856592
// 0085656b  8b542458             mov edx, dword ptr [esp + 0x58]
// 0085656f  03c2                 add eax, edx
// 00856571  99                   cdq 
// 00856572  2bc2                 sub eax, edx
// 00856574  8b542448             mov edx, dword ptr [esp + 0x48]
// 00856578  d1f8                 sar eax, 1
// 0085657a  3bd0                 cmp edx, eax
// 0085657c  7e14                 jle 0x856592
// 0085657e  8b4318               mov eax, dword ptr [ebx + 0x18]
// 00856581  2b4320               sub eax, dword ptr [ebx + 0x20]
// 00856584  2bc1                 sub eax, ecx
// 00856586  03c2                 add eax, edx
// 00856588  50                   push eax
// 00856589  6a00                 push 0
// 0085658b  8d44244c             lea eax, [esp + 0x4c]
// 0085658f  50                   push eax
// 00856590  ffd7                 call edi
// 00856592  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00856596  8b442454             mov eax, dword ptr [esp + 0x54]
// 0085659a  3bc8                 cmp ecx, eax
// 0085659c  7d0c                 jge 0x8565aa
// 0085659e  2bc1                 sub eax, ecx
// 008565a0  6a00                 push 0
// 008565a2  50                   push eax
// 008565a3  8d4c244c             lea ecx, [esp + 0x4c]
// 008565a7  51                   push ecx
// 008565a8  ffd7                 call edi
// 008565aa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008565ae  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 008565b2  3bc8                 cmp ecx, eax
// 008565b4  7e0c                 jle 0x8565c2
// 008565b6  6a00                 push 0
// 008565b8  2bc1                 sub eax, ecx
// 008565ba  50                   push eax
// 008565bb  8d54244c             lea edx, [esp + 0x4c]
// 008565bf  52                   push edx
// 008565c0  ffd7                 call edi
// 008565c2  8bce                 mov ecx, esi
// 008565c4  e87917f5ff           call 0x7a7d42
// 008565c9  8b4620               mov eax, dword ptr [esi + 0x20]
// 008565cc  85c0                 test eax, eax
// 008565ce  7462                 je 0x856632
// 008565d0  8b3d00bc9e00         mov edi, dword ptr [0x9ebc00]
// 008565d6  6a00                 push 0
// 008565d8  6af8                 push -8
// 008565da  50                   push eax
// 008565db  ffd7                 call edi
// 008565dd  6a00                 push 0
// 008565df  6800000080           push 0x80000000
// 008565e4  6800000040           push 0x40000000
// 008565e9  8bce                 mov ecx, esi
// 008565eb  e82a1bf5ff           call 0x7a811a
// 008565f0  8b4658               mov eax, dword ptr [esi + 0x58]
// 008565f3  8b4020               mov eax, dword ptr [eax + 0x20]
// 008565f6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008565f9  50                   push eax
// 008565fa  6af8                 push -8
// 008565fc  51                   push ecx
// 008565fd  ffd7                 call edi
// 008565ff  8b442448             mov eax, dword ptr [esp + 0x48]
// 00856603  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00856607  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 0085660b  6850020000           push 0x250
// 00856610  2bc8                 sub ecx, eax
// 00856612  51                   push ecx
// 00856613  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00856617  2bd1                 sub edx, ecx
// 00856619  52                   push edx
// 0085661a  50                   push eax
// 0085661b  a10cca9e00           mov eax, dword ptr [0x9eca0c]
// 00856620  51                   push ecx
// 00856621  50                   push eax
// 00856622  8bce                 mov ecx, esi
// 00856624  e84317f5ff           call 0x7a7d6c
// 00856629  56                   push esi
// 0085662a  e8d1b1faff           call 0x801800
// 0085662f  83c404               add esp, 4
// 00856632  8d4c241c             lea ecx, [esp + 0x1c]
// 00856636  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0085663c  8d4c2464             lea ecx, [esp + 0x64]
// 00856640  c684249000000000     mov byte ptr [esp + 0x90], 0
// 00856648  e8d390faff           call 0x7ff720
// 0085664d  8d4c2474             lea ecx, [esp + 0x74]
// 00856651  c7842490000000ffffffff mov dword ptr [esp + 0x90], 0xffffffff
// 0085665c  e835671200           call 0x97cd96
// 00856661  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00856668  64890d00000000       mov dword ptr fs:[0], ecx
// 0085666f  59                   pop ecx
// 00856670  5f                   pop edi
// 00856671  5e                   pop esi
// 00856672  5d                   pop ebp
// 00856673  5b                   pop ebx
// 00856674  81c480000000         add esp, 0x80
// 0085667a  c20800               ret 8
// copied from an identical function in another client (function ?Create@CXTPReportInplaceList@@QAEXPAUXTP_REPORTRECORDITEM_ARGS@@PAVCXTPReportRecordItemConstraints@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp