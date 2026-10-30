// roc 2010-06 0084a5c0  unit: CXTPRibbonBar  size: 992 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0084a5c0
//
// 0084a5c0  6aff                 push -1
// 0084a5c2  6890779b00           push 0x9b7790
// 0084a5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0084a5cd  50                   push eax
// 0084a5ce  83ec68               sub esp, 0x68
// 0084a5d1  53                   push ebx
// 0084a5d2  55                   push ebp
// 0084a5d3  56                   push esi
// 0084a5d4  57                   push edi
// 0084a5d5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0084a5da  33c4                 xor eax, esp
// 0084a5dc  50                   push eax
// 0084a5dd  8d44247c             lea eax, [esp + 0x7c]
// 0084a5e1  64a300000000         mov dword ptr fs:[0], eax
// 0084a5e7  8bf1                 mov esi, ecx
// 0084a5e9  e872e8ffff           call 0x848e60
// 0084a5ee  85c0                 test eax, eax
// 0084a5f0  0f8496030000         je 0x84a98c
// 0084a5f6  83be4802000000       cmp dword ptr [esi + 0x248], 0
// 0084a5fd  8b862c020000         mov eax, dword ptr [esi + 0x22c]
// 0084a603  8b8e30020000         mov ecx, dword ptr [esi + 0x230]
// 0084a609  8b9e34020000         mov ebx, dword ptr [esi + 0x234]
// 0084a60f  8b9638020000         mov edx, dword ptr [esi + 0x238]
// 0084a615  89442448             mov dword ptr [esp + 0x48], eax
// 0084a619  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0084a61d  895c2450             mov dword ptr [esp + 0x50], ebx
// 0084a621  89542454             mov dword ptr [esp + 0x54], edx
// 0084a625  754a                 jne 0x84a671
// 0084a627  83be4c02000000       cmp dword ptr [esi + 0x24c], 0
// 0084a62e  7441                 je 0x84a671
// 0084a630  8b8e6c020000         mov ecx, dword ptr [esi + 0x26c]
// 0084a636  85c9                 test ecx, ecx
// 0084a638  7422                 je 0x84a65c
// 0084a63a  8d442428             lea eax, [esp + 0x28]
// 0084a63e  50                   push eax
// 0084a63f  e8acf6f5ff           call 0x7a9cf0
// 0084a644  8b4808               mov ecx, dword ptr [eax + 8]
// 0084a647  2b08                 sub ecx, dword ptr [eax]
// 0084a649  8dbe1c020000         lea edi, [esi + 0x21c]
// 0084a64f  83c102               add ecx, 2
// 0084a652  03d9                 add ebx, ecx
// 0084a654  895c2450             mov dword ptr [esp + 0x50], ebx
// 0084a658  891f                 mov dword ptr [edi], ebx
// 0084a65a  eb22                 jmp 0x84a67e
// 0084a65c  b90c000000           mov ecx, 0xc
// 0084a661  03d9                 add ebx, ecx
// 0084a663  8dbe1c020000         lea edi, [esi + 0x21c]
// 0084a669  895c2450             mov dword ptr [esp + 0x50], ebx
// 0084a66d  891f                 mov dword ptr [edi], ebx
// 0084a66f  eb0d                 jmp 0x84a67e
// 0084a671  83861c02000046       add dword ptr [esi + 0x21c], 0x46
// 0084a678  8dbe1c020000         lea edi, [esi + 0x21c]
// 0084a67e  8bce                 mov ecx, esi
// 0084a680  e87b0bf7ff           call 0x7bb200
// 0084a685  8bd8                 mov ebx, eax
// 0084a687  8bcb                 mov ecx, ebx
// 0084a689  e850271300           call 0x97cdde
// 0084a68e  8bcb                 mov ecx, ebx
// 0084a690  8be8                 mov ebp, eax
// 0084a692  e84d271300           call 0x97cde4
// 0084a697  8b9680020000         mov edx, dword ptr [esi + 0x280]
// 0084a69d  2480                 and al, 0x80
// 0084a69f  33c9                 xor ecx, ecx
// 0084a6a1  3c80                 cmp al, 0x80
// 0084a6a3  8b4240               mov eax, dword ptr [edx + 0x40]
// 0084a6a6  0f94c1               sete cl
// 0084a6a9  014704               add dword ptr [edi + 4], eax
// 0084a6ac  83470cfd             add dword ptr [edi + 0xc], -3
// 0084a6b0  8b8680020000         mov eax, dword ptr [esi + 0x280]
// 0084a6b6  8b5044               mov edx, dword ptr [eax + 0x44]
// 0084a6b9  89542424             mov dword ptr [esp + 0x24], edx
// 0084a6bd  33d2                 xor edx, edx
// 0084a6bf  8bc5                 mov eax, ebp
// 0084a6c1  2500000001           and eax, 0x1000000
// 0084a6c6  3d00000001           cmp eax, 0x1000000
// 0084a6cb  0f94c2               sete dl
// 0084a6ce  33db                 xor ebx, ebx
// 0084a6d0  8bc5                 mov eax, ebp
// 0084a6d2  2500000800           and eax, 0x80000
// 0084a6d7  c744242001000000     mov dword ptr [esp + 0x20], 1
// 0084a6df  89542418             mov dword ptr [esp + 0x18], edx
// 0084a6e3  8bd5                 mov edx, ebp
// 0084a6e5  81e200000100         and edx, 0x10000
// 0084a6eb  81fa00000100         cmp edx, 0x10000
// 0084a6f1  0f94c3               sete bl
// 0084a6f4  8bd5                 mov edx, ebp
// 0084a6f6  81e200000200         and edx, 0x20000
// 0084a6fc  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0084a700  33db                 xor ebx, ebx
// 0084a702  81fa00000200         cmp edx, 0x20000
// 0084a708  0f94c3               sete bl
// 0084a70b  8bd3                 mov edx, ebx
// 0084a70d  89542428             mov dword ptr [esp + 0x28], edx
// 0084a711  85c9                 test ecx, ecx
// 0084a713  7518                 jne 0x84a72d
// 0084a715  85c0                 test eax, eax
// 0084a717  7414                 je 0x84a72d
// 0084a719  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0084a71d  7504                 jne 0x84a723
// 0084a71f  85d2                 test edx, edx
// 0084a721  740a                 je 0x84a72d
// 0084a723  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0084a72b  eb08                 jmp 0x84a735
// 0084a72d  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0084a735  8bd8                 mov ebx, eax
// 0084a737  85c0                 test eax, eax
// 0084a739  743a                 je 0x84a775
// 0084a73b  85c9                 test ecx, ecx
// 0084a73d  7536                 jne 0x84a775
// 0084a73f  8bce                 mov ecx, esi
// 0084a741  e8ba0af7ff           call 0x7bb200
// 0084a746  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084a749  6a00                 push 0
// 0084a74b  50                   push eax
// 0084a74c  ff1588ba9e00         call dword ptr [0x9eba88]
// 0084a752  50                   push eax
// 0084a753  e8d2d8f5ff           call 0x7a802a
// 0084a758  85c0                 test eax, eax
// 0084a75a  7419                 je 0x84a775
// 0084a75c  8b4804               mov ecx, dword ptr [eax + 4]
// 0084a75f  6a00                 push 0
// 0084a761  6860f00000           push 0xf060
// 0084a766  51                   push ecx
// 0084a767  ff1508bb9e00         call dword ptr [0x9ebb08]
// 0084a76d  a803                 test al, 3
// 0084a76f  7404                 je 0x84a775
// 0084a771  33c9                 xor ecx, ecx
// 0084a773  eb04                 jmp 0x84a779
// 0084a775  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084a779  33c0                 xor eax, eax
// 0084a77b  39442418             cmp dword ptr [esp + 0x18], eax
// 0084a77f  740e                 je 0x84a78f
// 0084a781  f7c500000040         test ebp, 0x40000000
// 0084a787  7406                 je 0x84a78f
// 0084a789  33db                 xor ebx, ebx
// 0084a78b  89442414             mov dword ptr [esp + 0x14], eax
// 0084a78f  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0084a793  3be8                 cmp ebp, eax
// 0084a795  7509                 jne 0x84a7a0
// 0084a797  3bd8                 cmp ebx, eax
// 0084a799  7405                 je 0x84a7a0
// 0084a79b  b801000000           mov eax, 1
// 0084a7a0  57                   push edi
// 0084a7a1  51                   push ecx
// 0084a7a2  50                   push eax
// 0084a7a3  6860f00000           push 0xf060
// 0084a7a8  8bce                 mov ecx, esi
// 0084a7aa  e821fcffff           call 0x84a3d0
// 0084a7af  85ed                 test ebp, ebp
// 0084a7b1  7511                 jne 0x84a7c4
// 0084a7b3  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0084a7b7  740b                 je 0x84a7c4
// 0084a7b9  396c2418             cmp dword ptr [esp + 0x18], ebp
// 0084a7bd  7405                 je 0x84a7c4
// 0084a7bf  8d4501               lea eax, [ebp + 1]
// 0084a7c2  eb02                 jmp 0x84a7c6
// 0084a7c4  33c0                 xor eax, eax
// 0084a7c6  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084a7ca  57                   push edi
// 0084a7cb  53                   push ebx
// 0084a7cc  50                   push eax
// 0084a7cd  6820f10000           push 0xf120
// 0084a7d2  8bce                 mov ecx, esi
// 0084a7d4  e8f7fbffff           call 0x84a3d0
// 0084a7d9  85ed                 test ebp, ebp
// 0084a7db  7511                 jne 0x84a7ee
// 0084a7dd  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0084a7e1  740b                 je 0x84a7ee
// 0084a7e3  396c2418             cmp dword ptr [esp + 0x18], ebp
// 0084a7e7  7505                 jne 0x84a7ee
// 0084a7e9  8d4501               lea eax, [ebp + 1]
// 0084a7ec  eb02                 jmp 0x84a7f0
// 0084a7ee  33c0                 xor eax, eax
// 0084a7f0  57                   push edi
// 0084a7f1  53                   push ebx
// 0084a7f2  50                   push eax
// 0084a7f3  6830f00000           push 0xf030
// 0084a7f8  8bce                 mov ecx, esi
// 0084a7fa  e8d1fbffff           call 0x84a3d0
// 0084a7ff  85ed                 test ebp, ebp
// 0084a801  750b                 jne 0x84a80e
// 0084a803  396c2414             cmp dword ptr [esp + 0x14], ebp
// 0084a807  7405                 je 0x84a80e
// 0084a809  8d4501               lea eax, [ebp + 1]
// 0084a80c  eb02                 jmp 0x84a810
// 0084a80e  33c0                 xor eax, eax
// 0084a810  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084a814  57                   push edi
// 0084a815  52                   push edx
// 0084a816  50                   push eax
// 0084a817  6820f00000           push 0xf020
// 0084a81c  8bce                 mov ecx, esi
// 0084a81e  e8adfbffff           call 0x84a3d0
// 0084a823  85ed                 test ebp, ebp
// 0084a825  7407                 je 0x84a82e
// 0084a827  8386240200009c       add dword ptr [esi + 0x224], -0x64
// 0084a82e  8b8e28020000         mov ecx, dword ptr [esi + 0x228]
// 0084a834  8b9624020000         mov edx, dword ptr [esi + 0x224]
// 0084a83a  8b9e20020000         mov ebx, dword ptr [esi + 0x220]
// 0084a840  8b860c020000         mov eax, dword ptr [esi + 0x20c]
// 0084a846  51                   push ecx
// 0084a847  8dae0c020000         lea ebp, [esi + 0x20c]
// 0084a84d  52                   push edx
// 0084a84e  53                   push ebx
// 0084a84f  83c046               add eax, 0x46
// 0084a852  50                   push eax
// 0084a853  55                   push ebp
// 0084a854  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 0084a85a  56                   push esi
// 0084a85b  8d4c246c             lea ecx, [esp + 0x6c]
// 0084a85f  e8d0dff5ff           call 0x7a8834
// 0084a864  8bce                 mov ecx, esi
// 0084a866  c784248400000000000000 mov dword ptr [esp + 0x84], 0
// 0084a871  e88ae5ffff           call 0x848e00
// 0084a876  05b4050000           add eax, 0x5b4
// 0084a87b  50                   push eax
// 0084a87c  8d44246c             lea eax, [esp + 0x6c]
// 0084a880  50                   push eax
// 0084a881  8d4c2460             lea ecx, [esp + 0x60]
// 0084a885  e8164efbff           call 0x7ff6a0
// 0084a88a  8d9e94020000         lea ebx, [esi + 0x294]
// 0084a890  53                   push ebx
// 0084a891  8bce                 mov ecx, esi
// 0084a893  c684248800000001     mov byte ptr [esp + 0x88], 1
// 0084a89b  e86009f7ff           call 0x7bb200
// 0084a8a0  8bc8                 mov ecx, eax
// 0084a8a2  e8e1d6f5ff           call 0x7a7f88
// 0084a8a7  8d4c2428             lea ecx, [esp + 0x28]
// 0084a8ab  51                   push ecx
// 0084a8ac  8bcb                 mov ecx, ebx
// 0084a8ae  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0084a8b4  50                   push eax
// 0084a8b5  8bcb                 mov ecx, ebx
// 0084a8b7  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0084a8bd  8b542478             mov edx, dword ptr [esp + 0x78]
// 0084a8c1  50                   push eax
// 0084a8c2  52                   push edx
// 0084a8c3  ff1594a19e00         call dword ptr [0x9ea194]
// 0084a8c9  8b4508               mov eax, dword ptr [ebp + 8]
// 0084a8cc  8b742428             mov esi, dword ptr [esp + 0x28]
// 0084a8d0  2b4500               sub eax, dword ptr [ebp]
// 0084a8d3  83c614               add esi, 0x14
// 0084a8d6  3bc6                 cmp eax, esi
// 0084a8d8  7d06                 jge 0x84a8e0
// 0084a8da  8b7508               mov esi, dword ptr [ebp + 8]
// 0084a8dd  2b7500               sub esi, dword ptr [ebp]
// 0084a8e0  8b4d00               mov ecx, dword ptr [ebp]
// 0084a8e3  8b5504               mov edx, dword ptr [ebp + 4]
// 0084a8e6  8b4508               mov eax, dword ptr [ebp + 8]
// 0084a8e9  2bc1                 sub eax, ecx
// 0084a8eb  8954243c             mov dword ptr [esp + 0x3c], edx
// 0084a8ef  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0084a8f2  2bc6                 sub eax, esi
// 0084a8f4  89542444             mov dword ptr [esp + 0x44], edx
// 0084a8f8  99                   cdq 
// 0084a8f9  2bc2                 sub eax, edx
// 0084a8fb  d1f8                 sar eax, 1
// 0084a8fd  03c8                 add ecx, eax
// 0084a8ff  894c2438             mov dword ptr [esp + 0x38], ecx
// 0084a903  03ce                 add ecx, esi
// 0084a905  8d442438             lea eax, [esp + 0x38]
// 0084a909  894c2440             mov dword ptr [esp + 0x40], ecx
// 0084a90d  50                   push eax
// 0084a90e  8d4c244c             lea ecx, [esp + 0x4c]
// 0084a912  51                   push ecx
// 0084a913  8d542430             lea edx, [esp + 0x30]
// 0084a917  52                   push edx
// 0084a918  ff15a4ba9e00         call dword ptr [0x9ebaa4]
// 0084a91e  85c0                 test eax, eax
// 0084a920  7429                 je 0x84a94b
// 0084a922  8b4708               mov eax, dword ptr [edi + 8]
// 0084a925  2b07                 sub eax, dword ptr [edi]
// 0084a927  3bc6                 cmp eax, esi
// 0084a929  7d05                 jge 0x84a930
// 0084a92b  8b7708               mov esi, dword ptr [edi + 8]
// 0084a92e  2b37                 sub esi, dword ptr [edi]
// 0084a930  8b4708               mov eax, dword ptr [edi + 8]
// 0084a933  2b07                 sub eax, dword ptr [edi]
// 0084a935  2bc6                 sub eax, esi
// 0084a937  99                   cdq 
// 0084a938  2bc2                 sub eax, edx
// 0084a93a  d1f8                 sar eax, 1
// 0084a93c  0307                 add eax, dword ptr [edi]
// 0084a93e  8d0c30               lea ecx, [eax + esi]
// 0084a941  89442438             mov dword ptr [esp + 0x38], eax
// 0084a945  894c2440             mov dword ptr [esp + 0x40], ecx
// 0084a949  eb04                 jmp 0x84a94f
// 0084a94b  8b442438             mov eax, dword ptr [esp + 0x38]
// 0084a94f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0084a953  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0084a957  894500               mov dword ptr [ebp], eax
// 0084a95a  8b442440             mov eax, dword ptr [esp + 0x40]
// 0084a95e  895504               mov dword ptr [ebp + 4], edx
// 0084a961  894508               mov dword ptr [ebp + 8], eax
// 0084a964  894d0c               mov dword ptr [ebp + 0xc], ecx
// 0084a967  8d4c2458             lea ecx, [esp + 0x58]
// 0084a96b  c684248400000000     mov byte ptr [esp + 0x84], 0
// 0084a973  e8a84dfbff           call 0x7ff720
// 0084a978  8d4c2468             lea ecx, [esp + 0x68]
// 0084a97c  c7842484000000ffffffff mov dword ptr [esp + 0x84], 0xffffffff
// 0084a987  e8a2def5ff           call 0x7a882e
// 0084a98c  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 0084a990  64890d00000000       mov dword ptr fs:[0], ecx
// 0084a997  59                   pop ecx
// 0084a998  5f                   pop edi
// 0084a999  5e                   pop esi
// 0084a99a  5d                   pop ebp
// 0084a99b  5b                   pop ebx
// 0084a99c  83c474               add esp, 0x74
// 0084a99f  c3                   ret 
// copied from an identical function in another client (function ?RepositionCaptionButtons@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Ribbon\XTPRibbonBar.cpp