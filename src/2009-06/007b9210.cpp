// roc 2009-06 007b9210  unit: CXTPRibbonBar  size: 992 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b9210
//
// 007b9210  6aff                 push -1
// 007b9212  6890d48700           push 0x87d490
// 007b9217  64a100000000         mov eax, dword ptr fs:[0]
// 007b921d  50                   push eax
// 007b921e  83ec68               sub esp, 0x68
// 007b9221  53                   push ebx
// 007b9222  55                   push ebp
// 007b9223  56                   push esi
// 007b9224  57                   push edi
// 007b9225  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007b922a  33c4                 xor eax, esp
// 007b922c  50                   push eax
// 007b922d  8d44247c             lea eax, [esp + 0x7c]
// 007b9231  64a300000000         mov dword ptr fs:[0], eax
// 007b9237  8bf1                 mov esi, ecx
// 007b9239  e842e8ffff           call 0x7b7a80
// 007b923e  85c0                 test eax, eax
// 007b9240  0f8496030000         je 0x7b95dc
// 007b9246  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 007b924d  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 007b9253  8b8e30020000         mov ecx, dword ptr [esi + 0x230]
// 007b9259  8b9e34020000         mov ebx, dword ptr [esi + 0x234]
// 007b925f  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 007b9265  89442448             mov dword ptr [esp + 0x48], eax
// 007b9269  894c244c             mov dword ptr [esp + 0x4c], ecx
// 007b926d  895c2450             mov dword ptr [esp + 0x50], ebx
// 007b9271  89542454             mov dword ptr [esp + 0x54], edx
// 007b9275  754a                 jne 0x7b92c1
// 007b9277  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 007b927e  7441                 je 0x7b92c1
// 007b9280  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 007b9286  85c9                 test ecx, ecx
// 007b9288  7422                 je 0x7b92ac
// 007b928a  8d442428             lea eax, [esp + 0x28]
// 007b928e  50                   push eax
// 007b928f  e87c19f6ff           call 0x71ac10
// 007b9294  8b4808               mov ecx, dword ptr [eax + 8]
// 007b9297  2b08                 sub ecx, dword ptr [eax]
// 007b9299  8dbe1c020000         lea edi, [esi + 0x21c]
// 007b929f  83c102               add ecx, 2
// 007b92a2  03d9                 add ebx, ecx
// 007b92a4  895c2450             mov dword ptr [esp + 0x50], ebx
// 007b92a8  891f                 mov dword ptr [edi], ebx
// 007b92aa  eb22                 jmp 0x7b92ce
// 007b92ac  b90c000000           mov ecx, 0xc
// 007b92b1  03d9                 add ebx, ecx
// 007b92b3  8dbe1c020000         lea edi, [esi + 0x21c]
// 007b92b9  895c2450             mov dword ptr [esp + 0x50], ebx
// 007b92bd  891f                 mov dword ptr [edi], ebx
// 007b92bf  eb0d                 jmp 0x7b92ce
// 007b92c1  83861c02000046       add dword ptr [esi + 0x21c], 0x46
// 007b92c8  8dbe1c020000         lea edi, [esi + 0x21c]
// 007b92ce  8bce                 mov ecx, esi
// 007b92d0  e85b6cf7ff           call 0x72ff30
// 007b92d5  8bd8                 mov ebx, eax
// 007b92d7  8bcb                 mov ecx, ebx
// 007b92d9  e8fe2b0900           call 0x84bedc
// 007b92de  8bcb                 mov ecx, ebx
// 007b92e0  8be8                 mov ebp, eax
// 007b92e2  e8fb2b0900           call 0x84bee2
// 007b92e7  8b9680020000         mov edx, dword ptr [esi + 0x280]
// 007b92ed  2480                 and al, 0x80
// 007b92ef  33c9                 xor ecx, ecx
// 007b92f1  3c80                 cmp al, 0x80
// 007b92f3  8b4240               mov eax, dword ptr [edx + 0x40]
// 007b92f6  0f94c1               sete cl
// 007b92f9  014704               add dword ptr [edi + 4], eax
// 007b92fc  83470cfd             add dword ptr [edi + 0xc], -3
// 007b9300  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 007b9306  8b5044               mov edx, dword ptr [eax + 0x44]
// 007b9309  89542424             mov dword ptr [esp + 0x24], edx
// 007b930d  33d2                 xor edx, edx
// 007b930f  8bc5                 mov eax, ebp
// 007b9311  2500000001           and eax, 0x1000000
// 007b9316  3d00000001           cmp eax, 0x1000000
// 007b931b  0f94c2               sete dl
// 007b931e  33db                 xor ebx, ebx
// 007b9320  8bc5                 mov eax, ebp
// 007b9322  2500000800           and eax, 0x80000
// 007b9327  c744242001000000     mov dword ptr [esp + 0x20], 1
// 007b932f  89542418             mov dword ptr [esp + 0x18], edx
// 007b9333  8bd5                 mov edx, ebp
// 007b9335  81e200000100         and edx, 0x10000
// 007b933b  81fa00000100         cmp edx, 0x10000
// 007b9341  0f94c3               sete bl
// 007b9344  8bd5                 mov edx, ebp
// 007b9346  81e200000200         and edx, 0x20000
// 007b934c  895c241c             mov dword ptr [esp + 0x1c], ebx
// 007b9350  33db                 xor ebx, ebx
// 007b9352  81fa00000200         cmp edx, 0x20000
// 007b9358  0f94c3               sete bl
// 007b935b  8bd3                 mov edx, ebx
// 007b935d  89542428             mov dword ptr [esp + 0x28], edx
// 007b9361  85c9                 test ecx, ecx
// 007b9363  7518                 jne 0x7b937d
// 007b9365  85c0                 test eax, eax
// 007b9367  7414                 je 0x7b937d
// 007b9369  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 007b936d  7504                 jne 0x7b9373
// 007b936f  85d2                 test edx, edx
// 007b9371  740a                 je 0x7b937d
// 007b9373  c744241401000000     mov dword ptr [esp + 0x14], 1
// 007b937b  eb08                 jmp 0x7b9385
// 007b937d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007b9385  8bd8                 mov ebx, eax
// 007b9387  85c0                 test eax, eax
// 007b9389  743a                 je 0x7b93c5
// 007b938b  85c9                 test ecx, ecx
// 007b938d  7536                 jne 0x7b93c5
// 007b938f  8bce                 mov ecx, esi
// 007b9391  e89a6bf7ff           call 0x72ff30
// 007b9396  8b4020               mov eax, dword ptr [eax + 0x20]
// 007b9399  6a00                 push 0
// 007b939b  50                   push eax
// 007b939c  ff1570ee8900         call dword ptr [0x89ee70]
// 007b93a2  50                   push eax
// 007b93a3  e81afdf5ff           call 0x7190c2
// 007b93a8  85c0                 test eax, eax
// 007b93aa  7419                 je 0x7b93c5
// 007b93ac  8b4804               mov ecx, dword ptr [eax + 4]
// 007b93af  6a00                 push 0
// 007b93b1  6860f00000           push 0xf060
// 007b93b6  51                   push ecx
// 007b93b7  ff156cec8900         call dword ptr [0x89ec6c]
// 007b93bd  a803                 test al, 3
// 007b93bf  7404                 je 0x7b93c5
// 007b93c1  33c9                 xor ecx, ecx
// 007b93c3  eb04                 jmp 0x7b93c9
// 007b93c5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007b93c9  33c0                 xor eax, eax
// 007b93cb  39442418             cmp dword ptr [esp + 0x18], eax
// 007b93cf  740e                 je 0x7b93df
// 007b93d1  f7c500000040         test ebp, 0x40000000
// 007b93d7  7406                 je 0x7b93df
// 007b93d9  33db                 xor ebx, ebx
// 007b93db  89442414             mov dword ptr [esp + 0x14], eax
// 007b93df  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007b93e3  3be8                 cmp ebp, eax
// 007b93e5  7509                 jne 0x7b93f0
// 007b93e7  3bd8                 cmp ebx, eax
// 007b93e9  7405                 je 0x7b93f0
// 007b93eb  b801000000           mov eax, 1
// 007b93f0  57                   push edi
// 007b93f1  51                   push ecx
// 007b93f2  50                   push eax
// 007b93f3  6860f00000           push 0xf060
// 007b93f8  8bce                 mov ecx, esi
// 007b93fa  e821fcffff           call 0x7b9020
// 007b93ff  85ed                 test ebp, ebp
// 007b9401  7511                 jne 0x7b9414
// 007b9403  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007b9407  740b                 je 0x7b9414
// 007b9409  396c2418             cmp dword ptr [esp + 0x18], ebp
// 007b940d  7405                 je 0x7b9414
// 007b940f  8d4501               lea eax, [ebp + 1]
// 007b9412  eb02                 jmp 0x7b9416
// 007b9414  33c0                 xor eax, eax
// 007b9416  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 007b941a  57                   push edi
// 007b941b  53                   push ebx
// 007b941c  50                   push eax
// 007b941d  6820f10000           push 0xf120
// 007b9422  8bce                 mov ecx, esi
// 007b9424  e8f7fbffff           call 0x7b9020
// 007b9429  85ed                 test ebp, ebp
// 007b942b  7511                 jne 0x7b943e
// 007b942d  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007b9431  740b                 je 0x7b943e
// 007b9433  396c2418             cmp dword ptr [esp + 0x18], ebp
// 007b9437  7505                 jne 0x7b943e
// 007b9439  8d4501               lea eax, [ebp + 1]
// 007b943c  eb02                 jmp 0x7b9440
// 007b943e  33c0                 xor eax, eax
// 007b9440  57                   push edi
// 007b9441  53                   push ebx
// 007b9442  50                   push eax
// 007b9443  6830f00000           push 0xf030
// 007b9448  8bce                 mov ecx, esi
// 007b944a  e8d1fbffff           call 0x7b9020
// 007b944f  85ed                 test ebp, ebp
// 007b9451  750b                 jne 0x7b945e
// 007b9453  396c2414             cmp dword ptr [esp + 0x14], ebp
// 007b9457  7405                 je 0x7b945e
// 007b9459  8d4501               lea eax, [ebp + 1]
// 007b945c  eb02                 jmp 0x7b9460
// 007b945e  33c0                 xor eax, eax
// 007b9460  8b542428             mov edx, dword ptr [esp + 0x28]
// 007b9464  57                   push edi
// 007b9465  52                   push edx
// 007b9466  50                   push eax
// 007b9467  6820f00000           push 0xf020
// 007b946c  8bce                 mov ecx, esi
// 007b946e  e8adfbffff           call 0x7b9020
// 007b9473  85ed                 test ebp, ebp
// 007b9475  7407                 je 0x7b947e
// 007b9477  8386240200009c       add dword ptr [esi + 0x224], -0x64
// 007b947e  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 007b9484  8b9624020000         mov edx, dword ptr [esi + 0x224]
// 007b948a  8b9e20020000         mov ebx, dword ptr [esi + 0x220]
// 007b9490  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 007b9496  51                   push ecx
// 007b9497  8dae0c020000         lea ebp, [esi + 0x20c]
// 007b949d  52                   push edx
// 007b949e  53                   push ebx
// 007b949f  83c046               add eax, 0x46
// 007b94a2  50                   push eax
// 007b94a3  55                   push ebp
// 007b94a4  ff15a4ed8900         call dword ptr [0x89eda4]
// 007b94aa  56                   push esi
// 007b94ab  8d4c246c             lea ecx, [esp + 0x6c]
// 007b94af  e8ee03f6ff           call 0x7198a2
// 007b94b4  8bce                 mov ecx, esi
// 007b94b6  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 007b94c1  e85ae5ffff           call 0x7b7a20
// 007b94c6  05b4050000           add eax, 0x5b4
// 007b94cb  50                   push eax
// 007b94cc  8d44246c             lea eax, [esp + 0x6c]
// 007b94d0  50                   push eax
// 007b94d1  8d4c2460             lea ecx, [esp + 0x60]
// 007b94d5  e88673fbff           call 0x770860
// 007b94da  8d9e94020000         lea ebx, [esi + 0x294]
// 007b94e0  53                   push ebx
// 007b94e1  8bce                 mov ecx, esi
// 007b94e3  c684248800000001     mov byte ptr [esp + 0x88], 1
// 007b94eb  e8406af7ff           call 0x72ff30
// 007b94f0  8bc8                 mov ecx, eax
// 007b94f2  e829fbf5ff           call 0x719020
// 007b94f7  8d4c2428             lea ecx, [esp + 0x28]
// 007b94fb  51                   push ecx
// 007b94fc  8bcb                 mov ecx, ebx
// 007b94fe  ff1554fb8900         call dword ptr [0x89fb54]
// 007b9504  50                   push eax
// 007b9505  8bcb                 mov ecx, ebx
// 007b9507  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007b950d  8b542478             mov edx, dword ptr [esp + 0x78]
// 007b9511  50                   push eax
// 007b9512  52                   push edx
// 007b9513  ff1550e18900         call dword ptr [0x89e150]
// 007b9519  8b4508               mov eax, dword ptr [ebp + 8]
// 007b951c  8b742428             mov esi, dword ptr [esp + 0x28]
// 007b9520  2b4500               sub eax, dword ptr [ebp]
// 007b9523  83c614               add esi, 0x14
// 007b9526  3bc6                 cmp eax, esi
// 007b9528  7d06                 jge 0x7b9530
// 007b952a  8b7508               mov esi, dword ptr [ebp + 8]
// 007b952d  2b7500               sub esi, dword ptr [ebp]
// 007b9530  8b4d00               mov ecx, dword ptr [ebp]
// 007b9533  8b5504               mov edx, dword ptr [ebp + 4]
// 007b9536  8b4508               mov eax, dword ptr [ebp + 8]
// 007b9539  2bc1                 sub eax, ecx
// 007b953b  8954243c             mov dword ptr [esp + 0x3c], edx
// 007b953f  8b550c               mov edx, dword ptr [ebp + 0xc]
// 007b9542  2bc6                 sub eax, esi
// 007b9544  89542444             mov dword ptr [esp + 0x44], edx
// 007b9548  99                   cdq 
// 007b9549  2bc2                 sub eax, edx
// 007b954b  d1f8                 sar eax, 1
// 007b954d  03c8                 add ecx, eax
// 007b954f  894c2438             mov dword ptr [esp + 0x38], ecx
// 007b9553  03ce                 add ecx, esi
// 007b9555  8d442438             lea eax, [esp + 0x38]
// 007b9559  894c2440             mov dword ptr [esp + 0x40], ecx
// 007b955d  50                   push eax
// 007b955e  8d4c244c             lea ecx, [esp + 0x4c]
// 007b9562  51                   push ecx
// 007b9563  8d542430             lea edx, [esp + 0x30]
// 007b9567  52                   push edx
// 007b9568  ff15f0ee8900         call dword ptr [0x89eef0]
// 007b956e  85c0                 test eax, eax
// 007b9570  7429                 je 0x7b959b
// 007b9572  8b4708               mov eax, dword ptr [edi + 8]
// 007b9575  2b07                 sub eax, dword ptr [edi]
// 007b9577  3bc6                 cmp eax, esi
// 007b9579  7d05                 jge 0x7b9580
// 007b957b  8b7708               mov esi, dword ptr [edi + 8]
// 007b957e  2b37                 sub esi, dword ptr [edi]
// 007b9580  8b4708               mov eax, dword ptr [edi + 8]
// 007b9583  2b07                 sub eax, dword ptr [edi]
// 007b9585  2bc6                 sub eax, esi
// 007b9587  99                   cdq 
// 007b9588  2bc2                 sub eax, edx
// 007b958a  d1f8                 sar eax, 1
// 007b958c  0307                 add eax, dword ptr [edi]
// 007b958e  8d0c30               lea ecx, [eax + esi]
// 007b9591  89442438             mov dword ptr [esp + 0x38], eax
// 007b9595  894c2440             mov dword ptr [esp + 0x40], ecx
// 007b9599  eb04                 jmp 0x7b959f
// 007b959b  8b442438             mov eax, dword ptr [esp + 0x38]
// 007b959f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007b95a3  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007b95a7  894500               mov dword ptr [ebp], eax
// 007b95aa  8b442440             mov eax, dword ptr [esp + 0x40]
// 007b95ae  895504               mov dword ptr [ebp + 4], edx
// 007b95b1  894508               mov dword ptr [ebp + 8], eax
// 007b95b4  894d0c               mov dword ptr [ebp + 0xc], ecx
// 007b95b7  8d4c2458             lea ecx, [esp + 0x58]
// 007b95bb  c684248400000000     mov byte ptr [esp + 0x84], 0
// 007b95c3  e81873fbff           call 0x7708e0
// 007b95c8  8d4c2468             lea ecx, [esp + 0x68]
// 007b95cc  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 007b95d7  e8c002f6ff           call 0x71989c
// 007b95dc  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b95e0  64890d00000000       mov dword ptr fs:[0], ecx
// 007b95e7  59                   pop ecx
// 007b95e8  5f                   pop edi
// 007b95e9  5e                   pop esi
// 007b95ea  5d                   pop ebp
// 007b95eb  5b                   pop ebx
// 007b95ec  83c474               add esp, 0x74
// 007b95ef  c3                   ret 
// copied from an identical function in another client (function ?RepositionCaptionButtons@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp