// roc 2009-12 00876270  unit: CXTPRibbonTheme  size: 1024 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00876270
//
// 00876270  6aff                 push -1
// 00876272  68b8009600           push 0x9600b8
// 00876277  64a100000000         mov eax, dword ptr fs:[0]
// 0087627d  50                   push eax
// 0087627e  81ec80000000         sub esp, 0x80
// 00876284  53                   push ebx
// 00876285  55                   push ebp
// 00876286  56                   push esi
// 00876287  57                   push edi
// 00876288  a10052b600           mov eax, dword ptr [0xb65200]
// 0087628d  33c4                 xor eax, esp
// 0087628f  50                   push eax
// 00876290  8d842494000000       lea eax, [esp + 0x94]
// 00876297  64a300000000         mov dword ptr fs:[0], eax
// 0087629d  8bf1                 mov esi, ecx
// 0087629f  8bac24b0000000       mov ebp, dword ptr [esp + 0xb0]
// 008762a6  85ed                 test ebp, ebp
// 008762a8  7527                 jne 0x8762d1
// 008762aa  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 008762b1  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 008762b8  8bbc24a4000000       mov edi, dword ptr [esp + 0xa4]
// 008762bf  55                   push ebp
// 008762c0  50                   push eax
// 008762c1  51                   push ecx
// 008762c2  57                   push edi
// 008762c3  8bce                 mov ecx, esi
// 008762c5  e8b6a0f8ff           call 0x800380
// 008762ca  8bc7                 mov eax, edi
// 008762cc  e983030000           jmp 0x876654
// 008762d1  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 008762d8  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 008762de  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 008762e4  8b9c24a8000000       mov ebx, dword ptr [esp + 0xa8]
// 008762eb  33d2                 xor edx, edx
// 008762ed  83f802               cmp eax, 2
// 008762f0  0f94c2               sete dl
// 008762f3  8d86a4000000         lea eax, [esi + 0xa4]
// 008762f9  50                   push eax
// 008762fa  53                   push ebx
// 008762fb  8d4c245c             lea ecx, [esp + 0x5c]
// 008762ff  89542428             mov dword ptr [esp + 0x28], edx
// 00876303  e85853fdff           call 0x84b660
// 00876308  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 0087630e  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00876314  8b87c8000000         mov eax, dword ptr [edi + 0xc8]
// 0087631a  894c2434             mov dword ptr [esp + 0x34], ecx
// 0087631e  8b8fcc000000         mov ecx, dword ptr [edi + 0xcc]
// 00876324  894c2440             mov dword ptr [esp + 0x40], ecx
// 00876328  8bcf                 mov ecx, edi
// 0087632a  c784249c00000000000000 mov dword ptr [esp + 0x9c], 0
// 00876335  89542438             mov dword ptr [esp + 0x38], edx
// 00876339  8944243c             mov dword ptr [esp + 0x3c], eax
// 0087633d  e88e6befff           call 0x76ced0
// 00876342  8b17                 mov edx, dword ptr [edi]
// 00876344  f7d8                 neg eax
// 00876346  1bc0                 sbb eax, eax
// 00876348  f7d8                 neg eax
// 0087634a  89442418             mov dword ptr [esp + 0x18], eax
// 0087634e  8b426c               mov eax, dword ptr [edx + 0x6c]
// 00876351  8bcf                 mov ecx, edi
// 00876353  ffd0                 call eax
// 00876355  8944241c             mov dword ptr [esp + 0x1c], eax
// 00876359  8b879c000000         mov eax, dword ptr [edi + 0x9c]
// 0087635f  83f8ff               cmp eax, -1
// 00876362  750f                 jne 0x876373
// 00876364  8b8f5c010000         mov ecx, dword ptr [edi + 0x15c]
// 0087636a  85c9                 test ecx, ecx
// 0087636c  7405                 je 0x876373
// 0087636e  e83d02f8ff           call 0x7f65b0
// 00876373  55                   push ebp
// 00876374  57                   push edi
// 00876375  53                   push ebx
// 00876376  8d4c2438             lea ecx, [esp + 0x38]
// 0087637a  51                   push ecx
// 0087637b  8bce                 mov ecx, esi
// 0087637d  89442424             mov dword ptr [esp + 0x24], eax
// 00876381  e8fa9ff8ff           call 0x800380
// 00876386  8b87a0010000         mov eax, dword ptr [edi + 0x1a0]
// 0087638c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00876390  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00876394  8b97a4010000         mov edx, dword ptr [edi + 0x1a4]
// 0087639a  03c8                 add ecx, eax
// 0087639c  8bc5                 mov eax, ebp
// 0087639e  2bc2                 sub eax, edx
// 008763a0  8b542438             mov edx, dword ptr [esp + 0x38]
// 008763a4  896c244c             mov dword ptr [esp + 0x4c], ebp
// 008763a8  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 008763ac  894c2434             mov dword ptr [esp + 0x34], ecx
// 008763b0  83c103               add ecx, 3
// 008763b3  89542448             mov dword ptr [esp + 0x48], edx
// 008763b7  896c2450             mov dword ptr [esp + 0x50], ebp
// 008763bb  42                   inc edx
// 008763bc  894c2474             mov dword ptr [esp + 0x74], ecx
// 008763c0  4d                   dec ebp
// 008763c1  681018a000           push 0xa01810
// 008763c6  8bce                 mov ecx, esi
// 008763c8  89442448             mov dword ptr [esp + 0x48], eax
// 008763cc  896c2430             mov dword ptr [esp + 0x30], ebp
// 008763d0  8944242c             mov dword ptr [esp + 0x2c], eax
// 008763d4  89542428             mov dword ptr [esp + 0x28], edx
// 008763d8  e823890000           call 0x87ed00
// 008763dd  8be8                 mov ebp, eax
// 008763df  85ed                 test ebp, ebp
// 008763e1  0f8443020000         je 0x87662a
// 008763e7  837c241400           cmp dword ptr [esp + 0x14], 0
// 008763ec  7547                 jne 0x876435
// 008763ee  6a0f                 push 0xf
// 008763f0  8bce                 mov ecx, esi
// 008763f2  e84972f8ff           call 0x7fd640
// 008763f7  50                   push eax
// 008763f8  8d542438             lea edx, [esp + 0x38]
// 008763fc  52                   push edx
// 008763fd  8bcb                 mov ecx, ebx
// 008763ff  e8fae1f7ff           call 0x7f45fe
// 00876404  6a35                 push 0x35
// 00876406  8bce                 mov ecx, esi
// 00876408  e83372f8ff           call 0x7fd640
// 0087640d  50                   push eax
// 0087640e  6a35                 push 0x35
// 00876410  8bce                 mov ecx, esi
// 00876412  e82972f8ff           call 0x7fd640
// 00876417  50                   push eax
// 00876418  8d44243c             lea eax, [esp + 0x3c]
// 0087641c  50                   push eax
// 0087641d  8bcb                 mov ecx, ebx
// 0087641f  e8d4e1f7ff           call 0x7f45f8
// 00876424  6a05                 push 5
// 00876426  6a04                 push 4
// 00876428  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0087642f  51                   push ecx
// 00876430  e9f8000000           jmp 0x87652d
// 00876435  837c241800           cmp dword ptr [esp + 0x18], 0
// 0087643a  7447                 je 0x876483
// 0087643c  6a05                 push 5
// 0087643e  8bce                 mov ecx, esi
// 00876440  e8fb71f8ff           call 0x7fd640
// 00876445  50                   push eax
// 00876446  8d542438             lea edx, [esp + 0x38]
// 0087644a  52                   push edx
// 0087644b  8bcb                 mov ecx, ebx
// 0087644d  e8ace1f7ff           call 0x7f45fe
// 00876452  6a35                 push 0x35
// 00876454  8bce                 mov ecx, esi
// 00876456  e8e571f8ff           call 0x7fd640
// 0087645b  50                   push eax
// 0087645c  6a35                 push 0x35
// 0087645e  8bce                 mov ecx, esi
// 00876460  e8db71f8ff           call 0x7fd640
// 00876465  50                   push eax
// 00876466  8d44243c             lea eax, [esp + 0x3c]
// 0087646a  50                   push eax
// 0087646b  8bcb                 mov ecx, ebx
// 0087646d  e886e1f7ff           call 0x7f45f8
// 00876472  6a05                 push 5
// 00876474  6a03                 push 3
// 00876476  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0087647d  51                   push ecx
// 0087647e  e9aa000000           jmp 0x87652d
// 00876483  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00876488  745d                 je 0x8764e7
// 0087648a  6a05                 push 5
// 0087648c  8bce                 mov ecx, esi
// 0087648e  e8ad71f8ff           call 0x7fd640
// 00876493  50                   push eax
// 00876494  8d542438             lea edx, [esp + 0x38]
// 00876498  52                   push edx
// 00876499  8bcb                 mov ecx, ebx
// 0087649b  e85ee1f7ff           call 0x7f45fe
// 008764a0  6a35                 push 0x35
// 008764a2  8bce                 mov ecx, esi
// 008764a4  e89771f8ff           call 0x7fd640
// 008764a9  50                   push eax
// 008764aa  6a35                 push 0x35
// 008764ac  8bce                 mov ecx, esi
// 008764ae  e88d71f8ff           call 0x7fd640
// 008764b3  50                   push eax
// 008764b4  8d44243c             lea eax, [esp + 0x3c]
// 008764b8  50                   push eax
// 008764b9  8bcb                 mov ecx, ebx
// 008764bb  e838e1f7ff           call 0x7f45f8
// 008764c0  6a05                 push 5
// 008764c2  6a02                 push 2
// 008764c4  8d8c248c000000       lea ecx, [esp + 0x8c]
// 008764cb  51                   push ecx
// 008764cc  8bcd                 mov ecx, ebp
// 008764ce  e8eda30600           call 0x8e08c0
// 008764d3  83ec10               sub esp, 0x10
// 008764d6  8bcc                 mov ecx, esp
// 008764d8  ba02000000           mov edx, 2
// 008764dd  8911                 mov dword ptr [ecx], edx
// 008764df  895104               mov dword ptr [ecx + 4], edx
// 008764e2  895108               mov dword ptr [ecx + 8], edx
// 008764e5  eb6e                 jmp 0x876555
// 008764e7  837c242000           cmp dword ptr [esp + 0x20], 0
// 008764ec  7513                 jne 0x876501
// 008764ee  8b9678060000         mov edx, dword ptr [esi + 0x678]
// 008764f4  52                   push edx
// 008764f5  8d442438             lea eax, [esp + 0x38]
// 008764f9  50                   push eax
// 008764fa  8bcb                 mov ecx, ebx
// 008764fc  e8fde0f7ff           call 0x7f45fe
// 00876501  6a35                 push 0x35
// 00876503  8bce                 mov ecx, esi
// 00876505  e83671f8ff           call 0x7fd640
// 0087650a  50                   push eax
// 0087650b  6a35                 push 0x35
// 0087650d  8bce                 mov ecx, esi
// 0087650f  e82c71f8ff           call 0x7fd640
// 00876514  50                   push eax
// 00876515  8d4c243c             lea ecx, [esp + 0x3c]
// 00876519  51                   push ecx
// 0087651a  8bcb                 mov ecx, ebx
// 0087651c  e8d7e0f7ff           call 0x7f45f8
// 00876521  6a05                 push 5
// 00876523  6a00                 push 0
// 00876525  8d94248c000000       lea edx, [esp + 0x8c]
// 0087652c  52                   push edx
// 0087652d  8bcd                 mov ecx, ebp
// 0087652f  c744247c02000000     mov dword ptr [esp + 0x7c], 2
// 00876537  e884a30600           call 0x8e08c0
// 0087653c  ba02000000           mov edx, 2
// 00876541  83ec10               sub esp, 0x10
// 00876544  8bcc                 mov ecx, esp
// 00876546  8911                 mov dword ptr [ecx], edx
// 00876548  895104               mov dword ptr [ecx + 4], edx
// 0087654b  895108               mov dword ptr [ecx + 8], edx
// 0087654e  8b942480000000       mov edx, dword ptr [esp + 0x80]
// 00876555  89510c               mov dword ptr [ecx + 0xc], edx
// 00876558  8b10                 mov edx, dword ptr [eax]
// 0087655a  83ec10               sub esp, 0x10
// 0087655d  8bcc                 mov ecx, esp
// 0087655f  8911                 mov dword ptr [ecx], edx
// 00876561  8b5004               mov edx, dword ptr [eax + 4]
// 00876564  895104               mov dword ptr [ecx + 4], edx
// 00876567  8b5008               mov edx, dword ptr [eax + 8]
// 0087656a  8b400c               mov eax, dword ptr [eax + 0xc]
// 0087656d  895108               mov dword ptr [ecx + 8], edx
// 00876570  89410c               mov dword ptr [ecx + 0xc], eax
// 00876573  8d4c2464             lea ecx, [esp + 0x64]
// 00876577  51                   push ecx
// 00876578  53                   push ebx
// 00876579  8bcd                 mov ecx, ebp
// 0087657b  e8109c0600           call 0x8e0190
// 00876580  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00876584  8b17                 mov edx, dword ptr [edi]
// 00876586  8b9258010000         mov edx, dword ptr [edx + 0x158]
// 0087658c  83ec10               sub esp, 0x10
// 0087658f  8bc4                 mov eax, esp
// 00876591  8908                 mov dword ptr [eax], ecx
// 00876593  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00876597  894804               mov dword ptr [eax + 4], ecx
// 0087659a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0087659e  894808               mov dword ptr [eax + 8], ecx
// 008765a1  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008765a5  89480c               mov dword ptr [eax + 0xc], ecx
// 008765a8  53                   push ebx
// 008765a9  8bcf                 mov ecx, edi
// 008765ab  ffd2                 call edx
// 008765ad  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008765b1  8b442448             mov eax, dword ptr [esp + 0x48]
// 008765b5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008765b9  03c1                 add eax, ecx
// 008765bb  99                   cdq 
// 008765bc  2bc2                 sub eax, edx
// 008765be  8b542444             mov edx, dword ptr [esp + 0x44]
// 008765c2  8bc8                 mov ecx, eax
// 008765c4  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008765c8  6a00                 push 0
// 008765ca  55                   push ebp
// 008765cb  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008765cf  03c2                 add eax, edx
// 008765d1  55                   push ebp
// 008765d2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 008765d6  99                   cdq 
// 008765d7  55                   push ebp
// 008765d8  2bc2                 sub eax, edx
// 008765da  8b16                 mov edx, dword ptr [esi]
// 008765dc  d1f9                 sar ecx, 1
// 008765de  51                   push ecx
// 008765df  d1f8                 sar eax, 1
// 008765e1  50                   push eax
// 008765e2  8b82f4000000         mov eax, dword ptr [edx + 0xf4]
// 008765e8  57                   push edi
// 008765e9  53                   push ebx
// 008765ea  8bce                 mov ecx, esi
// 008765ec  ffd0                 call eax
// 008765ee  8bcf                 mov ecx, edi
// 008765f0  e8cbb7ffff           call 0x871dc0
// 008765f5  85c0                 test eax, eax
// 008765f7  7431                 je 0x87662a
// 008765f9  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 008765ff  8b97c4000000         mov edx, dword ptr [edi + 0xc4]
// 00876605  83ec10               sub esp, 0x10
// 00876608  8bc4                 mov eax, esp
// 0087660a  8908                 mov dword ptr [eax], ecx
// 0087660c  8b8fc8000000         mov ecx, dword ptr [edi + 0xc8]
// 00876612  895004               mov dword ptr [eax + 4], edx
// 00876615  8b97cc000000         mov edx, dword ptr [edi + 0xcc]
// 0087661b  894808               mov dword ptr [eax + 8], ecx
// 0087661e  53                   push ebx
// 0087661f  89500c               mov dword ptr [eax + 0xc], edx
// 00876622  e859d5f8ff           call 0x803b80
// 00876627  83c414               add esp, 0x14
// 0087662a  8bb424a4000000       mov esi, dword ptr [esp + 0xa4]
// 00876631  8d4c2454             lea ecx, [esp + 0x54]
// 00876635  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00876640  c70600000000         mov dword ptr [esi], 0
// 00876646  c7460400000000       mov dword ptr [esi + 4], 0
// 0087664d  e88e50fdff           call 0x84b6e0
// 00876652  8bc6                 mov eax, esi
// 00876654  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0087665b  64890d00000000       mov dword ptr fs:[0], ecx
// 00876662  59                   pop ecx
// 00876663  5f                   pop edi
// 00876664  5e                   pop esi
// 00876665  5d                   pop ebp
// 00876666  5b                   pop ebx
// 00876667  81c48c000000         add esp, 0x8c
// 0087666d  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawControlComboBox@CXTPRibbonTheme@@MAE?AVCSize@@PAVCDC@@PAVCXTPControlComboBox@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp